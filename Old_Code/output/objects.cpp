
#include "objects.h"
#include "synapses_classes.h"
#include "brianlib/clocks.h"
#include "brianlib/dynamic_array.h"
#include "brianlib/stdint_compat.h"
#include "network.h"
#include "randomkit.h"
#include<vector>
#include<iostream>
#include<fstream>

namespace brian {

std::vector< rk_state* > _mersenne_twister_states;

//////////////// networks /////////////////
Network network_1;

//////////////// arrays ///////////////////
int32_t * _array_AMPA0_N;
const int _num__array_AMPA0_N = 1;
int32_t * _array_Core_0__spikespace;
const int _num__array_Core_0__spikespace = 257;
double * _array_Core_0_ahp;
const int _num__array_Core_0_ahp = 1;
double * _array_Core_0_C_syn_ampa;
const int _num__array_Core_0_C_syn_ampa = 256;
double * _array_Core_0_C_syn_gaba_a;
const int _num__array_Core_0_C_syn_gaba_a = 256;
double * _array_Core_0_C_syn_gaba_b;
const int _num__array_Core_0_C_syn_gaba_b = 256;
double * _array_Core_0_C_syn_nmda;
const int _num__array_Core_0_C_syn_nmda = 256;
double * _array_Core_0_Cahp;
const int _num__array_Core_0_Cahp = 1;
double * _array_Core_0_Cmem;
const int _num__array_Core_0_Cmem = 1;
double * _array_Core_0_D;
const int _num__array_Core_0_D = 256;
int32_t * _array_Core_0_i;
const int _num__array_Core_0_i = 256;
double * _array_Core_0_I_g_syn_ampa;
const int _num__array_Core_0_I_g_syn_ampa = 256;
double * _array_Core_0_I_g_syn_gaba_a;
const int _num__array_Core_0_I_g_syn_gaba_a = 256;
double * _array_Core_0_I_g_syn_gaba_b;
const int _num__array_Core_0_I_g_syn_gaba_b = 256;
double * _array_Core_0_I_g_syn_nmda;
const int _num__array_Core_0_I_g_syn_nmda = 256;
double * _array_Core_0_I_syn_ampa;
const int _num__array_Core_0_I_syn_ampa = 256;
double * _array_Core_0_I_syn_gaba_a;
const int _num__array_Core_0_I_syn_gaba_a = 256;
double * _array_Core_0_I_syn_gaba_b;
const int _num__array_Core_0_I_syn_gaba_b = 256;
double * _array_Core_0_I_syn_nmda;
const int _num__array_Core_0_I_syn_nmda = 256;
double * _array_Core_0_I_tau_syn_ampa;
const int _num__array_Core_0_I_tau_syn_ampa = 256;
double * _array_Core_0_I_tau_syn_gaba_a;
const int _num__array_Core_0_I_tau_syn_gaba_a = 256;
double * _array_Core_0_I_tau_syn_gaba_b;
const int _num__array_Core_0_I_tau_syn_gaba_b = 256;
double * _array_Core_0_I_tau_syn_nmda;
const int _num__array_Core_0_I_tau_syn_nmda = 256;
double * _array_Core_0_I_wo_syn_ampa;
const int _num__array_Core_0_I_wo_syn_ampa = 256;
double * _array_Core_0_I_wo_syn_gaba_a;
const int _num__array_Core_0_I_wo_syn_gaba_a = 256;
double * _array_Core_0_I_wo_syn_gaba_b;
const int _num__array_Core_0_I_wo_syn_gaba_b = 256;
double * _array_Core_0_I_wo_syn_nmda;
const int _num__array_Core_0_I_wo_syn_nmda = 256;
double * _array_Core_0_Iagain;
const int _num__array_Core_0_Iagain = 1;
double * _array_Core_0_Iahp;
const int _num__array_Core_0_Iahp = 256;
double * _array_Core_0_Ianorm;
const int _num__array_Core_0_Ianorm = 1;
double * _array_Core_0_Iath;
const int _num__array_Core_0_Iath = 1;
double * _array_Core_0_Ica;
const int _num__array_Core_0_Ica = 256;
double * _array_Core_0_Iconst;
const int _num__array_Core_0_Iconst = 256;
double * _array_Core_0_Imem;
const int _num__array_Core_0_Imem = 256;
double * _array_Core_0_Io;
const int _num__array_Core_0_Io = 1;
double * _array_Core_0_Ireset;
const int _num__array_Core_0_Ireset = 1;
double * _array_Core_0_Ishunt;
const int _num__array_Core_0_Ishunt = 256;
double * _array_Core_0_Ispkthr;
const int _num__array_Core_0_Ispkthr = 1;
double * _array_Core_0_Itau;
const int _num__array_Core_0_Itau = 1;
double * _array_Core_0_Itauahp;
const int _num__array_Core_0_Itauahp = 1;
double * _array_Core_0_Ith;
const int _num__array_Core_0_Ith = 1;
double * _array_Core_0_Ithahp;
const int _num__array_Core_0_Ithahp = 1;
double * _array_Core_0_kn;
const int _num__array_Core_0_kn = 1;
double * _array_Core_0_kp;
const int _num__array_Core_0_kp = 1;
double * _array_Core_0_lastspike;
const int _num__array_Core_0_lastspike = 256;
double * _array_Core_0_M;
const int _num__array_Core_0_M = 1;
char * _array_Core_0_not_refractory;
const int _num__array_Core_0_not_refractory = 256;
double * _array_Core_0_refP;
const int _num__array_Core_0_refP = 1;
double * _array_Core_0_tauca;
const int _num__array_Core_0_tauca = 1;
double * _array_Core_0_taud;
const int _num__array_Core_0_taud = 1;
double * _array_Core_0_Ut;
const int _num__array_Core_0_Ut = 1;
int32_t * _array_Core_1__spikespace;
const int _num__array_Core_1__spikespace = 257;
double * _array_Core_1_ahp;
const int _num__array_Core_1_ahp = 1;
double * _array_Core_1_C_syn_ampa;
const int _num__array_Core_1_C_syn_ampa = 256;
double * _array_Core_1_C_syn_gaba_a;
const int _num__array_Core_1_C_syn_gaba_a = 256;
double * _array_Core_1_C_syn_gaba_b;
const int _num__array_Core_1_C_syn_gaba_b = 256;
double * _array_Core_1_C_syn_nmda;
const int _num__array_Core_1_C_syn_nmda = 256;
double * _array_Core_1_Cahp;
const int _num__array_Core_1_Cahp = 1;
double * _array_Core_1_Cmem;
const int _num__array_Core_1_Cmem = 1;
double * _array_Core_1_D;
const int _num__array_Core_1_D = 256;
int32_t * _array_Core_1_i;
const int _num__array_Core_1_i = 256;
double * _array_Core_1_I_g_syn_ampa;
const int _num__array_Core_1_I_g_syn_ampa = 256;
double * _array_Core_1_I_g_syn_gaba_a;
const int _num__array_Core_1_I_g_syn_gaba_a = 256;
double * _array_Core_1_I_g_syn_gaba_b;
const int _num__array_Core_1_I_g_syn_gaba_b = 256;
double * _array_Core_1_I_g_syn_nmda;
const int _num__array_Core_1_I_g_syn_nmda = 256;
double * _array_Core_1_I_syn_ampa;
const int _num__array_Core_1_I_syn_ampa = 256;
double * _array_Core_1_I_syn_gaba_a;
const int _num__array_Core_1_I_syn_gaba_a = 256;
double * _array_Core_1_I_syn_gaba_b;
const int _num__array_Core_1_I_syn_gaba_b = 256;
double * _array_Core_1_I_syn_nmda;
const int _num__array_Core_1_I_syn_nmda = 256;
double * _array_Core_1_I_tau_syn_ampa;
const int _num__array_Core_1_I_tau_syn_ampa = 256;
double * _array_Core_1_I_tau_syn_gaba_a;
const int _num__array_Core_1_I_tau_syn_gaba_a = 256;
double * _array_Core_1_I_tau_syn_gaba_b;
const int _num__array_Core_1_I_tau_syn_gaba_b = 256;
double * _array_Core_1_I_tau_syn_nmda;
const int _num__array_Core_1_I_tau_syn_nmda = 256;
double * _array_Core_1_I_wo_syn_ampa;
const int _num__array_Core_1_I_wo_syn_ampa = 256;
double * _array_Core_1_I_wo_syn_gaba_a;
const int _num__array_Core_1_I_wo_syn_gaba_a = 256;
double * _array_Core_1_I_wo_syn_gaba_b;
const int _num__array_Core_1_I_wo_syn_gaba_b = 256;
double * _array_Core_1_I_wo_syn_nmda;
const int _num__array_Core_1_I_wo_syn_nmda = 256;
double * _array_Core_1_Iagain;
const int _num__array_Core_1_Iagain = 1;
double * _array_Core_1_Iahp;
const int _num__array_Core_1_Iahp = 256;
double * _array_Core_1_Ianorm;
const int _num__array_Core_1_Ianorm = 1;
double * _array_Core_1_Iath;
const int _num__array_Core_1_Iath = 1;
double * _array_Core_1_Ica;
const int _num__array_Core_1_Ica = 256;
double * _array_Core_1_Iconst;
const int _num__array_Core_1_Iconst = 256;
double * _array_Core_1_Imem;
const int _num__array_Core_1_Imem = 256;
double * _array_Core_1_Io;
const int _num__array_Core_1_Io = 1;
double * _array_Core_1_Ireset;
const int _num__array_Core_1_Ireset = 1;
double * _array_Core_1_Ishunt;
const int _num__array_Core_1_Ishunt = 256;
double * _array_Core_1_Ispkthr;
const int _num__array_Core_1_Ispkthr = 1;
double * _array_Core_1_Itau;
const int _num__array_Core_1_Itau = 1;
double * _array_Core_1_Itauahp;
const int _num__array_Core_1_Itauahp = 1;
double * _array_Core_1_Ith;
const int _num__array_Core_1_Ith = 1;
double * _array_Core_1_Ithahp;
const int _num__array_Core_1_Ithahp = 1;
double * _array_Core_1_kn;
const int _num__array_Core_1_kn = 1;
double * _array_Core_1_kp;
const int _num__array_Core_1_kp = 1;
double * _array_Core_1_lastspike;
const int _num__array_Core_1_lastspike = 256;
double * _array_Core_1_M;
const int _num__array_Core_1_M = 1;
char * _array_Core_1_not_refractory;
const int _num__array_Core_1_not_refractory = 256;
double * _array_Core_1_refP;
const int _num__array_Core_1_refP = 1;
int32_t * _array_Core_1_subgroup__sub_idx;
const int _num__array_Core_1_subgroup__sub_idx = 1;
double * _array_Core_1_tauca;
const int _num__array_Core_1_tauca = 1;
double * _array_Core_1_taud;
const int _num__array_Core_1_taud = 1;
double * _array_Core_1_Ut;
const int _num__array_Core_1_Ut = 1;
int32_t * _array_Core_2__spikespace;
const int _num__array_Core_2__spikespace = 257;
double * _array_Core_2_ahp;
const int _num__array_Core_2_ahp = 1;
double * _array_Core_2_C_syn_ampa;
const int _num__array_Core_2_C_syn_ampa = 256;
double * _array_Core_2_C_syn_gaba_a;
const int _num__array_Core_2_C_syn_gaba_a = 256;
double * _array_Core_2_C_syn_gaba_b;
const int _num__array_Core_2_C_syn_gaba_b = 256;
double * _array_Core_2_C_syn_nmda;
const int _num__array_Core_2_C_syn_nmda = 256;
double * _array_Core_2_Cahp;
const int _num__array_Core_2_Cahp = 1;
double * _array_Core_2_Cmem;
const int _num__array_Core_2_Cmem = 1;
double * _array_Core_2_D;
const int _num__array_Core_2_D = 256;
int32_t * _array_Core_2_i;
const int _num__array_Core_2_i = 256;
double * _array_Core_2_I_g_syn_ampa;
const int _num__array_Core_2_I_g_syn_ampa = 256;
double * _array_Core_2_I_g_syn_gaba_a;
const int _num__array_Core_2_I_g_syn_gaba_a = 256;
double * _array_Core_2_I_g_syn_gaba_b;
const int _num__array_Core_2_I_g_syn_gaba_b = 256;
double * _array_Core_2_I_g_syn_nmda;
const int _num__array_Core_2_I_g_syn_nmda = 256;
double * _array_Core_2_I_syn_ampa;
const int _num__array_Core_2_I_syn_ampa = 256;
double * _array_Core_2_I_syn_gaba_a;
const int _num__array_Core_2_I_syn_gaba_a = 256;
double * _array_Core_2_I_syn_gaba_b;
const int _num__array_Core_2_I_syn_gaba_b = 256;
double * _array_Core_2_I_syn_nmda;
const int _num__array_Core_2_I_syn_nmda = 256;
double * _array_Core_2_I_tau_syn_ampa;
const int _num__array_Core_2_I_tau_syn_ampa = 256;
double * _array_Core_2_I_tau_syn_gaba_a;
const int _num__array_Core_2_I_tau_syn_gaba_a = 256;
double * _array_Core_2_I_tau_syn_gaba_b;
const int _num__array_Core_2_I_tau_syn_gaba_b = 256;
double * _array_Core_2_I_tau_syn_nmda;
const int _num__array_Core_2_I_tau_syn_nmda = 256;
double * _array_Core_2_I_wo_syn_ampa;
const int _num__array_Core_2_I_wo_syn_ampa = 256;
double * _array_Core_2_I_wo_syn_gaba_a;
const int _num__array_Core_2_I_wo_syn_gaba_a = 256;
double * _array_Core_2_I_wo_syn_gaba_b;
const int _num__array_Core_2_I_wo_syn_gaba_b = 256;
double * _array_Core_2_I_wo_syn_nmda;
const int _num__array_Core_2_I_wo_syn_nmda = 256;
double * _array_Core_2_Iagain;
const int _num__array_Core_2_Iagain = 1;
double * _array_Core_2_Iahp;
const int _num__array_Core_2_Iahp = 256;
double * _array_Core_2_Ianorm;
const int _num__array_Core_2_Ianorm = 1;
double * _array_Core_2_Iath;
const int _num__array_Core_2_Iath = 1;
double * _array_Core_2_Ica;
const int _num__array_Core_2_Ica = 256;
double * _array_Core_2_Iconst;
const int _num__array_Core_2_Iconst = 256;
double * _array_Core_2_Imem;
const int _num__array_Core_2_Imem = 256;
double * _array_Core_2_Io;
const int _num__array_Core_2_Io = 1;
double * _array_Core_2_Ireset;
const int _num__array_Core_2_Ireset = 1;
double * _array_Core_2_Ishunt;
const int _num__array_Core_2_Ishunt = 256;
double * _array_Core_2_Ispkthr;
const int _num__array_Core_2_Ispkthr = 1;
double * _array_Core_2_Itau;
const int _num__array_Core_2_Itau = 1;
double * _array_Core_2_Itauahp;
const int _num__array_Core_2_Itauahp = 1;
double * _array_Core_2_Ith;
const int _num__array_Core_2_Ith = 1;
double * _array_Core_2_Ithahp;
const int _num__array_Core_2_Ithahp = 1;
double * _array_Core_2_kn;
const int _num__array_Core_2_kn = 1;
double * _array_Core_2_kp;
const int _num__array_Core_2_kp = 1;
double * _array_Core_2_lastspike;
const int _num__array_Core_2_lastspike = 256;
double * _array_Core_2_M;
const int _num__array_Core_2_M = 1;
char * _array_Core_2_not_refractory;
const int _num__array_Core_2_not_refractory = 256;
double * _array_Core_2_refP;
const int _num__array_Core_2_refP = 1;
double * _array_Core_2_tauca;
const int _num__array_Core_2_tauca = 1;
double * _array_Core_2_taud;
const int _num__array_Core_2_taud = 1;
double * _array_Core_2_Ut;
const int _num__array_Core_2_Ut = 1;
int32_t * _array_Core_3__spikespace;
const int _num__array_Core_3__spikespace = 257;
double * _array_Core_3_ahp;
const int _num__array_Core_3_ahp = 1;
double * _array_Core_3_C_syn_ampa;
const int _num__array_Core_3_C_syn_ampa = 256;
double * _array_Core_3_C_syn_gaba_a;
const int _num__array_Core_3_C_syn_gaba_a = 256;
double * _array_Core_3_C_syn_gaba_b;
const int _num__array_Core_3_C_syn_gaba_b = 256;
double * _array_Core_3_C_syn_nmda;
const int _num__array_Core_3_C_syn_nmda = 256;
double * _array_Core_3_Cahp;
const int _num__array_Core_3_Cahp = 1;
double * _array_Core_3_Cmem;
const int _num__array_Core_3_Cmem = 1;
double * _array_Core_3_D;
const int _num__array_Core_3_D = 256;
int32_t * _array_Core_3_i;
const int _num__array_Core_3_i = 256;
double * _array_Core_3_I_g_syn_ampa;
const int _num__array_Core_3_I_g_syn_ampa = 256;
double * _array_Core_3_I_g_syn_gaba_a;
const int _num__array_Core_3_I_g_syn_gaba_a = 256;
double * _array_Core_3_I_g_syn_gaba_b;
const int _num__array_Core_3_I_g_syn_gaba_b = 256;
double * _array_Core_3_I_g_syn_nmda;
const int _num__array_Core_3_I_g_syn_nmda = 256;
double * _array_Core_3_I_syn_ampa;
const int _num__array_Core_3_I_syn_ampa = 256;
double * _array_Core_3_I_syn_gaba_a;
const int _num__array_Core_3_I_syn_gaba_a = 256;
double * _array_Core_3_I_syn_gaba_b;
const int _num__array_Core_3_I_syn_gaba_b = 256;
double * _array_Core_3_I_syn_nmda;
const int _num__array_Core_3_I_syn_nmda = 256;
double * _array_Core_3_I_tau_syn_ampa;
const int _num__array_Core_3_I_tau_syn_ampa = 256;
double * _array_Core_3_I_tau_syn_gaba_a;
const int _num__array_Core_3_I_tau_syn_gaba_a = 256;
double * _array_Core_3_I_tau_syn_gaba_b;
const int _num__array_Core_3_I_tau_syn_gaba_b = 256;
double * _array_Core_3_I_tau_syn_nmda;
const int _num__array_Core_3_I_tau_syn_nmda = 256;
double * _array_Core_3_I_wo_syn_ampa;
const int _num__array_Core_3_I_wo_syn_ampa = 256;
double * _array_Core_3_I_wo_syn_gaba_a;
const int _num__array_Core_3_I_wo_syn_gaba_a = 256;
double * _array_Core_3_I_wo_syn_gaba_b;
const int _num__array_Core_3_I_wo_syn_gaba_b = 256;
double * _array_Core_3_I_wo_syn_nmda;
const int _num__array_Core_3_I_wo_syn_nmda = 256;
double * _array_Core_3_Iagain;
const int _num__array_Core_3_Iagain = 1;
double * _array_Core_3_Iahp;
const int _num__array_Core_3_Iahp = 256;
double * _array_Core_3_Ianorm;
const int _num__array_Core_3_Ianorm = 1;
double * _array_Core_3_Iath;
const int _num__array_Core_3_Iath = 1;
double * _array_Core_3_Ica;
const int _num__array_Core_3_Ica = 256;
double * _array_Core_3_Iconst;
const int _num__array_Core_3_Iconst = 256;
double * _array_Core_3_Imem;
const int _num__array_Core_3_Imem = 256;
double * _array_Core_3_Io;
const int _num__array_Core_3_Io = 1;
double * _array_Core_3_Ireset;
const int _num__array_Core_3_Ireset = 1;
double * _array_Core_3_Ishunt;
const int _num__array_Core_3_Ishunt = 256;
double * _array_Core_3_Ispkthr;
const int _num__array_Core_3_Ispkthr = 1;
double * _array_Core_3_Itau;
const int _num__array_Core_3_Itau = 1;
double * _array_Core_3_Itauahp;
const int _num__array_Core_3_Itauahp = 1;
double * _array_Core_3_Ith;
const int _num__array_Core_3_Ith = 1;
double * _array_Core_3_Ithahp;
const int _num__array_Core_3_Ithahp = 1;
double * _array_Core_3_kn;
const int _num__array_Core_3_kn = 1;
double * _array_Core_3_kp;
const int _num__array_Core_3_kp = 1;
double * _array_Core_3_lastspike;
const int _num__array_Core_3_lastspike = 256;
double * _array_Core_3_M;
const int _num__array_Core_3_M = 1;
char * _array_Core_3_not_refractory;
const int _num__array_Core_3_not_refractory = 256;
double * _array_Core_3_refP;
const int _num__array_Core_3_refP = 1;
double * _array_Core_3_tauca;
const int _num__array_Core_3_tauca = 1;
double * _array_Core_3_taud;
const int _num__array_Core_3_taud = 1;
double * _array_Core_3_Ut;
const int _num__array_Core_3_Ut = 1;
double * _array_defaultclock_dt;
const int _num__array_defaultclock_dt = 1;
double * _array_defaultclock_t;
const int _num__array_defaultclock_t = 1;
int64_t * _array_defaultclock_timestep;
const int _num__array_defaultclock_timestep = 1;
int32_t * _array_InpSpikeGenerator__lastindex;
const int _num__array_InpSpikeGenerator__lastindex = 1;
int32_t * _array_InpSpikeGenerator__period_bins;
const int _num__array_InpSpikeGenerator__period_bins = 1;
int32_t * _array_InpSpikeGenerator__spikespace;
const int _num__array_InpSpikeGenerator__spikespace = 2;
int32_t * _array_InpSpikeGenerator_i;
const int _num__array_InpSpikeGenerator_i = 1;
double * _array_InpSpikeGenerator_period;
const int _num__array_InpSpikeGenerator_period = 1;
int32_t * _array_mon_neuron_input__source_idx;
const int _num__array_mon_neuron_input__source_idx = 1;
int32_t * _array_mon_neuron_input_count;
const int _num__array_mon_neuron_input_count = 1;
int32_t * _array_mon_neuron_input_N;
const int _num__array_mon_neuron_input_N = 1;
int32_t * _array_mon_neuron_output__source_idx;
const int _num__array_mon_neuron_output__source_idx = 1;
int32_t * _array_mon_neuron_output_count;
const int _num__array_mon_neuron_output_count = 1;
int32_t * _array_mon_neuron_output_N;
const int _num__array_mon_neuron_output_N = 1;
int32_t * _array_statemonitor_2__indices;
const int _num__array_statemonitor_2__indices = 1;
double * _array_statemonitor_2_Iahp;
const int _num__array_statemonitor_2_Iahp = (0, 1);
int32_t * _array_statemonitor_2_N;
const int _num__array_statemonitor_2_N = 1;
int32_t * _array_statemonitor_3__indices;
const int _num__array_statemonitor_3__indices = 1;
double * _array_statemonitor_3_I_syn_ampa;
const int _num__array_statemonitor_3_I_syn_ampa = (0, 1);
int32_t * _array_statemonitor_3_N;
const int _num__array_statemonitor_3_N = 1;
int32_t * _array_statemonitor_4__indices;
const int _num__array_statemonitor_4__indices = 1;
double * _array_statemonitor_4_Imem;
const int _num__array_statemonitor_4_Imem = (0, 1);
int32_t * _array_statemonitor_4_N;
const int _num__array_statemonitor_4_N = 1;

//////////////// dynamic arrays 1d /////////
std::vector<int32_t> _dynamic_array_AMPA0__synaptic_post;
std::vector<int32_t> _dynamic_array_AMPA0__synaptic_pre;
std::vector<double> _dynamic_array_AMPA0_d;
std::vector<double> _dynamic_array_AMPA0_delay;
std::vector<double> _dynamic_array_AMPA0_delay_1;
std::vector<int32_t> _dynamic_array_AMPA0_N_incoming;
std::vector<int32_t> _dynamic_array_AMPA0_N_outgoing;
std::vector<double> _dynamic_array_AMPA0_weight;
std::vector<int32_t> _dynamic_array_InpSpikeGenerator__timebins;
std::vector<int32_t> _dynamic_array_InpSpikeGenerator_neuron_index;
std::vector<int32_t> _dynamic_array_InpSpikeGenerator_spike_number;
std::vector<double> _dynamic_array_InpSpikeGenerator_spike_time;
std::vector<int32_t> _dynamic_array_mon_neuron_input_i;
std::vector<double> _dynamic_array_mon_neuron_input_t;
std::vector<int32_t> _dynamic_array_mon_neuron_output_i;
std::vector<double> _dynamic_array_mon_neuron_output_t;
std::vector<double> _dynamic_array_statemonitor_2_t;
std::vector<double> _dynamic_array_statemonitor_3_t;
std::vector<double> _dynamic_array_statemonitor_4_t;

//////////////// dynamic arrays 2d /////////
DynamicArray2D<double> _dynamic_array_statemonitor_2_Iahp;
DynamicArray2D<double> _dynamic_array_statemonitor_3_I_syn_ampa;
DynamicArray2D<double> _dynamic_array_statemonitor_4_Imem;

/////////////// static arrays /////////////
int32_t * _static_array__dynamic_array_InpSpikeGenerator__timebins;
const int _num__static_array__dynamic_array_InpSpikeGenerator__timebins = 1000;
double * _static_array__dynamic_array_InpSpikeGenerator_neuron_index;
const int _num__static_array__dynamic_array_InpSpikeGenerator_neuron_index = 1000;
int64_t * _static_array__dynamic_array_InpSpikeGenerator_spike_number;
const int _num__static_array__dynamic_array_InpSpikeGenerator_spike_number = 1000;
double * _static_array__dynamic_array_InpSpikeGenerator_spike_time;
const int _num__static_array__dynamic_array_InpSpikeGenerator_spike_time = 1000;

//////////////// synapses /////////////////
// AMPA0
SynapticPathway AMPA0_post(
		_dynamic_array_AMPA0__synaptic_post,
		0, 1);
SynapticPathway AMPA0_pre(
		_dynamic_array_AMPA0__synaptic_pre,
		0, 1);

//////////////// clocks ///////////////////
Clock defaultclock;  // attributes will be set in run.cpp

// Profiling information for each code object
}

