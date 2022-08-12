from json.tool import main
import sys 
sys.path.append('..')


from operator import truediv
from brian2 import *
from DynapSE import DynapSE
import numpy as np
import os


from Spike_G import SpikeGen


from equations.dynapse_eq import *
from parameters.dynapse_param import *

# C++ code generation for faster spiking network simulation
# Ignore Brian2 base warnings/dynapse-simulator-New-Parameters/

# The clock of Brian2 simulation for numerically solve ODEs


def Network_sim(main_conf,PC_conf,PV_conf,SST_conf,syn_PC_conf,syn_PV_conf,syn_SST_conf,weight_conf):
    
    now = datetime.datetime.now() # current date and time
    date_time = now.strftime("%m_%d_%Y_%H_%M_%S")

    pid = os.getpid()
    print(f'Process {pid} launched, at ' + date_time)
    
    directory = f"mp_run_{pid}_{date_time}"
         
    set_device('cpp_standalone', directory=directory)
    
    BrianLogger.suppress_name('base')
    defaultclock.dt = 20 * us
    
    irr_freq=main_conf['irregularity_freq']
    duration=main_conf['simulation_duration']
    freq=main_conf['input_spike_freq']
    n=main_conf['N_neurons']
    spike_inp_start=main_conf['spike_inp_start']
    spike_inp_end=main_conf['spike_inp_end']
    irregularity_key=main_conf['irregularity_key']
    irregularity_weight=main_conf['irregularity_weight']
    detailed_monitors=main_conf['detailed_monitors']

    # to start a new build to run multiple full simulations


    print(n)
    # Create a Brian2 network and chip instance using that monitors Dynap-SE1 resources.
    network = Network()
    chip = DynapSE(network)

    # ///////////////////////////// Populations ////////////////////////////////////////////////
    # number neurons
    exc = round(n * 0.8)
    inh = round(n * 0.2)
    n_PC = exc 
    n_SST = round(inh * 0.42)
    n_PV = round(inh * 0.58)
    #print("neurons:"+str(n_PC)+str(n_SST)+str(n_PV))

    # define the populations of neurons
    PC = chip.get_neurons(n_PC, 'Core_1') 
    PV = chip.get_neurons(n_PV, 'Core_2')
    SST = chip.get_neurons(n_SST, 'Core_3')

    

    # ///////////////////////////// Freqiiecy Input to PC ////////////////////////////////////////////////
    spikegen = SpikeGen('regular',spike_inp_start,spike_inp_end,duration,freq,1,'SpikeGenerator')
    # ///////////////////////////// CONNECTIONS ////////////////////////////////////////////////

    # Synapses, Thalamacortical Connections
    syn_inpPC = chip.add_connection(spikegen, PC, synapse_type='AMPA')
    chip.connect(syn_inpPC,True)
    syn_inpPV = chip.add_connection(spikegen, PV, synapse_type='AMPA_STD')
    chip.connect(syn_inpPV,True)
    syn_inpSST = chip.add_connection(spikegen, SST, synapse_type='AMPA')
    chip.connect(syn_inpSST,True)



    # Synapses, Local Connections
    syn_PC = chip.add_connection(PC, PC, synapse_type='AMPA')
    syn_PC.connect(p=0.3)
    
    syn_PV = chip.add_connection(PV, PV, synapse_type='GABA_B')
    syn_PV.connect(p=.6)

    syn_SSTPC = chip.add_connection(SST, PC, synapse_type='GABA_B')
    syn_SSTPC.connect(p=0.8)
    
    syn_PVPC = chip.add_connection(PV, PC, synapse_type='GABA_B')
    syn_PVPC.connect(p=0.6)#changed 


    syn_PCSST = chip.add_connection(PC, SST, synapse_type='AMPA')
    chip.connect(syn_PCSST,p=.8)
    syn_PCPV = chip.add_connection(PC, PV, synapse_type='AMPA_STD')
    syn_PCPV.connect(p=0.6)#changed 

    syn_PVSST = chip.add_connection(PV, SST, synapse_type='GABA_B')
    chip.connect(syn_PVSST,p=.8)
    syn_SSTPV = chip.add_connection(SST, PV, synapse_type='GABA_B')
    syn_SSTPV.connect(p=0.4)

    
    #Synapses, irregularity
    if irregularity_key == True:
        
        irregularity_synapses_PC=[]
        irregularity_synapses_PV=[]
        irregularity_synapses_SST=[]
        irregularity_spikegen_PC=[]
        irregularity_spikegen_PV=[]
        irregularity_spikegen_SST=[]

        for i in range(n_PC):
                irregularity_spikegen_PC.append(SpikeGen('poisson',0,duration,duration,irr_freq,1,'SpikeGenerator_PC'+str(i)))
                irregularity_synapses_PC.append(chip.add_connection(irregularity_spikegen_PC[i],PC[i:i+1],synapse_type='AMPA'))
                irregularity_synapses_PC[i].connect(True)
                irregularity_synapses_PC[i].weight=irregularity_weight
        for i in range(n_PV):
                irregularity_spikegen_PV.append(SpikeGen('poisson',0,duration,duration,irr_freq,1,'SpikeGenerator_PV'+str(i)))
                irregularity_synapses_PV.append(chip.add_connection(irregularity_spikegen_PV[i],PV[i:i+1],synapse_type='AMPA'))
                irregularity_synapses_PV[i].connect(True)
                irregularity_synapses_PV[i].weight=irregularity_weight
        for i in range(n_SST):
                irregularity_spikegen_SST.append(SpikeGen('poisson',0,duration,duration,irr_freq,1,'SpikeGenerator_SST'+str(i)))
                irregularity_synapses_SST.append(chip.add_connection(irregularity_spikegen_SST[i],SST[i:i+1],synapse_type='AMPA'))
                irregularity_synapses_SST[i].connect(True)
                irregularity_synapses_SST[i].weight=irregularity_weight

        network.add([irregularity_synapses_SST,irregularity_synapses_PC,irregularity_synapses_PV,irregularity_spikegen_PC,irregularity_spikegen_SST,irregularity_spikegen_PV])
       

    # set Thalamacortical weights
    syn_inpPC.weight = weight_conf['syn_inpPC']
    syn_inpPV.weight = weight_conf['syn_inpPV']
    syn_inpSST.weight = weight_conf['syn_inpSST']

    # set Local connection weights
    syn_PC.weight = weight_conf['syn_PC']
    syn_PV.weight = weight_conf['syn_PV']
    syn_SSTPC.weight = weight_conf['syn_SSTPC']
    syn_PVPC.weight = weight_conf['syn_PVPC']
    syn_PCSST.weight = weight_conf['syn_PCSST']
    syn_PCPV.weight = weight_conf['syn_PCPV']
    syn_PVSST.weight = weight_conf['syn_PVSST']
    syn_SSTPV.weight = weight_conf['syn_SSTPV']
    

    # NEURON CONDITIONS
    # SYNAPSE CONDITIONS 

    #only PV should have short term depression

    # set the params
    chip.set_bias(PC_conf, 'Core_1')
    chip.set_bias(PV_conf, 'Core_2')
    chip.set_bias(SST_conf, 'Core_3')
    chip.set_bias(syn_PC_conf,'Core_1')
    chip.set_bias(syn_PV_conf,'Core_2')
    chip.set_bias(syn_SST_conf,'Core_3')

    Current_monitors={} 
    if detailed_monitors==True:
        mon_SST_Imem = StateMonitor(SST,'Isoma_mem',record=True)
        mon_PV_Imem=StateMonitor(PV,'Isoma_mem',record=True)
        mon_PC_Imem = StateMonitor(PC,'Isoma_mem',record=True)
        mon_PC_input=StateMonitor(syn_inpPC,'Iampa',record=[0])
        mon_PV_input=StateMonitor(syn_inpPV,'Iampa_std',record=[0])
        mon_SST_input= StateMonitor(syn_inpSST,'Iampa',record=[0])
        mon_PCPC=StateMonitor(syn_PC,'Iampa',record=[0])
        mon_PVPV=StateMonitor(syn_PV,'Igaba_b',record=[0])
        mon_SSTPC=StateMonitor(syn_SSTPC,'Igaba_b',record=[0])
        mon_PVPC=StateMonitor(syn_PVPC,'Igaba_b',record=[0])
        mon_PCSST=StateMonitor(syn_PCSST,'Iampa',record=[0])
        mon_PCPV=StateMonitor(syn_PCPV,'Iampa_std',record=[0])
        mon_PVSST=StateMonitor(syn_PVSST,'Igaba_b',record=[0])
        mon_SSTPV=StateMonitor(syn_SSTPV,'Igaba_b',record=[0])
        
        network.add([mon_PVSST,mon_SSTPV,mon_PC_input,mon_PV_input,mon_PCPC,mon_PVPV,mon_PCPV,mon_PVPC,mon_PCSST,mon_SSTPC,mon_SST_Imem,mon_PC_Imem,mon_SST_input,mon_PV_Imem])
      
         
      
    # Monitors
    mon_neuron_input  = SpikeMonitor(spikegen, name='mon_neuron_input')
    SST_output = SpikeMonitor(SST, name='SST_output')
    PV_output = SpikeMonitor(PV, name='PV_output')
    PC_output = SpikeMonitor(PC, name='PC_output')

    network.add([spikegen,PC,SST,PV,syn_inpPC,syn_inpPV,syn_inpSST,syn_PC,syn_PV,syn_SSTPC,syn_PVPC,syn_PCSST,syn_PCPV,syn_PVSST,syn_SSTPV,SST_output,mon_neuron_input,PV_output,PC_output])
    # Simulation
    network.run(duration *1000* ms)
    
    Network_output={'input':mon_neuron_input.t/ms,
                    'PC_output_t':PC_output.t/ms,
                    'PV_output_t':PV_output.t/ms,
                    'SST_output_t':SST_output.t/ms,
                    'PC_output_i':np.array(PC_output.i),
                    'PV_output_i':np.array(PV_output.i),
                    'SST_output_i':np.array(SST_output.i),
                    'tau_values':[PC[0:1].tau_soma,PV[0:1].tau_soma,SST[0:1].tau_soma]}
     
    if detailed_monitors==True:
         Current_monitors={
                         'time':mon_SST_Imem.t/ms,
                         'mon_SST_Imem':mon_SST_Imem.Isoma_mem/pA,
                         'mon_PC_Imem':mon_PC_Imem.Isoma_mem/pA,
                         'mon_PV_Imem':mon_PV_Imem.Isoma_mem/pA,
                         'mon_SST_input':mon_SST_input.Iampa/pA,
                         'mon_PC_input':mon_PC_input.Iampa/pA,
                         'mon_PV_input':mon_PV_input.Iampa_std/pA,
                         'mon_PCPC':mon_PCPC.Iampa/pA,
                         'mon_PVPV':mon_PVPV.Igaba_b/pA,
                         'mon_SSTPC':mon_SSTPC.Igaba_b/pA,
                         'mon_PVPC':mon_PVPC.Igaba_b/pA,
                         'mon_PCSST':mon_PCSST.Iampa/pA,
                         'mon_PCPV':mon_PCPV.Iampa_std/pA,
                         'mon_PVSST':mon_PVSST.Igaba_b/pA,
                         'mon_SSTPV':mon_SSTPV.Igaba_b/pA
                         }


    device.reinit()


    return Network_output,Current_monitors
    

