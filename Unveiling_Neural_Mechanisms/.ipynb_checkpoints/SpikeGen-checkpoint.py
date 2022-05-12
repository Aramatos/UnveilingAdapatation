
import numpy as np
from brian2 import *
def SpikeGen(in_type,start,stop,duration,rate,N):
  
     # Input Generator
    ##################
    # TODO: 
    # - Play with different input spike patterns by changing input_type (optional).
    #
    # Parameters
    input_type   = in_type # 'regular', 'poisson' or 'cosine' (Default: poisson)
    pulse_start  = start   # second - Start time of input (Default: 0)
    pulse_stop   = stop     # second - Stop time of input (Default: 5)
    inp_duration = duration         # second - Simulation duration (Default: 5)
    rate         = rate      # Hz or rad/sec - Spiking rate (Default: 80 Hz for regular, 100 Hz for poission, 2 rad/sec for cosine) 
    ##################
    if input_type == 'regular':

        spikes = np.zeros(inp_duration*1000)
        dt = int(1000/rate)
        spikes[pulse_start*1000:pulse_stop*1000:dt] = 1.0

    if input_type == 'poisson':

        prob = rate * 1e-3
        mask = np.random.rand(inp_duration*1000)
        spikes = np.zeros(inp_duration*1000)
        spikes[mask < prob] = 1.0
        spikes[:pulse_start*1000]=0
        spikes[pulse_stop*1000:]=0

    if input_type == 'cosine':

        spikes = np.zeros(inp_duration*1000)
        time = np.linspace(0, inp_duration, inp_duration*1000)
        co = np.cos(2 * np.pi * rate * time)
        mask = 20 * np.random.rand(inp_duration*1000)
        spikes[mask < co] = 1.0
        spikes[:pulse_start*1000]=0
        spikes[pulse_stop*1000:]=0
    if input_type == 'chirp':

        spikes = np.zeros(inp_duration*1000)
        time = np.linspace(0, inp_duration, inp_duration*1000)
        co = np.cos(2 * np.pi * rate * time)
        mask = 20 * np.random.rand(inp_duration*1000)
        spikes[mask < co] = 1.0
        spikes[:pulse_start*1000]=0
        spikes[pulse_stop*1000:]=0

    plt.plot(spikes,'k|')
    plt.xlabel("Time (ms)")
    plt.ylabel("Neuron ID")
    plt.ylim(0.5, 1.5)
    plt.show()
    
    spike_timing = np.where(spikes==1)[0] * ms # Timing of spikes
    neuron_indices = np.zeros(len(spike_timing)) # ID of spike sources
    
    SpikeGenOut=SpikeGeneratorGroup(N, indices=neuron_indices, times=spike_timing, name='InpSpikeGenerator')   
    return SpikeGenOut

def visualise_connectivity(S):
    Ns = len(S.source)
    Nt = len(S.target)
    figure(figsize=(10, 4))
    subplot(121)
    plot(zeros(Ns), arange(Ns), 'ok', ms=10)
    plot(ones(Nt), arange(Nt), 'ok', ms=10)
    for i, j in zip(S.i, S.j):
        plot([0, 1], [i, j], '-k')
    xticks([0, 1], ['Source', 'Target'])
    ylabel('Neuron index')
    xlim(-0.1, 1.1)
    ylim(-1, max(Ns, Nt))
    subplot(122)
    plot(S.i, S.j, 'ok')
    xlim(-1, Ns)
    ylim(-1, Nt)
    xlabel('Source neuron index')
    ylabel('Target neuron index')



#def reg_spiketrain(freq):