void _init_arrays()
{
	using namespace brian;

    // Arrays initialized to 0
	_array_AMPA0_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_AMPA0_N[i] = 0;

	_array_Core_0__spikespace = new int32_t[257];
    
	for(int i=0; i<257; i++) _array_Core_0__spikespace[i] = 0;

	_array_Core_0_ahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_ahp[i] = 0;

	_array_Core_0_C_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_C_syn_ampa[i] = 0;

	_array_Core_0_C_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_C_syn_gaba_a[i] = 0;

	_array_Core_0_C_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_C_syn_gaba_b[i] = 0;

	_array_Core_0_C_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_C_syn_nmda[i] = 0;

	_array_Core_0_Cahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Cahp[i] = 0;

	_array_Core_0_Cmem = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Cmem[i] = 0;

	_array_Core_0_D = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_D[i] = 0;

	_array_Core_0_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_0_i[i] = 0;

	_array_Core_0_I_g_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_g_syn_ampa[i] = 0;

	_array_Core_0_I_g_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_g_syn_gaba_a[i] = 0;

	_array_Core_0_I_g_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_g_syn_gaba_b[i] = 0;

	_array_Core_0_I_g_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_g_syn_nmda[i] = 0;

	_array_Core_0_I_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_syn_ampa[i] = 0;

	_array_Core_0_I_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_syn_gaba_a[i] = 0;

	_array_Core_0_I_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_syn_gaba_b[i] = 0;

	_array_Core_0_I_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_syn_nmda[i] = 0;

	_array_Core_0_I_tau_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_tau_syn_ampa[i] = 0;

	_array_Core_0_I_tau_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_tau_syn_gaba_a[i] = 0;

	_array_Core_0_I_tau_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_tau_syn_gaba_b[i] = 0;

	_array_Core_0_I_tau_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_tau_syn_nmda[i] = 0;

	_array_Core_0_I_wo_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_wo_syn_ampa[i] = 0;

	_array_Core_0_I_wo_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_wo_syn_gaba_a[i] = 0;

	_array_Core_0_I_wo_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_wo_syn_gaba_b[i] = 0;

	_array_Core_0_I_wo_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_wo_syn_nmda[i] = 0;

	_array_Core_0_Iagain = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Iagain[i] = 0;

	_array_Core_0_Iahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Iahp[i] = 0;

	_array_Core_0_Ianorm = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Ianorm[i] = 0;

	_array_Core_0_Iath = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Iath[i] = 0;

	_array_Core_0_Ica = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Ica[i] = 0;

	_array_Core_0_Iconst = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Iconst[i] = 0;

	_array_Core_0_Imem = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Imem[i] = 0;

	_array_Core_0_Io = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Io[i] = 0;

	_array_Core_0_Ireset = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Ireset[i] = 0;

	_array_Core_0_Ishunt = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Ishunt[i] = 0;

	_array_Core_0_Ispkthr = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Ispkthr[i] = 0;

	_array_Core_0_Itau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Itau[i] = 0;

	_array_Core_0_Itauahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Itauahp[i] = 0;

	_array_Core_0_Ith = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Ith[i] = 0;

	_array_Core_0_Ithahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Ithahp[i] = 0;

	_array_Core_0_kn = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_kn[i] = 0;

	_array_Core_0_kp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_kp[i] = 0;

	_array_Core_0_lastspike = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_lastspike[i] = 0;

	_array_Core_0_M = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_M[i] = 0;

	_array_Core_0_not_refractory = new char[256];
    
	for(int i=0; i<256; i++) _array_Core_0_not_refractory[i] = 0;

	_array_Core_0_refP = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_refP[i] = 0;

	_array_Core_0_tauca = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_tauca[i] = 0;

	_array_Core_0_taud = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_taud[i] = 0;

	_array_Core_0_Ut = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Ut[i] = 0;

	_array_Core_1__spikespace = new int32_t[257];
    
	for(int i=0; i<257; i++) _array_Core_1__spikespace[i] = 0;

	_array_Core_1_ahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_ahp[i] = 0;

	_array_Core_1_C_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_C_syn_ampa[i] = 0;

	_array_Core_1_C_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_C_syn_gaba_a[i] = 0;

	_array_Core_1_C_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_C_syn_gaba_b[i] = 0;

	_array_Core_1_C_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_C_syn_nmda[i] = 0;

	_array_Core_1_Cahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Cahp[i] = 0;

	_array_Core_1_Cmem = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Cmem[i] = 0;

	_array_Core_1_D = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_D[i] = 0;

	_array_Core_1_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_1_i[i] = 0;

	_array_Core_1_I_g_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_g_syn_ampa[i] = 0;

	_array_Core_1_I_g_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_g_syn_gaba_a[i] = 0;

	_array_Core_1_I_g_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_g_syn_gaba_b[i] = 0;

	_array_Core_1_I_g_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_g_syn_nmda[i] = 0;

	_array_Core_1_I_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_syn_ampa[i] = 0;

	_array_Core_1_I_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_syn_gaba_a[i] = 0;

	_array_Core_1_I_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_syn_gaba_b[i] = 0;

	_array_Core_1_I_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_syn_nmda[i] = 0;

	_array_Core_1_I_tau_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_tau_syn_ampa[i] = 0;

	_array_Core_1_I_tau_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_tau_syn_gaba_a[i] = 0;

	_array_Core_1_I_tau_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_tau_syn_gaba_b[i] = 0;

	_array_Core_1_I_tau_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_tau_syn_nmda[i] = 0;

	_array_Core_1_I_wo_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_wo_syn_ampa[i] = 0;

	_array_Core_1_I_wo_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_wo_syn_gaba_a[i] = 0;

	_array_Core_1_I_wo_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_wo_syn_gaba_b[i] = 0;

	_array_Core_1_I_wo_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_wo_syn_nmda[i] = 0;

	_array_Core_1_Iagain = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Iagain[i] = 0;

	_array_Core_1_Iahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Iahp[i] = 0;

	_array_Core_1_Ianorm = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Ianorm[i] = 0;

	_array_Core_1_Iath = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Iath[i] = 0;

	_array_Core_1_Ica = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Ica[i] = 0;

	_array_Core_1_Iconst = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Iconst[i] = 0;

	_array_Core_1_Imem = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Imem[i] = 0;

	_array_Core_1_Io = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Io[i] = 0;

	_array_Core_1_Ireset = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Ireset[i] = 0;

	_array_Core_1_Ishunt = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Ishunt[i] = 0;

	_array_Core_1_Ispkthr = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Ispkthr[i] = 0;

	_array_Core_1_Itau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Itau[i] = 0;

	_array_Core_1_Itauahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Itauahp[i] = 0;

	_array_Core_1_Ith = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Ith[i] = 0;

	_array_Core_1_Ithahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Ithahp[i] = 0;

	_array_Core_1_kn = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_kn[i] = 0;

	_array_Core_1_kp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_kp[i] = 0;

	_array_Core_1_lastspike = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_lastspike[i] = 0;

	_array_Core_1_M = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_M[i] = 0;

	_array_Core_1_not_refractory = new char[256];
    
	for(int i=0; i<256; i++) _array_Core_1_not_refractory[i] = 0;

	_array_Core_1_refP = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_refP[i] = 0;

	_array_Core_1_subgroup__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup__sub_idx[i] = 0;

	_array_Core_1_tauca = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_tauca[i] = 0;

	_array_Core_1_taud = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_taud[i] = 0;

	_array_Core_1_Ut = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Ut[i] = 0;

	_array_Core_2__spikespace = new int32_t[257];
    
	for(int i=0; i<257; i++) _array_Core_2__spikespace[i] = 0;

	_array_Core_2_ahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_ahp[i] = 0;

	_array_Core_2_C_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_C_syn_ampa[i] = 0;

	_array_Core_2_C_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_C_syn_gaba_a[i] = 0;

	_array_Core_2_C_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_C_syn_gaba_b[i] = 0;

	_array_Core_2_C_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_C_syn_nmda[i] = 0;

	_array_Core_2_Cahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Cahp[i] = 0;

	_array_Core_2_Cmem = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Cmem[i] = 0;

	_array_Core_2_D = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_D[i] = 0;

	_array_Core_2_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_2_i[i] = 0;

	_array_Core_2_I_g_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_g_syn_ampa[i] = 0;

	_array_Core_2_I_g_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_g_syn_gaba_a[i] = 0;

	_array_Core_2_I_g_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_g_syn_gaba_b[i] = 0;

	_array_Core_2_I_g_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_g_syn_nmda[i] = 0;

	_array_Core_2_I_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_syn_ampa[i] = 0;

	_array_Core_2_I_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_syn_gaba_a[i] = 0;

	_array_Core_2_I_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_syn_gaba_b[i] = 0;

	_array_Core_2_I_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_syn_nmda[i] = 0;

	_array_Core_2_I_tau_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_tau_syn_ampa[i] = 0;

	_array_Core_2_I_tau_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_tau_syn_gaba_a[i] = 0;

	_array_Core_2_I_tau_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_tau_syn_gaba_b[i] = 0;

	_array_Core_2_I_tau_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_tau_syn_nmda[i] = 0;

	_array_Core_2_I_wo_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_wo_syn_ampa[i] = 0;

	_array_Core_2_I_wo_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_wo_syn_gaba_a[i] = 0;

	_array_Core_2_I_wo_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_wo_syn_gaba_b[i] = 0;

	_array_Core_2_I_wo_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_wo_syn_nmda[i] = 0;

	_array_Core_2_Iagain = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Iagain[i] = 0;

	_array_Core_2_Iahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Iahp[i] = 0;

	_array_Core_2_Ianorm = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Ianorm[i] = 0;

	_array_Core_2_Iath = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Iath[i] = 0;

	_array_Core_2_Ica = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Ica[i] = 0;

	_array_Core_2_Iconst = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Iconst[i] = 0;

	_array_Core_2_Imem = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Imem[i] = 0;

	_array_Core_2_Io = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Io[i] = 0;

	_array_Core_2_Ireset = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Ireset[i] = 0;

	_array_Core_2_Ishunt = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Ishunt[i] = 0;

	_array_Core_2_Ispkthr = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Ispkthr[i] = 0;

	_array_Core_2_Itau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Itau[i] = 0;

	_array_Core_2_Itauahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Itauahp[i] = 0;

	_array_Core_2_Ith = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Ith[i] = 0;

	_array_Core_2_Ithahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Ithahp[i] = 0;

	_array_Core_2_kn = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_kn[i] = 0;

	_array_Core_2_kp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_kp[i] = 0;

	_array_Core_2_lastspike = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_lastspike[i] = 0;

	_array_Core_2_M = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_M[i] = 0;

	_array_Core_2_not_refractory = new char[256];
    
	for(int i=0; i<256; i++) _array_Core_2_not_refractory[i] = 0;

	_array_Core_2_refP = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_refP[i] = 0;

	_array_Core_2_tauca = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_tauca[i] = 0;

	_array_Core_2_taud = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_taud[i] = 0;

	_array_Core_2_Ut = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Ut[i] = 0;

	_array_Core_3__spikespace = new int32_t[257];
    
	for(int i=0; i<257; i++) _array_Core_3__spikespace[i] = 0;

	_array_Core_3_ahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_ahp[i] = 0;

	_array_Core_3_C_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_C_syn_ampa[i] = 0;

	_array_Core_3_C_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_C_syn_gaba_a[i] = 0;

	_array_Core_3_C_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_C_syn_gaba_b[i] = 0;

	_array_Core_3_C_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_C_syn_nmda[i] = 0;

	_array_Core_3_Cahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Cahp[i] = 0;

	_array_Core_3_Cmem = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Cmem[i] = 0;

	_array_Core_3_D = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_D[i] = 0;

	_array_Core_3_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_3_i[i] = 0;

	_array_Core_3_I_g_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_g_syn_ampa[i] = 0;

	_array_Core_3_I_g_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_g_syn_gaba_a[i] = 0;

	_array_Core_3_I_g_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_g_syn_gaba_b[i] = 0;

	_array_Core_3_I_g_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_g_syn_nmda[i] = 0;

	_array_Core_3_I_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_syn_ampa[i] = 0;

	_array_Core_3_I_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_syn_gaba_a[i] = 0;

	_array_Core_3_I_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_syn_gaba_b[i] = 0;

	_array_Core_3_I_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_syn_nmda[i] = 0;

	_array_Core_3_I_tau_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_tau_syn_ampa[i] = 0;

	_array_Core_3_I_tau_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_tau_syn_gaba_a[i] = 0;

	_array_Core_3_I_tau_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_tau_syn_gaba_b[i] = 0;

	_array_Core_3_I_tau_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_tau_syn_nmda[i] = 0;

	_array_Core_3_I_wo_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_wo_syn_ampa[i] = 0;

	_array_Core_3_I_wo_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_wo_syn_gaba_a[i] = 0;

	_array_Core_3_I_wo_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_wo_syn_gaba_b[i] = 0;

	_array_Core_3_I_wo_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_wo_syn_nmda[i] = 0;

	_array_Core_3_Iagain = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Iagain[i] = 0;

	_array_Core_3_Iahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Iahp[i] = 0;

	_array_Core_3_Ianorm = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Ianorm[i] = 0;

	_array_Core_3_Iath = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Iath[i] = 0;

	_array_Core_3_Ica = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Ica[i] = 0;

	_array_Core_3_Iconst = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Iconst[i] = 0;

	_array_Core_3_Imem = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Imem[i] = 0;

	_array_Core_3_Io = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Io[i] = 0;

	_array_Core_3_Ireset = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Ireset[i] = 0;

	_array_Core_3_Ishunt = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Ishunt[i] = 0;

	_array_Core_3_Ispkthr = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Ispkthr[i] = 0;

	_array_Core_3_Itau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Itau[i] = 0;

	_array_Core_3_Itauahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Itauahp[i] = 0;

	_array_Core_3_Ith = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Ith[i] = 0;

	_array_Core_3_Ithahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Ithahp[i] = 0;

	_array_Core_3_kn = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_kn[i] = 0;

	_array_Core_3_kp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_kp[i] = 0;

	_array_Core_3_lastspike = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_lastspike[i] = 0;

	_array_Core_3_M = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_M[i] = 0;

	_array_Core_3_not_refractory = new char[256];
    
	for(int i=0; i<256; i++) _array_Core_3_not_refractory[i] = 0;

	_array_Core_3_refP = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_refP[i] = 0;

	_array_Core_3_tauca = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_tauca[i] = 0;

	_array_Core_3_taud = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_taud[i] = 0;

	_array_Core_3_Ut = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Ut[i] = 0;

	_array_defaultclock_dt = new double[1];
    
	for(int i=0; i<1; i++) _array_defaultclock_dt[i] = 0;

	_array_defaultclock_t = new double[1];
    
	for(int i=0; i<1; i++) _array_defaultclock_t[i] = 0;

	_array_defaultclock_timestep = new int64_t[1];
    
	for(int i=0; i<1; i++) _array_defaultclock_timestep[i] = 0;

	_array_InpSpikeGenerator__lastindex = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_InpSpikeGenerator__lastindex[i] = 0;

	_array_InpSpikeGenerator__period_bins = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_InpSpikeGenerator__period_bins[i] = 0;

	_array_InpSpikeGenerator__spikespace = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_InpSpikeGenerator__spikespace[i] = 0;

	_array_InpSpikeGenerator_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_InpSpikeGenerator_i[i] = 0;

	_array_InpSpikeGenerator_period = new double[1];
    
	for(int i=0; i<1; i++) _array_InpSpikeGenerator_period[i] = 0;

	_array_mon_neuron_input__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_input__source_idx[i] = 0;

	_array_mon_neuron_input_count = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_input_count[i] = 0;

	_array_mon_neuron_input_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_input_N[i] = 0;

	_array_mon_neuron_output__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output__source_idx[i] = 0;

	_array_mon_neuron_output_count = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_count[i] = 0;

	_array_mon_neuron_output_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_N[i] = 0;

	_array_statemonitor_2__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_2__indices[i] = 0;

	_array_statemonitor_2_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_2_N[i] = 0;

	_array_statemonitor_3__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_3__indices[i] = 0;

	_array_statemonitor_3_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_3_N[i] = 0;

	_array_statemonitor_4__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_4__indices[i] = 0;

	_array_statemonitor_4_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_4_N[i] = 0;

	_dynamic_array_InpSpikeGenerator__timebins.resize(1000);
    
	for(int i=0; i<1000; i++) _dynamic_array_InpSpikeGenerator__timebins[i] = 0;


	// Arrays initialized to an "arange"
	_array_Core_0_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_0_i[i] = 0 + i;

	_array_Core_1_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_1_i[i] = 0 + i;

	_array_Core_1_subgroup__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup__sub_idx[i] = 0 + i;

	_array_Core_2_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_2_i[i] = 0 + i;

	_array_Core_3_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_3_i[i] = 0 + i;

	_array_InpSpikeGenerator_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_InpSpikeGenerator_i[i] = 0 + i;

	_array_mon_neuron_input__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_input__source_idx[i] = 0 + i;

	_array_mon_neuron_output__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output__source_idx[i] = 0 + i;


	// static arrays
	_static_array__dynamic_array_InpSpikeGenerator__timebins = new int32_t[1000];
	_static_array__dynamic_array_InpSpikeGenerator_neuron_index = new double[1000];
	_static_array__dynamic_array_InpSpikeGenerator_spike_number = new int64_t[1000];
	_static_array__dynamic_array_InpSpikeGenerator_spike_time = new double[1000];

	// Random number generator states
	for (int i=0; i<1; i++)
	    _mersenne_twister_states.push_back(new rk_state());
}