import numpy as np


def PC_PV_CVerror(Network_Output,main_conf):
    [PC_CV_average,PV_CV_average,SST_CV_average]=cv_squared(Network_Output,main_conf['spike_inp_end'])
    error=((1-PC_CV_average)**2+(1-PV_CV_average)**2)/2
    
    return error





def split_spike_indices_by_window(times, indices, window_size:int, total_duration:int):
	"""
	Split a list of spike indices (with accompanying spike times) into bins 
	based on equal length time windows.
	"""
	return np.split(indices, np.sum(np.atleast_2d(times) < np.atleast_2d(np.arange(window_size,total_duration,window_size)).T, axis=1))


# given a spike train (times and indices of spikes)
# - split the spike train into small time windows
# - for each time window calculate the number of spikes for each neuron
# - for each pair of neurons, calculate the correlation between the time windowed spike counts
# - return the average correlation as a measure of population spiking synchrony
# 
def spike_train_synchrony_correlation(spike_times, spike_indices, total_duration:int):
	"""
	Calculate the average correlation between the windowed spike counts for all pairs
	of neurons in the network.
	Returns NaN if no neurons fired. Returns 0 if only one neuron fired.

	From: 
	Kumar, A., Schrader, S., Aertsen, A., & Rotter, S. (2008). 
	The High-Conductance State of Cortical Networks. Neural Computation, 20(1), 1-43. 
	https://doi.org/10.1162/neco.2008.20.1.1
	"""
	if len(spike_indices) == 0:
		return np.nan
	elif len(spike_indices) == 1:
		return 0
	
	neuron_indices = np.unique(spike_indices)
	num_neurons = len(neuron_indices)
	windowed_spikes = split_spike_indices_by_window(spike_times, spike_indices, 2, total_duration)
	windowed_spike_counts = np.zeros((1+np.max(neuron_indices), len(windowed_spikes)))

	for i, window in enumerate(windowed_spikes):
		spike_indices, spike_counts = np.unique(window, return_counts=True)
		windowed_spike_counts[spike_indices, i] = spike_counts
	
	# only calculate the correlations for spike trains where we have spikes
	spiking_neuron_spike_trains = windowed_spike_counts[neuron_indices,:]
	if spiking_neuron_spike_trains.shape[0] > 1:
		correlation_coefficients = np.tril(np.corrcoef(spiking_neuron_spike_trains), k=-1)
		num_coefficients = num_neurons*(num_neurons-1) / 2
		# on the off chance that a spike train is perfectly regular, correlating with it will
		# result in a NaN value - remove these
		return np.nansum(correlation_coefficients) / (num_coefficients - np.count_nonzero(np.isnan(correlation_coefficients)))
	else:
		# we only have one neuron spike train - no synchronisation
		return 0.0




