# Dynap-SE1 Board Simulator

Developed by Yigit Demirag
The Institute of Neuroinformatics, University of Zurich and ETH Zurich

This folder contains tutorial files to get start with the basic implementation of spiking neural networks on DynapSE neuromorphic chip.

Also, this folder contains the main file for the investigation of adaptation to electrical nerve stimualtion. 
The Short-Term Facilitation (STD) equation has been integrated in the DynapSE equations. 

# Installation

- Create a virtual environment from environment.yml file [conda](https://conda.io/docs/user-guide/install/index.html)

```bash
conda env create -f environment.yml
```

- Activate the environment that just installed dependencies

```bash
conda activate dynapse_sim
```
- Start jupyter-lab 

```bash
jupyter lab
```

- From the list on the left, you can select `Part1.ipynb`, `Part2.ipynb` or `Part3.ipynb`.
- you can select `Neural_Mechanisms_behind_Adaptation_to_Neurostimulation.ipynb` The main file for the investigation of adaptation to electrical nerve stimualtion
