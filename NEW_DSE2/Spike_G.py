import matplotlib as mpl
import matplotlib.pyplot as plt
import numpy as np
from brian2 import *

def SpikeGen(input_type,pulse_start,pulse_stop,inp_duration,rate,N,nombre):
  
     # Input Generator
    ##################
    # TODO: 
    # - Play with different input spike patterns by changing input_type (optional).
    #
    # Parameters
    #input_type     # 'regular', 'poisson' or 'cosine' (Default: poisson)
    #pulse_start    # second - Start time of input (Default: 0)
    #pulse_stop     # second - Stop time of input (Default: 5)
    #inp_duration   # second - Simulation duration (Default: 5)
     ###############
    # TOD= int(1000/rate)

    if input_type == 'regular':


        spikes = np.zeros(inp_duration*1000)
        dt=1000/rate    
        times=np.arange(pulse_start*1000,pulse_stop*1000,dt,dtype=np.int64)
        spikes[times]=1

        '''
        spikes = np.zeros(inp_duration*1000)
        dt = int(1000/rate)
        spikes[pulse_start*1000:pulse_stop*1000:dt] = 1.0

        '''
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

    
    spike_timing = np.where(spikes==1)[0] * ms # Timing of spikes
    
    
    
    neuron_indices = np.zeros(len(spike_timing)) # ID of spike sources
    SpikeGenOut=SpikeGeneratorGroup(N, indices=neuron_indices, times=spike_timing, name=nombre)   

    return SpikeGenOut

def test_function():
    print('stuff')
    return

def remove_last_element(arr):
    return arr[np.arange(arr.size - 1)]