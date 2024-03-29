# -*- coding: utf-8 -*-
# Modified from https://code.ini.uzh.ch/ncs/teili

"""
This dictionary contains the default parameters for the
Differential Pair Integrator (DPI) neuron including synapses as implemented on
the DYNAP-SE chip, developed at the Institute of Neuroinformatics.
Circuit and equations were published in Chicca et al. 2014
These values were estimated empirically based on the example in the tutorial.
These parameters may serve you as a starting point for a given experiment.

Variable Naming Convention: Physical-quantity-type_block-it-belongs-to_role-in-the-block
"""

from brian2 import pF, ms, pA, nA, mV, Hz, ohm
from parameters import constants


dynapse_param = {
   
    #  SUBSTRATE  #########################################################################################
    "kn": constants.kappa_n,                # Subthreshold slope factor, do not change
    "kp": constants.kappa_p,                # Subthreshold slope factor, do not change
    "Ut": constants.Ut,                     # Thermal voltage, do not change
    "I0": constants.I0,                     # Dark current, can be from 2x to 10x default Io if necessary
    ##################

    #  SCALING FACTORS  #########################################################################################
    "alpha_soma": 4,                        # Scaling factor equal to Ig/Itau
    "alpha_ahp": 4,                         # Scaling factor equal to Ig/Itau
    "alpha_nmda": 4,                        # Scaling factor equal to Ig/Itau
    "alpha_ampa": 4,                        # Scaling factor equal to Ig/Itau
    "alpha_ampa_std": 4,
    "alpha_gaba_a": 4,                      # Scaling factor equal to Ig/Itau
    "alpha_gaba_b": 4,                      # Scaling factor equal to Ig/Itau
    ##################

    #  Neuron parameters  ###############
    #  SOMA  ##############################################################################################
    "Csoma_mem": 2 * pF,                    # Membrane capacitance, fixed at layout time (see chip for details)
    "Isoma_mem": 1.1 * constants.I0,        # Initial value for Isoma_mem, set to prevent Imem from going below I0
    "Isoma_dpi_tau": 5 * constants.I0,      # Membrane time constant current, the time constant is inversely proportional to Itau
    "Isoma_th": 2000 * constants.I0,        # Spiking threshold current, depends on layout (see chip for details)
    "Isoma_reset": 1.2 * constants.I0,      # Reset current after spike generation
    "Isoma_const": constants.I0,            # Initialize constant current injection to I0
    "soma_refP": 5. * ms,                   # Refractory period: 5*ms limits maximum firing rate at 200Hz

    #  ADAPTATION  ########################################################################################
    "Csoma_ahp": 4 * pF,                    # Spike-frequency adaptation capacitance
    "Isoma_ahp_tau": 2 * constants.I0,      # Spike-frequency adaptation time constant current
    "Isoma_ahp_w": 1 * constants.I0,        # Spike-frequency adaptation weight current

    #  POSITIVE FEEDBACK ##################################################################################
    "Isoma_pfb_gain": 100 * constants.I0,   # Feedback gain current, fitting parameter
    "Isoma_pfb_th": 1000 * constants.I0,    # Feedback threshold current, typically a fraction of Isoma_th
    "Isoma_pfb_norm": 20 * constants.I0,    # Feedback normalization current, fitting parameter
    ##################

    # Synapse parameters ################
    # SLOW_EXC, NMDA ########################################################################################
    'Cnmda': 2 * pF,                        # Synaptic capacitance, fixed at layout time (see chip for details)
    'Inmda_tau': 2 * constants.I0,          # Synaptic time constant current, the time constant is inversely proportional to I_tau
    'Inmda_w0': 100 * constants.I0,         # Base synaptic weight current which can be scaled by the .weight parameter
    'Inmda': constants.I0,                  # Output current initial value
    'Inmda_thr': constants.I0,              # NMDA "voltage" gating threshold expressed as a fraction of the neuron spiking threshold

    #FAST_EXC, AMPA ########################################################################################
    'Campa': 2 * pF,                        # Synaptic capacitance, fixed at layout time (see chip for details)
    'Iampa_tau': 20 * constants.I0,         # Synaptic time constant current, the time constant is inversely proportional to I_tau
    'Iampa_w0': 100 * constants.I0,         # Base synaptic weight current which can be scaled by the .weight parameter
    'Iampa': constants.I0,                  # Output current initial value

     #  DEPRESSION  ######################
    'std_pulse':1,
    'tau_pulse': 5*ms, 
    'Idischarge_w' : 0* pA, 
    'Va' : 15 * mV,                         # Depression diode connected transistor bulk source voltage Va
    'Vw' : 15 * mV,                         # Depression diode connected transistor bulk source voltage Va        
    'Campa_std'  : 2* pF,                   # Synaptic Capacitance 
    'Iampa_std_tau': 20 * constants.I0,     # Synaptic time constant current, the time constant is inversely proportional to I_tau
    'Iampa_std': constants.I0,              # Output current initial value

    #INH, SLOW_INH, GABA_B, subtractive ##################################################################
    'Cgaba_b': 2 * pF,                      # Synaptic capacitance, fixed at layout time (see chip for details)
    'Igaba_b_tau': 5 * constants.I0,        # Synaptic time constant current, the time constant is inversely proportional to I_tau
    'Igaba_b_w0': 100 * constants.I0,       # Base synaptic weight current which can be scaled by the .weight parameter
    'Igaba_b': constants.I0,                # Output current initial value

    #FAST_INH, GABA_A, shunting, a mixture of subtractive and divisive ############################################
    'Cgaba_a': 2 * pF,                      # Synaptic capacitance, fixed at layout time (see chip for details)
    'Igaba_a_tau': 5 * constants.I0,        # Synaptic time constant current, the time constant is inversely proportional to I_tau
    'Igaba_a_w0': 100 * constants.I0,       # Base synaptic weight current which can be scaled by the .weight parameter
    'Igaba_a': constants.I0                 # Output current initial value
    ##################
}