def Graph_network(Network_Output,duration): 

    input_monitor=Network_Output["input"]
    PC_monitor_t=Network_Output["PC_output_t"]
    PC_monitor_i=Network_Output["PC_output_i"]
    PV_monitor_t=Network_Output["PV_output_t"]
    PV_monitor_i=Network_Output["PV_output_i"]
    SST_monitor_t=Network_Output["SST_output_t"]
    SST_monitor_i=Network_Output["SST_output_i"]

    f, (a0, a1,a2,a3) = plt.subplots(4, 1,sharex=True, gridspec_kw={'height_ratios': [1, 3,1,1]}) 
    spike_placeholder = np.zeros(1000*duration)
    spike_placeholder[np.array(input_monitor, dtype=int)]=1
    a0.plot(spike_placeholder,'k|')
    a0.set_ylim(0.5, 1.5)
    a0.set_title('Simulation Resuts')
    a0.set_ylabel('INPUT')

    a1.plot(PC_monitor_t,PC_monitor_i,'k|')    
    a1.set_ylabel('PC Cells')
    try:
         a1.set_ylim(-2, max(PC_monitor_i+2))
    except ValueError:
         a1.set_ylim(-1, 1)

    a2.plot(PV_monitor_t,PV_monitor_i,'k|')
    try:
         a2.set_ylim(-1, max(PV_monitor_i)+2)
    except ValueError:
         a2.set_ylim(-1, 1)
    a2.set_ylabel('PV Cells')


    a3.plot(SST_monitor_t,SST_monitor_i,'k|')
    try:
         a3.set_ylim(-1, max(SST_monitor_i)+2)
    except ValueError:
         a3.set_ylim(-1, 1)
    a3.set_ylabel('SST Cells')
    f.set_size_inches(18.5, 10)
    f.tight_layout()

    return f


