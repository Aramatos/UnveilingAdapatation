from numpy.lib.arraysetops import isin
from winner_take_all import *
import sys,getopt
import numpy as np
import time
import glob
from multiprocessing import Process, Pool
def main(argv):
    # this code will run a combination of following 
    # 
    # stimIntensity -> 200. EE_weights -> [2,3,4,5,6,7] repeat for 5 times
    # stimIntensity -> 300. EE_weights -> [2,3,4,5,6,7] repeat for 5 times
    # stimIntensity -> 400. EE_weights -> [2,3,4,5,6,7] repeat for 5 times
    #
    # IMPORTANT! This code does not suggest how to store data. Suggested way is using DataFrames. 
    # Each run is store with name Run-1, Run-2 and so on
    # Write your simulation script in a seperate function --> setup_network or change this calling LOC
    # Grid search
    grid = dict(
                stimIntensity = np.arange(200.,300.,500.),
                EE_weights = np.around(np.arange(2.,8.,1.),2),# weight_range,
                repeat = np.arange(6)
    )
    configs = pd.DataFrame() 
    runC = 1
    for values in itertools.product(*grid.values()): # 
        t_dict = dict(zip(grid.keys(), values))
               
        config = dict(Run = f'Run-{runC}',
                      stimuliIntensity = t_dict['stimIntensity'],
                      EE_weight = t_dict['EE_weights'])
        print(f'{bcolors.HEADER} {config} {bcolors.ENDC}')
       
        configs.append(config)
        runC +=1
    print(f'{bcolors.HEADER} {len(configs)} {bcolors.ENDC}')
    with Pool(5) as p:
        print(p.map(setup_network, configs)) # calling setup_network function 

if __name__ == '__main__':
    start_time = time.time()
    main(sys.argv[1:])
    print("--- %s seconds ---" % (time.time() - start_time))