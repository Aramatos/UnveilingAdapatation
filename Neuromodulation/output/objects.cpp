
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
Network network;

//////////////// arrays ///////////////////
int32_t * _array_AMPA0_N;
const int _num__array_AMPA0_N = 1;
int32_t * _array_AMPA1_N;
const int _num__array_AMPA1_N = 1;
int32_t * _array_AMPA2_N;
const int _num__array_AMPA2_N = 1;
int32_t * _array_AMPA3_N;
const int _num__array_AMPA3_N = 1;
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
int32_t * _array_Core_1_subgroup_1__sub_idx;
const int _num__array_Core_1_subgroup_1__sub_idx = 1;
int32_t * _array_Core_1_subgroup_2__sub_idx;
const int _num__array_Core_1_subgroup_2__sub_idx = 1;
int32_t * _array_Core_1_subgroup_3__sub_idx;
const int _num__array_Core_1_subgroup_3__sub_idx = 1;
int32_t * _array_Core_1_subgroup_4__sub_idx;
const int _num__array_Core_1_subgroup_4__sub_idx = 1;
int32_t * _array_Core_1_subgroup_5__sub_idx;
const int _num__array_Core_1_subgroup_5__sub_idx = 1;
int32_t * _array_Core_1_subgroup_6__sub_idx;
const int _num__array_Core_1_subgroup_6__sub_idx = 1;
int32_t * _array_Core_1_subgroup_7__sub_idx;
const int _num__array_Core_1_subgroup_7__sub_idx = 1;
int32_t * _array_Core_1_subgroup_8__sub_idx;
const int _num__array_Core_1_subgroup_8__sub_idx = 1;
int32_t * _array_Core_1_subgroup__sub_idx;
const int _num__array_Core_1_subgroup__sub_idx = 4;
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
int32_t * _array_mon_neuron_output_1__source_idx;
const int _num__array_mon_neuron_output_1__source_idx = 1;
int32_t * _array_mon_neuron_output_1_count;
const int _num__array_mon_neuron_output_1_count = 1;
int32_t * _array_mon_neuron_output_1_N;
const int _num__array_mon_neuron_output_1_N = 1;
int32_t * _array_mon_neuron_output_2__source_idx;
const int _num__array_mon_neuron_output_2__source_idx = 1;
int32_t * _array_mon_neuron_output_2_count;
const int _num__array_mon_neuron_output_2_count = 1;
int32_t * _array_mon_neuron_output_2_N;
const int _num__array_mon_neuron_output_2_N = 1;
int32_t * _array_mon_neuron_output_3__source_idx;
const int _num__array_mon_neuron_output_3__source_idx = 1;
int32_t * _array_mon_neuron_output_3_count;
const int _num__array_mon_neuron_output_3_count = 1;
int32_t * _array_mon_neuron_output_3_N;
const int _num__array_mon_neuron_output_3_N = 1;
int32_t * _array_mon_neuron_output_4__source_idx;
const int _num__array_mon_neuron_output_4__source_idx = 1;
int32_t * _array_mon_neuron_output_4_count;
const int _num__array_mon_neuron_output_4_count = 1;
int32_t * _array_mon_neuron_output_4_N;
const int _num__array_mon_neuron_output_4_N = 1;
int32_t * _array_SpikeGenerator0__lastindex;
const int _num__array_SpikeGenerator0__lastindex = 1;
int32_t * _array_SpikeGenerator0__period_bins;
const int _num__array_SpikeGenerator0__period_bins = 1;
int32_t * _array_SpikeGenerator0__spikespace;
const int _num__array_SpikeGenerator0__spikespace = 2;
int32_t * _array_SpikeGenerator0_i;
const int _num__array_SpikeGenerator0_i = 1;
double * _array_SpikeGenerator0_period;
const int _num__array_SpikeGenerator0_period = 1;
int32_t * _array_SpikeGenerator1__lastindex;
const int _num__array_SpikeGenerator1__lastindex = 1;
int32_t * _array_SpikeGenerator1__period_bins;
const int _num__array_SpikeGenerator1__period_bins = 1;
int32_t * _array_SpikeGenerator1__spikespace;
const int _num__array_SpikeGenerator1__spikespace = 2;
int32_t * _array_SpikeGenerator1_i;
const int _num__array_SpikeGenerator1_i = 1;
double * _array_SpikeGenerator1_period;
const int _num__array_SpikeGenerator1_period = 1;
int32_t * _array_SpikeGenerator2__lastindex;
const int _num__array_SpikeGenerator2__lastindex = 1;
int32_t * _array_SpikeGenerator2__period_bins;
const int _num__array_SpikeGenerator2__period_bins = 1;
int32_t * _array_SpikeGenerator2__spikespace;
const int _num__array_SpikeGenerator2__spikespace = 2;
int32_t * _array_SpikeGenerator2_i;
const int _num__array_SpikeGenerator2_i = 1;
double * _array_SpikeGenerator2_period;
const int _num__array_SpikeGenerator2_period = 1;
int32_t * _array_SpikeGenerator3__lastindex;
const int _num__array_SpikeGenerator3__lastindex = 1;
int32_t * _array_SpikeGenerator3__period_bins;
const int _num__array_SpikeGenerator3__period_bins = 1;
int32_t * _array_SpikeGenerator3__spikespace;
const int _num__array_SpikeGenerator3__spikespace = 2;
int32_t * _array_SpikeGenerator3_i;
const int _num__array_SpikeGenerator3_i = 1;
double * _array_SpikeGenerator3_period;
const int _num__array_SpikeGenerator3_period = 1;
int32_t * _array_statemonitor_1__indices;
const int _num__array_statemonitor_1__indices = 1;
int32_t * _array_statemonitor_1__indices_1;
const int _num__array_statemonitor_1__indices_1 = 1;
double * _array_statemonitor_1_I_syn_ampa;
const int _num__array_statemonitor_1_I_syn_ampa = (0, 1);
double * _array_statemonitor_1_I_syn_ampa_1;
const int _num__array_statemonitor_1_I_syn_ampa_1 = (0, 1);
int32_t * _array_statemonitor_1_N;
const int _num__array_statemonitor_1_N = 1;
int32_t * _array_statemonitor_1_N_1;
const int _num__array_statemonitor_1_N_1 = 1;
int32_t * _array_statemonitor_2__indices;
const int _num__array_statemonitor_2__indices = 4;
double * _array_statemonitor_2_Imem;
const int _num__array_statemonitor_2_Imem = (0, 4);
int32_t * _array_statemonitor_2_N;
const int _num__array_statemonitor_2_N = 1;
int32_t * _array_statemonitor__indices;
const int _num__array_statemonitor__indices = 1;
int32_t * _array_statemonitor__indices_1;
const int _num__array_statemonitor__indices_1 = 1;
int32_t * _array_statemonitor__indices_2;
const int _num__array_statemonitor__indices_2 = 4;
double * _array_statemonitor_I_syn_ampa;
const int _num__array_statemonitor_I_syn_ampa = (0, 1);
double * _array_statemonitor_I_syn_ampa_1;
const int _num__array_statemonitor_I_syn_ampa_1 = (0, 1);
double * _array_statemonitor_Iahp;
const int _num__array_statemonitor_Iahp = (0, 4);
int32_t * _array_statemonitor_N;
const int _num__array_statemonitor_N = 1;
int32_t * _array_statemonitor_N_1;
const int _num__array_statemonitor_N_1 = 1;
int32_t * _array_statemonitor_N_2;
const int _num__array_statemonitor_N_2 = 1;

//////////////// dynamic arrays 1d /////////
std::vector<int32_t> _dynamic_array_AMPA0__synaptic_post;
std::vector<int32_t> _dynamic_array_AMPA0__synaptic_pre;
std::vector<double> _dynamic_array_AMPA0_d;
std::vector<double> _dynamic_array_AMPA0_delay;
std::vector<double> _dynamic_array_AMPA0_delay_1;
std::vector<int32_t> _dynamic_array_AMPA0_N_incoming;
std::vector<int32_t> _dynamic_array_AMPA0_N_outgoing;
std::vector<double> _dynamic_array_AMPA0_weight;
std::vector<int32_t> _dynamic_array_AMPA1__synaptic_post;
std::vector<int32_t> _dynamic_array_AMPA1__synaptic_pre;
std::vector<double> _dynamic_array_AMPA1_d;
std::vector<double> _dynamic_array_AMPA1_delay;
std::vector<double> _dynamic_array_AMPA1_delay_1;
std::vector<int32_t> _dynamic_array_AMPA1_N_incoming;
std::vector<int32_t> _dynamic_array_AMPA1_N_outgoing;
std::vector<double> _dynamic_array_AMPA1_weight;
std::vector<int32_t> _dynamic_array_AMPA2__synaptic_post;
std::vector<int32_t> _dynamic_array_AMPA2__synaptic_pre;
std::vector<double> _dynamic_array_AMPA2_d;
std::vector<double> _dynamic_array_AMPA2_delay;
std::vector<double> _dynamic_array_AMPA2_delay_1;
std::vector<int32_t> _dynamic_array_AMPA2_N_incoming;
std::vector<int32_t> _dynamic_array_AMPA2_N_outgoing;
std::vector<double> _dynamic_array_AMPA2_weight;
std::vector<int32_t> _dynamic_array_AMPA3__synaptic_post;
std::vector<int32_t> _dynamic_array_AMPA3__synaptic_pre;
std::vector<double> _dynamic_array_AMPA3_d;
std::vector<double> _dynamic_array_AMPA3_delay;
std::vector<double> _dynamic_array_AMPA3_delay_1;
std::vector<int32_t> _dynamic_array_AMPA3_N_incoming;
std::vector<int32_t> _dynamic_array_AMPA3_N_outgoing;
std::vector<double> _dynamic_array_AMPA3_weight;
std::vector<int32_t> _dynamic_array_mon_neuron_output_1_i;
std::vector<double> _dynamic_array_mon_neuron_output_1_t;
std::vector<int32_t> _dynamic_array_mon_neuron_output_2_i;
std::vector<double> _dynamic_array_mon_neuron_output_2_t;
std::vector<int32_t> _dynamic_array_mon_neuron_output_3_i;
std::vector<double> _dynamic_array_mon_neuron_output_3_t;
std::vector<int32_t> _dynamic_array_mon_neuron_output_4_i;
std::vector<double> _dynamic_array_mon_neuron_output_4_t;
std::vector<int32_t> _dynamic_array_SpikeGenerator0__timebins;
std::vector<int32_t> _dynamic_array_SpikeGenerator0_neuron_index;
std::vector<int32_t> _dynamic_array_SpikeGenerator0_spike_number;
std::vector<double> _dynamic_array_SpikeGenerator0_spike_time;
std::vector<int32_t> _dynamic_array_SpikeGenerator1__timebins;
std::vector<int32_t> _dynamic_array_SpikeGenerator1_neuron_index;
std::vector<int32_t> _dynamic_array_SpikeGenerator1_spike_number;
std::vector<double> _dynamic_array_SpikeGenerator1_spike_time;
std::vector<int32_t> _dynamic_array_SpikeGenerator2__timebins;
std::vector<int32_t> _dynamic_array_SpikeGenerator2_neuron_index;
std::vector<int32_t> _dynamic_array_SpikeGenerator2_spike_number;
std::vector<double> _dynamic_array_SpikeGenerator2_spike_time;
std::vector<int32_t> _dynamic_array_SpikeGenerator3__timebins;
std::vector<int32_t> _dynamic_array_SpikeGenerator3_neuron_index;
std::vector<int32_t> _dynamic_array_SpikeGenerator3_spike_number;
std::vector<double> _dynamic_array_SpikeGenerator3_spike_time;
std::vector<double> _dynamic_array_statemonitor_1_t;
std::vector<double> _dynamic_array_statemonitor_1_t_1;
std::vector<double> _dynamic_array_statemonitor_2_t;
std::vector<double> _dynamic_array_statemonitor_t;
std::vector<double> _dynamic_array_statemonitor_t_1;
std::vector<double> _dynamic_array_statemonitor_t_2;

//////////////// dynamic arrays 2d /////////
DynamicArray2D<double> _dynamic_array_statemonitor_1_I_syn_ampa;
DynamicArray2D<double> _dynamic_array_statemonitor_1_I_syn_ampa_1;
DynamicArray2D<double> _dynamic_array_statemonitor_2_Imem;
DynamicArray2D<double> _dynamic_array_statemonitor_I_syn_ampa;
DynamicArray2D<double> _dynamic_array_statemonitor_I_syn_ampa_1;
DynamicArray2D<double> _dynamic_array_statemonitor_Iahp;

/////////////// static arrays /////////////
int32_t * _static_array__array_statemonitor_2__indices;
const int _num__static_array__array_statemonitor_2__indices = 4;
int32_t * _static_array__array_statemonitor__indices_2;
const int _num__static_array__array_statemonitor__indices_2 = 4;
int32_t * _static_array__dynamic_array_SpikeGenerator0__timebins;
const int _num__static_array__dynamic_array_SpikeGenerator0__timebins = 200;
double * _static_array__dynamic_array_SpikeGenerator0_neuron_index;
const int _num__static_array__dynamic_array_SpikeGenerator0_neuron_index = 200;
int64_t * _static_array__dynamic_array_SpikeGenerator0_spike_number;
const int _num__static_array__dynamic_array_SpikeGenerator0_spike_number = 200;
double * _static_array__dynamic_array_SpikeGenerator0_spike_time;
const int _num__static_array__dynamic_array_SpikeGenerator0_spike_time = 200;
int32_t * _static_array__dynamic_array_SpikeGenerator1__timebins;
const int _num__static_array__dynamic_array_SpikeGenerator1__timebins = 334;
double * _static_array__dynamic_array_SpikeGenerator1_neuron_index;
const int _num__static_array__dynamic_array_SpikeGenerator1_neuron_index = 334;
int64_t * _static_array__dynamic_array_SpikeGenerator1_spike_number;
const int _num__static_array__dynamic_array_SpikeGenerator1_spike_number = 334;
double * _static_array__dynamic_array_SpikeGenerator1_spike_time;
const int _num__static_array__dynamic_array_SpikeGenerator1_spike_time = 334;
int32_t * _static_array__dynamic_array_SpikeGenerator2__timebins;
const int _num__static_array__dynamic_array_SpikeGenerator2__timebins = 500;
double * _static_array__dynamic_array_SpikeGenerator2_neuron_index;
const int _num__static_array__dynamic_array_SpikeGenerator2_neuron_index = 500;
int64_t * _static_array__dynamic_array_SpikeGenerator2_spike_number;
const int _num__static_array__dynamic_array_SpikeGenerator2_spike_number = 500;
double * _static_array__dynamic_array_SpikeGenerator2_spike_time;
const int _num__static_array__dynamic_array_SpikeGenerator2_spike_time = 500;
int32_t * _static_array__dynamic_array_SpikeGenerator3__timebins;
const int _num__static_array__dynamic_array_SpikeGenerator3__timebins = 1000;
double * _static_array__dynamic_array_SpikeGenerator3_neuron_index;
const int _num__static_array__dynamic_array_SpikeGenerator3_neuron_index = 1000;
int64_t * _static_array__dynamic_array_SpikeGenerator3_spike_number;
const int _num__static_array__dynamic_array_SpikeGenerator3_spike_number = 1000;
double * _static_array__dynamic_array_SpikeGenerator3_spike_time;
const int _num__static_array__dynamic_array_SpikeGenerator3_spike_time = 1000;

//////////////// synapses /////////////////
// AMPA0
SynapticPathway AMPA0_post(
		_dynamic_array_AMPA0__synaptic_post,
		0, 1);
SynapticPathway AMPA0_pre(
		_dynamic_array_AMPA0__synaptic_pre,
		0, 1);
// AMPA1
SynapticPathway AMPA1_post(
		_dynamic_array_AMPA1__synaptic_post,
		1, 2);
SynapticPathway AMPA1_pre(
		_dynamic_array_AMPA1__synaptic_pre,
		0, 1);
// AMPA2
SynapticPathway AMPA2_post(
		_dynamic_array_AMPA2__synaptic_post,
		2, 3);
SynapticPathway AMPA2_pre(
		_dynamic_array_AMPA2__synaptic_pre,
		0, 1);
// AMPA3
SynapticPathway AMPA3_post(
		_dynamic_array_AMPA3__synaptic_post,
		3, 4);