def Network_firing_rates(Network_Output,duration):
    PC_monitor_t=Network_Output["PC_output_t"]
    PC_monitor_i=Network_Output["PC_output_i"]
    PV_monitor_t=Network_Output["PV_output_t"]
    PV_monitor_i=Network_Output["PV_output_i"]
    SST_monitor_t=Network_Output["SST_output_t"]
    SST_monitor_i=Network_Output["SST_output_i"]

    try:
        PC_firing_rates=[len(PC_monitor_t[PC_monitor_i==i])/(duration*1000*ms) for i in range(max(PC_monitor_i))]
        PC_ave_fr=round(average(PC_firing_rates),2)
        PC_max_fr=max(PC_firing_rates)

    except:
        PC_ave_fr=0
        PC_max_fr=0
        print('SST did not fire in the whole simulation')

    try:
        PV_firing_rates=[len(PV_monitor_t[PV_monitor_i==i])/(duration*1000*ms) for i in range(max(PV_monitor_i))]
        PV_ave_fr=round(average(PV_firing_rates),2)
        PV_max_fr=max(PV_firing_rates)

    except:
        PV_ave_fr=0
        PV_max_fr=0
        print('SST did not fire in the whole simulation')
    
    try:
        SST_firing_rates=[len(SST_monitor_t[SST_monitor_i==i])/(duration*1000*ms) for i in range(max(SST_monitor_i))]
        SST_ave_fr=round(average(SST_firing_rates),2)
        SST_max_fr=max(SST_firing_rates)
        
    except ValueError:
        SST_ave_fr=0
        SST_max_fr=0
        print('SST did not fire in the whole simulation')
    
    Max_fr=[PC_max_fr,PV_max_fr,SST_max_fr]
    Ave_fr=[PC_ave_fr,PV_ave_fr,SST_ave_fr]
    
    return Max_fr,Ave_fr


