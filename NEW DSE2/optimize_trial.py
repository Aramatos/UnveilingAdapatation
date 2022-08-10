import scipy.optimize as spo
from Network_sim import *
import math
import sys 
import pickle
import scipy.optimize as spo


sys.path.append('..')
import pathos as pa
import multiprocessing as mp
from multiprocessing.pool import ThreadPool as Pool 
import pandas as pd
import itertools
import scipy

import matplotlib as mpl
import matplotlib.pyplot as plt
from matplotlib import gridspec
from pathlib import Path

from brian2 import pF, ms, pA, nA, mV, Hz, ohm
import numpy as np

# Display plots inside Jupyter cell
%matplotlib inline
# Set the dots-per-inch (resolution) of the images
mpl.rcParams['figure.dpi'] = 90

np.set_printoptions(threshold=sys.maxsize)