SynapticPathway AMPA3_pre(
		_dynamic_array_AMPA3__synaptic_pre,
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

	_array_AMPA1_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_AMPA1_N[i] = 0;

	_array_AMPA2_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_AMPA2_N[i] = 0;

	_array_AMPA3_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_AMPA3_N[i] = 0;

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

	_array_Core_1_subgroup_1__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_1__sub_idx[i] = 0;

	_array_Core_1_subgroup_2__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_2__sub_idx[i] = 0;

	_array_Core_1_subgroup_3__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_3__sub_idx[i] = 0;

	_array_Core_1_subgroup_4__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_4__sub_idx[i] = 0;

	_array_Core_1_subgroup_5__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_5__sub_idx[i] = 0;

	_array_Core_1_subgroup_6__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_6__sub_idx[i] = 0;

	_array_Core_1_subgroup_7__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_7__sub_idx[i] = 0;

	_array_Core_1_subgroup_8__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_8__sub_idx[i] = 0;

	_array_Core_1_subgroup__sub_idx = new int32_t[4];
    
	for(int i=0; i<4; i++) _array_Core_1_subgroup__sub_idx[i] = 0;

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

	_array_mon_neuron_output_1__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_1__source_idx[i] = 0;

	_array_mon_neuron_output_1_count = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_1_count[i] = 0;

	_array_mon_neuron_output_1_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_1_N[i] = 0;

	_array_mon_neuron_output_2__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_2__source_idx[i] = 0;

	_array_mon_neuron_output_2_count = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_2_count[i] = 0;

	_array_mon_neuron_output_2_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_2_N[i] = 0;

	_array_mon_neuron_output_3__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_3__source_idx[i] = 0;

	_array_mon_neuron_output_3_count = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_3_count[i] = 0;

	_array_mon_neuron_output_3_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_3_N[i] = 0;

	_array_mon_neuron_output_4__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_4__source_idx[i] = 0;

	_array_mon_neuron_output_4_count = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_4_count[i] = 0;

	_array_mon_neuron_output_4_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_4_N[i] = 0;

	_array_SpikeGenerator0__lastindex = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator0__lastindex[i] = 0;

	_array_SpikeGenerator0__period_bins = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator0__period_bins[i] = 0;

	_array_SpikeGenerator0__spikespace = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_SpikeGenerator0__spikespace[i] = 0;

	_array_SpikeGenerator0_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator0_i[i] = 0;

	_array_SpikeGenerator0_period = new double[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator0_period[i] = 0;

	_array_SpikeGenerator1__lastindex = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator1__lastindex[i] = 0;

	_array_SpikeGenerator1__period_bins = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator1__period_bins[i] = 0;

	_array_SpikeGenerator1__spikespace = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_SpikeGenerator1__spikespace[i] = 0;

	_array_SpikeGenerator1_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator1_i[i] = 0;

	_array_SpikeGenerator1_period = new double[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator1_period[i] = 0;

	_array_SpikeGenerator2__lastindex = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator2__lastindex[i] = 0;

	_array_SpikeGenerator2__period_bins = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator2__period_bins[i] = 0;

	_array_SpikeGenerator2__spikespace = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_SpikeGenerator2__spikespace[i] = 0;

	_array_SpikeGenerator2_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator2_i[i] = 0;

	_array_SpikeGenerator2_period = new double[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator2_period[i] = 0;

	_array_SpikeGenerator3__lastindex = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator3__lastindex[i] = 0;

	_array_SpikeGenerator3__period_bins = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator3__period_bins[i] = 0;

	_array_SpikeGenerator3__spikespace = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_SpikeGenerator3__spikespace[i] = 0;

	_array_SpikeGenerator3_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator3_i[i] = 0;

	_array_SpikeGenerator3_period = new double[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator3_period[i] = 0;

	_array_statemonitor_1__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_1__indices[i] = 0;

	_array_statemonitor_1__indices_1 = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_1__indices_1[i] = 0;

	_array_statemonitor_1_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_1_N[i] = 0;

	_array_statemonitor_1_N_1 = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_1_N_1[i] = 0;

	_array_statemonitor_2__indices = new int32_t[4];
    
	for(int i=0; i<4; i++) _array_statemonitor_2__indices[i] = 0;

	_array_statemonitor_2_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_2_N[i] = 0;

	_array_statemonitor__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor__indices[i] = 0;

	_array_statemonitor__indices_1 = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor__indices_1[i] = 0;

	_array_statemonitor__indices_2 = new int32_t[4];
    
	for(int i=0; i<4; i++) _array_statemonitor__indices_2[i] = 0;

	_array_statemonitor_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_N[i] = 0;

	_array_statemonitor_N_1 = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_N_1[i] = 0;

	_array_statemonitor_N_2 = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_N_2[i] = 0;

	_dynamic_array_SpikeGenerator0__timebins.resize(200);
    
	for(int i=0; i<200; i++) _dynamic_array_SpikeGenerator0__timebins[i] = 0;

	_dynamic_array_SpikeGenerator1__timebins.resize(334);
    
	for(int i=0; i<334; i++) _dynamic_array_SpikeGenerator1__timebins[i] = 0;

	_dynamic_array_SpikeGenerator2__timebins.resize(500);
    
	for(int i=0; i<500; i++) _dynamic_array_SpikeGenerator2__timebins[i] = 0;

	_dynamic_array_SpikeGenerator3__timebins.resize(1000);
    
	for(int i=0; i<1000; i++) _dynamic_array_SpikeGenerator3__timebins[i] = 0;


	// Arrays initialized to an "arange"
	_array_Core_0_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_0_i[i] = 0 + i;

	_array_Core_1_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_1_i[i] = 0 + i;

	_array_Core_1_subgroup_1__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_1__sub_idx[i] = 0 + i;

	_array_Core_1_subgroup_2__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_2__sub_idx[i] = 1 + i;

	_array_Core_1_subgroup_3__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_3__sub_idx[i] = 2 + i;

	_array_Core_1_subgroup_4__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_4__sub_idx[i] = 3 + i;

	_array_Core_1_subgroup_5__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_5__sub_idx[i] = 0 + i;

	_array_Core_1_subgroup_6__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_6__sub_idx[i] = 1 + i;

	_array_Core_1_subgroup_7__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_7__sub_idx[i] = 2 + i;

	_array_Core_1_subgroup_8__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_8__sub_idx[i] = 3 + i;

	_array_Core_1_subgroup__sub_idx = new int32_t[4];
    
	for(int i=0; i<4; i++) _array_Core_1_subgroup__sub_idx[i] = 0 + i;

	_array_Core_2_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_2_i[i] = 0 + i;

	_array_Core_3_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_3_i[i] = 0 + i;

	_array_mon_neuron_output_1__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_1__source_idx[i] = 0 + i;

	_array_mon_neuron_output_2__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_2__source_idx[i] = 0 + i;

	_array_mon_neuron_output_3__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_3__source_idx[i] = 0 + i;

	_array_mon_neuron_output_4__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output_4__source_idx[i] = 0 + i;

	_array_SpikeGenerator0_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator0_i[i] = 0 + i;

	_array_SpikeGenerator1_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator1_i[i] = 0 + i;

	_array_SpikeGenerator2_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator2_i[i] = 0 + i;

	_array_SpikeGenerator3_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator3_i[i] = 0 + i;


	// static arrays
	_static_array__array_statemonitor_2__indices = new int32_t[4];
	_static_array__array_statemonitor__indices_2 = new int32_t[4];
	_static_array__dynamic_array_SpikeGenerator0__timebins = new int32_t[200];
	_static_array__dynamic_array_SpikeGenerator0_neuron_index = new double[200];
	_static_array__dynamic_array_SpikeGenerator0_spike_number = new int64_t[200];
	_static_array__dynamic_array_SpikeGenerator0_spike_time = new double[200];
	_static_array__dynamic_array_SpikeGenerator1__timebins = new int32_t[334];
	_static_array__dynamic_array_SpikeGenerator1_neuron_index = new double[334];
	_static_array__dynamic_array_SpikeGenerator1_spike_number = new int64_t[334];
	_static_array__dynamic_array_SpikeGenerator1_spike_time = new double[334];
	_static_array__dynamic_array_SpikeGenerator2__timebins = new int32_t[500];
	_static_array__dynamic_array_SpikeGenerator2_neuron_index = new double[500];
	_static_array__dynamic_array_SpikeGenerator2_spike_number = new int64_t[500];
	_static_array__dynamic_array_SpikeGenerator2_spike_time = new double[500];
	_static_array__dynamic_array_SpikeGenerator3__timebins = new int32_t[1000];
	_static_array__dynamic_array_SpikeGenerator3_neuron_index = new double[1000];
	_static_array__dynamic_array_SpikeGenerator3_spike_number = new int64_t[1000];
	_static_array__dynamic_array_SpikeGenerator3_spike_time = new double[1000];

	// Random number generator states
	for (int i=0; i<1; i++)
	    _mersenne_twister_states.push_back(new rk_state());
}

void _load_arrays()
{
	using namespace brian;

	ifstream f_static_array__array_statemonitor_2__indices;
	f_static_array__array_statemonitor_2__indices.open("static_arrays/_static_array__array_statemonitor_2__indices", ios::in | ios::binary);
	if(f_static_array__array_statemonitor_2__indices.is_open())
	{
		f_static_array__array_statemonitor_2__indices.read(reinterpret_cast<char*>(_static_array__array_statemonitor_2__indices), 4*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__array_statemonitor_2__indices." << endl;
	}
	ifstream f_static_array__array_statemonitor__indices_2;
	f_static_array__array_statemonitor__indices_2.open("static_arrays/_static_array__array_statemonitor__indices_2", ios::in | ios::binary);
	if(f_static_array__array_statemonitor__indices_2.is_open())
	{
		f_static_array__array_statemonitor__indices_2.read(reinterpret_cast<char*>(_static_array__array_statemonitor__indices_2), 4*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__array_statemonitor__indices_2." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator0__timebins;
	f_static_array__dynamic_array_SpikeGenerator0__timebins.open("static_arrays/_static_array__dynamic_array_SpikeGenerator0__timebins", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator0__timebins.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator0__timebins.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator0__timebins), 200*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator0__timebins." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator0_neuron_index;
	f_static_array__dynamic_array_SpikeGenerator0_neuron_index.open("static_arrays/_static_array__dynamic_array_SpikeGenerator0_neuron_index", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator0_neuron_index.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator0_neuron_index.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator0_neuron_index), 200*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator0_neuron_index." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator0_spike_number;
	f_static_array__dynamic_array_SpikeGenerator0_spike_number.open("static_arrays/_static_array__dynamic_array_SpikeGenerator0_spike_number", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator0_spike_number.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator0_spike_number.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator0_spike_number), 200*sizeof(int64_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator0_spike_number." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator0_spike_time;
	f_static_array__dynamic_array_SpikeGenerator0_spike_time.open("static_arrays/_static_array__dynamic_array_SpikeGenerator0_spike_time", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator0_spike_time.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator0_spike_time.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator0_spike_time), 200*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator0_spike_time." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator1__timebins;
	f_static_array__dynamic_array_SpikeGenerator1__timebins.open("static_arrays/_static_array__dynamic_array_SpikeGenerator1__timebins", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator1__timebins.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator1__timebins.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator1__timebins), 334*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator1__timebins." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator1_neuron_index;
	f_static_array__dynamic_array_SpikeGenerator1_neuron_index.open("static_arrays/_static_array__dynamic_array_SpikeGenerator1_neuron_index", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator1_neuron_index.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator1_neuron_index.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator1_neuron_index), 334*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator1_neuron_index." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator1_spike_number;
	f_static_array__dynamic_array_SpikeGenerator1_spike_number.open("static_arrays/_static_array__dynamic_array_SpikeGenerator1_spike_number", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator1_spike_number.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator1_spike_number.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator1_spike_number), 334*sizeof(int64_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator1_spike_number." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator1_spike_time;
	f_static_array__dynamic_array_SpikeGenerator1_spike_time.open("static_arrays/_static_array__dynamic_array_SpikeGenerator1_spike_time", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator1_spike_time.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator1_spike_time.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator1_spike_time), 334*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator1_spike_time." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator2__timebins;
	f_static_array__dynamic_array_SpikeGenerator2__timebins.open("static_arrays/_static_array__dynamic_array_SpikeGenerator2__timebins", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator2__timebins.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator2__timebins.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator2__timebins), 500*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator2__timebins." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator2_neuron_index;
	f_static_array__dynamic_array_SpikeGenerator2_neuron_index.open("static_arrays/_static_array__dynamic_array_SpikeGenerator2_neuron_index", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator2_neuron_index.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator2_neuron_index.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator2_neuron_index), 500*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator2_neuron_index." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator2_spike_number;
	f_static_array__dynamic_array_SpikeGenerator2_spike_number.open("static_arrays/_static_array__dynamic_array_SpikeGenerator2_spike_number", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator2_spike_number.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator2_spike_number.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator2_spike_number), 500*sizeof(int64_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator2_spike_number." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator2_spike_time;
	f_static_array__dynamic_array_SpikeGenerator2_spike_time.open("static_arrays/_static_array__dynamic_array_SpikeGenerator2_spike_time", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator2_spike_time.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator2_spike_time.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator2_spike_time), 500*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator2_spike_time." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator3__timebins;
	f_static_array__dynamic_array_SpikeGenerator3__timebins.open("static_arrays/_static_array__dynamic_array_SpikeGenerator3__timebins", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator3__timebins.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator3__timebins.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator3__timebins), 1000*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator3__timebins." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator3_neuron_index;
	f_static_array__dynamic_array_SpikeGenerator3_neuron_index.open("static_arrays/_static_array__dynamic_array_SpikeGenerator3_neuron_index", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator3_neuron_index.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator3_neuron_index.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator3_neuron_index), 1000*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator3_neuron_index." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator3_spike_number;
	f_static_array__dynamic_array_SpikeGenerator3_spike_number.open("static_arrays/_static_array__dynamic_array_SpikeGenerator3_spike_number", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator3_spike_number.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator3_spike_number.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator3_spike_number), 1000*sizeof(int64_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator3_spike_number." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator3_spike_time;
	f_static_array__dynamic_array_SpikeGenerator3_spike_time.open("static_arrays/_static_array__dynamic_array_SpikeGenerator3_spike_time", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator3_spike_time.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator3_spike_time.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator3_spike_time), 1000*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator3_spike_time." << endl;
	}
}

void _write_arrays()
{
	using namespace brian;

	ofstream outfile__array_AMPA0_N;
	outfile__array_AMPA0_N.open("results/_array_AMPA0_N_418697087506175763", ios::binary | ios::out);
	if(outfile__array_AMPA0_N.is_open())
	{
		outfile__array_AMPA0_N.write(reinterpret_cast<char*>(_array_AMPA0_N), 1*sizeof(_array_AMPA0_N[0]));
		outfile__array_AMPA0_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA0_N." << endl;
	}
	ofstream outfile__array_AMPA1_N;
	outfile__array_AMPA1_N.open("results/_array_AMPA1_N_673632097241997531", ios::binary | ios::out);
	if(outfile__array_AMPA1_N.is_open())
	{
		outfile__array_AMPA1_N.write(reinterpret_cast<char*>(_array_AMPA1_N), 1*sizeof(_array_AMPA1_N[0]));
		outfile__array_AMPA1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA1_N." << endl;
	}
	ofstream outfile__array_AMPA2_N;
	outfile__array_AMPA2_N.open("results/_array_AMPA2_N_3703795946479996538", ios::binary | ios::out);
	if(outfile__array_AMPA2_N.is_open())
	{
		outfile__array_AMPA2_N.write(reinterpret_cast<char*>(_array_AMPA2_N), 1*sizeof(_array_AMPA2_N[0]));
		outfile__array_AMPA2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA2_N." << endl;
	}
	ofstream outfile__array_AMPA3_N;
	outfile__array_AMPA3_N.open("results/_array_AMPA3_N_-3468194953901233357", ios::binary | ios::out);
	if(outfile__array_AMPA3_N.is_open())
	{
		outfile__array_AMPA3_N.write(reinterpret_cast<char*>(_array_AMPA3_N), 1*sizeof(_array_AMPA3_N[0]));
		outfile__array_AMPA3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA3_N." << endl;
	}
	ofstream outfile__array_Core_0__spikespace;
	outfile__array_Core_0__spikespace.open("results/_array_Core_0__spikespace_-1625507533629718657", ios::binary | ios::out);
	if(outfile__array_Core_0__spikespace.is_open())
	{
		outfile__array_Core_0__spikespace.write(reinterpret_cast<char*>(_array_Core_0__spikespace), 257*sizeof(_array_Core_0__spikespace[0]));
		outfile__array_Core_0__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0__spikespace." << endl;
	}
	ofstream outfile__array_Core_0_ahp;
	outfile__array_Core_0_ahp.open("results/_array_Core_0_ahp_-7946111882043267210", ios::binary | ios::out);
	if(outfile__array_Core_0_ahp.is_open())
	{
		outfile__array_Core_0_ahp.write(reinterpret_cast<char*>(_array_Core_0_ahp), 1*sizeof(_array_Core_0_ahp[0]));
		outfile__array_Core_0_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_ahp." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_ampa;
	outfile__array_Core_0_C_syn_ampa.open("results/_array_Core_0_C_syn_ampa_5938307130450613835", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_ampa.is_open())
	{
		outfile__array_Core_0_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_C_syn_ampa), 256*sizeof(_array_Core_0_C_syn_ampa[0]));
		outfile__array_Core_0_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_gaba_a;
	outfile__array_Core_0_C_syn_gaba_a.open("results/_array_Core_0_C_syn_gaba_a_856407650849127883", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_C_syn_gaba_a), 256*sizeof(_array_Core_0_C_syn_gaba_a[0]));
		outfile__array_Core_0_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_gaba_b;
	outfile__array_Core_0_C_syn_gaba_b.open("results/_array_Core_0_C_syn_gaba_b_-3391931584551007374", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_C_syn_gaba_b), 256*sizeof(_array_Core_0_C_syn_gaba_b[0]));
		outfile__array_Core_0_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_nmda;
	outfile__array_Core_0_C_syn_nmda.open("results/_array_Core_0_C_syn_nmda_-6195269893413718772", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_nmda.is_open())
	{
		outfile__array_Core_0_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_C_syn_nmda), 256*sizeof(_array_Core_0_C_syn_nmda[0]));
		outfile__array_Core_0_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_Cahp;
	outfile__array_Core_0_Cahp.open("results/_array_Core_0_Cahp_-4919777390600250721", ios::binary | ios::out);
	if(outfile__array_Core_0_Cahp.is_open())
	{
		outfile__array_Core_0_Cahp.write(reinterpret_cast<char*>(_array_Core_0_Cahp), 1*sizeof(_array_Core_0_Cahp[0]));
		outfile__array_Core_0_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cahp." << endl;
	}
	ofstream outfile__array_Core_0_Cmem;
	outfile__array_Core_0_Cmem.open("results/_array_Core_0_Cmem_5940159530505549677", ios::binary | ios::out);
	if(outfile__array_Core_0_Cmem.is_open())
	{
		outfile__array_Core_0_Cmem.write(reinterpret_cast<char*>(_array_Core_0_Cmem), 1*sizeof(_array_Core_0_Cmem[0]));
		outfile__array_Core_0_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cmem." << endl;
	}
	ofstream outfile__array_Core_0_D;
	outfile__array_Core_0_D.open("results/_array_Core_0_D_7156882101769076413", ios::binary | ios::out);
	if(outfile__array_Core_0_D.is_open())
	{
		outfile__array_Core_0_D.write(reinterpret_cast<char*>(_array_Core_0_D), 256*sizeof(_array_Core_0_D[0]));
		outfile__array_Core_0_D.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_D." << endl;
	}
	ofstream outfile__array_Core_0_i;
	outfile__array_Core_0_i.open("results/_array_Core_0_i_-3277029522919783536", ios::binary | ios::out);
	if(outfile__array_Core_0_i.is_open())
	{
		outfile__array_Core_0_i.write(reinterpret_cast<char*>(_array_Core_0_i), 256*sizeof(_array_Core_0_i[0]));
		outfile__array_Core_0_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_i." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_ampa;
	outfile__array_Core_0_I_g_syn_ampa.open("results/_array_Core_0_I_g_syn_ampa_-4034248943662084661", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_ampa), 256*sizeof(_array_Core_0_I_g_syn_ampa[0]));
		outfile__array_Core_0_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_gaba_a;
	outfile__array_Core_0_I_g_syn_gaba_a.open("results/_array_Core_0_I_g_syn_gaba_a_-878096901472185788", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_gaba_a), 256*sizeof(_array_Core_0_I_g_syn_gaba_a[0]));
		outfile__array_Core_0_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_gaba_b;
	outfile__array_Core_0_I_g_syn_gaba_b.open("results/_array_Core_0_I_g_syn_gaba_b_-860186898712812148", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_gaba_b), 256*sizeof(_array_Core_0_I_g_syn_gaba_b[0]));
		outfile__array_Core_0_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_nmda;
	outfile__array_Core_0_I_g_syn_nmda.open("results/_array_Core_0_I_g_syn_nmda_8332486342343409570", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_nmda), 256*sizeof(_array_Core_0_I_g_syn_nmda[0]));
		outfile__array_Core_0_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_ampa;
	outfile__array_Core_0_I_syn_ampa.open("results/_array_Core_0_I_syn_ampa_-5000788207781894014", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_syn_ampa), 256*sizeof(_array_Core_0_I_syn_ampa[0]));
		outfile__array_Core_0_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_gaba_a;
	outfile__array_Core_0_I_syn_gaba_a.open("results/_array_Core_0_I_syn_gaba_a_7367433407652463226", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_syn_gaba_a), 256*sizeof(_array_Core_0_I_syn_gaba_a[0]));
		outfile__array_Core_0_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_gaba_b;
	outfile__array_Core_0_I_syn_gaba_b.open("results/_array_Core_0_I_syn_gaba_b_240377236189643355", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_syn_gaba_b), 256*sizeof(_array_Core_0_I_syn_gaba_b[0]));
		outfile__array_Core_0_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_nmda;
	outfile__array_Core_0_I_syn_nmda.open("results/_array_Core_0_I_syn_nmda_-98913820618315708", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_syn_nmda), 256*sizeof(_array_Core_0_I_syn_nmda[0]));
		outfile__array_Core_0_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_ampa;
	outfile__array_Core_0_I_tau_syn_ampa.open("results/_array_Core_0_I_tau_syn_ampa_-1775173620385655482", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_ampa), 256*sizeof(_array_Core_0_I_tau_syn_ampa[0]));
		outfile__array_Core_0_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_gaba_a;
	outfile__array_Core_0_I_tau_syn_gaba_a.open("results/_array_Core_0_I_tau_syn_gaba_a_-2754497495035243420", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_gaba_a), 256*sizeof(_array_Core_0_I_tau_syn_gaba_a[0]));
		outfile__array_Core_0_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_gaba_b;
	outfile__array_Core_0_I_tau_syn_gaba_b.open("results/_array_Core_0_I_tau_syn_gaba_b_4248357172634926899", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_gaba_b), 256*sizeof(_array_Core_0_I_tau_syn_gaba_b[0]));
		outfile__array_Core_0_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_nmda;
	outfile__array_Core_0_I_tau_syn_nmda.open("results/_array_Core_0_I_tau_syn_nmda_-4013664810534847722", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_nmda), 256*sizeof(_array_Core_0_I_tau_syn_nmda[0]));
		outfile__array_Core_0_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_ampa;
	outfile__array_Core_0_I_wo_syn_ampa.open("results/_array_Core_0_I_wo_syn_ampa_7593188099101926646", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_ampa), 256*sizeof(_array_Core_0_I_wo_syn_ampa[0]));
		outfile__array_Core_0_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_gaba_a;
	outfile__array_Core_0_I_wo_syn_gaba_a.open("results/_array_Core_0_I_wo_syn_gaba_a_-8109188039483417029", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_gaba_a), 256*sizeof(_array_Core_0_I_wo_syn_gaba_a[0]));
		outfile__array_Core_0_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_gaba_b;
	outfile__array_Core_0_I_wo_syn_gaba_b.open("results/_array_Core_0_I_wo_syn_gaba_b_6568957818973933441", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_gaba_b), 256*sizeof(_array_Core_0_I_wo_syn_gaba_b[0]));
		outfile__array_Core_0_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_nmda;
	outfile__array_Core_0_I_wo_syn_nmda.open("results/_array_Core_0_I_wo_syn_nmda_-7998087073501088919", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_nmda), 256*sizeof(_array_Core_0_I_wo_syn_nmda[0]));
		outfile__array_Core_0_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_Iagain;
	outfile__array_Core_0_Iagain.open("results/_array_Core_0_Iagain_-4684012029165985438", ios::binary | ios::out);
	if(outfile__array_Core_0_Iagain.is_open())
	{
		outfile__array_Core_0_Iagain.write(reinterpret_cast<char*>(_array_Core_0_Iagain), 1*sizeof(_array_Core_0_Iagain[0]));
		outfile__array_Core_0_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iagain." << endl;
	}
	ofstream outfile__array_Core_0_Iahp;
	outfile__array_Core_0_Iahp.open("results/_array_Core_0_Iahp_-3137349951637017434", ios::binary | ios::out);
	if(outfile__array_Core_0_Iahp.is_open())
	{
		outfile__array_Core_0_Iahp.write(reinterpret_cast<char*>(_array_Core_0_Iahp), 256*sizeof(_array_Core_0_Iahp[0]));
		outfile__array_Core_0_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iahp." << endl;
	}
	ofstream outfile__array_Core_0_Ianorm;
	outfile__array_Core_0_Ianorm.open("results/_array_Core_0_Ianorm_9194056849741757044", ios::binary | ios::out);
	if(outfile__array_Core_0_Ianorm.is_open())
	{
		outfile__array_Core_0_Ianorm.write(reinterpret_cast<char*>(_array_Core_0_Ianorm), 1*sizeof(_array_Core_0_Ianorm[0]));
		outfile__array_Core_0_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ianorm." << endl;
	}
	ofstream outfile__array_Core_0_Iath;
	outfile__array_Core_0_Iath.open("results/_array_Core_0_Iath_-110066375834598854", ios::binary | ios::out);
	if(outfile__array_Core_0_Iath.is_open())
	{
		outfile__array_Core_0_Iath.write(reinterpret_cast<char*>(_array_Core_0_Iath), 1*sizeof(_array_Core_0_Iath[0]));
		outfile__array_Core_0_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iath." << endl;
	}
	ofstream outfile__array_Core_0_Ica;
	outfile__array_Core_0_Ica.open("results/_array_Core_0_Ica_7652621431357514425", ios::binary | ios::out);
	if(outfile__array_Core_0_Ica.is_open())
	{
		outfile__array_Core_0_Ica.write(reinterpret_cast<char*>(_array_Core_0_Ica), 256*sizeof(_array_Core_0_Ica[0]));
		outfile__array_Core_0_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ica." << endl;
	}
	ofstream outfile__array_Core_0_Iconst;
	outfile__array_Core_0_Iconst.open("results/_array_Core_0_Iconst_-3360718867748000191", ios::binary | ios::out);
	if(outfile__array_Core_0_Iconst.is_open())
	{
		outfile__array_Core_0_Iconst.write(reinterpret_cast<char*>(_array_Core_0_Iconst), 256*sizeof(_array_Core_0_Iconst[0]));
		outfile__array_Core_0_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iconst." << endl;
	}
	ofstream outfile__array_Core_0_Imem;
	outfile__array_Core_0_Imem.open("results/_array_Core_0_Imem_1326291482469911133", ios::binary | ios::out);
	if(outfile__array_Core_0_Imem.is_open())
	{
		outfile__array_Core_0_Imem.write(reinterpret_cast<char*>(_array_Core_0_Imem), 256*sizeof(_array_Core_0_Imem[0]));
		outfile__array_Core_0_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Imem." << endl;
	}
	ofstream outfile__array_Core_0_Io;
	outfile__array_Core_0_Io.open("results/_array_Core_0_Io_1084166374435268565", ios::binary | ios::out);
	if(outfile__array_Core_0_Io.is_open())
	{
		outfile__array_Core_0_Io.write(reinterpret_cast<char*>(_array_Core_0_Io), 1*sizeof(_array_Core_0_Io[0]));
		outfile__array_Core_0_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Io." << endl;
	}
	ofstream outfile__array_Core_0_Ireset;
	outfile__array_Core_0_Ireset.open("results/_array_Core_0_Ireset_4607366023048755706", ios::binary | ios::out);
	if(outfile__array_Core_0_Ireset.is_open())
	{
		outfile__array_Core_0_Ireset.write(reinterpret_cast<char*>(_array_Core_0_Ireset), 1*sizeof(_array_Core_0_Ireset[0]));
		outfile__array_Core_0_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ireset." << endl;
	}
	ofstream outfile__array_Core_0_Ishunt;
	outfile__array_Core_0_Ishunt.open("results/_array_Core_0_Ishunt_-989290328070848077", ios::binary | ios::out);
	if(outfile__array_Core_0_Ishunt.is_open())
	{
		outfile__array_Core_0_Ishunt.write(reinterpret_cast<char*>(_array_Core_0_Ishunt), 256*sizeof(_array_Core_0_Ishunt[0]));
		outfile__array_Core_0_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ishunt." << endl;
	}
	ofstream outfile__array_Core_0_Ispkthr;
	outfile__array_Core_0_Ispkthr.open("results/_array_Core_0_Ispkthr_-5660680673744745364", ios::binary | ios::out);
	if(outfile__array_Core_0_Ispkthr.is_open())
	{
		outfile__array_Core_0_Ispkthr.write(reinterpret_cast<char*>(_array_Core_0_Ispkthr), 1*sizeof(_array_Core_0_Ispkthr[0]));
		outfile__array_Core_0_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_0_Itau;
	outfile__array_Core_0_Itau.open("results/_array_Core_0_Itau_-8143679863848877702", ios::binary | ios::out);
	if(outfile__array_Core_0_Itau.is_open())
	{
		outfile__array_Core_0_Itau.write(reinterpret_cast<char*>(_array_Core_0_Itau), 1*sizeof(_array_Core_0_Itau[0]));
		outfile__array_Core_0_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Itau." << endl;
	}
	ofstream outfile__array_Core_0_Itauahp;
	outfile__array_Core_0_Itauahp.open("results/_array_Core_0_Itauahp_-1075025851134767176", ios::binary | ios::out);
	if(outfile__array_Core_0_Itauahp.is_open())
	{
		outfile__array_Core_0_Itauahp.write(reinterpret_cast<char*>(_array_Core_0_Itauahp), 1*sizeof(_array_Core_0_Itauahp[0]));
		outfile__array_Core_0_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Itauahp." << endl;
	}
	ofstream outfile__array_Core_0_Ith;
	outfile__array_Core_0_Ith.open("results/_array_Core_0_Ith_4064104576749556957", ios::binary | ios::out);
	if(outfile__array_Core_0_Ith.is_open())
	{
		outfile__array_Core_0_Ith.write(reinterpret_cast<char*>(_array_Core_0_Ith), 1*sizeof(_array_Core_0_Ith[0]));
		outfile__array_Core_0_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ith." << endl;
	}
	ofstream outfile__array_Core_0_Ithahp;
	outfile__array_Core_0_Ithahp.open("results/_array_Core_0_Ithahp_-6709577584838010911", ios::binary | ios::out);
	if(outfile__array_Core_0_Ithahp.is_open())
	{
		outfile__array_Core_0_Ithahp.write(reinterpret_cast<char*>(_array_Core_0_Ithahp), 1*sizeof(_array_Core_0_Ithahp[0]));
		outfile__array_Core_0_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ithahp." << endl;
	}
	ofstream outfile__array_Core_0_kn;
	outfile__array_Core_0_kn.open("results/_array_Core_0_kn_5979603699265593322", ios::binary | ios::out);
	if(outfile__array_Core_0_kn.is_open())
	{
		outfile__array_Core_0_kn.write(reinterpret_cast<char*>(_array_Core_0_kn), 1*sizeof(_array_Core_0_kn[0]));
		outfile__array_Core_0_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kn." << endl;
	}
	ofstream outfile__array_Core_0_kp;
	outfile__array_Core_0_kp.open("results/_array_Core_0_kp_3316653357499627444", ios::binary | ios::out);
	if(outfile__array_Core_0_kp.is_open())
	{
		outfile__array_Core_0_kp.write(reinterpret_cast<char*>(_array_Core_0_kp), 1*sizeof(_array_Core_0_kp[0]));
		outfile__array_Core_0_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kp." << endl;
	}
	ofstream outfile__array_Core_0_lastspike;
	outfile__array_Core_0_lastspike.open("results/_array_Core_0_lastspike_-2171834859635783512", ios::binary | ios::out);
	if(outfile__array_Core_0_lastspike.is_open())
	{
		outfile__array_Core_0_lastspike.write(reinterpret_cast<char*>(_array_Core_0_lastspike), 256*sizeof(_array_Core_0_lastspike[0]));
		outfile__array_Core_0_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_lastspike." << endl;
	}
	ofstream outfile__array_Core_0_M;
	outfile__array_Core_0_M.open("results/_array_Core_0_M_4903241087654204988", ios::binary | ios::out);
	if(outfile__array_Core_0_M.is_open())
	{
		outfile__array_Core_0_M.write(reinterpret_cast<char*>(_array_Core_0_M), 1*sizeof(_array_Core_0_M[0]));
		outfile__array_Core_0_M.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_M." << endl;
	}
	ofstream outfile__array_Core_0_not_refractory;
	outfile__array_Core_0_not_refractory.open("results/_array_Core_0_not_refractory_3420467989455368927", ios::binary | ios::out);
	if(outfile__array_Core_0_not_refractory.is_open())
	{
		outfile__array_Core_0_not_refractory.write(reinterpret_cast<char*>(_array_Core_0_not_refractory), 256*sizeof(_array_Core_0_not_refractory[0]));
		outfile__array_Core_0_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_not_refractory." << endl;
	}
	ofstream outfile__array_Core_0_refP;
	outfile__array_Core_0_refP.open("results/_array_Core_0_refP_-3329689171426004960", ios::binary | ios::out);
	if(outfile__array_Core_0_refP.is_open())
	{
		outfile__array_Core_0_refP.write(reinterpret_cast<char*>(_array_Core_0_refP), 1*sizeof(_array_Core_0_refP[0]));
		outfile__array_Core_0_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_refP." << endl;
	}
	ofstream outfile__array_Core_0_tauca;
	outfile__array_Core_0_tauca.open("results/_array_Core_0_tauca_3270563597597966664", ios::binary | ios::out);
	if(outfile__array_Core_0_tauca.is_open())
	{
		outfile__array_Core_0_tauca.write(reinterpret_cast<char*>(_array_Core_0_tauca), 1*sizeof(_array_Core_0_tauca[0]));
		outfile__array_Core_0_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_tauca." << endl;
	}
	ofstream outfile__array_Core_0_taud;
	outfile__array_Core_0_taud.open("results/_array_Core_0_taud_9081406430530795281", ios::binary | ios::out);
	if(outfile__array_Core_0_taud.is_open())
	{
		outfile__array_Core_0_taud.write(reinterpret_cast<char*>(_array_Core_0_taud), 1*sizeof(_array_Core_0_taud[0]));
		outfile__array_Core_0_taud.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_taud." << endl;
	}
	ofstream outfile__array_Core_0_Ut;
	outfile__array_Core_0_Ut.open("results/_array_Core_0_Ut_3857955444250933043", ios::binary | ios::out);
	if(outfile__array_Core_0_Ut.is_open())
	{
		outfile__array_Core_0_Ut.write(reinterpret_cast<char*>(_array_Core_0_Ut), 1*sizeof(_array_Core_0_Ut[0]));
		outfile__array_Core_0_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ut." << endl;
	}
	ofstream outfile__array_Core_1__spikespace;
	outfile__array_Core_1__spikespace.open("results/_array_Core_1__spikespace_-4620494484289419973", ios::binary | ios::out);
	if(outfile__array_Core_1__spikespace.is_open())
	{
		outfile__array_Core_1__spikespace.write(reinterpret_cast<char*>(_array_Core_1__spikespace), 257*sizeof(_array_Core_1__spikespace[0]));
		outfile__array_Core_1__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1__spikespace." << endl;
	}
	ofstream outfile__array_Core_1_ahp;
	outfile__array_Core_1_ahp.open("results/_array_Core_1_ahp_5764439375566954304", ios::binary | ios::out);
	if(outfile__array_Core_1_ahp.is_open())
	{
		outfile__array_Core_1_ahp.write(reinterpret_cast<char*>(_array_Core_1_ahp), 1*sizeof(_array_Core_1_ahp[0]));
		outfile__array_Core_1_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_ahp." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_ampa;
	outfile__array_Core_1_C_syn_ampa.open("results/_array_Core_1_C_syn_ampa_1530412480928262386", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_ampa.is_open())
	{
		outfile__array_Core_1_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_C_syn_ampa), 256*sizeof(_array_Core_1_C_syn_ampa[0]));
		outfile__array_Core_1_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_gaba_a;
	outfile__array_Core_1_C_syn_gaba_a.open("results/_array_Core_1_C_syn_gaba_a_7716109675647495544", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_C_syn_gaba_a), 256*sizeof(_array_Core_1_C_syn_gaba_a[0]));
		outfile__array_Core_1_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_gaba_b;
	outfile__array_Core_1_C_syn_gaba_b.open("results/_array_Core_1_C_syn_gaba_b_-8467141497900761479", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_C_syn_gaba_b), 256*sizeof(_array_Core_1_C_syn_gaba_b[0]));
		outfile__array_Core_1_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_nmda;
	outfile__array_Core_1_C_syn_nmda.open("results/_array_Core_1_C_syn_nmda_2823946630530817006", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_nmda.is_open())
	{
		outfile__array_Core_1_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_C_syn_nmda), 256*sizeof(_array_Core_1_C_syn_nmda[0]));
		outfile__array_Core_1_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_Cahp;
	outfile__array_Core_1_Cahp.open("results/_array_Core_1_Cahp_8020162693066578476", ios::binary | ios::out);
	if(outfile__array_Core_1_Cahp.is_open())
	{
		outfile__array_Core_1_Cahp.write(reinterpret_cast<char*>(_array_Core_1_Cahp), 1*sizeof(_array_Core_1_Cahp[0]));
		outfile__array_Core_1_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cahp." << endl;
	}
	ofstream outfile__array_Core_1_Cmem;
	outfile__array_Core_1_Cmem.open("results/_array_Core_1_Cmem_580658869536515440", ios::binary | ios::out);
	if(outfile__array_Core_1_Cmem.is_open())
	{
		outfile__array_Core_1_Cmem.write(reinterpret_cast<char*>(_array_Core_1_Cmem), 1*sizeof(_array_Core_1_Cmem[0]));
		outfile__array_Core_1_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cmem." << endl;
	}
	ofstream outfile__array_Core_1_D;
	outfile__array_Core_1_D.open("results/_array_Core_1_D_-7956094604310760427", ios::binary | ios::out);
	if(outfile__array_Core_1_D.is_open())
	{
		outfile__array_Core_1_D.write(reinterpret_cast<char*>(_array_Core_1_D), 256*sizeof(_array_Core_1_D[0]));
		outfile__array_Core_1_D.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_D." << endl;
	}
	ofstream outfile__array_Core_1_i;
	outfile__array_Core_1_i.open("results/_array_Core_1_i_3840368094452757148", ios::binary | ios::out);
	if(outfile__array_Core_1_i.is_open())
	{
		outfile__array_Core_1_i.write(reinterpret_cast<char*>(_array_Core_1_i), 256*sizeof(_array_Core_1_i[0]));
		outfile__array_Core_1_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_i." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_ampa;
	outfile__array_Core_1_I_g_syn_ampa.open("results/_array_Core_1_I_g_syn_ampa_6319935926716750885", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_ampa), 256*sizeof(_array_Core_1_I_g_syn_ampa[0]));
		outfile__array_Core_1_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_gaba_a;
	outfile__array_Core_1_I_g_syn_gaba_a.open("results/_array_Core_1_I_g_syn_gaba_a_7959136894150646346", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_gaba_a), 256*sizeof(_array_Core_1_I_g_syn_gaba_a[0]));
		outfile__array_Core_1_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_gaba_b;
	outfile__array_Core_1_I_g_syn_gaba_b.open("results/_array_Core_1_I_g_syn_gaba_b_6430345841014191339", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_gaba_b), 256*sizeof(_array_Core_1_I_g_syn_gaba_b[0]));
		outfile__array_Core_1_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_nmda;
	outfile__array_Core_1_I_g_syn_nmda.open("results/_array_Core_1_I_g_syn_nmda_-1410512438715660382", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_nmda), 256*sizeof(_array_Core_1_I_g_syn_nmda[0]));
		outfile__array_Core_1_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_ampa;
	outfile__array_Core_1_I_syn_ampa.open("results/_array_Core_1_I_syn_ampa_-3844688785992808374", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_syn_ampa), 256*sizeof(_array_Core_1_I_syn_ampa[0]));
		outfile__array_Core_1_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_gaba_a;
	outfile__array_Core_1_I_syn_gaba_a.open("results/_array_Core_1_I_syn_gaba_a_5598428543687435694", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_syn_gaba_a), 256*sizeof(_array_Core_1_I_syn_gaba_a[0]));
		outfile__array_Core_1_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_gaba_b;
	outfile__array_Core_1_I_syn_gaba_b.open("results/_array_Core_1_I_syn_gaba_b_4932567204426574560", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_syn_gaba_b), 256*sizeof(_array_Core_1_I_syn_gaba_b[0]));
		outfile__array_Core_1_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_nmda;
	outfile__array_Core_1_I_syn_nmda.open("results/_array_Core_1_I_syn_nmda_1768896691192037743", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_syn_nmda), 256*sizeof(_array_Core_1_I_syn_nmda[0]));
		outfile__array_Core_1_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_ampa;
	outfile__array_Core_1_I_tau_syn_ampa.open("results/_array_Core_1_I_tau_syn_ampa_1698652095233197940", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_ampa), 256*sizeof(_array_Core_1_I_tau_syn_ampa[0]));
		outfile__array_Core_1_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_gaba_a;
	outfile__array_Core_1_I_tau_syn_gaba_a.open("results/_array_Core_1_I_tau_syn_gaba_a_2251162963420597792", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_gaba_a), 256*sizeof(_array_Core_1_I_tau_syn_gaba_a[0]));
		outfile__array_Core_1_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_gaba_b;
	outfile__array_Core_1_I_tau_syn_gaba_b.open("results/_array_Core_1_I_tau_syn_gaba_b_-7993124189642601484", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_gaba_b), 256*sizeof(_array_Core_1_I_tau_syn_gaba_b[0]));
		outfile__array_Core_1_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_nmda;
	outfile__array_Core_1_I_tau_syn_nmda.open("results/_array_Core_1_I_tau_syn_nmda_-1848483741199645263", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_nmda), 256*sizeof(_array_Core_1_I_tau_syn_nmda[0]));
		outfile__array_Core_1_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_ampa;
	outfile__array_Core_1_I_wo_syn_ampa.open("results/_array_Core_1_I_wo_syn_ampa_6360082967355746653", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_ampa), 256*sizeof(_array_Core_1_I_wo_syn_ampa[0]));
		outfile__array_Core_1_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_gaba_a;
	outfile__array_Core_1_I_wo_syn_gaba_a.open("results/_array_Core_1_I_wo_syn_gaba_a_-209917988758457583", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_gaba_a), 256*sizeof(_array_Core_1_I_wo_syn_gaba_a[0]));
		outfile__array_Core_1_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_gaba_b;
	outfile__array_Core_1_I_wo_syn_gaba_b.open("results/_array_Core_1_I_wo_syn_gaba_b_-2152201729842576886", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_gaba_b), 256*sizeof(_array_Core_1_I_wo_syn_gaba_b[0]));
		outfile__array_Core_1_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_nmda;
	outfile__array_Core_1_I_wo_syn_nmda.open("results/_array_Core_1_I_wo_syn_nmda_3826379836769514443", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_nmda), 256*sizeof(_array_Core_1_I_wo_syn_nmda[0]));
		outfile__array_Core_1_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_Iagain;
	outfile__array_Core_1_Iagain.open("results/_array_Core_1_Iagain_4209898649417749211", ios::binary | ios::out);
	if(outfile__array_Core_1_Iagain.is_open())
	{
		outfile__array_Core_1_Iagain.write(reinterpret_cast<char*>(_array_Core_1_Iagain), 1*sizeof(_array_Core_1_Iagain[0]));
		outfile__array_Core_1_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iagain." << endl;
	}
	ofstream outfile__array_Core_1_Iahp;
	outfile__array_Core_1_Iahp.open("results/_array_Core_1_Iahp_-8189532777385681941", ios::binary | ios::out);
	if(outfile__array_Core_1_Iahp.is_open())
	{
		outfile__array_Core_1_Iahp.write(reinterpret_cast<char*>(_array_Core_1_Iahp), 256*sizeof(_array_Core_1_Iahp[0]));
		outfile__array_Core_1_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iahp." << endl;
	}
	ofstream outfile__array_Core_1_Ianorm;
	outfile__array_Core_1_Ianorm.open("results/_array_Core_1_Ianorm_2698334933424701996", ios::binary | ios::out);
	if(outfile__array_Core_1_Ianorm.is_open())
	{
		outfile__array_Core_1_Ianorm.write(reinterpret_cast<char*>(_array_Core_1_Ianorm), 1*sizeof(_array_Core_1_Ianorm[0]));
		outfile__array_Core_1_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ianorm." << endl;
	}
	ofstream outfile__array_Core_1_Iath;
	outfile__array_Core_1_Iath.open("results/_array_Core_1_Iath_-8719982314742343978", ios::binary | ios::out);
	if(outfile__array_Core_1_Iath.is_open())
	{
		outfile__array_Core_1_Iath.write(reinterpret_cast<char*>(_array_Core_1_Iath), 1*sizeof(_array_Core_1_Iath[0]));
		outfile__array_Core_1_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iath." << endl;
	}
	ofstream outfile__array_Core_1_Ica;
	outfile__array_Core_1_Ica.open("results/_array_Core_1_Ica_-1508104287497232825", ios::binary | ios::out);
	if(outfile__array_Core_1_Ica.is_open())
	{
		outfile__array_Core_1_Ica.write(reinterpret_cast<char*>(_array_Core_1_Ica), 256*sizeof(_array_Core_1_Ica[0]));
		outfile__array_Core_1_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ica." << endl;
	}
	ofstream outfile__array_Core_1_Iconst;
	outfile__array_Core_1_Iconst.open("results/_array_Core_1_Iconst_-3069532721721120055", ios::binary | ios::out);
	if(outfile__array_Core_1_Iconst.is_open())
	{
		outfile__array_Core_1_Iconst.write(reinterpret_cast<char*>(_array_Core_1_Iconst), 256*sizeof(_array_Core_1_Iconst[0]));
		outfile__array_Core_1_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iconst." << endl;
	}
	ofstream outfile__array_Core_1_Imem;
	outfile__array_Core_1_Imem.open("results/_array_Core_1_Imem_7178315991027520377", ios::binary | ios::out);
	if(outfile__array_Core_1_Imem.is_open())
	{
		outfile__array_Core_1_Imem.write(reinterpret_cast<char*>(_array_Core_1_Imem), 256*sizeof(_array_Core_1_Imem[0]));
		outfile__array_Core_1_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Imem." << endl;
	}
	ofstream outfile__array_Core_1_Io;
	outfile__array_Core_1_Io.open("results/_array_Core_1_Io_1082014731798462072", ios::binary | ios::out);
	if(outfile__array_Core_1_Io.is_open())
	{
		outfile__array_Core_1_Io.write(reinterpret_cast<char*>(_array_Core_1_Io), 1*sizeof(_array_Core_1_Io[0]));
		outfile__array_Core_1_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Io." << endl;
	}
	ofstream outfile__array_Core_1_Ireset;
	outfile__array_Core_1_Ireset.open("results/_array_Core_1_Ireset_-8562128543418674294", ios::binary | ios::out);
	if(outfile__array_Core_1_Ireset.is_open())
	{
		outfile__array_Core_1_Ireset.write(reinterpret_cast<char*>(_array_Core_1_Ireset), 1*sizeof(_array_Core_1_Ireset[0]));
		outfile__array_Core_1_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ireset." << endl;
	}
	ofstream outfile__array_Core_1_Ishunt;
	outfile__array_Core_1_Ishunt.open("results/_array_Core_1_Ishunt_8291724189057553368", ios::binary | ios::out);
	if(outfile__array_Core_1_Ishunt.is_open())
	{
		outfile__array_Core_1_Ishunt.write(reinterpret_cast<char*>(_array_Core_1_Ishunt), 256*sizeof(_array_Core_1_Ishunt[0]));
		outfile__array_Core_1_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ishunt." << endl;
	}
	ofstream outfile__array_Core_1_Ispkthr;
	outfile__array_Core_1_Ispkthr.open("results/_array_Core_1_Ispkthr_-4633797061227013814", ios::binary | ios::out);
	if(outfile__array_Core_1_Ispkthr.is_open())
	{
		outfile__array_Core_1_Ispkthr.write(reinterpret_cast<char*>(_array_Core_1_Ispkthr), 1*sizeof(_array_Core_1_Ispkthr[0]));
		outfile__array_Core_1_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_1_Itau;
	outfile__array_Core_1_Itau.open("results/_array_Core_1_Itau_-4063145680230220687", ios::binary | ios::out);
	if(outfile__array_Core_1_Itau.is_open())
	{
		outfile__array_Core_1_Itau.write(reinterpret_cast<char*>(_array_Core_1_Itau), 1*sizeof(_array_Core_1_Itau[0]));
		outfile__array_Core_1_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Itau." << endl;
	}
	ofstream outfile__array_Core_1_Itauahp;
	outfile__array_Core_1_Itauahp.open("results/_array_Core_1_Itauahp_7759869899916873032", ios::binary | ios::out);
	if(outfile__array_Core_1_Itauahp.is_open())
	{
		outfile__array_Core_1_Itauahp.write(reinterpret_cast<char*>(_array_Core_1_Itauahp), 1*sizeof(_array_Core_1_Itauahp[0]));
		outfile__array_Core_1_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Itauahp." << endl;
	}
	ofstream outfile__array_Core_1_Ith;
	outfile__array_Core_1_Ith.open("results/_array_Core_1_Ith_2726011379835465672", ios::binary | ios::out);
	if(outfile__array_Core_1_Ith.is_open())
	{
		outfile__array_Core_1_Ith.write(reinterpret_cast<char*>(_array_Core_1_Ith), 1*sizeof(_array_Core_1_Ith[0]));
		outfile__array_Core_1_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ith." << endl;
	}
	ofstream outfile__array_Core_1_Ithahp;
	outfile__array_Core_1_Ithahp.open("results/_array_Core_1_Ithahp_-2770598566926750629", ios::binary | ios::out);
	if(outfile__array_Core_1_Ithahp.is_open())
	{
		outfile__array_Core_1_Ithahp.write(reinterpret_cast<char*>(_array_Core_1_Ithahp), 1*sizeof(_array_Core_1_Ithahp[0]));
		outfile__array_Core_1_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ithahp." << endl;
	}
	ofstream outfile__array_Core_1_kn;
	outfile__array_Core_1_kn.open("results/_array_Core_1_kn_-9187948237047029568", ios::binary | ios::out);
	if(outfile__array_Core_1_kn.is_open())
	{
		outfile__array_Core_1_kn.write(reinterpret_cast<char*>(_array_Core_1_kn), 1*sizeof(_array_Core_1_kn[0]));
		outfile__array_Core_1_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kn." << endl;
	}
	ofstream outfile__array_Core_1_kp;
	outfile__array_Core_1_kp.open("results/_array_Core_1_kp_565685675231559835", ios::binary | ios::out);
	if(outfile__array_Core_1_kp.is_open())
	{
		outfile__array_Core_1_kp.write(reinterpret_cast<char*>(_array_Core_1_kp), 1*sizeof(_array_Core_1_kp[0]));
		outfile__array_Core_1_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kp." << endl;
	}
	ofstream outfile__array_Core_1_lastspike;
	outfile__array_Core_1_lastspike.open("results/_array_Core_1_lastspike_67144430341770657", ios::binary | ios::out);
	if(outfile__array_Core_1_lastspike.is_open())
	{
		outfile__array_Core_1_lastspike.write(reinterpret_cast<char*>(_array_Core_1_lastspike), 256*sizeof(_array_Core_1_lastspike[0]));
		outfile__array_Core_1_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_lastspike." << endl;
	}
	ofstream outfile__array_Core_1_M;
	outfile__array_Core_1_M.open("results/_array_Core_1_M_-777557127612388950", ios::binary | ios::out);
	if(outfile__array_Core_1_M.is_open())
	{
		outfile__array_Core_1_M.write(reinterpret_cast<char*>(_array_Core_1_M), 1*sizeof(_array_Core_1_M[0]));
		outfile__array_Core_1_M.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_M." << endl;
	}
	ofstream outfile__array_Core_1_not_refractory;
	outfile__array_Core_1_not_refractory.open("results/_array_Core_1_not_refractory_3193002049033544421", ios::binary | ios::out);
	if(outfile__array_Core_1_not_refractory.is_open())
	{
		outfile__array_Core_1_not_refractory.write(reinterpret_cast<char*>(_array_Core_1_not_refractory), 256*sizeof(_array_Core_1_not_refractory[0]));
		outfile__array_Core_1_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_not_refractory." << endl;
	}
	ofstream outfile__array_Core_1_refP;
	outfile__array_Core_1_refP.open("results/_array_Core_1_refP_-4973388596839845999", ios::binary | ios::out);
	if(outfile__array_Core_1_refP.is_open())
	{
		outfile__array_Core_1_refP.write(reinterpret_cast<char*>(_array_Core_1_refP), 1*sizeof(_array_Core_1_refP[0]));
		outfile__array_Core_1_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_refP." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_1__sub_idx;
	outfile__array_Core_1_subgroup_1__sub_idx.open("results/_array_Core_1_subgroup_1__sub_idx_1906544815507769196", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_1__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_1__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_1__sub_idx), 1*sizeof(_array_Core_1_subgroup_1__sub_idx[0]));
		outfile__array_Core_1_subgroup_1__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_1__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_2__sub_idx;
	outfile__array_Core_1_subgroup_2__sub_idx.open("results/_array_Core_1_subgroup_2__sub_idx_1477729312924537201", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_2__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_2__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_2__sub_idx), 1*sizeof(_array_Core_1_subgroup_2__sub_idx[0]));
		outfile__array_Core_1_subgroup_2__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_2__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_3__sub_idx;
	outfile__array_Core_1_subgroup_3__sub_idx.open("results/_array_Core_1_subgroup_3__sub_idx_7965415403918031828", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_3__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_3__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_3__sub_idx), 1*sizeof(_array_Core_1_subgroup_3__sub_idx[0]));
		outfile__array_Core_1_subgroup_3__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_3__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_4__sub_idx;
	outfile__array_Core_1_subgroup_4__sub_idx.open("results/_array_Core_1_subgroup_4__sub_idx_4649784738778507679", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_4__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_4__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_4__sub_idx), 1*sizeof(_array_Core_1_subgroup_4__sub_idx[0]));
		outfile__array_Core_1_subgroup_4__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_4__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_5__sub_idx;
	outfile__array_Core_1_subgroup_5__sub_idx.open("results/_array_Core_1_subgroup_5__sub_idx_-4513340902033893801", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_5__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_5__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_5__sub_idx), 1*sizeof(_array_Core_1_subgroup_5__sub_idx[0]));
		outfile__array_Core_1_subgroup_5__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_5__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_6__sub_idx;
	outfile__array_Core_1_subgroup_6__sub_idx.open("results/_array_Core_1_subgroup_6__sub_idx_-1727246867915287163", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_6__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_6__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_6__sub_idx), 1*sizeof(_array_Core_1_subgroup_6__sub_idx[0]));
		outfile__array_Core_1_subgroup_6__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_6__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_7__sub_idx;
	outfile__array_Core_1_subgroup_7__sub_idx.open("results/_array_Core_1_subgroup_7__sub_idx_-6608476809869095210", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_7__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_7__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_7__sub_idx), 1*sizeof(_array_Core_1_subgroup_7__sub_idx[0]));
		outfile__array_Core_1_subgroup_7__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_7__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_8__sub_idx;
	outfile__array_Core_1_subgroup_8__sub_idx.open("results/_array_Core_1_subgroup_8__sub_idx_-6069010865414055590", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_8__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_8__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_8__sub_idx), 1*sizeof(_array_Core_1_subgroup_8__sub_idx[0]));
		outfile__array_Core_1_subgroup_8__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_8__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup__sub_idx;
	outfile__array_Core_1_subgroup__sub_idx.open("results/_array_Core_1_subgroup__sub_idx_3405015097186624224", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup__sub_idx), 4*sizeof(_array_Core_1_subgroup__sub_idx[0]));
		outfile__array_Core_1_subgroup__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_tauca;
	outfile__array_Core_1_tauca.open("results/_array_Core_1_tauca_-5472972776631941054", ios::binary | ios::out);
	if(outfile__array_Core_1_tauca.is_open())
	{
		outfile__array_Core_1_tauca.write(reinterpret_cast<char*>(_array_Core_1_tauca), 1*sizeof(_array_Core_1_tauca[0]));
		outfile__array_Core_1_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_tauca." << endl;
	}
	ofstream outfile__array_Core_1_taud;
	outfile__array_Core_1_taud.open("results/_array_Core_1_taud_1138130516599054879", ios::binary | ios::out);
	if(outfile__array_Core_1_taud.is_open())
	{
		outfile__array_Core_1_taud.write(reinterpret_cast<char*>(_array_Core_1_taud), 1*sizeof(_array_Core_1_taud[0]));
		outfile__array_Core_1_taud.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_taud." << endl;
	}
	ofstream outfile__array_Core_1_Ut;
	outfile__array_Core_1_Ut.open("results/_array_Core_1_Ut_-423077496932657498", ios::binary | ios::out);
	if(outfile__array_Core_1_Ut.is_open())
	{
		outfile__array_Core_1_Ut.write(reinterpret_cast<char*>(_array_Core_1_Ut), 1*sizeof(_array_Core_1_Ut[0]));
		outfile__array_Core_1_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ut." << endl;
	}
	ofstream outfile__array_Core_2__spikespace;
	outfile__array_Core_2__spikespace.open("results/_array_Core_2__spikespace_8979233765166498285", ios::binary | ios::out);
	if(outfile__array_Core_2__spikespace.is_open())
	{
		outfile__array_Core_2__spikespace.write(reinterpret_cast<char*>(_array_Core_2__spikespace), 257*sizeof(_array_Core_2__spikespace[0]));
		outfile__array_Core_2__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2__spikespace." << endl;
	}
	ofstream outfile__array_Core_2_ahp;
	outfile__array_Core_2_ahp.open("results/_array_Core_2_ahp_-6007415227051345948", ios::binary | ios::out);
	if(outfile__array_Core_2_ahp.is_open())
	{
		outfile__array_Core_2_ahp.write(reinterpret_cast<char*>(_array_Core_2_ahp), 1*sizeof(_array_Core_2_ahp[0]));
		outfile__array_Core_2_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_ahp." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_ampa;
	outfile__array_Core_2_C_syn_ampa.open("results/_array_Core_2_C_syn_ampa_1110212350733816077", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_ampa.is_open())
	{
		outfile__array_Core_2_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_C_syn_ampa), 256*sizeof(_array_Core_2_C_syn_ampa[0]));
		outfile__array_Core_2_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_gaba_a;
	outfile__array_Core_2_C_syn_gaba_a.open("results/_array_Core_2_C_syn_gaba_a_4466996625359188458", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_C_syn_gaba_a), 256*sizeof(_array_Core_2_C_syn_gaba_a[0]));
		outfile__array_Core_2_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_gaba_b;
	outfile__array_Core_2_C_syn_gaba_b.open("results/_array_Core_2_C_syn_gaba_b_-2992867412496121658", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_C_syn_gaba_b), 256*sizeof(_array_Core_2_C_syn_gaba_b[0]));
		outfile__array_Core_2_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_nmda;
	outfile__array_Core_2_C_syn_nmda.open("results/_array_Core_2_C_syn_nmda_4409754152008980556", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_nmda.is_open())
	{
		outfile__array_Core_2_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_C_syn_nmda), 256*sizeof(_array_Core_2_C_syn_nmda[0]));
		outfile__array_Core_2_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_Cahp;
	outfile__array_Core_2_Cahp.open("results/_array_Core_2_Cahp_-6760354576792990129", ios::binary | ios::out);
	if(outfile__array_Core_2_Cahp.is_open())
	{
		outfile__array_Core_2_Cahp.write(reinterpret_cast<char*>(_array_Core_2_Cahp), 1*sizeof(_array_Core_2_Cahp[0]));
		outfile__array_Core_2_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cahp." << endl;
	}
	ofstream outfile__array_Core_2_Cmem;
	outfile__array_Core_2_Cmem.open("results/_array_Core_2_Cmem_2671779558472305967", ios::binary | ios::out);
	if(outfile__array_Core_2_Cmem.is_open())
	{
		outfile__array_Core_2_Cmem.write(reinterpret_cast<char*>(_array_Core_2_Cmem), 1*sizeof(_array_Core_2_Cmem[0]));
		outfile__array_Core_2_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cmem." << endl;
	}
	ofstream outfile__array_Core_2_D;
	outfile__array_Core_2_D.open("results/_array_Core_2_D_-1707094783576000681", ios::binary | ios::out);
	if(outfile__array_Core_2_D.is_open())
	{
		outfile__array_Core_2_D.write(reinterpret_cast<char*>(_array_Core_2_D), 256*sizeof(_array_Core_2_D[0]));
		outfile__array_Core_2_D.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_D." << endl;
	}
	ofstream outfile__array_Core_2_i;
	outfile__array_Core_2_i.open("results/_array_Core_2_i_-1583034032584054471", ios::binary | ios::out);
	if(outfile__array_Core_2_i.is_open())
	{
		outfile__array_Core_2_i.write(reinterpret_cast<char*>(_array_Core_2_i), 256*sizeof(_array_Core_2_i[0]));
		outfile__array_Core_2_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_i." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_ampa;
	outfile__array_Core_2_I_g_syn_ampa.open("results/_array_Core_2_I_g_syn_ampa_-8632145735612202258", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_ampa), 256*sizeof(_array_Core_2_I_g_syn_ampa[0]));
		outfile__array_Core_2_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_gaba_a;
	outfile__array_Core_2_I_g_syn_gaba_a.open("results/_array_Core_2_I_g_syn_gaba_a_-3346267774306341368", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_gaba_a), 256*sizeof(_array_Core_2_I_g_syn_gaba_a[0]));
		outfile__array_Core_2_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_gaba_b;
	outfile__array_Core_2_I_g_syn_gaba_b.open("results/_array_Core_2_I_g_syn_gaba_b_-7851841043392870335", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_gaba_b), 256*sizeof(_array_Core_2_I_g_syn_gaba_b[0]));
		outfile__array_Core_2_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_nmda;
	outfile__array_Core_2_I_g_syn_nmda.open("results/_array_Core_2_I_g_syn_nmda_8133758247802724461", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_nmda), 256*sizeof(_array_Core_2_I_g_syn_nmda[0]));
		outfile__array_Core_2_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_ampa;
	outfile__array_Core_2_I_syn_ampa.open("results/_array_Core_2_I_syn_ampa_2565737761302851846", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_syn_ampa), 256*sizeof(_array_Core_2_I_syn_ampa[0]));
		outfile__array_Core_2_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_gaba_a;
	outfile__array_Core_2_I_syn_gaba_a.open("results/_array_Core_2_I_syn_gaba_a_-2521174035927448940", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_syn_gaba_a), 256*sizeof(_array_Core_2_I_syn_gaba_a[0]));
		outfile__array_Core_2_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_gaba_b;
	outfile__array_Core_2_I_syn_gaba_b.open("results/_array_Core_2_I_syn_gaba_b_-1199492870907947388", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_syn_gaba_b), 256*sizeof(_array_Core_2_I_syn_gaba_b[0]));
		outfile__array_Core_2_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_nmda;
	outfile__array_Core_2_I_syn_nmda.open("results/_array_Core_2_I_syn_nmda_2707160800816888231", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_syn_nmda), 256*sizeof(_array_Core_2_I_syn_nmda[0]));
		outfile__array_Core_2_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_ampa;
	outfile__array_Core_2_I_tau_syn_ampa.open("results/_array_Core_2_I_tau_syn_ampa_4535447820910067413", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_ampa), 256*sizeof(_array_Core_2_I_tau_syn_ampa[0]));
		outfile__array_Core_2_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_gaba_a;
	outfile__array_Core_2_I_tau_syn_gaba_a.open("results/_array_Core_2_I_tau_syn_gaba_a_-7850210485793511186", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_gaba_a), 256*sizeof(_array_Core_2_I_tau_syn_gaba_a[0]));
		outfile__array_Core_2_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_gaba_b;
	outfile__array_Core_2_I_tau_syn_gaba_b.open("results/_array_Core_2_I_tau_syn_gaba_b_-6511045373769309587", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_gaba_b), 256*sizeof(_array_Core_2_I_tau_syn_gaba_b[0]));
		outfile__array_Core_2_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_nmda;
	outfile__array_Core_2_I_tau_syn_nmda.open("results/_array_Core_2_I_tau_syn_nmda_8255193288510028212", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_nmda), 256*sizeof(_array_Core_2_I_tau_syn_nmda[0]));
		outfile__array_Core_2_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_ampa;
	outfile__array_Core_2_I_wo_syn_ampa.open("results/_array_Core_2_I_wo_syn_ampa_-8473387946407313478", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_ampa), 256*sizeof(_array_Core_2_I_wo_syn_ampa[0]));
		outfile__array_Core_2_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_gaba_a;
	outfile__array_Core_2_I_wo_syn_gaba_a.open("results/_array_Core_2_I_wo_syn_gaba_a_1033072091303644584", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_gaba_a), 256*sizeof(_array_Core_2_I_wo_syn_gaba_a[0]));
		outfile__array_Core_2_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_gaba_b;
	outfile__array_Core_2_I_wo_syn_gaba_b.open("results/_array_Core_2_I_wo_syn_gaba_b_-547887352487008662", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_gaba_b), 256*sizeof(_array_Core_2_I_wo_syn_gaba_b[0]));
		outfile__array_Core_2_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_nmda;
	outfile__array_Core_2_I_wo_syn_nmda.open("results/_array_Core_2_I_wo_syn_nmda_-699158150740260234", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_nmda), 256*sizeof(_array_Core_2_I_wo_syn_nmda[0]));
		outfile__array_Core_2_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_Iagain;
	outfile__array_Core_2_Iagain.open("results/_array_Core_2_Iagain_-3752523365865892451", ios::binary | ios::out);
	if(outfile__array_Core_2_Iagain.is_open())
	{
		outfile__array_Core_2_Iagain.write(reinterpret_cast<char*>(_array_Core_2_Iagain), 1*sizeof(_array_Core_2_Iagain[0]));
		outfile__array_Core_2_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iagain." << endl;
	}
	ofstream outfile__array_Core_2_Iahp;
	outfile__array_Core_2_Iahp.open("results/_array_Core_2_Iahp_-1847455257081031625", ios::binary | ios::out);
	if(outfile__array_Core_2_Iahp.is_open())
	{
		outfile__array_Core_2_Iahp.write(reinterpret_cast<char*>(_array_Core_2_Iahp), 256*sizeof(_array_Core_2_Iahp[0]));
		outfile__array_Core_2_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iahp." << endl;
	}
	ofstream outfile__array_Core_2_Ianorm;
	outfile__array_Core_2_Ianorm.open("results/_array_Core_2_Ianorm_-7939833313737804590", ios::binary | ios::out);
	if(outfile__array_Core_2_Ianorm.is_open())
	{
		outfile__array_Core_2_Ianorm.write(reinterpret_cast<char*>(_array_Core_2_Ianorm), 1*sizeof(_array_Core_2_Ianorm[0]));
		outfile__array_Core_2_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ianorm." << endl;
	}
	ofstream outfile__array_Core_2_Iath;
	outfile__array_Core_2_Iath.open("results/_array_Core_2_Iath_4028632121887358875", ios::binary | ios::out);
	if(outfile__array_Core_2_Iath.is_open())
	{
		outfile__array_Core_2_Iath.write(reinterpret_cast<char*>(_array_Core_2_Iath), 1*sizeof(_array_Core_2_Iath[0]));
		outfile__array_Core_2_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iath." << endl;
	}
	ofstream outfile__array_Core_2_Ica;
	outfile__array_Core_2_Ica.open("results/_array_Core_2_Ica_433348766376037725", ios::binary | ios::out);
	if(outfile__array_Core_2_Ica.is_open())
	{
		outfile__array_Core_2_Ica.write(reinterpret_cast<char*>(_array_Core_2_Ica), 256*sizeof(_array_Core_2_Ica[0]));
		outfile__array_Core_2_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ica." << endl;
	}
	ofstream outfile__array_Core_2_Iconst;
	outfile__array_Core_2_Iconst.open("results/_array_Core_2_Iconst_4878489657850683161", ios::binary | ios::out);
	if(outfile__array_Core_2_Iconst.is_open())
	{
		outfile__array_Core_2_Iconst.write(reinterpret_cast<char*>(_array_Core_2_Iconst), 256*sizeof(_array_Core_2_Iconst[0]));
		outfile__array_Core_2_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iconst." << endl;
	}
	ofstream outfile__array_Core_2_Imem;
	outfile__array_Core_2_Imem.open("results/_array_Core_2_Imem_-6449964962269942558", ios::binary | ios::out);
	if(outfile__array_Core_2_Imem.is_open())
	{
		outfile__array_Core_2_Imem.write(reinterpret_cast<char*>(_array_Core_2_Imem), 256*sizeof(_array_Core_2_Imem[0]));
		outfile__array_Core_2_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Imem." << endl;
	}
	ofstream outfile__array_Core_2_Io;
	outfile__array_Core_2_Io.open("results/_array_Core_2_Io_2520789673547056935", ios::binary | ios::out);
	if(outfile__array_Core_2_Io.is_open())
	{
		outfile__array_Core_2_Io.write(reinterpret_cast<char*>(_array_Core_2_Io), 1*sizeof(_array_Core_2_Io[0]));
		outfile__array_Core_2_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Io." << endl;
	}
	ofstream outfile__array_Core_2_Ireset;
	outfile__array_Core_2_Ireset.open("results/_array_Core_2_Ireset_57320248943864502", ios::binary | ios::out);
	if(outfile__array_Core_2_Ireset.is_open())
	{
		outfile__array_Core_2_Ireset.write(reinterpret_cast<char*>(_array_Core_2_Ireset), 1*sizeof(_array_Core_2_Ireset[0]));
		outfile__array_Core_2_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ireset." << endl;
	}
	ofstream outfile__array_Core_2_Ishunt;
	outfile__array_Core_2_Ishunt.open("results/_array_Core_2_Ishunt_-8329824582128140111", ios::binary | ios::out);
	if(outfile__array_Core_2_Ishunt.is_open())
	{
		outfile__array_Core_2_Ishunt.write(reinterpret_cast<char*>(_array_Core_2_Ishunt), 256*sizeof(_array_Core_2_Ishunt[0]));
		outfile__array_Core_2_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ishunt." << endl;
	}
	ofstream outfile__array_Core_2_Ispkthr;
	outfile__array_Core_2_Ispkthr.open("results/_array_Core_2_Ispkthr_-8015937910228372367", ios::binary | ios::out);
	if(outfile__array_Core_2_Ispkthr.is_open())
	{
		outfile__array_Core_2_Ispkthr.write(reinterpret_cast<char*>(_array_Core_2_Ispkthr), 1*sizeof(_array_Core_2_Ispkthr[0]));
		outfile__array_Core_2_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_2_Itau;
	outfile__array_Core_2_Itau.open("results/_array_Core_2_Itau_2283081471070012658", ios::binary | ios::out);
	if(outfile__array_Core_2_Itau.is_open())
	{
		outfile__array_Core_2_Itau.write(reinterpret_cast<char*>(_array_Core_2_Itau), 1*sizeof(_array_Core_2_Itau[0]));
		outfile__array_Core_2_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Itau." << endl;
	}
	ofstream outfile__array_Core_2_Itauahp;
	outfile__array_Core_2_Itauahp.open("results/_array_Core_2_Itauahp_1007068285844970275", ios::binary | ios::out);
	if(outfile__array_Core_2_Itauahp.is_open())
	{
		outfile__array_Core_2_Itauahp.write(reinterpret_cast<char*>(_array_Core_2_Itauahp), 1*sizeof(_array_Core_2_Itauahp[0]));
		outfile__array_Core_2_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Itauahp." << endl;
	}
	ofstream outfile__array_Core_2_Ith;
	outfile__array_Core_2_Ith.open("results/_array_Core_2_Ith_5424790426859159590", ios::binary | ios::out);
	if(outfile__array_Core_2_Ith.is_open())
	{
		outfile__array_Core_2_Ith.write(reinterpret_cast<char*>(_array_Core_2_Ith), 1*sizeof(_array_Core_2_Ith[0]));
		outfile__array_Core_2_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ith." << endl;
	}
	ofstream outfile__array_Core_2_Ithahp;
	outfile__array_Core_2_Ithahp.open("results/_array_Core_2_Ithahp_-688578289241531216", ios::binary | ios::out);
	if(outfile__array_Core_2_Ithahp.is_open())
	{
		outfile__array_Core_2_Ithahp.write(reinterpret_cast<char*>(_array_Core_2_Ithahp), 1*sizeof(_array_Core_2_Ithahp[0]));
		outfile__array_Core_2_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ithahp." << endl;
	}
	ofstream outfile__array_Core_2_kn;
	outfile__array_Core_2_kn.open("results/_array_Core_2_kn_2633207513040692137", ios::binary | ios::out);
	if(outfile__array_Core_2_kn.is_open())
	{
		outfile__array_Core_2_kn.write(reinterpret_cast<char*>(_array_Core_2_kn), 1*sizeof(_array_Core_2_kn[0]));
		outfile__array_Core_2_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kn." << endl;
	}
	ofstream outfile__array_Core_2_kp;
	outfile__array_Core_2_kp.open("results/_array_Core_2_kp_5434778401711823117", ios::binary | ios::out);
	if(outfile__array_Core_2_kp.is_open())
	{
		outfile__array_Core_2_kp.write(reinterpret_cast<char*>(_array_Core_2_kp), 1*sizeof(_array_Core_2_kp[0]));
		outfile__array_Core_2_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kp." << endl;
	}
	ofstream outfile__array_Core_2_lastspike;
	outfile__array_Core_2_lastspike.open("results/_array_Core_2_lastspike_-5057451790712668950", ios::binary | ios::out);
	if(outfile__array_Core_2_lastspike.is_open())
	{
		outfile__array_Core_2_lastspike.write(reinterpret_cast<char*>(_array_Core_2_lastspike), 256*sizeof(_array_Core_2_lastspike[0]));
		outfile__array_Core_2_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_lastspike." << endl;
	}
	ofstream outfile__array_Core_2_M;
	outfile__array_Core_2_M.open("results/_array_Core_2_M_-1354727415181618280", ios::binary | ios::out);
	if(outfile__array_Core_2_M.is_open())
	{
		outfile__array_Core_2_M.write(reinterpret_cast<char*>(_array_Core_2_M), 1*sizeof(_array_Core_2_M[0]));
		outfile__array_Core_2_M.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_M." << endl;
	}
	ofstream outfile__array_Core_2_not_refractory;
	outfile__array_Core_2_not_refractory.open("results/_array_Core_2_not_refractory_6282342404021372704", ios::binary | ios::out);
	if(outfile__array_Core_2_not_refractory.is_open())
	{
		outfile__array_Core_2_not_refractory.write(reinterpret_cast<char*>(_array_Core_2_not_refractory), 256*sizeof(_array_Core_2_not_refractory[0]));
		outfile__array_Core_2_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_not_refractory." << endl;
	}
	ofstream outfile__array_Core_2_refP;
	outfile__array_Core_2_refP.open("results/_array_Core_2_refP_-7650524368252141959", ios::binary | ios::out);
	if(outfile__array_Core_2_refP.is_open())
	{
		outfile__array_Core_2_refP.write(reinterpret_cast<char*>(_array_Core_2_refP), 1*sizeof(_array_Core_2_refP[0]));
		outfile__array_Core_2_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_refP." << endl;
	}
	ofstream outfile__array_Core_2_tauca;
	outfile__array_Core_2_tauca.open("results/_array_Core_2_tauca_5719729901895964405", ios::binary | ios::out);
	if(outfile__array_Core_2_tauca.is_open())
	{
		outfile__array_Core_2_tauca.write(reinterpret_cast<char*>(_array_Core_2_tauca), 1*sizeof(_array_Core_2_tauca[0]));
		outfile__array_Core_2_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_tauca." << endl;
	}
	ofstream outfile__array_Core_2_taud;
	outfile__array_Core_2_taud.open("results/_array_Core_2_taud_-6157247755840716349", ios::binary | ios::out);
	if(outfile__array_Core_2_taud.is_open())
	{
		outfile__array_Core_2_taud.write(reinterpret_cast<char*>(_array_Core_2_taud), 1*sizeof(_array_Core_2_taud[0]));
		outfile__array_Core_2_taud.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_taud." << endl;
	}
	ofstream outfile__array_Core_2_Ut;
	outfile__array_Core_2_Ut.open("results/_array_Core_2_Ut_6387390240797392142", ios::binary | ios::out);
	if(outfile__array_Core_2_Ut.is_open())
	{
		outfile__array_Core_2_Ut.write(reinterpret_cast<char*>(_array_Core_2_Ut), 1*sizeof(_array_Core_2_Ut[0]));
		outfile__array_Core_2_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ut." << endl;
	}
	ofstream outfile__array_Core_3__spikespace;
	outfile__array_Core_3__spikespace.open("results/_array_Core_3__spikespace_-2186384047476532951", ios::binary | ios::out);
	if(outfile__array_Core_3__spikespace.is_open())
	{
		outfile__array_Core_3__spikespace.write(reinterpret_cast<char*>(_array_Core_3__spikespace), 257*sizeof(_array_Core_3__spikespace[0]));
		outfile__array_Core_3__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3__spikespace." << endl;
	}
	ofstream outfile__array_Core_3_ahp;
	outfile__array_Core_3_ahp.open("results/_array_Core_3_ahp_-8629910914592458524", ios::binary | ios::out);
	if(outfile__array_Core_3_ahp.is_open())
	{
		outfile__array_Core_3_ahp.write(reinterpret_cast<char*>(_array_Core_3_ahp), 1*sizeof(_array_Core_3_ahp[0]));
		outfile__array_Core_3_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_ahp." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_ampa;
	outfile__array_Core_3_C_syn_ampa.open("results/_array_Core_3_C_syn_ampa_-539872789747658515", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_ampa.is_open())
	{
		outfile__array_Core_3_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_C_syn_ampa), 256*sizeof(_array_Core_3_C_syn_ampa[0]));
		outfile__array_Core_3_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_gaba_a;
	outfile__array_Core_3_C_syn_gaba_a.open("results/_array_Core_3_C_syn_gaba_a_-5839135508502198223", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_C_syn_gaba_a), 256*sizeof(_array_Core_3_C_syn_gaba_a[0]));
		outfile__array_Core_3_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_gaba_b;
	outfile__array_Core_3_C_syn_gaba_b.open("results/_array_Core_3_C_syn_gaba_b_-6164467706008367637", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_C_syn_gaba_b), 256*sizeof(_array_Core_3_C_syn_gaba_b[0]));
		outfile__array_Core_3_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_nmda;
	outfile__array_Core_3_C_syn_nmda.open("results/_array_Core_3_C_syn_nmda_-3175324065145151598", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_nmda.is_open())
	{
		outfile__array_Core_3_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_C_syn_nmda), 256*sizeof(_array_Core_3_C_syn_nmda[0]));
		outfile__array_Core_3_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_Cahp;
	outfile__array_Core_3_Cahp.open("results/_array_Core_3_Cahp_3081614930518252453", ios::binary | ios::out);
	if(outfile__array_Core_3_Cahp.is_open())
	{
		outfile__array_Core_3_Cahp.write(reinterpret_cast<char*>(_array_Core_3_Cahp), 1*sizeof(_array_Core_3_Cahp[0]));
		outfile__array_Core_3_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cahp." << endl;
	}
	ofstream outfile__array_Core_3_Cmem;
	outfile__array_Core_3_Cmem.open("results/_array_Core_3_Cmem_1910214020169838385", ios::binary | ios::out);
	if(outfile__array_Core_3_Cmem.is_open())
	{
		outfile__array_Core_3_Cmem.write(reinterpret_cast<char*>(_array_Core_3_Cmem), 1*sizeof(_array_Core_3_Cmem[0]));
		outfile__array_Core_3_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cmem." << endl;
	}
	ofstream outfile__array_Core_3_D;
	outfile__array_Core_3_D.open("results/_array_Core_3_D_-6537236805791720506", ios::binary | ios::out);
	if(outfile__array_Core_3_D.is_open())
	{
		outfile__array_Core_3_D.write(reinterpret_cast<char*>(_array_Core_3_D), 256*sizeof(_array_Core_3_D[0]));
		outfile__array_Core_3_D.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_D." << endl;
	}
	ofstream outfile__array_Core_3_i;
	outfile__array_Core_3_i.open("results/_array_Core_3_i_-1620987143845406355", ios::binary | ios::out);
	if(outfile__array_Core_3_i.is_open())
	{
		outfile__array_Core_3_i.write(reinterpret_cast<char*>(_array_Core_3_i), 256*sizeof(_array_Core_3_i[0]));
		outfile__array_Core_3_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_i." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_ampa;
	outfile__array_Core_3_I_g_syn_ampa.open("results/_array_Core_3_I_g_syn_ampa_-2435821092540266230", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_ampa), 256*sizeof(_array_Core_3_I_g_syn_ampa[0]));
		outfile__array_Core_3_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_gaba_a;
	outfile__array_Core_3_I_g_syn_gaba_a.open("results/_array_Core_3_I_g_syn_gaba_a_1993678113807630574", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_gaba_a), 256*sizeof(_array_Core_3_I_g_syn_gaba_a[0]));
		outfile__array_Core_3_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_gaba_b;
	outfile__array_Core_3_I_g_syn_gaba_b.open("results/_array_Core_3_I_g_syn_gaba_b_5268755374960374436", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_gaba_b), 256*sizeof(_array_Core_3_I_g_syn_gaba_b[0]));
		outfile__array_Core_3_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_nmda;
	outfile__array_Core_3_I_g_syn_nmda.open("results/_array_Core_3_I_g_syn_nmda_6763966195191362974", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_nmda), 256*sizeof(_array_Core_3_I_g_syn_nmda[0]));
		outfile__array_Core_3_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_ampa;
	outfile__array_Core_3_I_syn_ampa.open("results/_array_Core_3_I_syn_ampa_-5045337342620895039", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_syn_ampa), 256*sizeof(_array_Core_3_I_syn_ampa[0]));
		outfile__array_Core_3_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_gaba_a;
	outfile__array_Core_3_I_syn_gaba_a.open("results/_array_Core_3_I_syn_gaba_a_-4364332594020634630", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_syn_gaba_a), 256*sizeof(_array_Core_3_I_syn_gaba_a[0]));
		outfile__array_Core_3_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_gaba_b;
	outfile__array_Core_3_I_syn_gaba_b.open("results/_array_Core_3_I_syn_gaba_b_3479340516669632636", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_syn_gaba_b), 256*sizeof(_array_Core_3_I_syn_gaba_b[0]));
		outfile__array_Core_3_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_nmda;
	outfile__array_Core_3_I_syn_nmda.open("results/_array_Core_3_I_syn_nmda_-6914840296780558937", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_syn_nmda), 256*sizeof(_array_Core_3_I_syn_nmda[0]));
		outfile__array_Core_3_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_ampa;
	outfile__array_Core_3_I_tau_syn_ampa.open("results/_array_Core_3_I_tau_syn_ampa_7302154307876447894", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_ampa), 256*sizeof(_array_Core_3_I_tau_syn_ampa[0]));
		outfile__array_Core_3_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_gaba_a;
	outfile__array_Core_3_I_tau_syn_gaba_a.open("results/_array_Core_3_I_tau_syn_gaba_a_1098474102741096432", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_gaba_a), 256*sizeof(_array_Core_3_I_tau_syn_gaba_a[0]));
		outfile__array_Core_3_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_gaba_b;
	outfile__array_Core_3_I_tau_syn_gaba_b.open("results/_array_Core_3_I_tau_syn_gaba_b_4774551006650762926", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_gaba_b), 256*sizeof(_array_Core_3_I_tau_syn_gaba_b[0]));
		outfile__array_Core_3_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_nmda;
	outfile__array_Core_3_I_tau_syn_nmda.open("results/_array_Core_3_I_tau_syn_nmda_7391133951228292336", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_nmda), 256*sizeof(_array_Core_3_I_tau_syn_nmda[0]));
		outfile__array_Core_3_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_ampa;
	outfile__array_Core_3_I_wo_syn_ampa.open("results/_array_Core_3_I_wo_syn_ampa_-2923050398158653386", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_ampa), 256*sizeof(_array_Core_3_I_wo_syn_ampa[0]));
		outfile__array_Core_3_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_gaba_a;
	outfile__array_Core_3_I_wo_syn_gaba_a.open("results/_array_Core_3_I_wo_syn_gaba_a_872459755825066536", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_gaba_a), 256*sizeof(_array_Core_3_I_wo_syn_gaba_a[0]));
		outfile__array_Core_3_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_gaba_b;
	outfile__array_Core_3_I_wo_syn_gaba_b.open("results/_array_Core_3_I_wo_syn_gaba_b_5119098851532852367", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_gaba_b), 256*sizeof(_array_Core_3_I_wo_syn_gaba_b[0]));
		outfile__array_Core_3_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_nmda;
	outfile__array_Core_3_I_wo_syn_nmda.open("results/_array_Core_3_I_wo_syn_nmda_3896922977893276300", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_nmda), 256*sizeof(_array_Core_3_I_wo_syn_nmda[0]));
		outfile__array_Core_3_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_Iagain;
	outfile__array_Core_3_Iagain.open("results/_array_Core_3_Iagain_3420474718643471686", ios::binary | ios::out);
	if(outfile__array_Core_3_Iagain.is_open())
	{
		outfile__array_Core_3_Iagain.write(reinterpret_cast<char*>(_array_Core_3_Iagain), 1*sizeof(_array_Core_3_Iagain[0]));
		outfile__array_Core_3_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iagain." << endl;
	}
	ofstream outfile__array_Core_3_Iahp;
	outfile__array_Core_3_Iahp.open("results/_array_Core_3_Iahp_7630014196660330384", ios::binary | ios::out);
	if(outfile__array_Core_3_Iahp.is_open())
	{
		outfile__array_Core_3_Iahp.write(reinterpret_cast<char*>(_array_Core_3_Iahp), 256*sizeof(_array_Core_3_Iahp[0]));
		outfile__array_Core_3_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iahp." << endl;
	}
	ofstream outfile__array_Core_3_Ianorm;
	outfile__array_Core_3_Ianorm.open("results/_array_Core_3_Ianorm_1275377254440031677", ios::binary | ios::out);
	if(outfile__array_Core_3_Ianorm.is_open())
	{
		outfile__array_Core_3_Ianorm.write(reinterpret_cast<char*>(_array_Core_3_Ianorm), 1*sizeof(_array_Core_3_Ianorm[0]));
		outfile__array_Core_3_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ianorm." << endl;
	}
	ofstream outfile__array_Core_3_Iath;
	outfile__array_Core_3_Iath.open("results/_array_Core_3_Iath_506310517548808238", ios::binary | ios::out);
	if(outfile__array_Core_3_Iath.is_open())
	{
		outfile__array_Core_3_Iath.write(reinterpret_cast<char*>(_array_Core_3_Iath), 1*sizeof(_array_Core_3_Iath[0]));
		outfile__array_Core_3_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iath." << endl;
	}
	ofstream outfile__array_Core_3_Ica;
	outfile__array_Core_3_Ica.open("results/_array_Core_3_Ica_2555960508907700433", ios::binary | ios::out);
	if(outfile__array_Core_3_Ica.is_open())
	{
		outfile__array_Core_3_Ica.write(reinterpret_cast<char*>(_array_Core_3_Ica), 256*sizeof(_array_Core_3_Ica[0]));
		outfile__array_Core_3_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ica." << endl;
	}
	ofstream outfile__array_Core_3_Iconst;
	outfile__array_Core_3_Iconst.open("results/_array_Core_3_Iconst_-4669787273307464334", ios::binary | ios::out);
	if(outfile__array_Core_3_Iconst.is_open())
	{
		outfile__array_Core_3_Iconst.write(reinterpret_cast<char*>(_array_Core_3_Iconst), 256*sizeof(_array_Core_3_Iconst[0]));
		outfile__array_Core_3_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iconst." << endl;
	}
	ofstream outfile__array_Core_3_Imem;
	outfile__array_Core_3_Imem.open("results/_array_Core_3_Imem_8246848465124285669", ios::binary | ios::out);
	if(outfile__array_Core_3_Imem.is_open())
	{
		outfile__array_Core_3_Imem.write(reinterpret_cast<char*>(_array_Core_3_Imem), 256*sizeof(_array_Core_3_Imem[0]));
		outfile__array_Core_3_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Imem." << endl;
	}
	ofstream outfile__array_Core_3_Io;
	outfile__array_Core_3_Io.open("results/_array_Core_3_Io_1194640139734578493", ios::binary | ios::out);
	if(outfile__array_Core_3_Io.is_open())
	{
		outfile__array_Core_3_Io.write(reinterpret_cast<char*>(_array_Core_3_Io), 1*sizeof(_array_Core_3_Io[0]));
		outfile__array_Core_3_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Io." << endl;
	}
	ofstream outfile__array_Core_3_Ireset;
	outfile__array_Core_3_Ireset.open("results/_array_Core_3_Ireset_4372526594282781214", ios::binary | ios::out);
	if(outfile__array_Core_3_Ireset.is_open())
	{
		outfile__array_Core_3_Ireset.write(reinterpret_cast<char*>(_array_Core_3_Ireset), 1*sizeof(_array_Core_3_Ireset[0]));
		outfile__array_Core_3_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ireset." << endl;
	}
	ofstream outfile__array_Core_3_Ishunt;
	outfile__array_Core_3_Ishunt.open("results/_array_Core_3_Ishunt_-4597300939868124956", ios::binary | ios::out);
	if(outfile__array_Core_3_Ishunt.is_open())
	{
		outfile__array_Core_3_Ishunt.write(reinterpret_cast<char*>(_array_Core_3_Ishunt), 256*sizeof(_array_Core_3_Ishunt[0]));
		outfile__array_Core_3_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ishunt." << endl;
	}
	ofstream outfile__array_Core_3_Ispkthr;
	outfile__array_Core_3_Ispkthr.open("results/_array_Core_3_Ispkthr_4620713278071703697", ios::binary | ios::out);
	if(outfile__array_Core_3_Ispkthr.is_open())
	{
		outfile__array_Core_3_Ispkthr.write(reinterpret_cast<char*>(_array_Core_3_Ispkthr), 1*sizeof(_array_Core_3_Ispkthr[0]));
		outfile__array_Core_3_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_3_Itau;
	outfile__array_Core_3_Itau.open("results/_array_Core_3_Itau_6225801857372065475", ios::binary | ios::out);
	if(outfile__array_Core_3_Itau.is_open())
	{
		outfile__array_Core_3_Itau.write(reinterpret_cast<char*>(_array_Core_3_Itau), 1*sizeof(_array_Core_3_Itau[0]));
		outfile__array_Core_3_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Itau." << endl;
	}
	ofstream outfile__array_Core_3_Itauahp;
	outfile__array_Core_3_Itauahp.open("results/_array_Core_3_Itauahp_5496373629112678920", ios::binary | ios::out);
	if(outfile__array_Core_3_Itauahp.is_open())
	{
		outfile__array_Core_3_Itauahp.write(reinterpret_cast<char*>(_array_Core_3_Itauahp), 1*sizeof(_array_Core_3_Itauahp[0]));
		outfile__array_Core_3_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Itauahp." << endl;
	}
	ofstream outfile__array_Core_3_Ith;
	outfile__array_Core_3_Ith.open("results/_array_Core_3_Ith_-4294763632947845577", ios::binary | ios::out);
	if(outfile__array_Core_3_Ith.is_open())
	{
		outfile__array_Core_3_Ith.write(reinterpret_cast<char*>(_array_Core_3_Ith), 1*sizeof(_array_Core_3_Ith[0]));
		outfile__array_Core_3_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ith." << endl;
	}
	ofstream outfile__array_Core_3_Ithahp;
	outfile__array_Core_3_Ithahp.open("results/_array_Core_3_Ithahp_-8222993707174374056", ios::binary | ios::out);
	if(outfile__array_Core_3_Ithahp.is_open())
	{
		outfile__array_Core_3_Ithahp.write(reinterpret_cast<char*>(_array_Core_3_Ithahp), 1*sizeof(_array_Core_3_Ithahp[0]));
		outfile__array_Core_3_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ithahp." << endl;
	}
	ofstream outfile__array_Core_3_kn;
	outfile__array_Core_3_kn.open("results/_array_Core_3_kn_8706318281707245093", ios::binary | ios::out);
	if(outfile__array_Core_3_kn.is_open())
	{
		outfile__array_Core_3_kn.write(reinterpret_cast<char*>(_array_Core_3_kn), 1*sizeof(_array_Core_3_kn[0]));
		outfile__array_Core_3_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kn." << endl;
	}
	ofstream outfile__array_Core_3_kp;
	outfile__array_Core_3_kp.open("results/_array_Core_3_kp_3262183674629479071", ios::binary | ios::out);
	if(outfile__array_Core_3_kp.is_open())
	{
		outfile__array_Core_3_kp.write(reinterpret_cast<char*>(_array_Core_3_kp), 1*sizeof(_array_Core_3_kp[0]));
		outfile__array_Core_3_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kp." << endl;
	}
	ofstream outfile__array_Core_3_lastspike;
	outfile__array_Core_3_lastspike.open("results/_array_Core_3_lastspike_-952522747101093808", ios::binary | ios::out);
	if(outfile__array_Core_3_lastspike.is_open())
	{
		outfile__array_Core_3_lastspike.write(reinterpret_cast<char*>(_array_Core_3_lastspike), 256*sizeof(_array_Core_3_lastspike[0]));
		outfile__array_Core_3_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_lastspike." << endl;
	}
	ofstream outfile__array_Core_3_M;
	outfile__array_Core_3_M.open("results/_array_Core_3_M_-4272193652544825057", ios::binary | ios::out);
	if(outfile__array_Core_3_M.is_open())
	{
		outfile__array_Core_3_M.write(reinterpret_cast<char*>(_array_Core_3_M), 1*sizeof(_array_Core_3_M[0]));
		outfile__array_Core_3_M.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_M." << endl;
	}
	ofstream outfile__array_Core_3_not_refractory;
	outfile__array_Core_3_not_refractory.open("results/_array_Core_3_not_refractory_-599323673112380405", ios::binary | ios::out);
	if(outfile__array_Core_3_not_refractory.is_open())
	{
		outfile__array_Core_3_not_refractory.write(reinterpret_cast<char*>(_array_Core_3_not_refractory), 256*sizeof(_array_Core_3_not_refractory[0]));
		outfile__array_Core_3_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_not_refractory." << endl;
	}
	ofstream outfile__array_Core_3_refP;
	outfile__array_Core_3_refP.open("results/_array_Core_3_refP_8982487971229607553", ios::binary | ios::out);
	if(outfile__array_Core_3_refP.is_open())
	{
		outfile__array_Core_3_refP.write(reinterpret_cast<char*>(_array_Core_3_refP), 1*sizeof(_array_Core_3_refP[0]));
		outfile__array_Core_3_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_refP." << endl;
	}
	ofstream outfile__array_Core_3_tauca;
	outfile__array_Core_3_tauca.open("results/_array_Core_3_tauca_-8892836898837716379", ios::binary | ios::out);
	if(outfile__array_Core_3_tauca.is_open())
	{
		outfile__array_Core_3_tauca.write(reinterpret_cast<char*>(_array_Core_3_tauca), 1*sizeof(_array_Core_3_tauca[0]));
		outfile__array_Core_3_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_tauca." << endl;
	}
	ofstream outfile__array_Core_3_taud;
	outfile__array_Core_3_taud.open("results/_array_Core_3_taud_-3302246268469754238", ios::binary | ios::out);
	if(outfile__array_Core_3_taud.is_open())
	{
		outfile__array_Core_3_taud.write(reinterpret_cast<char*>(_array_Core_3_taud), 1*sizeof(_array_Core_3_taud[0]));
		outfile__array_Core_3_taud.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_taud." << endl;
	}
	ofstream outfile__array_Core_3_Ut;
	outfile__array_Core_3_Ut.open("results/_array_Core_3_Ut_2694394653390976737", ios::binary | ios::out);
	if(outfile__array_Core_3_Ut.is_open())
	{
		outfile__array_Core_3_Ut.write(reinterpret_cast<char*>(_array_Core_3_Ut), 1*sizeof(_array_Core_3_Ut[0]));
		outfile__array_Core_3_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ut." << endl;
	}
	ofstream outfile__array_defaultclock_dt;
	outfile__array_defaultclock_dt.open("results/_array_defaultclock_dt_-1000445151437733056", ios::binary | ios::out);
	if(outfile__array_defaultclock_dt.is_open())
	{
		outfile__array_defaultclock_dt.write(reinterpret_cast<char*>(_array_defaultclock_dt), 1*sizeof(_array_defaultclock_dt[0]));
		outfile__array_defaultclock_dt.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_dt." << endl;
	}
	ofstream outfile__array_defaultclock_t;
	outfile__array_defaultclock_t.open("results/_array_defaultclock_t_-4830499952346114036", ios::binary | ios::out);
	if(outfile__array_defaultclock_t.is_open())
	{
		outfile__array_defaultclock_t.write(reinterpret_cast<char*>(_array_defaultclock_t), 1*sizeof(_array_defaultclock_t[0]));
		outfile__array_defaultclock_t.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_t." << endl;
	}
	ofstream outfile__array_defaultclock_timestep;
	outfile__array_defaultclock_timestep.open("results/_array_defaultclock_timestep_-2854692179153158353", ios::binary | ios::out);
	if(outfile__array_defaultclock_timestep.is_open())
	{
		outfile__array_defaultclock_timestep.write(reinterpret_cast<char*>(_array_defaultclock_timestep), 1*sizeof(_array_defaultclock_timestep[0]));
		outfile__array_defaultclock_timestep.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_timestep." << endl;
	}
	ofstream outfile__array_mon_neuron_output_1__source_idx;
	outfile__array_mon_neuron_output_1__source_idx.open("results/_array_mon_neuron_output_1__source_idx_-4742320277121016730", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_1__source_idx.is_open())
	{
		outfile__array_mon_neuron_output_1__source_idx.write(reinterpret_cast<char*>(_array_mon_neuron_output_1__source_idx), 1*sizeof(_array_mon_neuron_output_1__source_idx[0]));
		outfile__array_mon_neuron_output_1__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_1__source_idx." << endl;
	}
	ofstream outfile__array_mon_neuron_output_1_count;
	outfile__array_mon_neuron_output_1_count.open("results/_array_mon_neuron_output_1_count_-4310971583057485651", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_1_count.is_open())
	{
		outfile__array_mon_neuron_output_1_count.write(reinterpret_cast<char*>(_array_mon_neuron_output_1_count), 1*sizeof(_array_mon_neuron_output_1_count[0]));
		outfile__array_mon_neuron_output_1_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_1_count." << endl;
	}
	ofstream outfile__array_mon_neuron_output_1_N;
	outfile__array_mon_neuron_output_1_N.open("results/_array_mon_neuron_output_1_N_159106502735251485", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_1_N.is_open())
	{
		outfile__array_mon_neuron_output_1_N.write(reinterpret_cast<char*>(_array_mon_neuron_output_1_N), 1*sizeof(_array_mon_neuron_output_1_N[0]));
		outfile__array_mon_neuron_output_1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_1_N." << endl;
	}
	ofstream outfile__array_mon_neuron_output_2__source_idx;
	outfile__array_mon_neuron_output_2__source_idx.open("results/_array_mon_neuron_output_2__source_idx_-2636038983142934270", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_2__source_idx.is_open())
	{
		outfile__array_mon_neuron_output_2__source_idx.write(reinterpret_cast<char*>(_array_mon_neuron_output_2__source_idx), 1*sizeof(_array_mon_neuron_output_2__source_idx[0]));
		outfile__array_mon_neuron_output_2__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_2__source_idx." << endl;
	}
	ofstream outfile__array_mon_neuron_output_2_count;
	outfile__array_mon_neuron_output_2_count.open("results/_array_mon_neuron_output_2_count_5724248974614129202", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_2_count.is_open())
	{
		outfile__array_mon_neuron_output_2_count.write(reinterpret_cast<char*>(_array_mon_neuron_output_2_count), 1*sizeof(_array_mon_neuron_output_2_count[0]));
		outfile__array_mon_neuron_output_2_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_2_count." << endl;
	}
	ofstream outfile__array_mon_neuron_output_2_N;
	outfile__array_mon_neuron_output_2_N.open("results/_array_mon_neuron_output_2_N_-1474387114226775966", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_2_N.is_open())
	{
		outfile__array_mon_neuron_output_2_N.write(reinterpret_cast<char*>(_array_mon_neuron_output_2_N), 1*sizeof(_array_mon_neuron_output_2_N[0]));
		outfile__array_mon_neuron_output_2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_2_N." << endl;
	}
	ofstream outfile__array_mon_neuron_output_3__source_idx;
	outfile__array_mon_neuron_output_3__source_idx.open("results/_array_mon_neuron_output_3__source_idx_5890416306423563121", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_3__source_idx.is_open())
	{
		outfile__array_mon_neuron_output_3__source_idx.write(reinterpret_cast<char*>(_array_mon_neuron_output_3__source_idx), 1*sizeof(_array_mon_neuron_output_3__source_idx[0]));
		outfile__array_mon_neuron_output_3__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_3__source_idx." << endl;
	}
	ofstream outfile__array_mon_neuron_output_3_count;
	outfile__array_mon_neuron_output_3_count.open("results/_array_mon_neuron_output_3_count_1216955202427845338", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_3_count.is_open())
	{
		outfile__array_mon_neuron_output_3_count.write(reinterpret_cast<char*>(_array_mon_neuron_output_3_count), 1*sizeof(_array_mon_neuron_output_3_count[0]));
		outfile__array_mon_neuron_output_3_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_3_count." << endl;
	}
	ofstream outfile__array_mon_neuron_output_3_N;
	outfile__array_mon_neuron_output_3_N.open("results/_array_mon_neuron_output_3_N_7918003472268611851", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_3_N.is_open())
	{
		outfile__array_mon_neuron_output_3_N.write(reinterpret_cast<char*>(_array_mon_neuron_output_3_N), 1*sizeof(_array_mon_neuron_output_3_N[0]));
		outfile__array_mon_neuron_output_3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_3_N." << endl;
	}
	ofstream outfile__array_mon_neuron_output_4__source_idx;
	outfile__array_mon_neuron_output_4__source_idx.open("results/_array_mon_neuron_output_4__source_idx_3163360660239668322", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_4__source_idx.is_open())
	{
		outfile__array_mon_neuron_output_4__source_idx.write(reinterpret_cast<char*>(_array_mon_neuron_output_4__source_idx), 1*sizeof(_array_mon_neuron_output_4__source_idx[0]));
		outfile__array_mon_neuron_output_4__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_4__source_idx." << endl;
	}
	ofstream outfile__array_mon_neuron_output_4_count;
	outfile__array_mon_neuron_output_4_count.open("results/_array_mon_neuron_output_4_count_-2436735661551155236", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_4_count.is_open())
	{
		outfile__array_mon_neuron_output_4_count.write(reinterpret_cast<char*>(_array_mon_neuron_output_4_count), 1*sizeof(_array_mon_neuron_output_4_count[0]));
		outfile__array_mon_neuron_output_4_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_4_count." << endl;
	}
	ofstream outfile__array_mon_neuron_output_4_N;
	outfile__array_mon_neuron_output_4_N.open("results/_array_mon_neuron_output_4_N_-1322244415948598949", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_4_N.is_open())
	{
		outfile__array_mon_neuron_output_4_N.write(reinterpret_cast<char*>(_array_mon_neuron_output_4_N), 1*sizeof(_array_mon_neuron_output_4_N[0]));
		outfile__array_mon_neuron_output_4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_4_N." << endl;
	}
	ofstream outfile__array_SpikeGenerator0__lastindex;
	outfile__array_SpikeGenerator0__lastindex.open("results/_array_SpikeGenerator0__lastindex_6325581221731849050", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator0__lastindex.is_open())
	{
		outfile__array_SpikeGenerator0__lastindex.write(reinterpret_cast<char*>(_array_SpikeGenerator0__lastindex), 1*sizeof(_array_SpikeGenerator0__lastindex[0]));
		outfile__array_SpikeGenerator0__lastindex.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator0__lastindex." << endl;
	}
	ofstream outfile__array_SpikeGenerator0__period_bins;
	outfile__array_SpikeGenerator0__period_bins.open("results/_array_SpikeGenerator0__period_bins_-8178239667410799241", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator0__period_bins.is_open())
	{
		outfile__array_SpikeGenerator0__period_bins.write(reinterpret_cast<char*>(_array_SpikeGenerator0__period_bins), 1*sizeof(_array_SpikeGenerator0__period_bins[0]));
		outfile__array_SpikeGenerator0__period_bins.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator0__period_bins." << endl;
	}
	ofstream outfile__array_SpikeGenerator0__spikespace;
	outfile__array_SpikeGenerator0__spikespace.open("results/_array_SpikeGenerator0__spikespace_-9007300883782937427", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator0__spikespace.is_open())
	{
		outfile__array_SpikeGenerator0__spikespace.write(reinterpret_cast<char*>(_array_SpikeGenerator0__spikespace), 2*sizeof(_array_SpikeGenerator0__spikespace[0]));
		outfile__array_SpikeGenerator0__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator0__spikespace." << endl;
	}
	ofstream outfile__array_SpikeGenerator0_i;
	outfile__array_SpikeGenerator0_i.open("results/_array_SpikeGenerator0_i_-275447790697926336", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator0_i.is_open())
	{
		outfile__array_SpikeGenerator0_i.write(reinterpret_cast<char*>(_array_SpikeGenerator0_i), 1*sizeof(_array_SpikeGenerator0_i[0]));
		outfile__array_SpikeGenerator0_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator0_i." << endl;
	}
	ofstream outfile__array_SpikeGenerator0_period;
	outfile__array_SpikeGenerator0_period.open("results/_array_SpikeGenerator0_period_3638983690881546513", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator0_period.is_open())
	{
		outfile__array_SpikeGenerator0_period.write(reinterpret_cast<char*>(_array_SpikeGenerator0_period), 1*sizeof(_array_SpikeGenerator0_period[0]));
		outfile__array_SpikeGenerator0_period.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator0_period." << endl;
	}
	ofstream outfile__array_SpikeGenerator1__lastindex;
	outfile__array_SpikeGenerator1__lastindex.open("results/_array_SpikeGenerator1__lastindex_-6672326023361642801", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator1__lastindex.is_open())
	{
		outfile__array_SpikeGenerator1__lastindex.write(reinterpret_cast<char*>(_array_SpikeGenerator1__lastindex), 1*sizeof(_array_SpikeGenerator1__lastindex[0]));
		outfile__array_SpikeGenerator1__lastindex.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator1__lastindex." << endl;
	}
	ofstream outfile__array_SpikeGenerator1__period_bins;
	outfile__array_SpikeGenerator1__period_bins.open("results/_array_SpikeGenerator1__period_bins_3062127035076143279", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator1__period_bins.is_open())
	{
		outfile__array_SpikeGenerator1__period_bins.write(reinterpret_cast<char*>(_array_SpikeGenerator1__period_bins), 1*sizeof(_array_SpikeGenerator1__period_bins[0]));
		outfile__array_SpikeGenerator1__period_bins.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator1__period_bins." << endl;
	}
	ofstream outfile__array_SpikeGenerator1__spikespace;
	outfile__array_SpikeGenerator1__spikespace.open("results/_array_SpikeGenerator1__spikespace_-7923359665266189783", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator1__spikespace.is_open())
	{
		outfile__array_SpikeGenerator1__spikespace.write(reinterpret_cast<char*>(_array_SpikeGenerator1__spikespace), 2*sizeof(_array_SpikeGenerator1__spikespace[0]));
		outfile__array_SpikeGenerator1__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator1__spikespace." << endl;
	}
	ofstream outfile__array_SpikeGenerator1_i;
	outfile__array_SpikeGenerator1_i.open("results/_array_SpikeGenerator1_i_-1711925549121232729", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator1_i.is_open())
	{
		outfile__array_SpikeGenerator1_i.write(reinterpret_cast<char*>(_array_SpikeGenerator1_i), 1*sizeof(_array_SpikeGenerator1_i[0]));
		outfile__array_SpikeGenerator1_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator1_i." << endl;
	}
	ofstream outfile__array_SpikeGenerator1_period;
	outfile__array_SpikeGenerator1_period.open("results/_array_SpikeGenerator1_period_2746130300108540337", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator1_period.is_open())
	{
		outfile__array_SpikeGenerator1_period.write(reinterpret_cast<char*>(_array_SpikeGenerator1_period), 1*sizeof(_array_SpikeGenerator1_period[0]));
		outfile__array_SpikeGenerator1_period.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator1_period." << endl;
	}
	ofstream outfile__array_SpikeGenerator2__lastindex;
	outfile__array_SpikeGenerator2__lastindex.open("results/_array_SpikeGenerator2__lastindex_-8249498038941934749", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator2__lastindex.is_open())
	{
		outfile__array_SpikeGenerator2__lastindex.write(reinterpret_cast<char*>(_array_SpikeGenerator2__lastindex), 1*sizeof(_array_SpikeGenerator2__lastindex[0]));
		outfile__array_SpikeGenerator2__lastindex.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator2__lastindex." << endl;
	}
	ofstream outfile__array_SpikeGenerator2__period_bins;
	outfile__array_SpikeGenerator2__period_bins.open("results/_array_SpikeGenerator2__period_bins_7072064759146411250", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator2__period_bins.is_open())
	{
		outfile__array_SpikeGenerator2__period_bins.write(reinterpret_cast<char*>(_array_SpikeGenerator2__period_bins), 1*sizeof(_array_SpikeGenerator2__period_bins[0]));
		outfile__array_SpikeGenerator2__period_bins.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator2__period_bins." << endl;
	}
	ofstream outfile__array_SpikeGenerator2__spikespace;
	outfile__array_SpikeGenerator2__spikespace.open("results/_array_SpikeGenerator2__spikespace_7662724107244857611", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator2__spikespace.is_open())
	{
		outfile__array_SpikeGenerator2__spikespace.write(reinterpret_cast<char*>(_array_SpikeGenerator2__spikespace), 2*sizeof(_array_SpikeGenerator2__spikespace[0]));
		outfile__array_SpikeGenerator2__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator2__spikespace." << endl;
	}
	ofstream outfile__array_SpikeGenerator2_i;
	outfile__array_SpikeGenerator2_i.open("results/_array_SpikeGenerator2_i_7707399535011675181", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator2_i.is_open())
	{
		outfile__array_SpikeGenerator2_i.write(reinterpret_cast<char*>(_array_SpikeGenerator2_i), 1*sizeof(_array_SpikeGenerator2_i[0]));
		outfile__array_SpikeGenerator2_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator2_i." << endl;
	}
	ofstream outfile__array_SpikeGenerator2_period;
	outfile__array_SpikeGenerator2_period.open("results/_array_SpikeGenerator2_period_-1710393082363592352", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator2_period.is_open())
	{
		outfile__array_SpikeGenerator2_period.write(reinterpret_cast<char*>(_array_SpikeGenerator2_period), 1*sizeof(_array_SpikeGenerator2_period[0]));
		outfile__array_SpikeGenerator2_period.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator2_period." << endl;
	}
	ofstream outfile__array_SpikeGenerator3__lastindex;
	outfile__array_SpikeGenerator3__lastindex.open("results/_array_SpikeGenerator3__lastindex_-2285962494821514860", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator3__lastindex.is_open())
	{
		outfile__array_SpikeGenerator3__lastindex.write(reinterpret_cast<char*>(_array_SpikeGenerator3__lastindex), 1*sizeof(_array_SpikeGenerator3__lastindex[0]));
		outfile__array_SpikeGenerator3__lastindex.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator3__lastindex." << endl;
	}
	ofstream outfile__array_SpikeGenerator3__period_bins;
	outfile__array_SpikeGenerator3__period_bins.open("results/_array_SpikeGenerator3__period_bins_-8670349663537822930", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator3__period_bins.is_open())
	{
		outfile__array_SpikeGenerator3__period_bins.write(reinterpret_cast<char*>(_array_SpikeGenerator3__period_bins), 1*sizeof(_array_SpikeGenerator3__period_bins[0]));
		outfile__array_SpikeGenerator3__period_bins.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator3__period_bins." << endl;
	}
	ofstream outfile__array_SpikeGenerator3__spikespace;
	outfile__array_SpikeGenerator3__spikespace.open("results/_array_SpikeGenerator3__spikespace_668734606398417742", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator3__spikespace.is_open())
	{
		outfile__array_SpikeGenerator3__spikespace.write(reinterpret_cast<char*>(_array_SpikeGenerator3__spikespace), 2*sizeof(_array_SpikeGenerator3__spikespace[0]));
		outfile__array_SpikeGenerator3__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator3__spikespace." << endl;
	}
	ofstream outfile__array_SpikeGenerator3_i;
	outfile__array_SpikeGenerator3_i.open("results/_array_SpikeGenerator3_i_131525053458658454", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator3_i.is_open())
	{
		outfile__array_SpikeGenerator3_i.write(reinterpret_cast<char*>(_array_SpikeGenerator3_i), 1*sizeof(_array_SpikeGenerator3_i[0]));
		outfile__array_SpikeGenerator3_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator3_i." << endl;
	}
	ofstream outfile__array_SpikeGenerator3_period;
	outfile__array_SpikeGenerator3_period.open("results/_array_SpikeGenerator3_period_-5486150079073433875", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator3_period.is_open())
	{
		outfile__array_SpikeGenerator3_period.write(reinterpret_cast<char*>(_array_SpikeGenerator3_period), 1*sizeof(_array_SpikeGenerator3_period[0]));
		outfile__array_SpikeGenerator3_period.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator3_period." << endl;
	}
	ofstream outfile__array_statemonitor_1__indices;
	outfile__array_statemonitor_1__indices.open("results/_array_statemonitor_1__indices_2322065236689746384", ios::binary | ios::out);
	if(outfile__array_statemonitor_1__indices.is_open())
	{
		outfile__array_statemonitor_1__indices.write(reinterpret_cast<char*>(_array_statemonitor_1__indices), 1*sizeof(_array_statemonitor_1__indices[0]));
		outfile__array_statemonitor_1__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1__indices." << endl;
	}
	ofstream outfile__array_statemonitor_1__indices_1;
	outfile__array_statemonitor_1__indices_1.open("results/_array_statemonitor_1__indices_1_-1319485212758818613", ios::binary | ios::out);
	if(outfile__array_statemonitor_1__indices_1.is_open())
	{
		outfile__array_statemonitor_1__indices_1.write(reinterpret_cast<char*>(_array_statemonitor_1__indices_1), 1*sizeof(_array_statemonitor_1__indices_1[0]));
		outfile__array_statemonitor_1__indices_1.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1__indices_1." << endl;
	}
	ofstream outfile__array_statemonitor_1_N;
	outfile__array_statemonitor_1_N.open("results/_array_statemonitor_1_N_3611254112895195961", ios::binary | ios::out);
	if(outfile__array_statemonitor_1_N.is_open())
	{
		outfile__array_statemonitor_1_N.write(reinterpret_cast<char*>(_array_statemonitor_1_N), 1*sizeof(_array_statemonitor_1_N[0]));
		outfile__array_statemonitor_1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1_N." << endl;
	}
	ofstream outfile__array_statemonitor_1_N_1;
	outfile__array_statemonitor_1_N_1.open("results/_array_statemonitor_1_N_1_6066335859776869997", ios::binary | ios::out);
	if(outfile__array_statemonitor_1_N_1.is_open())
	{
		outfile__array_statemonitor_1_N_1.write(reinterpret_cast<char*>(_array_statemonitor_1_N_1), 1*sizeof(_array_statemonitor_1_N_1[0]));
		outfile__array_statemonitor_1_N_1.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1_N_1." << endl;
	}
	ofstream outfile__array_statemonitor_2__indices;
	outfile__array_statemonitor_2__indices.open("results/_array_statemonitor_2__indices_-1188578332479460143", ios::binary | ios::out);
	if(outfile__array_statemonitor_2__indices.is_open())
	{
		outfile__array_statemonitor_2__indices.write(reinterpret_cast<char*>(_array_statemonitor_2__indices), 4*sizeof(_array_statemonitor_2__indices[0]));
		outfile__array_statemonitor_2__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2__indices." << endl;
	}
	ofstream outfile__array_statemonitor_2_N;
	outfile__array_statemonitor_2_N.open("results/_array_statemonitor_2_N_1070253249857174722", ios::binary | ios::out);
	if(outfile__array_statemonitor_2_N.is_open())
	{
		outfile__array_statemonitor_2_N.write(reinterpret_cast<char*>(_array_statemonitor_2_N), 1*sizeof(_array_statemonitor_2_N[0]));
		outfile__array_statemonitor_2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2_N." << endl;
	}
	ofstream outfile__array_statemonitor__indices;
	outfile__array_statemonitor__indices.open("results/_array_statemonitor__indices_8658273718771311504", ios::binary | ios::out);
	if(outfile__array_statemonitor__indices.is_open())
	{
		outfile__array_statemonitor__indices.write(reinterpret_cast<char*>(_array_statemonitor__indices), 1*sizeof(_array_statemonitor__indices[0]));
		outfile__array_statemonitor__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor__indices." << endl;
	}
	ofstream outfile__array_statemonitor__indices_1;
	outfile__array_statemonitor__indices_1.open("results/_array_statemonitor__indices_1_-1155203196453411046", ios::binary | ios::out);
	if(outfile__array_statemonitor__indices_1.is_open())
	{
		outfile__array_statemonitor__indices_1.write(reinterpret_cast<char*>(_array_statemonitor__indices_1), 1*sizeof(_array_statemonitor__indices_1[0]));
		outfile__array_statemonitor__indices_1.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor__indices_1." << endl;
	}
	ofstream outfile__array_statemonitor__indices_2;
	outfile__array_statemonitor__indices_2.open("results/_array_statemonitor__indices_2_6263330610719165284", ios::binary | ios::out);
	if(outfile__array_statemonitor__indices_2.is_open())
	{
		outfile__array_statemonitor__indices_2.write(reinterpret_cast<char*>(_array_statemonitor__indices_2), 4*sizeof(_array_statemonitor__indices_2[0]));
		outfile__array_statemonitor__indices_2.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor__indices_2." << endl;
	}
	ofstream outfile__array_statemonitor_N;
	outfile__array_statemonitor_N.open("results/_array_statemonitor_N_-7727404043274097720", ios::binary | ios::out);
	if(outfile__array_statemonitor_N.is_open())
	{
		outfile__array_statemonitor_N.write(reinterpret_cast<char*>(_array_statemonitor_N), 1*sizeof(_array_statemonitor_N[0]));
		outfile__array_statemonitor_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_N." << endl;
	}
	ofstream outfile__array_statemonitor_N_1;
	outfile__array_statemonitor_N_1.open("results/_array_statemonitor_N_1_-867437076587695544", ios::binary | ios::out);
	if(outfile__array_statemonitor_N_1.is_open())
	{
		outfile__array_statemonitor_N_1.write(reinterpret_cast<char*>(_array_statemonitor_N_1), 1*sizeof(_array_statemonitor_N_1[0]));
		outfile__array_statemonitor_N_1.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_N_1." << endl;
	}
	ofstream outfile__array_statemonitor_N_2;
	outfile__array_statemonitor_N_2.open("results/_array_statemonitor_N_2_2364993614517313715", ios::binary | ios::out);
	if(outfile__array_statemonitor_N_2.is_open())
	{
		outfile__array_statemonitor_N_2.write(reinterpret_cast<char*>(_array_statemonitor_N_2), 1*sizeof(_array_statemonitor_N_2[0]));
		outfile__array_statemonitor_N_2.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_N_2." << endl;
	}

	ofstream outfile__dynamic_array_AMPA0__synaptic_post;
	outfile__dynamic_array_AMPA0__synaptic_post.open("results/_dynamic_array_AMPA0__synaptic_post_-4882158788756160938", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0__synaptic_pre.open("results/_dynamic_array_AMPA0__synaptic_pre_7315808261017364688", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_d.open("results/_dynamic_array_AMPA0_d_4914194240598438770", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_delay.open("results/_dynamic_array_AMPA0_delay_2167052768183760646", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_delay_1.open("results/_dynamic_array_AMPA0_delay_1_-6822165129562123009", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_N_incoming.open("results/_dynamic_array_AMPA0_N_incoming_-9045888409298107021", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_N_outgoing.open("results/_dynamic_array_AMPA0_N_outgoing_-7791829038490421577", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_weight.open("results/_dynamic_array_AMPA0_weight_2741144627845076071", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_AMPA1__synaptic_post;
	outfile__dynamic_array_AMPA1__synaptic_post.open("results/_dynamic_array_AMPA1__synaptic_post_2122905563750049385", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA1__synaptic_post.is_open())
	{
        if (! _dynamic_array_AMPA1__synaptic_post.empty() )
        {
			outfile__dynamic_array_AMPA1__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_AMPA1__synaptic_post[0]), _dynamic_array_AMPA1__synaptic_post.size()*sizeof(_dynamic_array_AMPA1__synaptic_post[0]));
		    outfile__dynamic_array_AMPA1__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA1__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_AMPA1__synaptic_pre;
	outfile__dynamic_array_AMPA1__synaptic_pre.open("results/_dynamic_array_AMPA1__synaptic_pre_-1657345836972779376", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA1__synaptic_pre.is_open())
	{
        if (! _dynamic_array_AMPA1__synaptic_pre.empty() )
        {
			outfile__dynamic_array_AMPA1__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_AMPA1__synaptic_pre[0]), _dynamic_array_AMPA1__synaptic_pre.size()*sizeof(_dynamic_array_AMPA1__synaptic_pre[0]));
		    outfile__dynamic_array_AMPA1__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA1__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_AMPA1_d;
	outfile__dynamic_array_AMPA1_d.open("results/_dynamic_array_AMPA1_d_8590234468725039335", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA1_d.is_open())
	{
        if (! _dynamic_array_AMPA1_d.empty() )
        {
			outfile__dynamic_array_AMPA1_d.write(reinterpret_cast<char*>(&_dynamic_array_AMPA1_d[0]), _dynamic_array_AMPA1_d.size()*sizeof(_dynamic_array_AMPA1_d[0]));
		    outfile__dynamic_array_AMPA1_d.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA1_d." << endl;
	}
	ofstream outfile__dynamic_array_AMPA1_delay;
	outfile__dynamic_array_AMPA1_delay.open("results/_dynamic_array_AMPA1_delay_6656725414360715757", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA1_delay.is_open())
	{
        if (! _dynamic_array_AMPA1_delay.empty() )
        {
			outfile__dynamic_array_AMPA1_delay.write(reinterpret_cast<char*>(&_dynamic_array_AMPA1_delay[0]), _dynamic_array_AMPA1_delay.size()*sizeof(_dynamic_array_AMPA1_delay[0]));
		    outfile__dynamic_array_AMPA1_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA1_delay." << endl;
	}
	ofstream outfile__dynamic_array_AMPA1_delay_1;
	outfile__dynamic_array_AMPA1_delay_1.open("results/_dynamic_array_AMPA1_delay_1_-2608410296294930468", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA1_delay_1.is_open())
	{
        if (! _dynamic_array_AMPA1_delay_1.empty() )
        {
			outfile__dynamic_array_AMPA1_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_AMPA1_delay_1[0]), _dynamic_array_AMPA1_delay_1.size()*sizeof(_dynamic_array_AMPA1_delay_1[0]));
		    outfile__dynamic_array_AMPA1_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA1_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_AMPA1_N_incoming;
	outfile__dynamic_array_AMPA1_N_incoming.open("results/_dynamic_array_AMPA1_N_incoming_7941054858185052491", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA1_N_incoming.is_open())
	{
        if (! _dynamic_array_AMPA1_N_incoming.empty() )
        {
			outfile__dynamic_array_AMPA1_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_AMPA1_N_incoming[0]), _dynamic_array_AMPA1_N_incoming.size()*sizeof(_dynamic_array_AMPA1_N_incoming[0]));
		    outfile__dynamic_array_AMPA1_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA1_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_AMPA1_N_outgoing;
	outfile__dynamic_array_AMPA1_N_outgoing.open("results/_dynamic_array_AMPA1_N_outgoing_-1557629950836563245", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA1_N_outgoing.is_open())
	{
        if (! _dynamic_array_AMPA1_N_outgoing.empty() )
        {
			outfile__dynamic_array_AMPA1_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_AMPA1_N_outgoing[0]), _dynamic_array_AMPA1_N_outgoing.size()*sizeof(_dynamic_array_AMPA1_N_outgoing[0]));
		    outfile__dynamic_array_AMPA1_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA1_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_AMPA1_weight;
	outfile__dynamic_array_AMPA1_weight.open("results/_dynamic_array_AMPA1_weight_-3069280999019598657", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA1_weight.is_open())
	{
        if (! _dynamic_array_AMPA1_weight.empty() )
        {
			outfile__dynamic_array_AMPA1_weight.write(reinterpret_cast<char*>(&_dynamic_array_AMPA1_weight[0]), _dynamic_array_AMPA1_weight.size()*sizeof(_dynamic_array_AMPA1_weight[0]));
		    outfile__dynamic_array_AMPA1_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA1_weight." << endl;
	}
	ofstream outfile__dynamic_array_AMPA2__synaptic_post;
	outfile__dynamic_array_AMPA2__synaptic_post.open("results/_dynamic_array_AMPA2__synaptic_post_7145216918964563247", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA2__synaptic_post.is_open())
	{
        if (! _dynamic_array_AMPA2__synaptic_post.empty() )
        {
			outfile__dynamic_array_AMPA2__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_AMPA2__synaptic_post[0]), _dynamic_array_AMPA2__synaptic_post.size()*sizeof(_dynamic_array_AMPA2__synaptic_post[0]));
		    outfile__dynamic_array_AMPA2__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA2__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_AMPA2__synaptic_pre;
	outfile__dynamic_array_AMPA2__synaptic_pre.open("results/_dynamic_array_AMPA2__synaptic_pre_8948567284734911747", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA2__synaptic_pre.is_open())
	{
        if (! _dynamic_array_AMPA2__synaptic_pre.empty() )
        {
			outfile__dynamic_array_AMPA2__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_AMPA2__synaptic_pre[0]), _dynamic_array_AMPA2__synaptic_pre.size()*sizeof(_dynamic_array_AMPA2__synaptic_pre[0]));
		    outfile__dynamic_array_AMPA2__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA2__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_AMPA2_d;
	outfile__dynamic_array_AMPA2_d.open("results/_dynamic_array_AMPA2_d_2610718386920598036", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA2_d.is_open())
	{
        if (! _dynamic_array_AMPA2_d.empty() )
        {
			outfile__dynamic_array_AMPA2_d.write(reinterpret_cast<char*>(&_dynamic_array_AMPA2_d[0]), _dynamic_array_AMPA2_d.size()*sizeof(_dynamic_array_AMPA2_d[0]));
		    outfile__dynamic_array_AMPA2_d.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA2_d." << endl;
	}
	ofstream outfile__dynamic_array_AMPA2_delay;
	outfile__dynamic_array_AMPA2_delay.open("results/_dynamic_array_AMPA2_delay_-6318432977039463266", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA2_delay.is_open())
	{
        if (! _dynamic_array_AMPA2_delay.empty() )
        {
			outfile__dynamic_array_AMPA2_delay.write(reinterpret_cast<char*>(&_dynamic_array_AMPA2_delay[0]), _dynamic_array_AMPA2_delay.size()*sizeof(_dynamic_array_AMPA2_delay[0]));
		    outfile__dynamic_array_AMPA2_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA2_delay." << endl;
	}
	ofstream outfile__dynamic_array_AMPA2_delay_1;
	outfile__dynamic_array_AMPA2_delay_1.open("results/_dynamic_array_AMPA2_delay_1_2444635270812497749", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA2_delay_1.is_open())
	{
        if (! _dynamic_array_AMPA2_delay_1.empty() )
        {
			outfile__dynamic_array_AMPA2_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_AMPA2_delay_1[0]), _dynamic_array_AMPA2_delay_1.size()*sizeof(_dynamic_array_AMPA2_delay_1[0]));
		    outfile__dynamic_array_AMPA2_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA2_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_AMPA2_N_incoming;
	outfile__dynamic_array_AMPA2_N_incoming.open("results/_dynamic_array_AMPA2_N_incoming_2414385226632297535", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA2_N_incoming.is_open())
	{
        if (! _dynamic_array_AMPA2_N_incoming.empty() )
        {
			outfile__dynamic_array_AMPA2_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_AMPA2_N_incoming[0]), _dynamic_array_AMPA2_N_incoming.size()*sizeof(_dynamic_array_AMPA2_N_incoming[0]));
		    outfile__dynamic_array_AMPA2_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA2_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_AMPA2_N_outgoing;
	outfile__dynamic_array_AMPA2_N_outgoing.open("results/_dynamic_array_AMPA2_N_outgoing_-7244247230894712621", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA2_N_outgoing.is_open())
	{
        if (! _dynamic_array_AMPA2_N_outgoing.empty() )
        {
			outfile__dynamic_array_AMPA2_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_AMPA2_N_outgoing[0]), _dynamic_array_AMPA2_N_outgoing.size()*sizeof(_dynamic_array_AMPA2_N_outgoing[0]));
		    outfile__dynamic_array_AMPA2_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA2_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_AMPA2_weight;
	outfile__dynamic_array_AMPA2_weight.open("results/_dynamic_array_AMPA2_weight_8336303522342813241", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA2_weight.is_open())
	{
        if (! _dynamic_array_AMPA2_weight.empty() )
        {
			outfile__dynamic_array_AMPA2_weight.write(reinterpret_cast<char*>(&_dynamic_array_AMPA2_weight[0]), _dynamic_array_AMPA2_weight.size()*sizeof(_dynamic_array_AMPA2_weight[0]));
		    outfile__dynamic_array_AMPA2_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA2_weight." << endl;
	}
	ofstream outfile__dynamic_array_AMPA3__synaptic_post;
	outfile__dynamic_array_AMPA3__synaptic_post.open("results/_dynamic_array_AMPA3__synaptic_post_1063200553471724048", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA3__synaptic_post.is_open())
	{
        if (! _dynamic_array_AMPA3__synaptic_post.empty() )
        {
			outfile__dynamic_array_AMPA3__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_AMPA3__synaptic_post[0]), _dynamic_array_AMPA3__synaptic_post.size()*sizeof(_dynamic_array_AMPA3__synaptic_post[0]));
		    outfile__dynamic_array_AMPA3__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA3__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_AMPA3__synaptic_pre;
	outfile__dynamic_array_AMPA3__synaptic_pre.open("results/_dynamic_array_AMPA3__synaptic_pre_-2788156990599175466", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA3__synaptic_pre.is_open())
	{
        if (! _dynamic_array_AMPA3__synaptic_pre.empty() )
        {
			outfile__dynamic_array_AMPA3__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_AMPA3__synaptic_pre[0]), _dynamic_array_AMPA3__synaptic_pre.size()*sizeof(_dynamic_array_AMPA3__synaptic_pre[0]));
		    outfile__dynamic_array_AMPA3__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA3__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_AMPA3_d;
	outfile__dynamic_array_AMPA3_d.open("results/_dynamic_array_AMPA3_d_467239252309632580", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA3_d.is_open())
	{
        if (! _dynamic_array_AMPA3_d.empty() )
        {
			outfile__dynamic_array_AMPA3_d.write(reinterpret_cast<char*>(&_dynamic_array_AMPA3_d[0]), _dynamic_array_AMPA3_d.size()*sizeof(_dynamic_array_AMPA3_d[0]));
		    outfile__dynamic_array_AMPA3_d.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA3_d." << endl;
	}
	ofstream outfile__dynamic_array_AMPA3_delay;
	outfile__dynamic_array_AMPA3_delay.open("results/_dynamic_array_AMPA3_delay_7781480630678227633", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA3_delay.is_open())
	{
        if (! _dynamic_array_AMPA3_delay.empty() )
        {
			outfile__dynamic_array_AMPA3_delay.write(reinterpret_cast<char*>(&_dynamic_array_AMPA3_delay[0]), _dynamic_array_AMPA3_delay.size()*sizeof(_dynamic_array_AMPA3_delay[0]));
		    outfile__dynamic_array_AMPA3_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA3_delay." << endl;
	}
	ofstream outfile__dynamic_array_AMPA3_delay_1;
	outfile__dynamic_array_AMPA3_delay_1.open("results/_dynamic_array_AMPA3_delay_1_-7937856205479196801", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA3_delay_1.is_open())
	{
        if (! _dynamic_array_AMPA3_delay_1.empty() )
        {
			outfile__dynamic_array_AMPA3_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_AMPA3_delay_1[0]), _dynamic_array_AMPA3_delay_1.size()*sizeof(_dynamic_array_AMPA3_delay_1[0]));
		    outfile__dynamic_array_AMPA3_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA3_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_AMPA3_N_incoming;
	outfile__dynamic_array_AMPA3_N_incoming.open("results/_dynamic_array_AMPA3_N_incoming_4249967360549789335", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA3_N_incoming.is_open())
	{
        if (! _dynamic_array_AMPA3_N_incoming.empty() )
        {
			outfile__dynamic_array_AMPA3_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_AMPA3_N_incoming[0]), _dynamic_array_AMPA3_N_incoming.size()*sizeof(_dynamic_array_AMPA3_N_incoming[0]));
		    outfile__dynamic_array_AMPA3_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA3_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_AMPA3_N_outgoing;
	outfile__dynamic_array_AMPA3_N_outgoing.open("results/_dynamic_array_AMPA3_N_outgoing_6794594258884832413", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA3_N_outgoing.is_open())
	{
        if (! _dynamic_array_AMPA3_N_outgoing.empty() )
        {
			outfile__dynamic_array_AMPA3_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_AMPA3_N_outgoing[0]), _dynamic_array_AMPA3_N_outgoing.size()*sizeof(_dynamic_array_AMPA3_N_outgoing[0]));
		    outfile__dynamic_array_AMPA3_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA3_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_AMPA3_weight;
	outfile__dynamic_array_AMPA3_weight.open("results/_dynamic_array_AMPA3_weight_-5490044284147889537", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA3_weight.is_open())
	{
        if (! _dynamic_array_AMPA3_weight.empty() )
        {
			outfile__dynamic_array_AMPA3_weight.write(reinterpret_cast<char*>(&_dynamic_array_AMPA3_weight[0]), _dynamic_array_AMPA3_weight.size()*sizeof(_dynamic_array_AMPA3_weight[0]));
		    outfile__dynamic_array_AMPA3_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA3_weight." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_output_1_i;
	outfile__dynamic_array_mon_neuron_output_1_i.open("results/_dynamic_array_mon_neuron_output_1_i_-6097402286772308050", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_output_1_i.is_open())
	{
        if (! _dynamic_array_mon_neuron_output_1_i.empty() )
        {
			outfile__dynamic_array_mon_neuron_output_1_i.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_output_1_i[0]), _dynamic_array_mon_neuron_output_1_i.size()*sizeof(_dynamic_array_mon_neuron_output_1_i[0]));
		    outfile__dynamic_array_mon_neuron_output_1_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_output_1_i." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_output_1_t;
	outfile__dynamic_array_mon_neuron_output_1_t.open("results/_dynamic_array_mon_neuron_output_1_t_2329733502933046053", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_output_1_t.is_open())
	{
        if (! _dynamic_array_mon_neuron_output_1_t.empty() )
        {
			outfile__dynamic_array_mon_neuron_output_1_t.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_output_1_t[0]), _dynamic_array_mon_neuron_output_1_t.size()*sizeof(_dynamic_array_mon_neuron_output_1_t[0]));
		    outfile__dynamic_array_mon_neuron_output_1_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_output_1_t." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_output_2_i;
	outfile__dynamic_array_mon_neuron_output_2_i.open("results/_dynamic_array_mon_neuron_output_2_i_5372725481861600058", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_output_2_i.is_open())
	{
        if (! _dynamic_array_mon_neuron_output_2_i.empty() )
        {
			outfile__dynamic_array_mon_neuron_output_2_i.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_output_2_i[0]), _dynamic_array_mon_neuron_output_2_i.size()*sizeof(_dynamic_array_mon_neuron_output_2_i[0]));
		    outfile__dynamic_array_mon_neuron_output_2_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_output_2_i." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_output_2_t;
	outfile__dynamic_array_mon_neuron_output_2_t.open("results/_dynamic_array_mon_neuron_output_2_t_4051059093885361504", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_output_2_t.is_open())
	{
        if (! _dynamic_array_mon_neuron_output_2_t.empty() )
        {
			outfile__dynamic_array_mon_neuron_output_2_t.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_output_2_t[0]), _dynamic_array_mon_neuron_output_2_t.size()*sizeof(_dynamic_array_mon_neuron_output_2_t[0]));
		    outfile__dynamic_array_mon_neuron_output_2_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_output_2_t." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_output_3_i;
	outfile__dynamic_array_mon_neuron_output_3_i.open("results/_dynamic_array_mon_neuron_output_3_i_-6935787895059936806", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_output_3_i.is_open())
	{
        if (! _dynamic_array_mon_neuron_output_3_i.empty() )
        {
			outfile__dynamic_array_mon_neuron_output_3_i.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_output_3_i[0]), _dynamic_array_mon_neuron_output_3_i.size()*sizeof(_dynamic_array_mon_neuron_output_3_i[0]));
		    outfile__dynamic_array_mon_neuron_output_3_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_output_3_i." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_output_3_t;
	outfile__dynamic_array_mon_neuron_output_3_t.open("results/_dynamic_array_mon_neuron_output_3_t_-4315795663632746756", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_output_3_t.is_open())
	{
        if (! _dynamic_array_mon_neuron_output_3_t.empty() )
        {
			outfile__dynamic_array_mon_neuron_output_3_t.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_output_3_t[0]), _dynamic_array_mon_neuron_output_3_t.size()*sizeof(_dynamic_array_mon_neuron_output_3_t[0]));
		    outfile__dynamic_array_mon_neuron_output_3_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_output_3_t." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_output_4_i;
	outfile__dynamic_array_mon_neuron_output_4_i.open("results/_dynamic_array_mon_neuron_output_4_i_-7083875521066715900", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_output_4_i.is_open())
	{
        if (! _dynamic_array_mon_neuron_output_4_i.empty() )
        {
			outfile__dynamic_array_mon_neuron_output_4_i.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_output_4_i[0]), _dynamic_array_mon_neuron_output_4_i.size()*sizeof(_dynamic_array_mon_neuron_output_4_i[0]));
		    outfile__dynamic_array_mon_neuron_output_4_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_output_4_i." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_output_4_t;
	outfile__dynamic_array_mon_neuron_output_4_t.open("results/_dynamic_array_mon_neuron_output_4_t_3668649562950224882", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_output_4_t.is_open())
	{
        if (! _dynamic_array_mon_neuron_output_4_t.empty() )
        {
			outfile__dynamic_array_mon_neuron_output_4_t.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_output_4_t[0]), _dynamic_array_mon_neuron_output_4_t.size()*sizeof(_dynamic_array_mon_neuron_output_4_t[0]));
		    outfile__dynamic_array_mon_neuron_output_4_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_output_4_t." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator0__timebins;
	outfile__dynamic_array_SpikeGenerator0__timebins.open("results/_dynamic_array_SpikeGenerator0__timebins_-3922762470988260125", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator0__timebins.is_open())
	{
        if (! _dynamic_array_SpikeGenerator0__timebins.empty() )
        {
			outfile__dynamic_array_SpikeGenerator0__timebins.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator0__timebins[0]), _dynamic_array_SpikeGenerator0__timebins.size()*sizeof(_dynamic_array_SpikeGenerator0__timebins[0]));
		    outfile__dynamic_array_SpikeGenerator0__timebins.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator0__timebins." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator0_neuron_index;
	outfile__dynamic_array_SpikeGenerator0_neuron_index.open("results/_dynamic_array_SpikeGenerator0_neuron_index_-8293733958008092827", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator0_neuron_index.is_open())
	{
        if (! _dynamic_array_SpikeGenerator0_neuron_index.empty() )
        {
			outfile__dynamic_array_SpikeGenerator0_neuron_index.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator0_neuron_index[0]), _dynamic_array_SpikeGenerator0_neuron_index.size()*sizeof(_dynamic_array_SpikeGenerator0_neuron_index[0]));
		    outfile__dynamic_array_SpikeGenerator0_neuron_index.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator0_neuron_index." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator0_spike_number;
	outfile__dynamic_array_SpikeGenerator0_spike_number.open("results/_dynamic_array_SpikeGenerator0_spike_number_8659981818794135187", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator0_spike_number.is_open())
	{
        if (! _dynamic_array_SpikeGenerator0_spike_number.empty() )
        {
			outfile__dynamic_array_SpikeGenerator0_spike_number.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator0_spike_number[0]), _dynamic_array_SpikeGenerator0_spike_number.size()*sizeof(_dynamic_array_SpikeGenerator0_spike_number[0]));
		    outfile__dynamic_array_SpikeGenerator0_spike_number.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator0_spike_number." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator0_spike_time;
	outfile__dynamic_array_SpikeGenerator0_spike_time.open("results/_dynamic_array_SpikeGenerator0_spike_time_28802187234162725", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator0_spike_time.is_open())
	{
        if (! _dynamic_array_SpikeGenerator0_spike_time.empty() )
        {
			outfile__dynamic_array_SpikeGenerator0_spike_time.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator0_spike_time[0]), _dynamic_array_SpikeGenerator0_spike_time.size()*sizeof(_dynamic_array_SpikeGenerator0_spike_time[0]));
		    outfile__dynamic_array_SpikeGenerator0_spike_time.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator0_spike_time." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator1__timebins;
	outfile__dynamic_array_SpikeGenerator1__timebins.open("results/_dynamic_array_SpikeGenerator1__timebins_-8472641656030818354", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator1__timebins.is_open())
	{
        if (! _dynamic_array_SpikeGenerator1__timebins.empty() )
        {
			outfile__dynamic_array_SpikeGenerator1__timebins.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator1__timebins[0]), _dynamic_array_SpikeGenerator1__timebins.size()*sizeof(_dynamic_array_SpikeGenerator1__timebins[0]));
		    outfile__dynamic_array_SpikeGenerator1__timebins.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator1__timebins." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator1_neuron_index;
	outfile__dynamic_array_SpikeGenerator1_neuron_index.open("results/_dynamic_array_SpikeGenerator1_neuron_index_-784320170180018075", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator1_neuron_index.is_open())
	{
        if (! _dynamic_array_SpikeGenerator1_neuron_index.empty() )
        {
			outfile__dynamic_array_SpikeGenerator1_neuron_index.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator1_neuron_index[0]), _dynamic_array_SpikeGenerator1_neuron_index.size()*sizeof(_dynamic_array_SpikeGenerator1_neuron_index[0]));
		    outfile__dynamic_array_SpikeGenerator1_neuron_index.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator1_neuron_index." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator1_spike_number;
	outfile__dynamic_array_SpikeGenerator1_spike_number.open("results/_dynamic_array_SpikeGenerator1_spike_number_-585498620561309662", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator1_spike_number.is_open())
	{
        if (! _dynamic_array_SpikeGenerator1_spike_number.empty() )
        {
			outfile__dynamic_array_SpikeGenerator1_spike_number.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator1_spike_number[0]), _dynamic_array_SpikeGenerator1_spike_number.size()*sizeof(_dynamic_array_SpikeGenerator1_spike_number[0]));
		    outfile__dynamic_array_SpikeGenerator1_spike_number.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator1_spike_number." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator1_spike_time;
	outfile__dynamic_array_SpikeGenerator1_spike_time.open("results/_dynamic_array_SpikeGenerator1_spike_time_6831082882700846771", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator1_spike_time.is_open())
	{
        if (! _dynamic_array_SpikeGenerator1_spike_time.empty() )
        {
			outfile__dynamic_array_SpikeGenerator1_spike_time.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator1_spike_time[0]), _dynamic_array_SpikeGenerator1_spike_time.size()*sizeof(_dynamic_array_SpikeGenerator1_spike_time[0]));
		    outfile__dynamic_array_SpikeGenerator1_spike_time.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator1_spike_time." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator2__timebins;
	outfile__dynamic_array_SpikeGenerator2__timebins.open("results/_dynamic_array_SpikeGenerator2__timebins_-5811674462732950106", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator2__timebins.is_open())
	{
        if (! _dynamic_array_SpikeGenerator2__timebins.empty() )
        {
			outfile__dynamic_array_SpikeGenerator2__timebins.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator2__timebins[0]), _dynamic_array_SpikeGenerator2__timebins.size()*sizeof(_dynamic_array_SpikeGenerator2__timebins[0]));
		    outfile__dynamic_array_SpikeGenerator2__timebins.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator2__timebins." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator2_neuron_index;
	outfile__dynamic_array_SpikeGenerator2_neuron_index.open("results/_dynamic_array_SpikeGenerator2_neuron_index_-3713960385786749890", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator2_neuron_index.is_open())
	{
        if (! _dynamic_array_SpikeGenerator2_neuron_index.empty() )
        {
			outfile__dynamic_array_SpikeGenerator2_neuron_index.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator2_neuron_index[0]), _dynamic_array_SpikeGenerator2_neuron_index.size()*sizeof(_dynamic_array_SpikeGenerator2_neuron_index[0]));
		    outfile__dynamic_array_SpikeGenerator2_neuron_index.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator2_neuron_index." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator2_spike_number;
	outfile__dynamic_array_SpikeGenerator2_spike_number.open("results/_dynamic_array_SpikeGenerator2_spike_number_-7192445208242247202", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator2_spike_number.is_open())
	{
        if (! _dynamic_array_SpikeGenerator2_spike_number.empty() )
        {
			outfile__dynamic_array_SpikeGenerator2_spike_number.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator2_spike_number[0]), _dynamic_array_SpikeGenerator2_spike_number.size()*sizeof(_dynamic_array_SpikeGenerator2_spike_number[0]));
		    outfile__dynamic_array_SpikeGenerator2_spike_number.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator2_spike_number." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator2_spike_time;
	outfile__dynamic_array_SpikeGenerator2_spike_time.open("results/_dynamic_array_SpikeGenerator2_spike_time_6872971862273825142", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator2_spike_time.is_open())
	{
        if (! _dynamic_array_SpikeGenerator2_spike_time.empty() )
        {
			outfile__dynamic_array_SpikeGenerator2_spike_time.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator2_spike_time[0]), _dynamic_array_SpikeGenerator2_spike_time.size()*sizeof(_dynamic_array_SpikeGenerator2_spike_time[0]));
		    outfile__dynamic_array_SpikeGenerator2_spike_time.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator2_spike_time." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator3__timebins;
	outfile__dynamic_array_SpikeGenerator3__timebins.open("results/_dynamic_array_SpikeGenerator3__timebins_7888230762104305718", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator3__timebins.is_open())
	{
        if (! _dynamic_array_SpikeGenerator3__timebins.empty() )
        {
			outfile__dynamic_array_SpikeGenerator3__timebins.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator3__timebins[0]), _dynamic_array_SpikeGenerator3__timebins.size()*sizeof(_dynamic_array_SpikeGenerator3__timebins[0]));
		    outfile__dynamic_array_SpikeGenerator3__timebins.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator3__timebins." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator3_neuron_index;
	outfile__dynamic_array_SpikeGenerator3_neuron_index.open("results/_dynamic_array_SpikeGenerator3_neuron_index_6825034837925892219", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator3_neuron_index.is_open())
	{
        if (! _dynamic_array_SpikeGenerator3_neuron_index.empty() )
        {
			outfile__dynamic_array_SpikeGenerator3_neuron_index.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator3_neuron_index[0]), _dynamic_array_SpikeGenerator3_neuron_index.size()*sizeof(_dynamic_array_SpikeGenerator3_neuron_index[0]));
		    outfile__dynamic_array_SpikeGenerator3_neuron_index.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator3_neuron_index." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator3_spike_number;
	outfile__dynamic_array_SpikeGenerator3_spike_number.open("results/_dynamic_array_SpikeGenerator3_spike_number_-7532161536197394829", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator3_spike_number.is_open())
	{
        if (! _dynamic_array_SpikeGenerator3_spike_number.empty() )
        {
			outfile__dynamic_array_SpikeGenerator3_spike_number.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator3_spike_number[0]), _dynamic_array_SpikeGenerator3_spike_number.size()*sizeof(_dynamic_array_SpikeGenerator3_spike_number[0]));
		    outfile__dynamic_array_SpikeGenerator3_spike_number.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator3_spike_number." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator3_spike_time;
	outfile__dynamic_array_SpikeGenerator3_spike_time.open("results/_dynamic_array_SpikeGenerator3_spike_time_3891358617252498163", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator3_spike_time.is_open())
	{
        if (! _dynamic_array_SpikeGenerator3_spike_time.empty() )
        {
			outfile__dynamic_array_SpikeGenerator3_spike_time.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator3_spike_time[0]), _dynamic_array_SpikeGenerator3_spike_time.size()*sizeof(_dynamic_array_SpikeGenerator3_spike_time[0]));
		    outfile__dynamic_array_SpikeGenerator3_spike_time.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator3_spike_time." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_1_t;
	outfile__dynamic_array_statemonitor_1_t.open("results/_dynamic_array_statemonitor_1_t_-2953326312187846662", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_1_t.is_open())
	{
        if (! _dynamic_array_statemonitor_1_t.empty() )
        {
			outfile__dynamic_array_statemonitor_1_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_1_t[0]), _dynamic_array_statemonitor_1_t.size()*sizeof(_dynamic_array_statemonitor_1_t[0]));
		    outfile__dynamic_array_statemonitor_1_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_1_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_1_t_1;
	outfile__dynamic_array_statemonitor_1_t_1.open("results/_dynamic_array_statemonitor_1_t_1_6512643835324008596", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_1_t_1.is_open())
	{
        if (! _dynamic_array_statemonitor_1_t_1.empty() )
        {
			outfile__dynamic_array_statemonitor_1_t_1.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_1_t_1[0]), _dynamic_array_statemonitor_1_t_1.size()*sizeof(_dynamic_array_statemonitor_1_t_1[0]));
		    outfile__dynamic_array_statemonitor_1_t_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_1_t_1." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_2_t;
	outfile__dynamic_array_statemonitor_2_t.open("results/_dynamic_array_statemonitor_2_t_-3382667867899245122", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_statemonitor_t;
	outfile__dynamic_array_statemonitor_t.open("results/_dynamic_array_statemonitor_t_-6021058220831817119", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_t.is_open())
	{
        if (! _dynamic_array_statemonitor_t.empty() )
        {
			outfile__dynamic_array_statemonitor_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_t[0]), _dynamic_array_statemonitor_t.size()*sizeof(_dynamic_array_statemonitor_t[0]));
		    outfile__dynamic_array_statemonitor_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_t_1;
	outfile__dynamic_array_statemonitor_t_1.open("results/_dynamic_array_statemonitor_t_1_-5865036104969196659", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_t_1.is_open())
	{
        if (! _dynamic_array_statemonitor_t_1.empty() )
        {
			outfile__dynamic_array_statemonitor_t_1.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_t_1[0]), _dynamic_array_statemonitor_t_1.size()*sizeof(_dynamic_array_statemonitor_t_1[0]));
		    outfile__dynamic_array_statemonitor_t_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_t_1." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_t_2;
	outfile__dynamic_array_statemonitor_t_2.open("results/_dynamic_array_statemonitor_t_2_-8681050820286509014", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_t_2.is_open())
	{
        if (! _dynamic_array_statemonitor_t_2.empty() )
        {
			outfile__dynamic_array_statemonitor_t_2.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_t_2[0]), _dynamic_array_statemonitor_t_2.size()*sizeof(_dynamic_array_statemonitor_t_2[0]));
		    outfile__dynamic_array_statemonitor_t_2.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_t_2." << endl;
	}

	ofstream outfile__dynamic_array_statemonitor_1_I_syn_ampa;
	outfile__dynamic_array_statemonitor_1_I_syn_ampa.open("results/_dynamic_array_statemonitor_1_I_syn_ampa_6676530485298576759", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_1_I_syn_ampa.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_1_I_syn_ampa.n; n++)
        {
            if (! _dynamic_array_statemonitor_1_I_syn_ampa(n).empty())
            {
                outfile__dynamic_array_statemonitor_1_I_syn_ampa.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_1_I_syn_ampa(n, 0)), _dynamic_array_statemonitor_1_I_syn_ampa.m*sizeof(_dynamic_array_statemonitor_1_I_syn_ampa(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_1_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_1_I_syn_ampa." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_1_I_syn_ampa_1;
	outfile__dynamic_array_statemonitor_1_I_syn_ampa_1.open("results/_dynamic_array_statemonitor_1_I_syn_ampa_1_-869142567946974351", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_1_I_syn_ampa_1.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_1_I_syn_ampa_1.n; n++)
        {
            if (! _dynamic_array_statemonitor_1_I_syn_ampa_1(n).empty())
            {
                outfile__dynamic_array_statemonitor_1_I_syn_ampa_1.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_1_I_syn_ampa_1(n, 0)), _dynamic_array_statemonitor_1_I_syn_ampa_1.m*sizeof(_dynamic_array_statemonitor_1_I_syn_ampa_1(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_1_I_syn_ampa_1.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_1_I_syn_ampa_1." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_2_Imem;
	outfile__dynamic_array_statemonitor_2_Imem.open("results/_dynamic_array_statemonitor_2_Imem_-8834642682849546328", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_2_Imem.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_2_Imem.n; n++)
        {
            if (! _dynamic_array_statemonitor_2_Imem(n).empty())
            {
                outfile__dynamic_array_statemonitor_2_Imem.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_2_Imem(n, 0)), _dynamic_array_statemonitor_2_Imem.m*sizeof(_dynamic_array_statemonitor_2_Imem(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_2_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_2_Imem." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_I_syn_ampa;
	outfile__dynamic_array_statemonitor_I_syn_ampa.open("results/_dynamic_array_statemonitor_I_syn_ampa_-4563778731344378134", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_I_syn_ampa.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_I_syn_ampa.n; n++)
        {
            if (! _dynamic_array_statemonitor_I_syn_ampa(n).empty())
            {
                outfile__dynamic_array_statemonitor_I_syn_ampa.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_I_syn_ampa(n, 0)), _dynamic_array_statemonitor_I_syn_ampa.m*sizeof(_dynamic_array_statemonitor_I_syn_ampa(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_I_syn_ampa." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_I_syn_ampa_1;
	outfile__dynamic_array_statemonitor_I_syn_ampa_1.open("results/_dynamic_array_statemonitor_I_syn_ampa_1_344498784884740816", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_I_syn_ampa_1.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_I_syn_ampa_1.n; n++)
        {
            if (! _dynamic_array_statemonitor_I_syn_ampa_1(n).empty())
            {
                outfile__dynamic_array_statemonitor_I_syn_ampa_1.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_I_syn_ampa_1(n, 0)), _dynamic_array_statemonitor_I_syn_ampa_1.m*sizeof(_dynamic_array_statemonitor_I_syn_ampa_1(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_I_syn_ampa_1.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_I_syn_ampa_1." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_Iahp;
	outfile__dynamic_array_statemonitor_Iahp.open("results/_dynamic_array_statemonitor_Iahp_-1862139101782520555", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_Iahp.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_Iahp.n; n++)
        {
            if (! _dynamic_array_statemonitor_Iahp(n).empty())
            {
                outfile__dynamic_array_statemonitor_Iahp.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_Iahp(n, 0)), _dynamic_array_statemonitor_Iahp.m*sizeof(_dynamic_array_statemonitor_Iahp(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_Iahp." << endl;
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
	if(_static_array__array_statemonitor_2__indices!=0)
	{
		delete [] _static_array__array_statemonitor_2__indices;
		_static_array__array_statemonitor_2__indices = 0;
	}
	if(_static_array__array_statemonitor__indices_2!=0)
	{
		delete [] _static_array__array_statemonitor__indices_2;
		_static_array__array_statemonitor__indices_2 = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator0__timebins!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator0__timebins;
		_static_array__dynamic_array_SpikeGenerator0__timebins = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator0_neuron_index!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator0_neuron_index;
		_static_array__dynamic_array_SpikeGenerator0_neuron_index = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator0_spike_number!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator0_spike_number;
		_static_array__dynamic_array_SpikeGenerator0_spike_number = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator0_spike_time!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator0_spike_time;
		_static_array__dynamic_array_SpikeGenerator0_spike_time = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator1__timebins!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator1__timebins;
		_static_array__dynamic_array_SpikeGenerator1__timebins = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator1_neuron_index!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator1_neuron_index;
		_static_array__dynamic_array_SpikeGenerator1_neuron_index = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator1_spike_number!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator1_spike_number;
		_static_array__dynamic_array_SpikeGenerator1_spike_number = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator1_spike_time!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator1_spike_time;
		_static_array__dynamic_array_SpikeGenerator1_spike_time = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator2__timebins!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator2__timebins;
		_static_array__dynamic_array_SpikeGenerator2__timebins = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator2_neuron_index!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator2_neuron_index;
		_static_array__dynamic_array_SpikeGenerator2_neuron_index = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator2_spike_number!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator2_spike_number;
		_static_array__dynamic_array_SpikeGenerator2_spike_number = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator2_spike_time!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator2_spike_time;
		_static_array__dynamic_array_SpikeGenerator2_spike_time = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator3__timebins!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator3__timebins;
		_static_array__dynamic_array_SpikeGenerator3__timebins = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator3_neuron_index!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator3_neuron_index;
		_static_array__dynamic_array_SpikeGenerator3_neuron_index = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator3_spike_number!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator3_spike_number;
		_static_array__dynamic_array_SpikeGenerator3_spike_number = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator3_spike_time!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator3_spike_time;
		_static_array__dynamic_array_SpikeGenerator3_spike_time = 0;
	}
}