def Graph_currents(Current_Monitors):
     nrows= len(Current_Monitors['mon_PC_Imem'])+len(Current_Monitors['mon_PV_Imem'])+len(Current_Monitors['mon_SST_Imem'])
     fig = plt.figure(figsize=(18, nrows),constrained_layout=True)
     gs0 = fig.add_gridspec(1, 2)



     print(nrows)

     n_synapsemonitors =11

     gs00 = gs0[0].subgridspec(n_synapsemonitors , 1)
     gs01 = gs0[1].subgridspec(nrows, 1)

     synapse_input_array=['mon_PC_input','mon_PV_input','mon_SST_input','mon_PCPC','mon_PVPV','mon_SSTPC','mon_PVPC','mon_PCSST','mon_PCPV','mon_PVSST','mon_SSTPV']
     for a in range(n_synapsemonitors):
             ax = fig.add_subplot(gs00[a])
             ax.plot(Current_Monitors['time'],Current_Monitors[synapse_input_array[a]][0], linewidth=1.5)
             ax.set_title(synapse_input_array[a])

        
     for a in range(nrows):
         ax = fig.add_subplot(gs01[a])
         if a < len(Current_Monitors['mon_PC_Imem']):
             ax.plot(Current_Monitors['time'],Current_Monitors['mon_PC_Imem'][a], linewidth=1.5)
         if len(Current_Monitors['mon_PC_Imem'])+len(Current_Monitors['mon_PV_Imem'])>a> len(Current_Monitors['mon_PC_Imem'])-1:
             ax.plot(Current_Monitors['time'],Current_Monitors['mon_PV_Imem'][a-len(Current_Monitors['mon_PC_Imem'])], linewidth=1.5,color='red')
         if len(Current_Monitors['mon_PC_Imem'])+len(Current_Monitors['mon_PV_Imem'])+len(Current_Monitors['mon_SST_Imem'])>a> len(Current_Monitors['mon_PC_Imem'])+len(Current_Monitors['mon_PV_Imem'])-1:
             ax.plot(Current_Monitors['time'],Current_Monitors['mon_SST_Imem'][a-len(Current_Monitors['mon_PV_Imem'])-len(Current_Monitors['mon_PC_Imem'])], linewidth=1.5,color='orange')
     
     fig.suptitle('Detailed Current view\n All time in ms and all currents in pA')

     return fig



