import scipy.optimize as spo

import math
import sys 
import pickle
import scipy.optimize as spo


sys.path.append('..')
from Network_sim import *
import pathos as pa
import multiprocessing as mp
from multiprocessing.pool import ThreadPool as Pool 
import pandas as pd
import scipy

import matplotlib as mpl
import matplotlib.pyplot as plt
from matplotlib import gridspec
from pathlib import Path

from brian2 import pF, ms, pA, nA, mV, Hz, ohm
import numpy as np


# Set the dots-per-inch (resolution) of the images
mpl.rcParams['figure.dpi'] = 90

np.set_printoptions(threshold=sys.maxsize)

now = datetime.datetime.now() # current date and time
date_time = now.strftime("%m_%d_%Y_%H_%M_%S")
results = []
df_results = pd.DataFrame()

main_conf={
        'simulation_duration':1,#in seconds
        'input_spike_freq':200,
        'N_neurons':50,
        'spike_inp_start':0,
        'spike_inp_end':.1,
        'irregularity_weight':8,#8
        'irregularity_freq':20,#20
        'irregularity_key':False,
        'detailed_monitors':True
        }

weight_conf={
        'syn_inpPC':10, #5
        'syn_inpPV':10, #5
        'syn_inpSST':0,
        'syn_PC':18,#5
        'syn_PV':5,#5
        'syn_SSTPC':0,
        'syn_PVPC':5,#10
        'syn_PCSST':0,#20
        'syn_PCPV':12,#10
        'syn_PVSST':0,
        'syn_SSTPV':0#
        }

PC_conf =  {
        "Isoma_dpi_tau" :  2.8* pA,
        "Isoma_th"  : 30 * nA,  
        "alpha_soma": 4,

        "Isoma_ahp_tau": 3 * pA,             
        "Isoma_ahp_w" : 70 * pA,
        
        "alpha_ahp"  : 15,  
        "soma_refP": 2  * ms,

        "Isoma_const": 150 *pA
    }

PV_conf = {
    "Isoma_dpi_tau" :  7.5* pA,
    "Isoma_th"  : 10* nA,  
    "alpha_soma": 3,
    
    "Isoma_ahp_tau": 11 * pA,             
    "Isoma_ahp_w" : 0 * pA,
    "alpha_ahp"  : 1,  
    
    "soma_refP": 1 * ms,
    "Isoma_const": 300 *pA

    
    }
    
SST_conf = {
    "Isoma_dpi_tau" :  1* pA,  
    "alpha_soma": 1,
    "Isoma_th"  : 1* nA,  

    "Isoma_ahp_tau": 30 * pA,  
    "Isoma_ahp_w" : 500 * pA,
    
    "soma_refP": 2 * ms,
    "Isoma_const": 150 *pA
        }
        
syn_PV_conf = {
        "Iampa_std_tau": 10 * pA,
        "Va" :150*mV,
        "Vw" :150*mV,
        "tau_pulse" : 3 *ms,
        "Idischarge_w":5*pA,


        "Iampa_w0":20*pA
        } 

syn_PC_conf = {
        "Iampa_tau": 5 * pA,
         "alpha_ampa": 4,
        "Iampa_w0":10*pA
        }

syn_SST_conf = {
        "Iampa_tau": .1 * pA,
        'alpha_ampa': 10,
        "Iampa_w0":0*pA
        }




parameter_list_1=linspace(40,50,1)

parameter_list_2=linspace(1,100,2)

parameter_list_3=linspace(1,100,2)

parameter_list_4=linspace(1,100,2)

parameter_list_5=linspace(1,100,2)

parameter_list_6=linspace(1,100,2)

parameter_list_7=linspace(1,100,2)



param_1_axis=[]
param_2_axis=[]
param_3_axis=[]
param_4_axis=[]
param_5_axis=[]
param_6_axis=[]
param_7_axis=[]

Results_PC=[]
Results_PV=[]
Results_SST=[]

dict={'detailed_monitors':False}
main_conf.update(dict)
for param1 in parameter_list_1:
    for param2 in parameter_list_2:
        for param3 in parameter_list_3:
            for param4 in parameter_list_4:
                for param5 in parameter_list_5:
                    for param6 in parameter_list_6:
                        for param7 in parameter_list_7:
                                dict={'N_neurons':param1}
                                main_conf.update(dict)


                                dict={'syn_PCPV':param2}
                                main_conf.update(dict)

                                dict={'syn_PVPC':param3}
                                weight_conf.update(dict)

                                dict={'syn_PC':param4}
                                weight_conf.update(dict)

                                dict={'syn_PV':param5}
                                weight_conf.update(dict)

                                dict={'syn_inpPC':param6}
                                weight_conf.update(dict)


                                dict={'syn_inpPV':param7}
                                weight_conf.update(dict)

                                [Network_Output,Current_Monitors]=Network_sim(main_conf,PC_conf,PV_conf,SST_conf,syn_PC_conf,syn_PV_conf,syn_SST_conf,weight_conf)  
                                [PC_average,PV_average,SST_average]=cv_squared(Network_Output,main_conf['spike_inp_end'])

                                param_1_axis.append(param1)
                                param_2_axis.append(param2)
                                param_3_axis.append(param3)
                                param_4_axis.append(param4)
                                param_5_axis.append(param5)
                                param_6_axis.append(param6)
                                param_7_axis.append(param7) 
                                Results_PC.append(PC_average)
                                Results_PV.append(PV_average)
                                Results_SST.append(SST_average)

np.save('N_axis.npy',param_1_axis)
np.save('PCPV_axis.npy',param_2_axis)
np.save('PVPC_axis.npy',param_3_axis)
np.save('PC_axis.npy',param_4_axis)
np.save('PV_axis.npy',param_5_axis)
np.save('inPC_axis.npy',param_6_axis)
np.save('inPV_axis.npy',param_7_axis)

np.save('results_PC.npy',Results_PC)
np.save('results_PV.npy',Results_PV)
np.save('results_SST.npy',Results_SST)  