void _load_arrays()
{
	using namespace brian;

	ifstream f_static_array__dynamic_array_InpSpikeGenerator__timebins;
	f_static_array__dynamic_array_InpSpikeGenerator__timebins.open("static_arrays/_static_array__dynamic_array_InpSpikeGenerator__timebins", ios::in | ios::binary);
	if(f_static_array__dynamic_array_InpSpikeGenerator__timebins.is_open())
	{
		f_static_array__dynamic_array_InpSpikeGenerator__timebins.read(reinterpret_cast<char*>(_static_array__dynamic_array_InpSpikeGenerator__timebins), 1000*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_InpSpikeGenerator__timebins." << endl;
	}
	ifstream f_static_array__dynamic_array_InpSpikeGenerator_neuron_index;
	f_static_array__dynamic_array_InpSpikeGenerator_neuron_index.open("static_arrays/_static_array__dynamic_array_InpSpikeGenerator_neuron_index", ios::in | ios::binary);
	if(f_static_array__dynamic_array_InpSpikeGenerator_neuron_index.is_open())
	{
		f_static_array__dynamic_array_InpSpikeGenerator_neuron_index.read(reinterpret_cast<char*>(_static_array__dynamic_array_InpSpikeGenerator_neuron_index), 1000*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_InpSpikeGenerator_neuron_index." << endl;
	}
	ifstream f_static_array__dynamic_array_InpSpikeGenerator_spike_number;
	f_static_array__dynamic_array_InpSpikeGenerator_spike_number.open("static_arrays/_static_array__dynamic_array_InpSpikeGenerator_spike_number", ios::in | ios::binary);
	if(f_static_array__dynamic_array_InpSpikeGenerator_spike_number.is_open())
	{
		f_static_array__dynamic_array_InpSpikeGenerator_spike_number.read(reinterpret_cast<char*>(_static_array__dynamic_array_InpSpikeGenerator_spike_number), 1000*sizeof(int64_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_InpSpikeGenerator_spike_number." << endl;
	}
	ifstream f_static_array__dynamic_array_InpSpikeGenerator_spike_time;
	f_static_array__dynamic_array_InpSpikeGenerator_spike_time.open("static_arrays/_static_array__dynamic_array_InpSpikeGenerator_spike_time", ios::in | ios::binary);
	if(f_static_array__dynamic_array_InpSpikeGenerator_spike_time.is_open())
	{
		f_static_array__dynamic_array_InpSpikeGenerator_spike_time.read(reinterpret_cast<char*>(_static_array__dynamic_array_InpSpikeGenerator_spike_time), 1000*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_InpSpikeGenerator_spike_time." << endl;
	}
}

void _write_arrays()
{
	using namespace brian;

	ofstream outfile__array_AMPA0_N;
	outfile__array_AMPA0_N.open("results/_array_AMPA0_N_2575185936438363036", ios::binary | ios::out);
	if(outfile__array_AMPA0_N.is_open())
	{
		outfile__array_AMPA0_N.write(reinterpret_cast<char*>(_array_AMPA0_N), 1*sizeof(_array_AMPA0_N[0]));
		outfile__array_AMPA0_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA0_N." << endl;
	}
	ofstream outfile__array_Core_0__spikespace;
	outfile__array_Core_0__spikespace.open("results/_array_Core_0__spikespace_-369040477673817137", ios::binary | ios::out);
	if(outfile__array_Core_0__spikespace.is_open())
	{
		outfile__array_Core_0__spikespace.write(reinterpret_cast<char*>(_array_Core_0__spikespace), 257*sizeof(_array_Core_0__spikespace[0]));
		outfile__array_Core_0__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0__spikespace." << endl;
	}
	ofstream outfile__array_Core_0_ahp;
	outfile__array_Core_0_ahp.open("results/_array_Core_0_ahp_-2004427833221775040", ios::binary | ios::out);
	if(outfile__array_Core_0_ahp.is_open())
	{
		outfile__array_Core_0_ahp.write(reinterpret_cast<char*>(_array_Core_0_ahp), 1*sizeof(_array_Core_0_ahp[0]));
		outfile__array_Core_0_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_ahp." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_ampa;
	outfile__array_Core_0_C_syn_ampa.open("results/_array_Core_0_C_syn_ampa_-6929367605036505598", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_ampa.is_open())
	{
		outfile__array_Core_0_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_C_syn_ampa), 256*sizeof(_array_Core_0_C_syn_ampa[0]));
		outfile__array_Core_0_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_gaba_a;
	outfile__array_Core_0_C_syn_gaba_a.open("results/_array_Core_0_C_syn_gaba_a_-8061713318574711219", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_C_syn_gaba_a), 256*sizeof(_array_Core_0_C_syn_gaba_a[0]));
		outfile__array_Core_0_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_gaba_b;
	outfile__array_Core_0_C_syn_gaba_b.open("results/_array_Core_0_C_syn_gaba_b_-752903794917038093", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_C_syn_gaba_b), 256*sizeof(_array_Core_0_C_syn_gaba_b[0]));
		outfile__array_Core_0_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_nmda;
	outfile__array_Core_0_C_syn_nmda.open("results/_array_Core_0_C_syn_nmda_6348714194154949774", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_nmda.is_open())
	{
		outfile__array_Core_0_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_C_syn_nmda), 256*sizeof(_array_Core_0_C_syn_nmda[0]));
		outfile__array_Core_0_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_Cahp;
	outfile__array_Core_0_Cahp.open("results/_array_Core_0_Cahp_8622947185678448592", ios::binary | ios::out);
	if(outfile__array_Core_0_Cahp.is_open())
	{
		outfile__array_Core_0_Cahp.write(reinterpret_cast<char*>(_array_Core_0_Cahp), 1*sizeof(_array_Core_0_Cahp[0]));
		outfile__array_Core_0_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cahp." << endl;
	}
	ofstream outfile__array_Core_0_Cmem;
	outfile__array_Core_0_Cmem.open("results/_array_Core_0_Cmem_3690249404529831306", ios::binary | ios::out);
	if(outfile__array_Core_0_Cmem.is_open())
	{
		outfile__array_Core_0_Cmem.write(reinterpret_cast<char*>(_array_Core_0_Cmem), 1*sizeof(_array_Core_0_Cmem[0]));
		outfile__array_Core_0_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cmem." << endl;
	}
	ofstream outfile__array_Core_0_D;
	outfile__array_Core_0_D.open("results/_array_Core_0_D_1549664334466930029", ios::binary | ios::out);
	if(outfile__array_Core_0_D.is_open())
	{
		outfile__array_Core_0_D.write(reinterpret_cast<char*>(_array_Core_0_D), 256*sizeof(_array_Core_0_D[0]));
		outfile__array_Core_0_D.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_D." << endl;
	}
	ofstream outfile__array_Core_0_i;
	outfile__array_Core_0_i.open("results/_array_Core_0_i_6292141086362729851", ios::binary | ios::out);
	if(outfile__array_Core_0_i.is_open())
	{
		outfile__array_Core_0_i.write(reinterpret_cast<char*>(_array_Core_0_i), 256*sizeof(_array_Core_0_i[0]));
		outfile__array_Core_0_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_i." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_ampa;
	outfile__array_Core_0_I_g_syn_ampa.open("results/_array_Core_0_I_g_syn_ampa_2276004011862906562", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_ampa), 256*sizeof(_array_Core_0_I_g_syn_ampa[0]));
		outfile__array_Core_0_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_gaba_a;
	outfile__array_Core_0_I_g_syn_gaba_a.open("results/_array_Core_0_I_g_syn_gaba_a_5174672353598366197", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_gaba_a), 256*sizeof(_array_Core_0_I_g_syn_gaba_a[0]));
		outfile__array_Core_0_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_gaba_b;
	outfile__array_Core_0_I_g_syn_gaba_b.open("results/_array_Core_0_I_g_syn_gaba_b_-5024032536229267714", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_gaba_b), 256*sizeof(_array_Core_0_I_g_syn_gaba_b[0]));
		outfile__array_Core_0_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_nmda;
	outfile__array_Core_0_I_g_syn_nmda.open("results/_array_Core_0_I_g_syn_nmda_7310717979847441267", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_nmda), 256*sizeof(_array_Core_0_I_g_syn_nmda[0]));
		outfile__array_Core_0_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_ampa;
	outfile__array_Core_0_I_syn_ampa.open("results/_array_Core_0_I_syn_ampa_-8076610987265647159", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_syn_ampa), 256*sizeof(_array_Core_0_I_syn_ampa[0]));
		outfile__array_Core_0_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_gaba_a;
	outfile__array_Core_0_I_syn_gaba_a.open("results/_array_Core_0_I_syn_gaba_a_9199654689849664190", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_syn_gaba_a), 256*sizeof(_array_Core_0_I_syn_gaba_a[0]));
		outfile__array_Core_0_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_gaba_b;
	outfile__array_Core_0_I_syn_gaba_b.open("results/_array_Core_0_I_syn_gaba_b_-8308380732436778048", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_syn_gaba_b), 256*sizeof(_array_Core_0_I_syn_gaba_b[0]));
		outfile__array_Core_0_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_nmda;
	outfile__array_Core_0_I_syn_nmda.open("results/_array_Core_0_I_syn_nmda_-4164776937998505289", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_syn_nmda), 256*sizeof(_array_Core_0_I_syn_nmda[0]));
		outfile__array_Core_0_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_ampa;
	outfile__array_Core_0_I_tau_syn_ampa.open("results/_array_Core_0_I_tau_syn_ampa_9158962741551580413", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_ampa), 256*sizeof(_array_Core_0_I_tau_syn_ampa[0]));
		outfile__array_Core_0_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_gaba_a;
	outfile__array_Core_0_I_tau_syn_gaba_a.open("results/_array_Core_0_I_tau_syn_gaba_a_-4241966467119927332", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_gaba_a), 256*sizeof(_array_Core_0_I_tau_syn_gaba_a[0]));
		outfile__array_Core_0_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_gaba_b;
	outfile__array_Core_0_I_tau_syn_gaba_b.open("results/_array_Core_0_I_tau_syn_gaba_b_-1671847602338471542", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_gaba_b), 256*sizeof(_array_Core_0_I_tau_syn_gaba_b[0]));
		outfile__array_Core_0_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_nmda;
	outfile__array_Core_0_I_tau_syn_nmda.open("results/_array_Core_0_I_tau_syn_nmda_8301086203716285611", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_nmda), 256*sizeof(_array_Core_0_I_tau_syn_nmda[0]));
		outfile__array_Core_0_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_ampa;
	outfile__array_Core_0_I_wo_syn_ampa.open("results/_array_Core_0_I_wo_syn_ampa_-1650525586756551034", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_ampa), 256*sizeof(_array_Core_0_I_wo_syn_ampa[0]));
		outfile__array_Core_0_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_gaba_a;
	outfile__array_Core_0_I_wo_syn_gaba_a.open("results/_array_Core_0_I_wo_syn_gaba_a_6691084981102365230", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_gaba_a), 256*sizeof(_array_Core_0_I_wo_syn_gaba_a[0]));
		outfile__array_Core_0_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_gaba_b;
	outfile__array_Core_0_I_wo_syn_gaba_b.open("results/_array_Core_0_I_wo_syn_gaba_b_8125317534993730374", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_gaba_b), 256*sizeof(_array_Core_0_I_wo_syn_gaba_b[0]));
		outfile__array_Core_0_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_nmda;
	outfile__array_Core_0_I_wo_syn_nmda.open("results/_array_Core_0_I_wo_syn_nmda_1123432327730208864", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_nmda), 256*sizeof(_array_Core_0_I_wo_syn_nmda[0]));
		outfile__array_Core_0_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_Iagain;
	outfile__array_Core_0_Iagain.open("results/_array_Core_0_Iagain_8462836649573557904", ios::binary | ios::out);
	if(outfile__array_Core_0_Iagain.is_open())
	{
		outfile__array_Core_0_Iagain.write(reinterpret_cast<char*>(_array_Core_0_Iagain), 1*sizeof(_array_Core_0_Iagain[0]));
		outfile__array_Core_0_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iagain." << endl;
	}
	ofstream outfile__array_Core_0_Iahp;
	outfile__array_Core_0_Iahp.open("results/_array_Core_0_Iahp_8159157077017461511", ios::binary | ios::out);
	if(outfile__array_Core_0_Iahp.is_open())
	{
		outfile__array_Core_0_Iahp.write(reinterpret_cast<char*>(_array_Core_0_Iahp), 256*sizeof(_array_Core_0_Iahp[0]));
		outfile__array_Core_0_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iahp." << endl;
	}
	ofstream outfile__array_Core_0_Ianorm;
	outfile__array_Core_0_Ianorm.open("results/_array_Core_0_Ianorm_286264449775097329", ios::binary | ios::out);
	if(outfile__array_Core_0_Ianorm.is_open())
	{
		outfile__array_Core_0_Ianorm.write(reinterpret_cast<char*>(_array_Core_0_Ianorm), 1*sizeof(_array_Core_0_Ianorm[0]));
		outfile__array_Core_0_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ianorm." << endl;
	}
	ofstream outfile__array_Core_0_Iath;
	outfile__array_Core_0_Iath.open("results/_array_Core_0_Iath_5180244435520030162", ios::binary | ios::out);
	if(outfile__array_Core_0_Iath.is_open())
	{
		outfile__array_Core_0_Iath.write(reinterpret_cast<char*>(_array_Core_0_Iath), 1*sizeof(_array_Core_0_Iath[0]));
		outfile__array_Core_0_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iath." << endl;
	}
	ofstream outfile__array_Core_0_Ica;
	outfile__array_Core_0_Ica.open("results/_array_Core_0_Ica_-7318185715172417887", ios::binary | ios::out);
	if(outfile__array_Core_0_Ica.is_open())
	{
		outfile__array_Core_0_Ica.write(reinterpret_cast<char*>(_array_Core_0_Ica), 256*sizeof(_array_Core_0_Ica[0]));
		outfile__array_Core_0_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ica." << endl;
	}
	ofstream outfile__array_Core_0_Iconst;
	outfile__array_Core_0_Iconst.open("results/_array_Core_0_Iconst_-5697856090497773685", ios::binary | ios::out);
	if(outfile__array_Core_0_Iconst.is_open())
	{
		outfile__array_Core_0_Iconst.write(reinterpret_cast<char*>(_array_Core_0_Iconst), 256*sizeof(_array_Core_0_Iconst[0]));
		outfile__array_Core_0_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iconst." << endl;
	}
	ofstream outfile__array_Core_0_Imem;
	outfile__array_Core_0_Imem.open("results/_array_Core_0_Imem_1033886328455879375", ios::binary | ios::out);
	if(outfile__array_Core_0_Imem.is_open())
	{
		outfile__array_Core_0_Imem.write(reinterpret_cast<char*>(_array_Core_0_Imem), 256*sizeof(_array_Core_0_Imem[0]));
		outfile__array_Core_0_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Imem." << endl;
	}
	ofstream outfile__array_Core_0_Io;
	outfile__array_Core_0_Io.open("results/_array_Core_0_Io_-6947039329802597989", ios::binary | ios::out);
	if(outfile__array_Core_0_Io.is_open())
	{
		outfile__array_Core_0_Io.write(reinterpret_cast<char*>(_array_Core_0_Io), 1*sizeof(_array_Core_0_Io[0]));
		outfile__array_Core_0_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Io." << endl;
	}
	ofstream outfile__array_Core_0_Ireset;
	outfile__array_Core_0_Ireset.open("results/_array_Core_0_Ireset_1382015567117404647", ios::binary | ios::out);
	if(outfile__array_Core_0_Ireset.is_open())
	{
		outfile__array_Core_0_Ireset.write(reinterpret_cast<char*>(_array_Core_0_Ireset), 1*sizeof(_array_Core_0_Ireset[0]));
		outfile__array_Core_0_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ireset." << endl;
	}
	ofstream outfile__array_Core_0_Ishunt;
	outfile__array_Core_0_Ishunt.open("results/_array_Core_0_Ishunt_3212492203623501051", ios::binary | ios::out);
	if(outfile__array_Core_0_Ishunt.is_open())
	{
		outfile__array_Core_0_Ishunt.write(reinterpret_cast<char*>(_array_Core_0_Ishunt), 256*sizeof(_array_Core_0_Ishunt[0]));
		outfile__array_Core_0_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ishunt." << endl;
	}
	ofstream outfile__array_Core_0_Ispkthr;
	outfile__array_Core_0_Ispkthr.open("results/_array_Core_0_Ispkthr_3303607219005818865", ios::binary | ios::out);
	if(outfile__array_Core_0_Ispkthr.is_open())
	{
		outfile__array_Core_0_Ispkthr.write(reinterpret_cast<char*>(_array_Core_0_Ispkthr), 1*sizeof(_array_Core_0_Ispkthr[0]));
		outfile__array_Core_0_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_0_Itau;
	outfile__array_Core_0_Itau.open("results/_array_Core_0_Itau_8711914879541598592", ios::binary | ios::out);
	if(outfile__array_Core_0_Itau.is_open())
	{
		outfile__array_Core_0_Itau.write(reinterpret_cast<char*>(_array_Core_0_Itau), 1*sizeof(_array_Core_0_Itau[0]));
		outfile__array_Core_0_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Itau." << endl;
	}
	ofstream outfile__array_Core_0_Itauahp;
	outfile__array_Core_0_Itauahp.open("results/_array_Core_0_Itauahp_2119900127378718423", ios::binary | ios::out);
	if(outfile__array_Core_0_Itauahp.is_open())
	{
		outfile__array_Core_0_Itauahp.write(reinterpret_cast<char*>(_array_Core_0_Itauahp), 1*sizeof(_array_Core_0_Itauahp[0]));
		outfile__array_Core_0_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Itauahp." << endl;
	}
	ofstream outfile__array_Core_0_Ith;
	outfile__array_Core_0_Ith.open("results/_array_Core_0_Ith_-487400030058868598", ios::binary | ios::out);
	if(outfile__array_Core_0_Ith.is_open())
	{
		outfile__array_Core_0_Ith.write(reinterpret_cast<char*>(_array_Core_0_Ith), 1*sizeof(_array_Core_0_Ith[0]));
		outfile__array_Core_0_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ith." << endl;
	}
	ofstream outfile__array_Core_0_Ithahp;
	outfile__array_Core_0_Ithahp.open("results/_array_Core_0_Ithahp_1885101018609449374", ios::binary | ios::out);
	if(outfile__array_Core_0_Ithahp.is_open())
	{
		outfile__array_Core_0_Ithahp.write(reinterpret_cast<char*>(_array_Core_0_Ithahp), 1*sizeof(_array_Core_0_Ithahp[0]));
		outfile__array_Core_0_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ithahp." << endl;
	}
	ofstream outfile__array_Core_0_kn;
	outfile__array_Core_0_kn.open("results/_array_Core_0_kn_5592987587322232417", ios::binary | ios::out);
	if(outfile__array_Core_0_kn.is_open())
	{
		outfile__array_Core_0_kn.write(reinterpret_cast<char*>(_array_Core_0_kn), 1*sizeof(_array_Core_0_kn[0]));
		outfile__array_Core_0_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kn." << endl;
	}
	ofstream outfile__array_Core_0_kp;
	outfile__array_Core_0_kp.open("results/_array_Core_0_kp_1721506376328270853", ios::binary | ios::out);
	if(outfile__array_Core_0_kp.is_open())
	{
		outfile__array_Core_0_kp.write(reinterpret_cast<char*>(_array_Core_0_kp), 1*sizeof(_array_Core_0_kp[0]));
		outfile__array_Core_0_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kp." << endl;
	}
	ofstream outfile__array_Core_0_lastspike;
	outfile__array_Core_0_lastspike.open("results/_array_Core_0_lastspike_-1599999406946216539", ios::binary | ios::out);
	if(outfile__array_Core_0_lastspike.is_open())
	{
		outfile__array_Core_0_lastspike.write(reinterpret_cast<char*>(_array_Core_0_lastspike), 256*sizeof(_array_Core_0_lastspike[0]));
		outfile__array_Core_0_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_lastspike." << endl;
	}
	ofstream outfile__array_Core_0_M;
	outfile__array_Core_0_M.open("results/_array_Core_0_M_2647206199091692360", ios::binary | ios::out);
	if(outfile__array_Core_0_M.is_open())
	{
		outfile__array_Core_0_M.write(reinterpret_cast<char*>(_array_Core_0_M), 1*sizeof(_array_Core_0_M[0]));
		outfile__array_Core_0_M.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_M." << endl;
	}
	ofstream outfile__array_Core_0_not_refractory;
	outfile__array_Core_0_not_refractory.open("results/_array_Core_0_not_refractory_-3288805678611722572", ios::binary | ios::out);
	if(outfile__array_Core_0_not_refractory.is_open())
	{
		outfile__array_Core_0_not_refractory.write(reinterpret_cast<char*>(_array_Core_0_not_refractory), 256*sizeof(_array_Core_0_not_refractory[0]));
		outfile__array_Core_0_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_not_refractory." << endl;
	}
	ofstream outfile__array_Core_0_refP;
	outfile__array_Core_0_refP.open("results/_array_Core_0_refP_-3847167196320325776", ios::binary | ios::out);
	if(outfile__array_Core_0_refP.is_open())
	{
		outfile__array_Core_0_refP.write(reinterpret_cast<char*>(_array_Core_0_refP), 1*sizeof(_array_Core_0_refP[0]));
		outfile__array_Core_0_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_refP." << endl;
	}
	ofstream outfile__array_Core_0_tauca;
	outfile__array_Core_0_tauca.open("results/_array_Core_0_tauca_3890822962574746743", ios::binary | ios::out);
	if(outfile__array_Core_0_tauca.is_open())
	{
		outfile__array_Core_0_tauca.write(reinterpret_cast<char*>(_array_Core_0_tauca), 1*sizeof(_array_Core_0_tauca[0]));
		outfile__array_Core_0_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_tauca." << endl;
	}
	ofstream outfile__array_Core_0_taud;
	outfile__array_Core_0_taud.open("results/_array_Core_0_taud_-4727694394147734247", ios::binary | ios::out);
	if(outfile__array_Core_0_taud.is_open())
	{
		outfile__array_Core_0_taud.write(reinterpret_cast<char*>(_array_Core_0_taud), 1*sizeof(_array_Core_0_taud[0]));
		outfile__array_Core_0_taud.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_taud." << endl;
	}
	ofstream outfile__array_Core_0_Ut;
	outfile__array_Core_0_Ut.open("results/_array_Core_0_Ut_-6268346731897407045", ios::binary | ios::out);
	if(outfile__array_Core_0_Ut.is_open())
	{
		outfile__array_Core_0_Ut.write(reinterpret_cast<char*>(_array_Core_0_Ut), 1*sizeof(_array_Core_0_Ut[0]));
		outfile__array_Core_0_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ut." << endl;
	}
	ofstream outfile__array_Core_1__spikespace;
	outfile__array_Core_1__spikespace.open("results/_array_Core_1__spikespace_3054603935354055489", ios::binary | ios::out);
	if(outfile__array_Core_1__spikespace.is_open())
	{
		outfile__array_Core_1__spikespace.write(reinterpret_cast<char*>(_array_Core_1__spikespace), 257*sizeof(_array_Core_1__spikespace[0]));
		outfile__array_Core_1__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1__spikespace." << endl;
	}
	ofstream outfile__array_Core_1_ahp;
	outfile__array_Core_1_ahp.open("results/_array_Core_1_ahp_3707332954264599497", ios::binary | ios::out);
	if(outfile__array_Core_1_ahp.is_open())
	{
		outfile__array_Core_1_ahp.write(reinterpret_cast<char*>(_array_Core_1_ahp), 1*sizeof(_array_Core_1_ahp[0]));
		outfile__array_Core_1_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_ahp." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_ampa;
	outfile__array_Core_1_C_syn_ampa.open("results/_array_Core_1_C_syn_ampa_-3205562006429331783", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_ampa.is_open())
	{
		outfile__array_Core_1_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_C_syn_ampa), 256*sizeof(_array_Core_1_C_syn_ampa[0]));
		outfile__array_Core_1_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_gaba_a;
	outfile__array_Core_1_C_syn_gaba_a.open("results/_array_Core_1_C_syn_gaba_a_-3203807021384847576", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_C_syn_gaba_a), 256*sizeof(_array_Core_1_C_syn_gaba_a[0]));
		outfile__array_Core_1_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_gaba_b;
	outfile__array_Core_1_C_syn_gaba_b.open("results/_array_Core_1_C_syn_gaba_b_-4248681212100879592", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_C_syn_gaba_b), 256*sizeof(_array_Core_1_C_syn_gaba_b[0]));
		outfile__array_Core_1_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_nmda;
	outfile__array_Core_1_C_syn_nmda.open("results/_array_Core_1_C_syn_nmda_-7164293526758064167", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_nmda.is_open())
	{
		outfile__array_Core_1_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_C_syn_nmda), 256*sizeof(_array_Core_1_C_syn_nmda[0]));
		outfile__array_Core_1_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_Cahp;
	outfile__array_Core_1_Cahp.open("results/_array_Core_1_Cahp_-8897174089058132867", ios::binary | ios::out);
	if(outfile__array_Core_1_Cahp.is_open())
	{
		outfile__array_Core_1_Cahp.write(reinterpret_cast<char*>(_array_Core_1_Cahp), 1*sizeof(_array_Core_1_Cahp[0]));
		outfile__array_Core_1_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cahp." << endl;
	}
	ofstream outfile__array_Core_1_Cmem;
	outfile__array_Core_1_Cmem.open("results/_array_Core_1_Cmem_2336129072065067359", ios::binary | ios::out);
	if(outfile__array_Core_1_Cmem.is_open())
	{
		outfile__array_Core_1_Cmem.write(reinterpret_cast<char*>(_array_Core_1_Cmem), 1*sizeof(_array_Core_1_Cmem[0]));
		outfile__array_Core_1_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cmem." << endl;
	}
	ofstream outfile__array_Core_1_D;
	outfile__array_Core_1_D.open("results/_array_Core_1_D_3254601612349329203", ios::binary | ios::out);
	if(outfile__array_Core_1_D.is_open())
	{
		outfile__array_Core_1_D.write(reinterpret_cast<char*>(_array_Core_1_D), 256*sizeof(_array_Core_1_D[0]));
		outfile__array_Core_1_D.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_D." << endl;
	}
	ofstream outfile__array_Core_1_i;
	outfile__array_Core_1_i.open("results/_array_Core_1_i_-9061240132050837794", ios::binary | ios::out);
	if(outfile__array_Core_1_i.is_open())
	{
		outfile__array_Core_1_i.write(reinterpret_cast<char*>(_array_Core_1_i), 256*sizeof(_array_Core_1_i[0]));
		outfile__array_Core_1_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_i." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_ampa;
	outfile__array_Core_1_I_g_syn_ampa.open("results/_array_Core_1_I_g_syn_ampa_-3719703578534449027", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_ampa), 256*sizeof(_array_Core_1_I_g_syn_ampa[0]));
		outfile__array_Core_1_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_gaba_a;
	outfile__array_Core_1_I_g_syn_gaba_a.open("results/_array_Core_1_I_g_syn_gaba_a_-5698448383823731885", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_gaba_a), 256*sizeof(_array_Core_1_I_g_syn_gaba_a[0]));
		outfile__array_Core_1_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_gaba_b;
	outfile__array_Core_1_I_g_syn_gaba_b.open("results/_array_Core_1_I_g_syn_gaba_b_-5310899147303497777", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_gaba_b), 256*sizeof(_array_Core_1_I_g_syn_gaba_b[0]));
		outfile__array_Core_1_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_nmda;
	outfile__array_Core_1_I_g_syn_nmda.open("results/_array_Core_1_I_g_syn_nmda_-6006826955701257168", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_nmda), 256*sizeof(_array_Core_1_I_g_syn_nmda[0]));
		outfile__array_Core_1_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_ampa;
	outfile__array_Core_1_I_syn_ampa.open("results/_array_Core_1_I_syn_ampa_2895289173413978188", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_syn_ampa), 256*sizeof(_array_Core_1_I_syn_ampa[0]));
		outfile__array_Core_1_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_gaba_a;
	outfile__array_Core_1_I_syn_gaba_a.open("results/_array_Core_1_I_syn_gaba_a_414404053718924654", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_syn_gaba_a), 256*sizeof(_array_Core_1_I_syn_gaba_a[0]));
		outfile__array_Core_1_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_gaba_b;
	outfile__array_Core_1_I_syn_gaba_b.open("results/_array_Core_1_I_syn_gaba_b_-6465710873177421519", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_syn_gaba_b), 256*sizeof(_array_Core_1_I_syn_gaba_b[0]));
		outfile__array_Core_1_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_nmda;
	outfile__array_Core_1_I_syn_nmda.open("results/_array_Core_1_I_syn_nmda_-8487589789920157362", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_syn_nmda), 256*sizeof(_array_Core_1_I_syn_nmda[0]));
		outfile__array_Core_1_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_ampa;
	outfile__array_Core_1_I_tau_syn_ampa.open("results/_array_Core_1_I_tau_syn_ampa_3929379428907717987", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_ampa), 256*sizeof(_array_Core_1_I_tau_syn_ampa[0]));
		outfile__array_Core_1_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_gaba_a;
	outfile__array_Core_1_I_tau_syn_gaba_a.open("results/_array_Core_1_I_tau_syn_gaba_a_-1373684887255531887", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_gaba_a), 256*sizeof(_array_Core_1_I_tau_syn_gaba_a[0]));
		outfile__array_Core_1_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_gaba_b;
	outfile__array_Core_1_I_tau_syn_gaba_b.open("results/_array_Core_1_I_tau_syn_gaba_b_1309270886363019582", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_gaba_b), 256*sizeof(_array_Core_1_I_tau_syn_gaba_b[0]));
		outfile__array_Core_1_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_nmda;
	outfile__array_Core_1_I_tau_syn_nmda.open("results/_array_Core_1_I_tau_syn_nmda_8545844984325446912", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_nmda), 256*sizeof(_array_Core_1_I_tau_syn_nmda[0]));
		outfile__array_Core_1_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_ampa;
	outfile__array_Core_1_I_wo_syn_ampa.open("results/_array_Core_1_I_wo_syn_ampa_-5885481256485984783", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_ampa), 256*sizeof(_array_Core_1_I_wo_syn_ampa[0]));
		outfile__array_Core_1_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_gaba_a;
	outfile__array_Core_1_I_wo_syn_gaba_a.open("results/_array_Core_1_I_wo_syn_gaba_a_6919130665974404129", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_gaba_a), 256*sizeof(_array_Core_1_I_wo_syn_gaba_a[0]));
		outfile__array_Core_1_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_gaba_b;
	outfile__array_Core_1_I_wo_syn_gaba_b.open("results/_array_Core_1_I_wo_syn_gaba_b_6242718606892161170", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_gaba_b), 256*sizeof(_array_Core_1_I_wo_syn_gaba_b[0]));
		outfile__array_Core_1_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_nmda;
	outfile__array_Core_1_I_wo_syn_nmda.open("results/_array_Core_1_I_wo_syn_nmda_1555225231812431441", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_nmda), 256*sizeof(_array_Core_1_I_wo_syn_nmda[0]));
		outfile__array_Core_1_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_Iagain;
	outfile__array_Core_1_Iagain.open("results/_array_Core_1_Iagain_-7278384631605410175", ios::binary | ios::out);
	if(outfile__array_Core_1_Iagain.is_open())
	{
		outfile__array_Core_1_Iagain.write(reinterpret_cast<char*>(_array_Core_1_Iagain), 1*sizeof(_array_Core_1_Iagain[0]));
		outfile__array_Core_1_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iagain." << endl;
	}
	ofstream outfile__array_Core_1_Iahp;
	outfile__array_Core_1_Iahp.open("results/_array_Core_1_Iahp_3143638960784583841", ios::binary | ios::out);
	if(outfile__array_Core_1_Iahp.is_open())
	{
		outfile__array_Core_1_Iahp.write(reinterpret_cast<char*>(_array_Core_1_Iahp), 256*sizeof(_array_Core_1_Iahp[0]));
		outfile__array_Core_1_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iahp." << endl;
	}
	ofstream outfile__array_Core_1_Ianorm;
	outfile__array_Core_1_Ianorm.open("results/_array_Core_1_Ianorm_5885580668905264992", ios::binary | ios::out);
	if(outfile__array_Core_1_Ianorm.is_open())
	{
		outfile__array_Core_1_Ianorm.write(reinterpret_cast<char*>(_array_Core_1_Ianorm), 1*sizeof(_array_Core_1_Ianorm[0]));
		outfile__array_Core_1_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ianorm." << endl;
	}
	ofstream outfile__array_Core_1_Iath;
	outfile__array_Core_1_Iath.open("results/_array_Core_1_Iath_-2735185349514560540", ios::binary | ios::out);
	if(outfile__array_Core_1_Iath.is_open())
	{
		outfile__array_Core_1_Iath.write(reinterpret_cast<char*>(_array_Core_1_Iath), 1*sizeof(_array_Core_1_Iath[0]));
		outfile__array_Core_1_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iath." << endl;
	}
	ofstream outfile__array_Core_1_Ica;
	outfile__array_Core_1_Ica.open("results/_array_Core_1_Ica_5616180601270750478", ios::binary | ios::out);
	if(outfile__array_Core_1_Ica.is_open())
	{
		outfile__array_Core_1_Ica.write(reinterpret_cast<char*>(_array_Core_1_Ica), 256*sizeof(_array_Core_1_Ica[0]));
		outfile__array_Core_1_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ica." << endl;
	}
	ofstream outfile__array_Core_1_Iconst;
	outfile__array_Core_1_Iconst.open("results/_array_Core_1_Iconst_8378469670305276136", ios::binary | ios::out);
	if(outfile__array_Core_1_Iconst.is_open())
	{
		outfile__array_Core_1_Iconst.write(reinterpret_cast<char*>(_array_Core_1_Iconst), 256*sizeof(_array_Core_1_Iconst[0]));
		outfile__array_Core_1_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iconst." << endl;
	}
	ofstream outfile__array_Core_1_Imem;
	outfile__array_Core_1_Imem.open("results/_array_Core_1_Imem_-8211410816172166950", ios::binary | ios::out);
	if(outfile__array_Core_1_Imem.is_open())
	{
		outfile__array_Core_1_Imem.write(reinterpret_cast<char*>(_array_Core_1_Imem), 256*sizeof(_array_Core_1_Imem[0]));
		outfile__array_Core_1_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Imem." << endl;
	}
	ofstream outfile__array_Core_1_Io;
	outfile__array_Core_1_Io.open("results/_array_Core_1_Io_-378783770484676881", ios::binary | ios::out);
	if(outfile__array_Core_1_Io.is_open())
	{
		outfile__array_Core_1_Io.write(reinterpret_cast<char*>(_array_Core_1_Io), 1*sizeof(_array_Core_1_Io[0]));
		outfile__array_Core_1_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Io." << endl;
	}
	ofstream outfile__array_Core_1_Ireset;
	outfile__array_Core_1_Ireset.open("results/_array_Core_1_Ireset_1287052391771864404", ios::binary | ios::out);
	if(outfile__array_Core_1_Ireset.is_open())
	{
		outfile__array_Core_1_Ireset.write(reinterpret_cast<char*>(_array_Core_1_Ireset), 1*sizeof(_array_Core_1_Ireset[0]));
		outfile__array_Core_1_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ireset." << endl;
	}
	ofstream outfile__array_Core_1_Ishunt;
	outfile__array_Core_1_Ishunt.open("results/_array_Core_1_Ishunt_779336821927697638", ios::binary | ios::out);
	if(outfile__array_Core_1_Ishunt.is_open())
	{
		outfile__array_Core_1_Ishunt.write(reinterpret_cast<char*>(_array_Core_1_Ishunt), 256*sizeof(_array_Core_1_Ishunt[0]));
		outfile__array_Core_1_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ishunt." << endl;
	}
	ofstream outfile__array_Core_1_Ispkthr;
	outfile__array_Core_1_Ispkthr.open("results/_array_Core_1_Ispkthr_1148724162679905756", ios::binary | ios::out);
	if(outfile__array_Core_1_Ispkthr.is_open())
	{
		outfile__array_Core_1_Ispkthr.write(reinterpret_cast<char*>(_array_Core_1_Ispkthr), 1*sizeof(_array_Core_1_Ispkthr[0]));
		outfile__array_Core_1_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_1_Itau;
	outfile__array_Core_1_Itau.open("results/_array_Core_1_Itau_-3249018813695041776", ios::binary | ios::out);
	if(outfile__array_Core_1_Itau.is_open())
	{
		outfile__array_Core_1_Itau.write(reinterpret_cast<char*>(_array_Core_1_Itau), 1*sizeof(_array_Core_1_Itau[0]));
		outfile__array_Core_1_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Itau." << endl;
	}
	ofstream outfile__array_Core_1_Itauahp;
	outfile__array_Core_1_Itauahp.open("results/_array_Core_1_Itauahp_7867344378387680992", ios::binary | ios::out);
	if(outfile__array_Core_1_Itauahp.is_open())
	{
		outfile__array_Core_1_Itauahp.write(reinterpret_cast<char*>(_array_Core_1_Itauahp), 1*sizeof(_array_Core_1_Itauahp[0]));
		outfile__array_Core_1_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Itauahp." << endl;
	}
	ofstream outfile__array_Core_1_Ith;
	outfile__array_Core_1_Ith.open("results/_array_Core_1_Ith_7895555018370593635", ios::binary | ios::out);
	if(outfile__array_Core_1_Ith.is_open())
	{
		outfile__array_Core_1_Ith.write(reinterpret_cast<char*>(_array_Core_1_Ith), 1*sizeof(_array_Core_1_Ith[0]));
		outfile__array_Core_1_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ith." << endl;
	}
	ofstream outfile__array_Core_1_Ithahp;
	outfile__array_Core_1_Ithahp.open("results/_array_Core_1_Ithahp_-4964121358222619076", ios::binary | ios::out);
	if(outfile__array_Core_1_Ithahp.is_open())
	{
		outfile__array_Core_1_Ithahp.write(reinterpret_cast<char*>(_array_Core_1_Ithahp), 1*sizeof(_array_Core_1_Ithahp[0]));
		outfile__array_Core_1_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ithahp." << endl;
	}
	ofstream outfile__array_Core_1_kn;
	outfile__array_Core_1_kn.open("results/_array_Core_1_kn_4310035941621306414", ios::binary | ios::out);
	if(outfile__array_Core_1_kn.is_open())
	{
		outfile__array_Core_1_kn.write(reinterpret_cast<char*>(_array_Core_1_kn), 1*sizeof(_array_Core_1_kn[0]));
		outfile__array_Core_1_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kn." << endl;
	}
	ofstream outfile__array_Core_1_kp;
	outfile__array_Core_1_kp.open("results/_array_Core_1_kp_6382964812605857523", ios::binary | ios::out);
	if(outfile__array_Core_1_kp.is_open())
	{
		outfile__array_Core_1_kp.write(reinterpret_cast<char*>(_array_Core_1_kp), 1*sizeof(_array_Core_1_kp[0]));
		outfile__array_Core_1_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kp." << endl;
	}
	ofstream outfile__array_Core_1_lastspike;
	outfile__array_Core_1_lastspike.open("results/_array_Core_1_lastspike_-6862783833512673266", ios::binary | ios::out);
	if(outfile__array_Core_1_lastspike.is_open())
	{
		outfile__array_Core_1_lastspike.write(reinterpret_cast<char*>(_array_Core_1_lastspike), 256*sizeof(_array_Core_1_lastspike[0]));
		outfile__array_Core_1_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_lastspike." << endl;
	}
	ofstream outfile__array_Core_1_M;
	outfile__array_Core_1_M.open("results/_array_Core_1_M_873678879536348220", ios::binary | ios::out);
	if(outfile__array_Core_1_M.is_open())
	{
		outfile__array_Core_1_M.write(reinterpret_cast<char*>(_array_Core_1_M), 1*sizeof(_array_Core_1_M[0]));
		outfile__array_Core_1_M.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_M." << endl;
	}
	ofstream outfile__array_Core_1_not_refractory;
	outfile__array_Core_1_not_refractory.open("results/_array_Core_1_not_refractory_-6913450789009922316", ios::binary | ios::out);
	if(outfile__array_Core_1_not_refractory.is_open())
	{
		outfile__array_Core_1_not_refractory.write(reinterpret_cast<char*>(_array_Core_1_not_refractory), 256*sizeof(_array_Core_1_not_refractory[0]));
		outfile__array_Core_1_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_not_refractory." << endl;
	}
	ofstream outfile__array_Core_1_refP;
	outfile__array_Core_1_refP.open("results/_array_Core_1_refP_4042707423645945607", ios::binary | ios::out);
	if(outfile__array_Core_1_refP.is_open())
	{
		outfile__array_Core_1_refP.write(reinterpret_cast<char*>(_array_Core_1_refP), 1*sizeof(_array_Core_1_refP[0]));
		outfile__array_Core_1_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_refP." << endl;
	}
	ofstream outfile__array_Core_1_subgroup__sub_idx;
	outfile__array_Core_1_subgroup__sub_idx.open("results/_array_Core_1_subgroup__sub_idx_4615500031145966594", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup__sub_idx), 1*sizeof(_array_Core_1_subgroup__sub_idx[0]));
		outfile__array_Core_1_subgroup__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_tauca;
	outfile__array_Core_1_tauca.open("results/_array_Core_1_tauca_1475684402565945834", ios::binary | ios::out);
	if(outfile__array_Core_1_tauca.is_open())
	{
		outfile__array_Core_1_tauca.write(reinterpret_cast<char*>(_array_Core_1_tauca), 1*sizeof(_array_Core_1_tauca[0]));
		outfile__array_Core_1_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_tauca." << endl;
	}
	ofstream outfile__array_Core_1_taud;
	outfile__array_Core_1_taud.open("results/_array_Core_1_taud_7660318631050667444", ios::binary | ios::out);
	if(outfile__array_Core_1_taud.is_open())
	{
		outfile__array_Core_1_taud.write(reinterpret_cast<char*>(_array_Core_1_taud), 1*sizeof(_array_Core_1_taud[0]));
		outfile__array_Core_1_taud.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_taud." << endl;
	}
	ofstream outfile__array_Core_1_Ut;
	outfile__array_Core_1_Ut.open("results/_array_Core_1_Ut_1087763989298301753", ios::binary | ios::out);
	if(outfile__array_Core_1_Ut.is_open())
	{
		outfile__array_Core_1_Ut.write(reinterpret_cast<char*>(_array_Core_1_Ut), 1*sizeof(_array_Core_1_Ut[0]));
		outfile__array_Core_1_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ut." << endl;
	}
	ofstream outfile__array_Core_2__spikespace;
	outfile__array_Core_2__spikespace.open("results/_array_Core_2__spikespace_8476897779390980199", ios::binary | ios::out);
	if(outfile__array_Core_2__spikespace.is_open())
	{
		outfile__array_Core_2__spikespace.write(reinterpret_cast<char*>(_array_Core_2__spikespace), 257*sizeof(_array_Core_2__spikespace[0]));
		outfile__array_Core_2__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2__spikespace." << endl;
	}
	ofstream outfile__array_Core_2_ahp;
	outfile__array_Core_2_ahp.open("results/_array_Core_2_ahp_-8069640998853719683", ios::binary | ios::out);
	if(outfile__array_Core_2_ahp.is_open())
	{
		outfile__array_Core_2_ahp.write(reinterpret_cast<char*>(_array_Core_2_ahp), 1*sizeof(_array_Core_2_ahp[0]));
		outfile__array_Core_2_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_ahp." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_ampa;
	outfile__array_Core_2_C_syn_ampa.open("results/_array_Core_2_C_syn_ampa_-3612798999851808526", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_ampa.is_open())
	{
		outfile__array_Core_2_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_C_syn_ampa), 256*sizeof(_array_Core_2_C_syn_ampa[0]));
		outfile__array_Core_2_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_gaba_a;
	outfile__array_Core_2_C_syn_gaba_a.open("results/_array_Core_2_C_syn_gaba_a_-5689269796968283240", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_C_syn_gaba_a), 256*sizeof(_array_Core_2_C_syn_gaba_a[0]));
		outfile__array_Core_2_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_gaba_b;
	outfile__array_Core_2_C_syn_gaba_b.open("results/_array_Core_2_C_syn_gaba_b_91237618922376017", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_C_syn_gaba_b), 256*sizeof(_array_Core_2_C_syn_gaba_b[0]));
		outfile__array_Core_2_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_nmda;
	outfile__array_Core_2_C_syn_nmda.open("results/_array_Core_2_C_syn_nmda_-9202818963597777272", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_nmda.is_open())
	{
		outfile__array_Core_2_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_C_syn_nmda), 256*sizeof(_array_Core_2_C_syn_nmda[0]));
		outfile__array_Core_2_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_Cahp;
	outfile__array_Core_2_Cahp.open("results/_array_Core_2_Cahp_2856846403028110448", ios::binary | ios::out);
	if(outfile__array_Core_2_Cahp.is_open())
	{
		outfile__array_Core_2_Cahp.write(reinterpret_cast<char*>(_array_Core_2_Cahp), 1*sizeof(_array_Core_2_Cahp[0]));
		outfile__array_Core_2_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cahp." << endl;
	}
	ofstream outfile__array_Core_2_Cmem;
	outfile__array_Core_2_Cmem.open("results/_array_Core_2_Cmem_-6200804200117174206", ios::binary | ios::out);
	if(outfile__array_Core_2_Cmem.is_open())
	{
		outfile__array_Core_2_Cmem.write(reinterpret_cast<char*>(_array_Core_2_Cmem), 1*sizeof(_array_Core_2_Cmem[0]));
		outfile__array_Core_2_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cmem." << endl;
	}
	ofstream outfile__array_Core_2_D;
	outfile__array_Core_2_D.open("results/_array_Core_2_D_-3786528813191289382", ios::binary | ios::out);
	if(outfile__array_Core_2_D.is_open())
	{
		outfile__array_Core_2_D.write(reinterpret_cast<char*>(_array_Core_2_D), 256*sizeof(_array_Core_2_D[0]));
		outfile__array_Core_2_D.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_D." << endl;
	}
	ofstream outfile__array_Core_2_i;
	outfile__array_Core_2_i.open("results/_array_Core_2_i_5684231840037847627", ios::binary | ios::out);
	if(outfile__array_Core_2_i.is_open())
	{
		outfile__array_Core_2_i.write(reinterpret_cast<char*>(_array_Core_2_i), 256*sizeof(_array_Core_2_i[0]));
		outfile__array_Core_2_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_i." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_ampa;
	outfile__array_Core_2_I_g_syn_ampa.open("results/_array_Core_2_I_g_syn_ampa_3598992437134350112", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_ampa), 256*sizeof(_array_Core_2_I_g_syn_ampa[0]));
		outfile__array_Core_2_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_gaba_a;
	outfile__array_Core_2_I_g_syn_gaba_a.open("results/_array_Core_2_I_g_syn_gaba_a_1493440928751368917", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_gaba_a), 256*sizeof(_array_Core_2_I_g_syn_gaba_a[0]));
		outfile__array_Core_2_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_gaba_b;
	outfile__array_Core_2_I_g_syn_gaba_b.open("results/_array_Core_2_I_g_syn_gaba_b_-5833260324933714002", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_gaba_b), 256*sizeof(_array_Core_2_I_g_syn_gaba_b[0]));
		outfile__array_Core_2_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_nmda;
	outfile__array_Core_2_I_g_syn_nmda.open("results/_array_Core_2_I_g_syn_nmda_-5136166902511889724", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_nmda), 256*sizeof(_array_Core_2_I_g_syn_nmda[0]));
		outfile__array_Core_2_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_ampa;
	outfile__array_Core_2_I_syn_ampa.open("results/_array_Core_2_I_syn_ampa_-5355203274643700948", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_syn_ampa), 256*sizeof(_array_Core_2_I_syn_ampa[0]));
		outfile__array_Core_2_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_gaba_a;
	outfile__array_Core_2_I_syn_gaba_a.open("results/_array_Core_2_I_syn_gaba_a_-7398171501721152307", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_syn_gaba_a), 256*sizeof(_array_Core_2_I_syn_gaba_a[0]));
		outfile__array_Core_2_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_gaba_b;
	outfile__array_Core_2_I_syn_gaba_b.open("results/_array_Core_2_I_syn_gaba_b_1542985071657442454", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_syn_gaba_b), 256*sizeof(_array_Core_2_I_syn_gaba_b[0]));
		outfile__array_Core_2_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_nmda;
	outfile__array_Core_2_I_syn_nmda.open("results/_array_Core_2_I_syn_nmda_2199734226656296039", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_syn_nmda), 256*sizeof(_array_Core_2_I_syn_nmda[0]));
		outfile__array_Core_2_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_ampa;
	outfile__array_Core_2_I_tau_syn_ampa.open("results/_array_Core_2_I_tau_syn_ampa_6594026696274816356", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_ampa), 256*sizeof(_array_Core_2_I_tau_syn_ampa[0]));
		outfile__array_Core_2_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_gaba_a;
	outfile__array_Core_2_I_tau_syn_gaba_a.open("results/_array_Core_2_I_tau_syn_gaba_a_1792176816419285124", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_gaba_a), 256*sizeof(_array_Core_2_I_tau_syn_gaba_a[0]));
		outfile__array_Core_2_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_gaba_b;
	outfile__array_Core_2_I_tau_syn_gaba_b.open("results/_array_Core_2_I_tau_syn_gaba_b_-5476166058716610184", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_gaba_b), 256*sizeof(_array_Core_2_I_tau_syn_gaba_b[0]));
		outfile__array_Core_2_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_nmda;
	outfile__array_Core_2_I_tau_syn_nmda.open("results/_array_Core_2_I_tau_syn_nmda_6794648560547807320", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_nmda), 256*sizeof(_array_Core_2_I_tau_syn_nmda[0]));
		outfile__array_Core_2_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_ampa;
	outfile__array_Core_2_I_wo_syn_ampa.open("results/_array_Core_2_I_wo_syn_ampa_-7246620548454894830", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_ampa), 256*sizeof(_array_Core_2_I_wo_syn_ampa[0]));
		outfile__array_Core_2_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_gaba_a;
	outfile__array_Core_2_I_wo_syn_gaba_a.open("results/_array_Core_2_I_wo_syn_gaba_a_8530781110511095565", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_gaba_a), 256*sizeof(_array_Core_2_I_wo_syn_gaba_a[0]));
		outfile__array_Core_2_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_gaba_b;
	outfile__array_Core_2_I_wo_syn_gaba_b.open("results/_array_Core_2_I_wo_syn_gaba_b_5102516059680135835", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_gaba_b), 256*sizeof(_array_Core_2_I_wo_syn_gaba_b[0]));
		outfile__array_Core_2_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_nmda;
	outfile__array_Core_2_I_wo_syn_nmda.open("results/_array_Core_2_I_wo_syn_nmda_2506664991495683390", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_nmda), 256*sizeof(_array_Core_2_I_wo_syn_nmda[0]));
		outfile__array_Core_2_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_Iagain;
	outfile__array_Core_2_Iagain.open("results/_array_Core_2_Iagain_-6985996272340788991", ios::binary | ios::out);
	if(outfile__array_Core_2_Iagain.is_open())
	{
		outfile__array_Core_2_Iagain.write(reinterpret_cast<char*>(_array_Core_2_Iagain), 1*sizeof(_array_Core_2_Iagain[0]));
		outfile__array_Core_2_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iagain." << endl;
	}
	ofstream outfile__array_Core_2_Iahp;
	outfile__array_Core_2_Iahp.open("results/_array_Core_2_Iahp_91478775813736275", ios::binary | ios::out);
	if(outfile__array_Core_2_Iahp.is_open())
	{
		outfile__array_Core_2_Iahp.write(reinterpret_cast<char*>(_array_Core_2_Iahp), 256*sizeof(_array_Core_2_Iahp[0]));
		outfile__array_Core_2_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iahp." << endl;
	}
	ofstream outfile__array_Core_2_Ianorm;
	outfile__array_Core_2_Ianorm.open("results/_array_Core_2_Ianorm_-55050403030412512", ios::binary | ios::out);
	if(outfile__array_Core_2_Ianorm.is_open())
	{
		outfile__array_Core_2_Ianorm.write(reinterpret_cast<char*>(_array_Core_2_Ianorm), 1*sizeof(_array_Core_2_Ianorm[0]));
		outfile__array_Core_2_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ianorm." << endl;
	}
	ofstream outfile__array_Core_2_Iath;
	outfile__array_Core_2_Iath.open("results/_array_Core_2_Iath_-4457506301083514317", ios::binary | ios::out);
	if(outfile__array_Core_2_Iath.is_open())
	{
		outfile__array_Core_2_Iath.write(reinterpret_cast<char*>(_array_Core_2_Iath), 1*sizeof(_array_Core_2_Iath[0]));
		outfile__array_Core_2_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iath." << endl;
	}
	ofstream outfile__array_Core_2_Ica;
	outfile__array_Core_2_Ica.open("results/_array_Core_2_Ica_-2081600261268744703", ios::binary | ios::out);
	if(outfile__array_Core_2_Ica.is_open())
	{
		outfile__array_Core_2_Ica.write(reinterpret_cast<char*>(_array_Core_2_Ica), 256*sizeof(_array_Core_2_Ica[0]));
		outfile__array_Core_2_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ica." << endl;
	}
	ofstream outfile__array_Core_2_Iconst;
	outfile__array_Core_2_Iconst.open("results/_array_Core_2_Iconst_581557334941459626", ios::binary | ios::out);
	if(outfile__array_Core_2_Iconst.is_open())
	{
		outfile__array_Core_2_Iconst.write(reinterpret_cast<char*>(_array_Core_2_Iconst), 256*sizeof(_array_Core_2_Iconst[0]));
		outfile__array_Core_2_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iconst." << endl;
	}
	ofstream outfile__array_Core_2_Imem;
	outfile__array_Core_2_Imem.open("results/_array_Core_2_Imem_4195461784861137329", ios::binary | ios::out);
	if(outfile__array_Core_2_Imem.is_open())
	{
		outfile__array_Core_2_Imem.write(reinterpret_cast<char*>(_array_Core_2_Imem), 256*sizeof(_array_Core_2_Imem[0]));
		outfile__array_Core_2_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Imem." << endl;
	}
	ofstream outfile__array_Core_2_Io;
	outfile__array_Core_2_Io.open("results/_array_Core_2_Io_1964483254601468199", ios::binary | ios::out);
	if(outfile__array_Core_2_Io.is_open())
	{
		outfile__array_Core_2_Io.write(reinterpret_cast<char*>(_array_Core_2_Io), 1*sizeof(_array_Core_2_Io[0]));
		outfile__array_Core_2_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Io." << endl;
	}
	ofstream outfile__array_Core_2_Ireset;
	outfile__array_Core_2_Ireset.open("results/_array_Core_2_Ireset_147735837548897641", ios::binary | ios::out);
	if(outfile__array_Core_2_Ireset.is_open())
	{
		outfile__array_Core_2_Ireset.write(reinterpret_cast<char*>(_array_Core_2_Ireset), 1*sizeof(_array_Core_2_Ireset[0]));
		outfile__array_Core_2_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ireset." << endl;
	}
	ofstream outfile__array_Core_2_Ishunt;
	outfile__array_Core_2_Ishunt.open("results/_array_Core_2_Ishunt_7313831264730493399", ios::binary | ios::out);
	if(outfile__array_Core_2_Ishunt.is_open())
	{
		outfile__array_Core_2_Ishunt.write(reinterpret_cast<char*>(_array_Core_2_Ishunt), 256*sizeof(_array_Core_2_Ishunt[0]));
		outfile__array_Core_2_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ishunt." << endl;
	}
	ofstream outfile__array_Core_2_Ispkthr;
	outfile__array_Core_2_Ispkthr.open("results/_array_Core_2_Ispkthr_-5342451790400018318", ios::binary | ios::out);
	if(outfile__array_Core_2_Ispkthr.is_open())
	{
		outfile__array_Core_2_Ispkthr.write(reinterpret_cast<char*>(_array_Core_2_Ispkthr), 1*sizeof(_array_Core_2_Ispkthr[0]));
		outfile__array_Core_2_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_2_Itau;
	outfile__array_Core_2_Itau.open("results/_array_Core_2_Itau_2169227490809023620", ios::binary | ios::out);
	if(outfile__array_Core_2_Itau.is_open())
	{
		outfile__array_Core_2_Itau.write(reinterpret_cast<char*>(_array_Core_2_Itau), 1*sizeof(_array_Core_2_Itau[0]));
		outfile__array_Core_2_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Itau." << endl;
	}
	ofstream outfile__array_Core_2_Itauahp;
	outfile__array_Core_2_Itauahp.open("results/_array_Core_2_Itauahp_-2930852661748934363", ios::binary | ios::out);
	if(outfile__array_Core_2_Itauahp.is_open())
	{
		outfile__array_Core_2_Itauahp.write(reinterpret_cast<char*>(_array_Core_2_Itauahp), 1*sizeof(_array_Core_2_Itauahp[0]));
		outfile__array_Core_2_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Itauahp." << endl;
	}
	ofstream outfile__array_Core_2_Ith;
	outfile__array_Core_2_Ith.open("results/_array_Core_2_Ith_-1532265737021252576", ios::binary | ios::out);
	if(outfile__array_Core_2_Ith.is_open())
	{
		outfile__array_Core_2_Ith.write(reinterpret_cast<char*>(_array_Core_2_Ith), 1*sizeof(_array_Core_2_Ith[0]));
		outfile__array_Core_2_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ith." << endl;
	}
	ofstream outfile__array_Core_2_Ithahp;
	outfile__array_Core_2_Ithahp.open("results/_array_Core_2_Ithahp_6916234380315479901", ios::binary | ios::out);
	if(outfile__array_Core_2_Ithahp.is_open())
	{
		outfile__array_Core_2_Ithahp.write(reinterpret_cast<char*>(_array_Core_2_Ithahp), 1*sizeof(_array_Core_2_Ithahp[0]));
		outfile__array_Core_2_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ithahp." << endl;
	}
	ofstream outfile__array_Core_2_kn;
	outfile__array_Core_2_kn.open("results/_array_Core_2_kn_2898169710424948278", ios::binary | ios::out);
	if(outfile__array_Core_2_kn.is_open())
	{
		outfile__array_Core_2_kn.write(reinterpret_cast<char*>(_array_Core_2_kn), 1*sizeof(_array_Core_2_kn[0]));
		outfile__array_Core_2_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kn." << endl;
	}
	ofstream outfile__array_Core_2_kp;
	outfile__array_Core_2_kp.open("results/_array_Core_2_kp_-3915224019554165408", ios::binary | ios::out);
	if(outfile__array_Core_2_kp.is_open())
	{
		outfile__array_Core_2_kp.write(reinterpret_cast<char*>(_array_Core_2_kp), 1*sizeof(_array_Core_2_kp[0]));
		outfile__array_Core_2_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kp." << endl;
	}
	ofstream outfile__array_Core_2_lastspike;
	outfile__array_Core_2_lastspike.open("results/_array_Core_2_lastspike_706916409426293523", ios::binary | ios::out);
	if(outfile__array_Core_2_lastspike.is_open())
	{
		outfile__array_Core_2_lastspike.write(reinterpret_cast<char*>(_array_Core_2_lastspike), 256*sizeof(_array_Core_2_lastspike[0]));
		outfile__array_Core_2_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_lastspike." << endl;
	}
	ofstream outfile__array_Core_2_M;
	outfile__array_Core_2_M.open("results/_array_Core_2_M_5734173210238461585", ios::binary | ios::out);
	if(outfile__array_Core_2_M.is_open())
	{
		outfile__array_Core_2_M.write(reinterpret_cast<char*>(_array_Core_2_M), 1*sizeof(_array_Core_2_M[0]));
		outfile__array_Core_2_M.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_M." << endl;
	}
	ofstream outfile__array_Core_2_not_refractory;
	outfile__array_Core_2_not_refractory.open("results/_array_Core_2_not_refractory_-4193659685532234525", ios::binary | ios::out);
	if(outfile__array_Core_2_not_refractory.is_open())
	{
		outfile__array_Core_2_not_refractory.write(reinterpret_cast<char*>(_array_Core_2_not_refractory), 256*sizeof(_array_Core_2_not_refractory[0]));
		outfile__array_Core_2_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_not_refractory." << endl;
	}
	ofstream outfile__array_Core_2_refP;
	outfile__array_Core_2_refP.open("results/_array_Core_2_refP_5681400307677490278", ios::binary | ios::out);
	if(outfile__array_Core_2_refP.is_open())
	{
		outfile__array_Core_2_refP.write(reinterpret_cast<char*>(_array_Core_2_refP), 1*sizeof(_array_Core_2_refP[0]));
		outfile__array_Core_2_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_refP." << endl;
	}
	ofstream outfile__array_Core_2_tauca;
	outfile__array_Core_2_tauca.open("results/_array_Core_2_tauca_-8358978408704490099", ios::binary | ios::out);
	if(outfile__array_Core_2_tauca.is_open())
	{
		outfile__array_Core_2_tauca.write(reinterpret_cast<char*>(_array_Core_2_tauca), 1*sizeof(_array_Core_2_tauca[0]));
		outfile__array_Core_2_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_tauca." << endl;
	}
	ofstream outfile__array_Core_2_taud;
	outfile__array_Core_2_taud.open("results/_array_Core_2_taud_-2325841834574756935", ios::binary | ios::out);
	if(outfile__array_Core_2_taud.is_open())
	{
		outfile__array_Core_2_taud.write(reinterpret_cast<char*>(_array_Core_2_taud), 1*sizeof(_array_Core_2_taud[0]));
		outfile__array_Core_2_taud.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_taud." << endl;
	}
	ofstream outfile__array_Core_2_Ut;
	outfile__array_Core_2_Ut.open("results/_array_Core_2_Ut_7571498822539366712", ios::binary | ios::out);
	if(outfile__array_Core_2_Ut.is_open())
	{
		outfile__array_Core_2_Ut.write(reinterpret_cast<char*>(_array_Core_2_Ut), 1*sizeof(_array_Core_2_Ut[0]));
		outfile__array_Core_2_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ut." << endl;
	}
	ofstream outfile__array_Core_3__spikespace;
	outfile__array_Core_3__spikespace.open("results/_array_Core_3__spikespace_4944528151478945880", ios::binary | ios::out);
	if(outfile__array_Core_3__spikespace.is_open())
	{
		outfile__array_Core_3__spikespace.write(reinterpret_cast<char*>(_array_Core_3__spikespace), 257*sizeof(_array_Core_3__spikespace[0]));
		outfile__array_Core_3__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3__spikespace." << endl;
	}
	ofstream outfile__array_Core_3_ahp;
	outfile__array_Core_3_ahp.open("results/_array_Core_3_ahp_-2974452849942254819", ios::binary | ios::out);
	if(outfile__array_Core_3_ahp.is_open())
	{
		outfile__array_Core_3_ahp.write(reinterpret_cast<char*>(_array_Core_3_ahp), 1*sizeof(_array_Core_3_ahp[0]));
		outfile__array_Core_3_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_ahp." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_ampa;
	outfile__array_Core_3_C_syn_ampa.open("results/_array_Core_3_C_syn_ampa_-6429257536217284651", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_ampa.is_open())
	{
		outfile__array_Core_3_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_C_syn_ampa), 256*sizeof(_array_Core_3_C_syn_ampa[0]));
		outfile__array_Core_3_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_gaba_a;
	outfile__array_Core_3_C_syn_gaba_a.open("results/_array_Core_3_C_syn_gaba_a_-8501415424515461543", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_C_syn_gaba_a), 256*sizeof(_array_Core_3_C_syn_gaba_a[0]));
		outfile__array_Core_3_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_gaba_b;
	outfile__array_Core_3_C_syn_gaba_b.open("results/_array_Core_3_C_syn_gaba_b_9069101358554701966", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_C_syn_gaba_b), 256*sizeof(_array_Core_3_C_syn_gaba_b[0]));
		outfile__array_Core_3_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_nmda;
	outfile__array_Core_3_C_syn_nmda.open("results/_array_Core_3_C_syn_nmda_828770894586084459", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_nmda.is_open())
	{
		outfile__array_Core_3_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_C_syn_nmda), 256*sizeof(_array_Core_3_C_syn_nmda[0]));
		outfile__array_Core_3_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_Cahp;
	outfile__array_Core_3_Cahp.open("results/_array_Core_3_Cahp_7924836385986534679", ios::binary | ios::out);
	if(outfile__array_Core_3_Cahp.is_open())
	{
		outfile__array_Core_3_Cahp.write(reinterpret_cast<char*>(_array_Core_3_Cahp), 1*sizeof(_array_Core_3_Cahp[0]));
		outfile__array_Core_3_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cahp." << endl;
	}
	ofstream outfile__array_Core_3_Cmem;
	outfile__array_Core_3_Cmem.open("results/_array_Core_3_Cmem_4153121678515039183", ios::binary | ios::out);
	if(outfile__array_Core_3_Cmem.is_open())
	{
		outfile__array_Core_3_Cmem.write(reinterpret_cast<char*>(_array_Core_3_Cmem), 1*sizeof(_array_Core_3_Cmem[0]));
		outfile__array_Core_3_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cmem." << endl;
	}
	ofstream outfile__array_Core_3_D;
	outfile__array_Core_3_D.open("results/_array_Core_3_D_8064284163708910528", ios::binary | ios::out);
	if(outfile__array_Core_3_D.is_open())
	{
		outfile__array_Core_3_D.write(reinterpret_cast<char*>(_array_Core_3_D), 256*sizeof(_array_Core_3_D[0]));
		outfile__array_Core_3_D.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_D." << endl;
	}
	ofstream outfile__array_Core_3_i;
	outfile__array_Core_3_i.open("results/_array_Core_3_i_-8510169832908356207", ios::binary | ios::out);
	if(outfile__array_Core_3_i.is_open())
	{
		outfile__array_Core_3_i.write(reinterpret_cast<char*>(_array_Core_3_i), 256*sizeof(_array_Core_3_i[0]));
		outfile__array_Core_3_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_i." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_ampa;
	outfile__array_Core_3_I_g_syn_ampa.open("results/_array_Core_3_I_g_syn_ampa_6363767577002324064", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_ampa), 256*sizeof(_array_Core_3_I_g_syn_ampa[0]));
		outfile__array_Core_3_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_gaba_a;
	outfile__array_Core_3_I_g_syn_gaba_a.open("results/_array_Core_3_I_g_syn_gaba_a_2300439627073056610", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_gaba_a), 256*sizeof(_array_Core_3_I_g_syn_gaba_a[0]));
		outfile__array_Core_3_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_gaba_b;
	outfile__array_Core_3_I_g_syn_gaba_b.open("results/_array_Core_3_I_g_syn_gaba_b_7394052013799300638", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_gaba_b), 256*sizeof(_array_Core_3_I_g_syn_gaba_b[0]));
		outfile__array_Core_3_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_nmda;
	outfile__array_Core_3_I_g_syn_nmda.open("results/_array_Core_3_I_g_syn_nmda_4456358324677490759", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_nmda), 256*sizeof(_array_Core_3_I_g_syn_nmda[0]));
		outfile__array_Core_3_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_ampa;
	outfile__array_Core_3_I_syn_ampa.open("results/_array_Core_3_I_syn_ampa_5108622846121796183", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_syn_ampa), 256*sizeof(_array_Core_3_I_syn_ampa[0]));
		outfile__array_Core_3_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_gaba_a;
	outfile__array_Core_3_I_syn_gaba_a.open("results/_array_Core_3_I_syn_gaba_a_-2654042254589565785", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_syn_gaba_a), 256*sizeof(_array_Core_3_I_syn_gaba_a[0]));
		outfile__array_Core_3_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_gaba_b;
	outfile__array_Core_3_I_syn_gaba_b.open("results/_array_Core_3_I_syn_gaba_b_3663837084358425424", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_syn_gaba_b), 256*sizeof(_array_Core_3_I_syn_gaba_b[0]));
		outfile__array_Core_3_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_nmda;
	outfile__array_Core_3_I_syn_nmda.open("results/_array_Core_3_I_syn_nmda_-2343442676615308521", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_syn_nmda), 256*sizeof(_array_Core_3_I_syn_nmda[0]));
		outfile__array_Core_3_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_ampa;
	outfile__array_Core_3_I_tau_syn_ampa.open("results/_array_Core_3_I_tau_syn_ampa_-3160055577161759554", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_ampa), 256*sizeof(_array_Core_3_I_tau_syn_ampa[0]));
		outfile__array_Core_3_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_gaba_a;
	outfile__array_Core_3_I_tau_syn_gaba_a.open("results/_array_Core_3_I_tau_syn_gaba_a_1639328774917631778", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_gaba_a), 256*sizeof(_array_Core_3_I_tau_syn_gaba_a[0]));
		outfile__array_Core_3_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_gaba_b;
	outfile__array_Core_3_I_tau_syn_gaba_b.open("results/_array_Core_3_I_tau_syn_gaba_b_-9196649362337246711", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_gaba_b), 256*sizeof(_array_Core_3_I_tau_syn_gaba_b[0]));
		outfile__array_Core_3_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_nmda;
	outfile__array_Core_3_I_tau_syn_nmda.open("results/_array_Core_3_I_tau_syn_nmda_832155166152058668", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_nmda), 256*sizeof(_array_Core_3_I_tau_syn_nmda[0]));
		outfile__array_Core_3_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_ampa;
	outfile__array_Core_3_I_wo_syn_ampa.open("results/_array_Core_3_I_wo_syn_ampa_-2884861365617358121", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_ampa), 256*sizeof(_array_Core_3_I_wo_syn_ampa[0]));
		outfile__array_Core_3_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_gaba_a;
	outfile__array_Core_3_I_wo_syn_gaba_a.open("results/_array_Core_3_I_wo_syn_gaba_a_1906088131256952766", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_gaba_a), 256*sizeof(_array_Core_3_I_wo_syn_gaba_a[0]));
		outfile__array_Core_3_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_gaba_b;
	outfile__array_Core_3_I_wo_syn_gaba_b.open("results/_array_Core_3_I_wo_syn_gaba_b_-4604168322060657265", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_gaba_b), 256*sizeof(_array_Core_3_I_wo_syn_gaba_b[0]));
		outfile__array_Core_3_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_nmda;
	outfile__array_Core_3_I_wo_syn_nmda.open("results/_array_Core_3_I_wo_syn_nmda_720747295600555976", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_nmda), 256*sizeof(_array_Core_3_I_wo_syn_nmda[0]));
		outfile__array_Core_3_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_Iagain;
	outfile__array_Core_3_Iagain.open("results/_array_Core_3_Iagain_-9072918608356148201", ios::binary | ios::out);
	if(outfile__array_Core_3_Iagain.is_open())
	{
		outfile__array_Core_3_Iagain.write(reinterpret_cast<char*>(_array_Core_3_Iagain), 1*sizeof(_array_Core_3_Iagain[0]));
		outfile__array_Core_3_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iagain." << endl;
	}
	ofstream outfile__array_Core_3_Iahp;
	outfile__array_Core_3_Iahp.open("results/_array_Core_3_Iahp_-3712473157155787667", ios::binary | ios::out);
	if(outfile__array_Core_3_Iahp.is_open())
	{
		outfile__array_Core_3_Iahp.write(reinterpret_cast<char*>(_array_Core_3_Iahp), 256*sizeof(_array_Core_3_Iahp[0]));
		outfile__array_Core_3_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iahp." << endl;
	}
	ofstream outfile__array_Core_3_Ianorm;
	outfile__array_Core_3_Ianorm.open("results/_array_Core_3_Ianorm_4434610584862737613", ios::binary | ios::out);
	if(outfile__array_Core_3_Ianorm.is_open())
	{
		outfile__array_Core_3_Ianorm.write(reinterpret_cast<char*>(_array_Core_3_Ianorm), 1*sizeof(_array_Core_3_Ianorm[0]));
		outfile__array_Core_3_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ianorm." << endl;
	}
	ofstream outfile__array_Core_3_Iath;
	outfile__array_Core_3_Iath.open("results/_array_Core_3_Iath_-931086634945336597", ios::binary | ios::out);
	if(outfile__array_Core_3_Iath.is_open())
	{
		outfile__array_Core_3_Iath.write(reinterpret_cast<char*>(_array_Core_3_Iath), 1*sizeof(_array_Core_3_Iath[0]));
		outfile__array_Core_3_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iath." << endl;
	}
	ofstream outfile__array_Core_3_Ica;
	outfile__array_Core_3_Ica.open("results/_array_Core_3_Ica_4074237722519565690", ios::binary | ios::out);
	if(outfile__array_Core_3_Ica.is_open())
	{
		outfile__array_Core_3_Ica.write(reinterpret_cast<char*>(_array_Core_3_Ica), 256*sizeof(_array_Core_3_Ica[0]));
		outfile__array_Core_3_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ica." << endl;
	}
	ofstream outfile__array_Core_3_Iconst;
	outfile__array_Core_3_Iconst.open("results/_array_Core_3_Iconst_7221137430701088566", ios::binary | ios::out);
	if(outfile__array_Core_3_Iconst.is_open())
	{
		outfile__array_Core_3_Iconst.write(reinterpret_cast<char*>(_array_Core_3_Iconst), 256*sizeof(_array_Core_3_Iconst[0]));
		outfile__array_Core_3_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iconst." << endl;
	}
	ofstream outfile__array_Core_3_Imem;
	outfile__array_Core_3_Imem.open("results/_array_Core_3_Imem_-2923170791213763710", ios::binary | ios::out);
	if(outfile__array_Core_3_Imem.is_open())
	{
		outfile__array_Core_3_Imem.write(reinterpret_cast<char*>(_array_Core_3_Imem), 256*sizeof(_array_Core_3_Imem[0]));
		outfile__array_Core_3_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Imem." << endl;
	}
	ofstream outfile__array_Core_3_Io;
	outfile__array_Core_3_Io.open("results/_array_Core_3_Io_2321071572619867594", ios::binary | ios::out);
	if(outfile__array_Core_3_Io.is_open())
	{
		outfile__array_Core_3_Io.write(reinterpret_cast<char*>(_array_Core_3_Io), 1*sizeof(_array_Core_3_Io[0]));
		outfile__array_Core_3_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Io." << endl;
	}
	ofstream outfile__array_Core_3_Ireset;
	outfile__array_Core_3_Ireset.open("results/_array_Core_3_Ireset_2380138522381602428", ios::binary | ios::out);
	if(outfile__array_Core_3_Ireset.is_open())
	{
		outfile__array_Core_3_Ireset.write(reinterpret_cast<char*>(_array_Core_3_Ireset), 1*sizeof(_array_Core_3_Ireset[0]));
		outfile__array_Core_3_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ireset." << endl;
	}
	ofstream outfile__array_Core_3_Ishunt;
	outfile__array_Core_3_Ishunt.open("results/_array_Core_3_Ishunt_-6376894375979311882", ios::binary | ios::out);
	if(outfile__array_Core_3_Ishunt.is_open())
	{
		outfile__array_Core_3_Ishunt.write(reinterpret_cast<char*>(_array_Core_3_Ishunt), 256*sizeof(_array_Core_3_Ishunt[0]));
		outfile__array_Core_3_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ishunt." << endl;
	}
	ofstream outfile__array_Core_3_Ispkthr;
	outfile__array_Core_3_Ispkthr.open("results/_array_Core_3_Ispkthr_1058635043676250828", ios::binary | ios::out);
	if(outfile__array_Core_3_Ispkthr.is_open())
	{
		outfile__array_Core_3_Ispkthr.write(reinterpret_cast<char*>(_array_Core_3_Ispkthr), 1*sizeof(_array_Core_3_Ispkthr[0]));
		outfile__array_Core_3_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_3_Itau;
	outfile__array_Core_3_Itau.open("results/_array_Core_3_Itau_8024969542061135059", ios::binary | ios::out);
	if(outfile__array_Core_3_Itau.is_open())
	{
		outfile__array_Core_3_Itau.write(reinterpret_cast<char*>(_array_Core_3_Itau), 1*sizeof(_array_Core_3_Itau[0]));
		outfile__array_Core_3_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Itau." << endl;
	}
	ofstream outfile__array_Core_3_Itauahp;
	outfile__array_Core_3_Itauahp.open("results/_array_Core_3_Itauahp_-4701450187462475469", ios::binary | ios::out);
	if(outfile__array_Core_3_Itauahp.is_open())
	{
		outfile__array_Core_3_Itauahp.write(reinterpret_cast<char*>(_array_Core_3_Itauahp), 1*sizeof(_array_Core_3_Itauahp[0]));
		outfile__array_Core_3_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Itauahp." << endl;
	}
	ofstream outfile__array_Core_3_Ith;
	outfile__array_Core_3_Ith.open("results/_array_Core_3_Ith_2101782726768628313", ios::binary | ios::out);
	if(outfile__array_Core_3_Ith.is_open())
	{
		outfile__array_Core_3_Ith.write(reinterpret_cast<char*>(_array_Core_3_Ith), 1*sizeof(_array_Core_3_Ith[0]));
		outfile__array_Core_3_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ith." << endl;
	}
	ofstream outfile__array_Core_3_Ithahp;
	outfile__array_Core_3_Ithahp.open("results/_array_Core_3_Ithahp_-7215196570812955028", ios::binary | ios::out);
	if(outfile__array_Core_3_Ithahp.is_open())
	{
		outfile__array_Core_3_Ithahp.write(reinterpret_cast<char*>(_array_Core_3_Ithahp), 1*sizeof(_array_Core_3_Ithahp[0]));
		outfile__array_Core_3_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ithahp." << endl;
	}
	ofstream outfile__array_Core_3_kn;
	outfile__array_Core_3_kn.open("results/_array_Core_3_kn_5366942845313535097", ios::binary | ios::out);
	if(outfile__array_Core_3_kn.is_open())
	{
		outfile__array_Core_3_kn.write(reinterpret_cast<char*>(_array_Core_3_kn), 1*sizeof(_array_Core_3_kn[0]));
		outfile__array_Core_3_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kn." << endl;
	}
	ofstream outfile__array_Core_3_kp;
	outfile__array_Core_3_kp.open("results/_array_Core_3_kp_2265987873465902116", ios::binary | ios::out);
	if(outfile__array_Core_3_kp.is_open())
	{
		outfile__array_Core_3_kp.write(reinterpret_cast<char*>(_array_Core_3_kp), 1*sizeof(_array_Core_3_kp[0]));
		outfile__array_Core_3_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kp." << endl;
	}
	ofstream outfile__array_Core_3_lastspike;
	outfile__array_Core_3_lastspike.open("results/_array_Core_3_lastspike_5959772517051129334", ios::binary | ios::out);
	if(outfile__array_Core_3_lastspike.is_open())
	{
		outfile__array_Core_3_lastspike.write(reinterpret_cast<char*>(_array_Core_3_lastspike), 256*sizeof(_array_Core_3_lastspike[0]));
		outfile__array_Core_3_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_lastspike." << endl;
	}
	ofstream outfile__array_Core_3_M;
	outfile__array_Core_3_M.open("results/_array_Core_3_M_4766383650002458378", ios::binary | ios::out);
	if(outfile__array_Core_3_M.is_open())
	{
		outfile__array_Core_3_M.write(reinterpret_cast<char*>(_array_Core_3_M), 1*sizeof(_array_Core_3_M[0]));
		outfile__array_Core_3_M.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_M." << endl;
	}
	ofstream outfile__array_Core_3_not_refractory;
	outfile__array_Core_3_not_refractory.open("results/_array_Core_3_not_refractory_3809206617764174601", ios::binary | ios::out);
	if(outfile__array_Core_3_not_refractory.is_open())
	{
		outfile__array_Core_3_not_refractory.write(reinterpret_cast<char*>(_array_Core_3_not_refractory), 256*sizeof(_array_Core_3_not_refractory[0]));
		outfile__array_Core_3_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_not_refractory." << endl;
	}
	ofstream outfile__array_Core_3_refP;
	outfile__array_Core_3_refP.open("results/_array_Core_3_refP_-1917219280726123523", ios::binary | ios::out);
	if(outfile__array_Core_3_refP.is_open())
	{
		outfile__array_Core_3_refP.write(reinterpret_cast<char*>(_array_Core_3_refP), 1*sizeof(_array_Core_3_refP[0]));
		outfile__array_Core_3_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_refP." << endl;
	}
	ofstream outfile__array_Core_3_tauca;
	outfile__array_Core_3_tauca.open("results/_array_Core_3_tauca_-7032459647492408052", ios::binary | ios::out);
	if(outfile__array_Core_3_tauca.is_open())
	{
		outfile__array_Core_3_tauca.write(reinterpret_cast<char*>(_array_Core_3_tauca), 1*sizeof(_array_Core_3_tauca[0]));
		outfile__array_Core_3_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_tauca." << endl;
	}
	ofstream outfile__array_Core_3_taud;
	outfile__array_Core_3_taud.open("results/_array_Core_3_taud_-6074331002724702000", ios::binary | ios::out);
	if(outfile__array_Core_3_taud.is_open())
	{
		outfile__array_Core_3_taud.write(reinterpret_cast<char*>(_array_Core_3_taud), 1*sizeof(_array_Core_3_taud[0]));
		outfile__array_Core_3_taud.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_taud." << endl;
	}
	ofstream outfile__array_Core_3_Ut;
	outfile__array_Core_3_Ut.open("results/_array_Core_3_Ut_-8551959725471922047", ios::binary | ios::out);
	if(outfile__array_Core_3_Ut.is_open())
	{
		outfile__array_Core_3_Ut.write(reinterpret_cast<char*>(_array_Core_3_Ut), 1*sizeof(_array_Core_3_Ut[0]));
		outfile__array_Core_3_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ut." << endl;
	}
	ofstream outfile__array_defaultclock_dt;
	outfile__array_defaultclock_dt.open("results/_array_defaultclock_dt_1227710372361127336", ios::binary | ios::out);
	if(outfile__array_defaultclock_dt.is_open())
	{
		outfile__array_defaultclock_dt.write(reinterpret_cast<char*>(_array_defaultclock_dt), 1*sizeof(_array_defaultclock_dt[0]));
		outfile__array_defaultclock_dt.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_dt." << endl;
	}
	ofstream outfile__array_defaultclock_t;
	outfile__array_defaultclock_t.open("results/_array_defaultclock_t_-6249527280364130875", ios::binary | ios::out);
	if(outfile__array_defaultclock_t.is_open())
	{
		outfile__array_defaultclock_t.write(reinterpret_cast<char*>(_array_defaultclock_t), 1*sizeof(_array_defaultclock_t[0]));
		outfile__array_defaultclock_t.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_t." << endl;
	}
	ofstream outfile__array_defaultclock_timestep;
	outfile__array_defaultclock_timestep.open("results/_array_defaultclock_timestep_-5192556415183127821", ios::binary | ios::out);
	if(outfile__array_defaultclock_timestep.is_open())
	{
		outfile__array_defaultclock_timestep.write(reinterpret_cast<char*>(_array_defaultclock_timestep), 1*sizeof(_array_defaultclock_timestep[0]));
		outfile__array_defaultclock_timestep.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_timestep." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator__lastindex;
	outfile__array_InpSpikeGenerator__lastindex.open("results/_array_InpSpikeGenerator__lastindex_-1409752138338035118", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator__lastindex.is_open())
	{
		outfile__array_InpSpikeGenerator__lastindex.write(reinterpret_cast<char*>(_array_InpSpikeGenerator__lastindex), 1*sizeof(_array_InpSpikeGenerator__lastindex[0]));
		outfile__array_InpSpikeGenerator__lastindex.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator__lastindex." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator__period_bins;
	outfile__array_InpSpikeGenerator__period_bins.open("results/_array_InpSpikeGenerator__period_bins_9198791525698592935", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator__period_bins.is_open())
	{
		outfile__array_InpSpikeGenerator__period_bins.write(reinterpret_cast<char*>(_array_InpSpikeGenerator__period_bins), 1*sizeof(_array_InpSpikeGenerator__period_bins[0]));
		outfile__array_InpSpikeGenerator__period_bins.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator__period_bins." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator__spikespace;
	outfile__array_InpSpikeGenerator__spikespace.open("results/_array_InpSpikeGenerator__spikespace_-762943183250107058", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator__spikespace.is_open())
	{
		outfile__array_InpSpikeGenerator__spikespace.write(reinterpret_cast<char*>(_array_InpSpikeGenerator__spikespace), 2*sizeof(_array_InpSpikeGenerator__spikespace[0]));
		outfile__array_InpSpikeGenerator__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator__spikespace." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator_i;
	outfile__array_InpSpikeGenerator_i.open("results/_array_InpSpikeGenerator_i_-1202302292539030054", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator_i.is_open())
	{
		outfile__array_InpSpikeGenerator_i.write(reinterpret_cast<char*>(_array_InpSpikeGenerator_i), 1*sizeof(_array_InpSpikeGenerator_i[0]));
		outfile__array_InpSpikeGenerator_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator_i." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator_period;
	outfile__array_InpSpikeGenerator_period.open("results/_array_InpSpikeGenerator_period_-8651166295683153340", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator_period.is_open())
	{
		outfile__array_InpSpikeGenerator_period.write(reinterpret_cast<char*>(_array_InpSpikeGenerator_period), 1*sizeof(_array_InpSpikeGenerator_period[0]));
		outfile__array_InpSpikeGenerator_period.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator_period." << endl;
	}
	ofstream outfile__array_mon_neuron_input__source_idx;
	outfile__array_mon_neuron_input__source_idx.open("results/_array_mon_neuron_input__source_idx_109166326211143036", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input__source_idx.is_open())
	{
		outfile__array_mon_neuron_input__source_idx.write(reinterpret_cast<char*>(_array_mon_neuron_input__source_idx), 1*sizeof(_array_mon_neuron_input__source_idx[0]));
		outfile__array_mon_neuron_input__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input__source_idx." << endl;
	}
	ofstream outfile__array_mon_neuron_input_count;
	outfile__array_mon_neuron_input_count.open("results/_array_mon_neuron_input_count_-2011617922501617885", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_count.is_open())
	{
		outfile__array_mon_neuron_input_count.write(reinterpret_cast<char*>(_array_mon_neuron_input_count), 1*sizeof(_array_mon_neuron_input_count[0]));
		outfile__array_mon_neuron_input_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_count." << endl;
	}
	ofstream outfile__array_mon_neuron_input_N;
	outfile__array_mon_neuron_input_N.open("results/_array_mon_neuron_input_N_5678263450830268543", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_N.is_open())
	{
		outfile__array_mon_neuron_input_N.write(reinterpret_cast<char*>(_array_mon_neuron_input_N), 1*sizeof(_array_mon_neuron_input_N[0]));
		outfile__array_mon_neuron_input_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_N." << endl;
	}
	ofstream outfile__array_mon_neuron_output__source_idx;
	outfile__array_mon_neuron_output__source_idx.open("results/_array_mon_neuron_output__source_idx_-8320090985126566307", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output__source_idx.is_open())
	{
		outfile__array_mon_neuron_output__source_idx.write(reinterpret_cast<char*>(_array_mon_neuron_output__source_idx), 1*sizeof(_array_mon_neuron_output__source_idx[0]));
		outfile__array_mon_neuron_output__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output__source_idx." << endl;
	}
	ofstream outfile__array_mon_neuron_output_count;
	outfile__array_mon_neuron_output_count.open("results/_array_mon_neuron_output_count_-206027900186587878", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_count.is_open())
	{
		outfile__array_mon_neuron_output_count.write(reinterpret_cast<char*>(_array_mon_neuron_output_count), 1*sizeof(_array_mon_neuron_output_count[0]));
		outfile__array_mon_neuron_output_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_count." << endl;
	}
	ofstream outfile__array_mon_neuron_output_N;
	outfile__array_mon_neuron_output_N.open("results/_array_mon_neuron_output_N_-446740787209736580", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_N.is_open())
	{
		outfile__array_mon_neuron_output_N.write(reinterpret_cast<char*>(_array_mon_neuron_output_N), 1*sizeof(_array_mon_neuron_output_N[0]));
		outfile__array_mon_neuron_output_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_N." << endl;
	}
	ofstream outfile__array_statemonitor_2__indices;
	outfile__array_statemonitor_2__indices.open("results/_array_statemonitor_2__indices_5223254925649252668", ios::binary | ios::out);
	if(outfile__array_statemonitor_2__indices.is_open())
	{
		outfile__array_statemonitor_2__indices.write(reinterpret_cast<char*>(_array_statemonitor_2__indices), 1*sizeof(_array_statemonitor_2__indices[0]));
		outfile__array_statemonitor_2__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2__indices." << endl;
	}
	ofstream outfile__array_statemonitor_2_N;
	outfile__array_statemonitor_2_N.open("results/_array_statemonitor_2_N_5035403160509611250", ios::binary | ios::out);
	if(outfile__array_statemonitor_2_N.is_open())
	{
		outfile__array_statemonitor_2_N.write(reinterpret_cast<char*>(_array_statemonitor_2_N), 1*sizeof(_array_statemonitor_2_N[0]));
		outfile__array_statemonitor_2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2_N." << endl;
	}
	ofstream outfile__array_statemonitor_3__indices;
	outfile__array_statemonitor_3__indices.open("results/_array_statemonitor_3__indices_-488604028686740672", ios::binary | ios::out);
	if(outfile__array_statemonitor_3__indices.is_open())
	{
		outfile__array_statemonitor_3__indices.write(reinterpret_cast<char*>(_array_statemonitor_3__indices), 1*sizeof(_array_statemonitor_3__indices[0]));
		outfile__array_statemonitor_3__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_3__indices." << endl;
	}
	ofstream outfile__array_statemonitor_3_N;
	outfile__array_statemonitor_3_N.open("results/_array_statemonitor_3_N_6759337961156926446", ios::binary | ios::out);
	if(outfile__array_statemonitor_3_N.is_open())
	{
		outfile__array_statemonitor_3_N.write(reinterpret_cast<char*>(_array_statemonitor_3_N), 1*sizeof(_array_statemonitor_3_N[0]));
		outfile__array_statemonitor_3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_3_N." << endl;
	}
	ofstream outfile__array_statemonitor_4__indices;
	outfile__array_statemonitor_4__indices.open("results/_array_statemonitor_4__indices_-8371734624890926413", ios::binary | ios::out);
	if(outfile__array_statemonitor_4__indices.is_open())
	{
		outfile__array_statemonitor_4__indices.write(reinterpret_cast<char*>(_array_statemonitor_4__indices), 1*sizeof(_array_statemonitor_4__indices[0]));
		outfile__array_statemonitor_4__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4__indices." << endl;
	}
	ofstream outfile__array_statemonitor_4_N;
	outfile__array_statemonitor_4_N.open("results/_array_statemonitor_4_N_-5038548906891744145", ios::binary | ios::out);
	if(outfile__array_statemonitor_4_N.is_open())
	{
		outfile__array_statemonitor_4_N.write(reinterpret_cast<char*>(_array_statemonitor_4_N), 1*sizeof(_array_statemonitor_4_N[0]));
		outfile__array_statemonitor_4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4_N." << endl;
	}

	ofstream outfile__dynamic_array_AMPA0__synaptic_post;
	outfile__dynamic_array_AMPA0__synaptic_post.open("results/_dynamic_array_AMPA0__synaptic_post_-5315306706922716547", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0__synaptic_post.is_open())
	{
        if (! _dynamic_array_AMPA0__synaptic_post.empty() )
        {
			outfile__dynamic_array_AMPA0__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0__synaptic_post[0]), _dynamic_array_AMPA0__synaptic_post.size()*sizeof(_dynamic_array_AMPA0__synaptic_post[0]));
		    outfile__dynamic_array_AMPA0__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_AMPA0__synaptic_pre;
	outfile__dynamic_array_AMPA0__synaptic_pre.open("results/_dynamic_array_AMPA0__synaptic_pre_-6879793991577487400", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0__synaptic_pre.is_open())
	{
        if (! _dynamic_array_AMPA0__synaptic_pre.empty() )
        {
			outfile__dynamic_array_AMPA0__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0__synaptic_pre[0]), _dynamic_array_AMPA0__synaptic_pre.size()*sizeof(_dynamic_array_AMPA0__synaptic_pre[0]));
		    outfile__dynamic_array_AMPA0__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_AMPA0_d;
	outfile__dynamic_array_AMPA0_d.open("results/_dynamic_array_AMPA0_d_-7140633445535709295", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0_d.is_open())
	{
        if (! _dynamic_array_AMPA0_d.empty() )
        {
			outfile__dynamic_array_AMPA0_d.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0_d[0]), _dynamic_array_AMPA0_d.size()*sizeof(_dynamic_array_AMPA0_d[0]));
		    outfile__dynamic_array_AMPA0_d.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0_d." << endl;
	}
	ofstream outfile__dynamic_array_AMPA0_delay;
	outfile__dynamic_array_AMPA0_delay.open("results/_dynamic_array_AMPA0_delay_1022139770730839704", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0_delay.is_open())
	{
        if (! _dynamic_array_AMPA0_delay.empty() )
        {
			outfile__dynamic_array_AMPA0_delay.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0_delay[0]), _dynamic_array_AMPA0_delay.size()*sizeof(_dynamic_array_AMPA0_delay[0]));
		    outfile__dynamic_array_AMPA0_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0_delay." << endl;
	}
	ofstream outfile__dynamic_array_AMPA0_delay_1;
	outfile__dynamic_array_AMPA0_delay_1.open("results/_dynamic_array_AMPA0_delay_1_9130864360207079031", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0_delay_1.is_open())
	{
        if (! _dynamic_array_AMPA0_delay_1.empty() )
        {
			outfile__dynamic_array_AMPA0_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0_delay_1[0]), _dynamic_array_AMPA0_delay_1.size()*sizeof(_dynamic_array_AMPA0_delay_1[0]));
		    outfile__dynamic_array_AMPA0_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_AMPA0_N_incoming;
	outfile__dynamic_array_AMPA0_N_incoming.open("results/_dynamic_array_AMPA0_N_incoming_8942650342960348801", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0_N_incoming.is_open())
	{
        if (! _dynamic_array_AMPA0_N_incoming.empty() )
        {
			outfile__dynamic_array_AMPA0_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0_N_incoming[0]), _dynamic_array_AMPA0_N_incoming.size()*sizeof(_dynamic_array_AMPA0_N_incoming[0]));
		    outfile__dynamic_array_AMPA0_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_AMPA0_N_outgoing;
	outfile__dynamic_array_AMPA0_N_outgoing.open("results/_dynamic_array_AMPA0_N_outgoing_-8407233574094048196", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0_N_outgoing.is_open())
	{
        if (! _dynamic_array_AMPA0_N_outgoing.empty() )
        {
			outfile__dynamic_array_AMPA0_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0_N_outgoing[0]), _dynamic_array_AMPA0_N_outgoing.size()*sizeof(_dynamic_array_AMPA0_N_outgoing[0]));
		    outfile__dynamic_array_AMPA0_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_AMPA0_weight;
	outfile__dynamic_array_AMPA0_weight.open("results/_dynamic_array_AMPA0_weight_-888783790296720390", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0_weight.is_open())
	{
        if (! _dynamic_array_AMPA0_weight.empty() )
        {
			outfile__dynamic_array_AMPA0_weight.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0_weight[0]), _dynamic_array_AMPA0_weight.size()*sizeof(_dynamic_array_AMPA0_weight[0]));
		    outfile__dynamic_array_AMPA0_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0_weight." << endl;
	}
	ofstream outfile__dynamic_array_InpSpikeGenerator__timebins;
	outfile__dynamic_array_InpSpikeGenerator__timebins.open("results/_dynamic_array_InpSpikeGenerator__timebins_1863726151880167760", ios::binary | ios::out);
	if(outfile__dynamic_array_InpSpikeGenerator__timebins.is_open())
	{
        if (! _dynamic_array_InpSpikeGenerator__timebins.empty() )
        {
			outfile__dynamic_array_InpSpikeGenerator__timebins.write(reinterpret_cast<char*>(&_dynamic_array_InpSpikeGenerator__timebins[0]), _dynamic_array_InpSpikeGenerator__timebins.size()*sizeof(_dynamic_array_InpSpikeGenerator__timebins[0]));
		    outfile__dynamic_array_InpSpikeGenerator__timebins.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_InpSpikeGenerator__timebins." << endl;
	}
	ofstream outfile__dynamic_array_InpSpikeGenerator_neuron_index;
	outfile__dynamic_array_InpSpikeGenerator_neuron_index.open("results/_dynamic_array_InpSpikeGenerator_neuron_index_2026170109648521380", ios::binary | ios::out);
	if(outfile__dynamic_array_InpSpikeGenerator_neuron_index.is_open())
	{
        if (! _dynamic_array_InpSpikeGenerator_neuron_index.empty() )
        {
			outfile__dynamic_array_InpSpikeGenerator_neuron_index.write(reinterpret_cast<char*>(&_dynamic_array_InpSpikeGenerator_neuron_index[0]), _dynamic_array_InpSpikeGenerator_neuron_index.size()*sizeof(_dynamic_array_InpSpikeGenerator_neuron_index[0]));
		    outfile__dynamic_array_InpSpikeGenerator_neuron_index.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_InpSpikeGenerator_neuron_index." << endl;
	}
	ofstream outfile__dynamic_array_InpSpikeGenerator_spike_number;
	outfile__dynamic_array_InpSpikeGenerator_spike_number.open("results/_dynamic_array_InpSpikeGenerator_spike_number_-8405457929825561132", ios::binary | ios::out);
	if(outfile__dynamic_array_InpSpikeGenerator_spike_number.is_open())
	{
        if (! _dynamic_array_InpSpikeGenerator_spike_number.empty() )
        {
			outfile__dynamic_array_InpSpikeGenerator_spike_number.write(reinterpret_cast<char*>(&_dynamic_array_InpSpikeGenerator_spike_number[0]), _dynamic_array_InpSpikeGenerator_spike_number.size()*sizeof(_dynamic_array_InpSpikeGenerator_spike_number[0]));
		    outfile__dynamic_array_InpSpikeGenerator_spike_number.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_InpSpikeGenerator_spike_number." << endl;
	}
	ofstream outfile__dynamic_array_InpSpikeGenerator_spike_time;
	outfile__dynamic_array_InpSpikeGenerator_spike_time.open("results/_dynamic_array_InpSpikeGenerator_spike_time_-1810092466861391299", ios::binary | ios::out);
	if(outfile__dynamic_array_InpSpikeGenerator_spike_time.is_open())
	{
        if (! _dynamic_array_InpSpikeGenerator_spike_time.empty() )
        {
			outfile__dynamic_array_InpSpikeGenerator_spike_time.write(reinterpret_cast<char*>(&_dynamic_array_InpSpikeGenerator_spike_time[0]), _dynamic_array_InpSpikeGenerator_spike_time.size()*sizeof(_dynamic_array_InpSpikeGenerator_spike_time[0]));
		    outfile__dynamic_array_InpSpikeGenerator_spike_time.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_InpSpikeGenerator_spike_time." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_input_i;
	outfile__dynamic_array_mon_neuron_input_i.open("results/_dynamic_array_mon_neuron_input_i_1062684111817319420", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_input_i.is_open())
	{
        if (! _dynamic_array_mon_neuron_input_i.empty() )
        {
			outfile__dynamic_array_mon_neuron_input_i.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_input_i[0]), _dynamic_array_mon_neuron_input_i.size()*sizeof(_dynamic_array_mon_neuron_input_i[0]));
		    outfile__dynamic_array_mon_neuron_input_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_input_i." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_input_t;
	outfile__dynamic_array_mon_neuron_input_t.open("results/_dynamic_array_mon_neuron_input_t_4044667920235692314", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_input_t.is_open())
	{
        if (! _dynamic_array_mon_neuron_input_t.empty() )
        {
			outfile__dynamic_array_mon_neuron_input_t.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_input_t[0]), _dynamic_array_mon_neuron_input_t.size()*sizeof(_dynamic_array_mon_neuron_input_t[0]));
		    outfile__dynamic_array_mon_neuron_input_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_input_t." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_output_i;
	outfile__dynamic_array_mon_neuron_output_i.open("results/_dynamic_array_mon_neuron_output_i_-8837397841453638143", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_output_i.is_open())
	{
        if (! _dynamic_array_mon_neuron_output_i.empty() )
        {
			outfile__dynamic_array_mon_neuron_output_i.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_output_i[0]), _dynamic_array_mon_neuron_output_i.size()*sizeof(_dynamic_array_mon_neuron_output_i[0]));
		    outfile__dynamic_array_mon_neuron_output_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_output_i." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_output_t;
	outfile__dynamic_array_mon_neuron_output_t.open("results/_dynamic_array_mon_neuron_output_t_6643317959981318222", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_output_t.is_open())
	{
        if (! _dynamic_array_mon_neuron_output_t.empty() )
        {
			outfile__dynamic_array_mon_neuron_output_t.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_output_t[0]), _dynamic_array_mon_neuron_output_t.size()*sizeof(_dynamic_array_mon_neuron_output_t[0]));
		    outfile__dynamic_array_mon_neuron_output_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_output_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_2_t;
	outfile__dynamic_array_statemonitor_2_t.open("results/_dynamic_array_statemonitor_2_t_-7612061100315846810", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_2_t.is_open())
	{
        if (! _dynamic_array_statemonitor_2_t.empty() )
        {
			outfile__dynamic_array_statemonitor_2_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_2_t[0]), _dynamic_array_statemonitor_2_t.size()*sizeof(_dynamic_array_statemonitor_2_t[0]));
		    outfile__dynamic_array_statemonitor_2_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_2_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_3_t;
	outfile__dynamic_array_statemonitor_3_t.open("results/_dynamic_array_statemonitor_3_t_-6622408109044429939", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_3_t.is_open())
	{
        if (! _dynamic_array_statemonitor_3_t.empty() )
        {
			outfile__dynamic_array_statemonitor_3_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_3_t[0]), _dynamic_array_statemonitor_3_t.size()*sizeof(_dynamic_array_statemonitor_3_t[0]));
		    outfile__dynamic_array_statemonitor_3_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_3_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_4_t;
	outfile__dynamic_array_statemonitor_4_t.open("results/_dynamic_array_statemonitor_4_t_3307102321226763091", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_4_t.is_open())
	{
        if (! _dynamic_array_statemonitor_4_t.empty() )
        {
			outfile__dynamic_array_statemonitor_4_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_4_t[0]), _dynamic_array_statemonitor_4_t.size()*sizeof(_dynamic_array_statemonitor_4_t[0]));
		    outfile__dynamic_array_statemonitor_4_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_4_t." << endl;
	}

	ofstream outfile__dynamic_array_statemonitor_2_Iahp;
	outfile__dynamic_array_statemonitor_2_Iahp.open("results/_dynamic_array_statemonitor_2_Iahp_-2332851293938750824", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_2_Iahp.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_2_Iahp.n; n++)
        {
            if (! _dynamic_array_statemonitor_2_Iahp(n).empty())
            {
                outfile__dynamic_array_statemonitor_2_Iahp.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_2_Iahp(n, 0)), _dynamic_array_statemonitor_2_Iahp.m*sizeof(_dynamic_array_statemonitor_2_Iahp(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_2_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_2_Iahp." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_3_I_syn_ampa;
	outfile__dynamic_array_statemonitor_3_I_syn_ampa.open("results/_dynamic_array_statemonitor_3_I_syn_ampa_-8435826355886344958", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_3_I_syn_ampa.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_3_I_syn_ampa.n; n++)
        {
            if (! _dynamic_array_statemonitor_3_I_syn_ampa(n).empty())
            {
                outfile__dynamic_array_statemonitor_3_I_syn_ampa.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_3_I_syn_ampa(n, 0)), _dynamic_array_statemonitor_3_I_syn_ampa.m*sizeof(_dynamic_array_statemonitor_3_I_syn_ampa(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_3_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_3_I_syn_ampa." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_4_Imem;
	outfile__dynamic_array_statemonitor_4_Imem.open("results/_dynamic_array_statemonitor_4_Imem_-3705956663365028939", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_4_Imem.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_4_Imem.n; n++)
        {
            if (! _dynamic_array_statemonitor_4_Imem(n).empty())
            {
                outfile__dynamic_array_statemonitor_4_Imem.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_4_Imem(n, 0)), _dynamic_array_statemonitor_4_Imem.m*sizeof(_dynamic_array_statemonitor_4_Imem(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_4_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_4_Imem." << endl;
	}
	// Write last run info to disk
	ofstream outfile_last_run_info;
	outfile_last_run_info.open("results/last_run_info.txt", ios::out);
	if(outfile_last_run_info.is_open())
	{
		outfile_last_run_info << (Network::_last_run_time) << " " << (Network::_last_run_completed_fraction) << std::endl;
		outfile_last_run_info.close();
	} else
	{
	    std::cout << "Error writing last run info to file." << std::endl;
	}
}

void _dealloc_arrays()
{
	using namespace brian;


	// static arrays
	if(_static_array__dynamic_array_InpSpikeGenerator__timebins!=0)
	{
		delete [] _static_array__dynamic_array_InpSpikeGenerator__timebins;
		_static_array__dynamic_array_InpSpikeGenerator__timebins = 0;
	}
	if(_static_array__dynamic_array_InpSpikeGenerator_neuron_index!=0)
	{
		delete [] _static_array__dynamic_array_InpSpikeGenerator_neuron_index;
		_static_array__dynamic_array_InpSpikeGenerator_neuron_index = 0;
	}
	if(_static_array__dynamic_array_InpSpikeGenerator_spike_number!=0)
	{
		delete [] _static_array__dynamic_array_InpSpikeGenerator_spike_number;
		_static_array__dynamic_array_InpSpikeGenerator_spike_number = 0;
	}
	if(_static_array__dynamic_array_InpSpikeGenerator_spike_time!=0)
	{
		delete [] _static_array__dynamic_array_InpSpikeGenerator_spike_time;
		_static_array__dynamic_array_InpSpikeGenerator_spike_time = 0;
	}
}