def network_synchrony(main_conf,Network_Output):
    stop_time=main_conf['spike_inp_end']*1000
    duration=main_conf['simulation_duration']*1000
    analysis_time=duration-stop_time


    PC_monitor_i=Network_Output["PC_output_i"][Network_Output["PC_output_t"]>stop_time]
    PC_monitor_t=Network_Output["PC_output_t"][Network_Output["PC_output_t"]>stop_time]

    PV_monitor_i=Network_Output["PV_output_i"][Network_Output["PV_output_t"]>stop_time]
    PV_monitor_t=Network_Output["PV_output_t"][Network_Output["PV_output_t"]>stop_time]
        
    SST_monitor_i=Network_Output["SST_output_i"][Network_Output["SST_output_t"]>stop_time]
    SST_monitor_t=Network_Output["SST_output_t"][Network_Output["SST_output_t"]>stop_time]


    PC_synchrony = spike_train_synchrony_correlation(PC_monitor_t,PC_monitor_i,analysis_time)
    PV_synchrony = spike_train_synchrony_correlation(PV_monitor_t,PV_monitor_i,analysis_time)
    SST_synchrony = spike_train_synchrony_correlation(SST_monitor_t,SST_monitor_i,analysis_time)

    return [PC_synchrony,PV_synchrony,SST_synchrony]

def cv_squared(Network_Output,stop):
     PC_monitor_i=Network_Output["PC_output_i"][Network_Output["PC_output_t"]>stop*1000]
     PC_monitor_t=Network_Output["PC_output_t"][Network_Output["PC_output_t"]>stop*1000]

     PV_monitor_i=Network_Output["PV_output_i"][Network_Output["PV_output_t"]>stop*1000]
     PV_monitor_t=Network_Output["PV_output_t"][Network_Output["PV_output_t"]>stop*1000]
     
     SST_monitor_i=Network_Output["SST_output_i"][Network_Output["SST_output_t"]>stop*1000]
     SST_monitor_t=Network_Output["SST_output_t"][Network_Output["SST_output_t"]>stop*1000]
     


     cv_list=[]
     try:
          for i in range(max(PC_monitor_i)+1):   
               isi=np.diff(PC_monitor_t[PC_monitor_i==i])
               cv=np.var(isi)/(np.average(isi)**2)
               cv_list.append(cv)  

          cv_list=np.asanyarray(cv_list)
          cv_list = cv_list[~numpy.isnan(cv_list)]
          PC_average=mean(cv_list)
     except ValueError:
          print('PC has no spikes')
          PC_average=100

     cv_list=[]
     try:
          for i in range(max(PV_monitor_i)+1):   
               isi=np.diff(PV_monitor_t[PV_monitor_i==i])
               cv=np.var(isi)/(np.average(isi)**2)
               cv_list.append(cv)
          cv_list=np.asanyarray(cv_list)
          cv_list = cv_list[~numpy.isnan(cv_list)]
          PV_average=mean(cv_list)

     except ValueError:
          print('PV has no spikes')
          PV_average=100

     
     try:
          cv_list=[]
          for i in range(max(SST_monitor_i)+1):   
               isi=np.diff(SST_monitor_t[SST_monitor_i==i])
               cv=np.var(isi)/(np.average(isi)**2)
               cv_list.append(cv)  
          cv_list=np.asanyarray(cv_list)
          cv_list = cv_list[~numpy.isnan(cv_list)]
          SST_average=mean(cv_list)
     
     except ValueError:
          print('SST has no spikes')
          SST_average=100

     cv_averages= [PC_average,PV_average,SST_average]

     return cv_averages

