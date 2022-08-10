
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
int32_t * _array_AMPA2_N;
const int _num__array_AMPA2_N = 1;
int32_t * _array_AMPA3_N;
const int _num__array_AMPA3_N = 1;
int32_t * _array_AMPA7_N;
const int _num__array_AMPA7_N = 1;
int32_t * _array_AMPA_STD1_N;
const int _num__array_AMPA_STD1_N = 1;
int32_t * _array_AMPA_STD8_N;
const int _num__array_AMPA_STD8_N = 1;
int32_t * _array_Core_0__spikespace;
const int _num__array_Core_0__spikespace = 257;
double * _array_Core_0_alpha_ahp;
const int _num__array_Core_0_alpha_ahp = 256;
double * _array_Core_0_alpha_ampa;
const int _num__array_Core_0_alpha_ampa = 256;
double * _array_Core_0_alpha_ampa_std;
const int _num__array_Core_0_alpha_ampa_std = 256;
double * _array_Core_0_alpha_gaba_a;
const int _num__array_Core_0_alpha_gaba_a = 256;
double * _array_Core_0_alpha_gaba_b;
const int _num__array_Core_0_alpha_gaba_b = 256;
double * _array_Core_0_alpha_nmda;
const int _num__array_Core_0_alpha_nmda = 256;
double * _array_Core_0_alpha_soma;
const int _num__array_Core_0_alpha_soma = 256;
double * _array_Core_0_Campa;
const int _num__array_Core_0_Campa = 256;
double * _array_Core_0_Campa_std;
const int _num__array_Core_0_Campa_std = 256;
double * _array_Core_0_Cgaba_a;
const int _num__array_Core_0_Cgaba_a = 256;
double * _array_Core_0_Cgaba_b;
const int _num__array_Core_0_Cgaba_b = 256;
double * _array_Core_0_Cnmda;
const int _num__array_Core_0_Cnmda = 256;
double * _array_Core_0_Csoma_ahp;
const int _num__array_Core_0_Csoma_ahp = 1;
double * _array_Core_0_Csoma_mem;
const int _num__array_Core_0_Csoma_mem = 1;
int32_t * _array_Core_0_i;
const int _num__array_Core_0_i = 256;
double * _array_Core_0_I0;
const int _num__array_Core_0_I0 = 1;
double * _array_Core_0_Iampa;
const int _num__array_Core_0_Iampa = 256;
double * _array_Core_0_Iampa_std;
const int _num__array_Core_0_Iampa_std = 256;
double * _array_Core_0_Iampa_std_tau;
const int _num__array_Core_0_Iampa_std_tau = 256;
double * _array_Core_0_Iampa_tau;
const int _num__array_Core_0_Iampa_tau = 256;
double * _array_Core_0_Iampa_w0;
const int _num__array_Core_0_Iampa_w0 = 256;
double * _array_Core_0_Idischarge_w;
const int _num__array_Core_0_Idischarge_w = 256;
double * _array_Core_0_Igaba_a;
const int _num__array_Core_0_Igaba_a = 256;
double * _array_Core_0_Igaba_a_tau;
const int _num__array_Core_0_Igaba_a_tau = 256;
double * _array_Core_0_Igaba_a_w0;
const int _num__array_Core_0_Igaba_a_w0 = 256;
double * _array_Core_0_Igaba_b;
const int _num__array_Core_0_Igaba_b = 256;
double * _array_Core_0_Igaba_b_tau;
const int _num__array_Core_0_Igaba_b_tau = 256;
double * _array_Core_0_Igaba_b_w0;
const int _num__array_Core_0_Igaba_b_w0 = 256;
double * _array_Core_0_Inmda;
const int _num__array_Core_0_Inmda = 256;
double * _array_Core_0_Inmda_tau;
const int _num__array_Core_0_Inmda_tau = 256;
double * _array_Core_0_Inmda_thr;
const int _num__array_Core_0_Inmda_thr = 256;
double * _array_Core_0_Inmda_w0;
const int _num__array_Core_0_Inmda_w0 = 256;
double * _array_Core_0_Isoma_ahp;
const int _num__array_Core_0_Isoma_ahp = 256;
double * _array_Core_0_Isoma_ahp_g;
const int _num__array_Core_0_Isoma_ahp_g = 1;
double * _array_Core_0_Isoma_ahp_tau;
const int _num__array_Core_0_Isoma_ahp_tau = 1;
double * _array_Core_0_Isoma_ahp_w;
const int _num__array_Core_0_Isoma_ahp_w = 256;
double * _array_Core_0_Isoma_const;
const int _num__array_Core_0_Isoma_const = 256;
double * _array_Core_0_Isoma_dpi_tau;
const int _num__array_Core_0_Isoma_dpi_tau = 1;
double * _array_Core_0_Isoma_mem;
const int _num__array_Core_0_Isoma_mem = 256;
double * _array_Core_0_Isoma_pfb_gain;
const int _num__array_Core_0_Isoma_pfb_gain = 1;
double * _array_Core_0_Isoma_pfb_norm;
const int _num__array_Core_0_Isoma_pfb_norm = 1;
double * _array_Core_0_Isoma_pfb_th;
const int _num__array_Core_0_Isoma_pfb_th = 1;
double * _array_Core_0_Isoma_reset;
const int _num__array_Core_0_Isoma_reset = 1;
double * _array_Core_0_Isoma_th;
const int _num__array_Core_0_Isoma_th = 1;
double * _array_Core_0_kn;
const int _num__array_Core_0_kn = 1;
double * _array_Core_0_kp;
const int _num__array_Core_0_kp = 1;
double * _array_Core_0_lastspike;
const int _num__array_Core_0_lastspike = 256;
char * _array_Core_0_not_refractory;
const int _num__array_Core_0_not_refractory = 256;
double * _array_Core_0_soma_refP;
const int _num__array_Core_0_soma_refP = 1;
double * _array_Core_0_std_pulse;
const int _num__array_Core_0_std_pulse = 256;
double * _array_Core_0_tau_pulse;
const int _num__array_Core_0_tau_pulse = 256;
double * _array_Core_0_Ut;
const int _num__array_Core_0_Ut = 1;
double * _array_Core_0_Va;
const int _num__array_Core_0_Va = 256;
double * _array_Core_0_Vw;
const int _num__array_Core_0_Vw = 256;
int32_t * _array_Core_1__spikespace;
const int _num__array_Core_1__spikespace = 257;
double * _array_Core_1_alpha_ahp;
const int _num__array_Core_1_alpha_ahp = 256;
double * _array_Core_1_alpha_ampa;
const int _num__array_Core_1_alpha_ampa = 256;
double * _array_Core_1_alpha_ampa_std;
const int _num__array_Core_1_alpha_ampa_std = 256;
double * _array_Core_1_alpha_gaba_a;
const int _num__array_Core_1_alpha_gaba_a = 256;
double * _array_Core_1_alpha_gaba_b;
const int _num__array_Core_1_alpha_gaba_b = 256;
double * _array_Core_1_alpha_nmda;
const int _num__array_Core_1_alpha_nmda = 256;
double * _array_Core_1_alpha_soma;
const int _num__array_Core_1_alpha_soma = 256;
double * _array_Core_1_Campa;
const int _num__array_Core_1_Campa = 256;
double * _array_Core_1_Campa_std;
const int _num__array_Core_1_Campa_std = 256;
double * _array_Core_1_Cgaba_a;
const int _num__array_Core_1_Cgaba_a = 256;
double * _array_Core_1_Cgaba_b;
const int _num__array_Core_1_Cgaba_b = 256;
double * _array_Core_1_Cnmda;
const int _num__array_Core_1_Cnmda = 256;
double * _array_Core_1_Csoma_ahp;
const int _num__array_Core_1_Csoma_ahp = 1;
double * _array_Core_1_Csoma_mem;
const int _num__array_Core_1_Csoma_mem = 1;
int32_t * _array_Core_1_i;
const int _num__array_Core_1_i = 256;
double * _array_Core_1_I0;
const int _num__array_Core_1_I0 = 1;
double * _array_Core_1_Iampa;
const int _num__array_Core_1_Iampa = 256;
double * _array_Core_1_Iampa_std;
const int _num__array_Core_1_Iampa_std = 256;
double * _array_Core_1_Iampa_std_tau;
const int _num__array_Core_1_Iampa_std_tau = 256;
double * _array_Core_1_Iampa_tau;
const int _num__array_Core_1_Iampa_tau = 256;
double * _array_Core_1_Iampa_w0;
const int _num__array_Core_1_Iampa_w0 = 256;
double * _array_Core_1_Idischarge_w;
const int _num__array_Core_1_Idischarge_w = 256;
double * _array_Core_1_Igaba_a;
const int _num__array_Core_1_Igaba_a = 256;
double * _array_Core_1_Igaba_a_tau;
const int _num__array_Core_1_Igaba_a_tau = 256;
double * _array_Core_1_Igaba_a_w0;
const int _num__array_Core_1_Igaba_a_w0 = 256;
double * _array_Core_1_Igaba_b;
const int _num__array_Core_1_Igaba_b = 256;
double * _array_Core_1_Igaba_b_tau;
const int _num__array_Core_1_Igaba_b_tau = 256;
double * _array_Core_1_Igaba_b_w0;
const int _num__array_Core_1_Igaba_b_w0 = 256;
double * _array_Core_1_Inmda;
const int _num__array_Core_1_Inmda = 256;
double * _array_Core_1_Inmda_tau;
const int _num__array_Core_1_Inmda_tau = 256;
double * _array_Core_1_Inmda_thr;
const int _num__array_Core_1_Inmda_thr = 256;
double * _array_Core_1_Inmda_w0;
const int _num__array_Core_1_Inmda_w0 = 256;
double * _array_Core_1_Isoma_ahp;
const int _num__array_Core_1_Isoma_ahp = 256;
double * _array_Core_1_Isoma_ahp_g;
const int _num__array_Core_1_Isoma_ahp_g = 1;
double * _array_Core_1_Isoma_ahp_tau;
const int _num__array_Core_1_Isoma_ahp_tau = 1;
double * _array_Core_1_Isoma_ahp_w;
const int _num__array_Core_1_Isoma_ahp_w = 256;
double * _array_Core_1_Isoma_const;
const int _num__array_Core_1_Isoma_const = 256;
double * _array_Core_1_Isoma_dpi_tau;
const int _num__array_Core_1_Isoma_dpi_tau = 1;
double * _array_Core_1_Isoma_mem;
const int _num__array_Core_1_Isoma_mem = 256;
double * _array_Core_1_Isoma_pfb_gain;
const int _num__array_Core_1_Isoma_pfb_gain = 1;
double * _array_Core_1_Isoma_pfb_norm;
const int _num__array_Core_1_Isoma_pfb_norm = 1;
double * _array_Core_1_Isoma_pfb_th;
const int _num__array_Core_1_Isoma_pfb_th = 1;
double * _array_Core_1_Isoma_reset;
const int _num__array_Core_1_Isoma_reset = 1;
double * _array_Core_1_Isoma_th;
const int _num__array_Core_1_Isoma_th = 1;
double * _array_Core_1_kn;
const int _num__array_Core_1_kn = 1;
double * _array_Core_1_kp;
const int _num__array_Core_1_kp = 1;
double * _array_Core_1_lastspike;
const int _num__array_Core_1_lastspike = 256;
char * _array_Core_1_not_refractory;
const int _num__array_Core_1_not_refractory = 256;
double * _array_Core_1_soma_refP;
const int _num__array_Core_1_soma_refP = 1;
double * _array_Core_1_std_pulse;
const int _num__array_Core_1_std_pulse = 256;
int32_t * _array_Core_1_subgroup_2__sub_idx;
const int _num__array_Core_1_subgroup_2__sub_idx = 40;
double * _array_Core_1_tau_pulse;
const int _num__array_Core_1_tau_pulse = 256;
double * _array_Core_1_Ut;
const int _num__array_Core_1_Ut = 1;
double * _array_Core_1_Va;
const int _num__array_Core_1_Va = 256;
double * _array_Core_1_Vw;
const int _num__array_Core_1_Vw = 256;
int32_t * _array_Core_2__spikespace;
const int _num__array_Core_2__spikespace = 257;
double * _array_Core_2_alpha_ahp;
const int _num__array_Core_2_alpha_ahp = 256;
double * _array_Core_2_alpha_ampa;
const int _num__array_Core_2_alpha_ampa = 256;
double * _array_Core_2_alpha_ampa_std;
const int _num__array_Core_2_alpha_ampa_std = 256;
double * _array_Core_2_alpha_gaba_a;
const int _num__array_Core_2_alpha_gaba_a = 256;
double * _array_Core_2_alpha_gaba_b;
const int _num__array_Core_2_alpha_gaba_b = 256;
double * _array_Core_2_alpha_nmda;
const int _num__array_Core_2_alpha_nmda = 256;
double * _array_Core_2_alpha_soma;
const int _num__array_Core_2_alpha_soma = 256;
double * _array_Core_2_Campa;
const int _num__array_Core_2_Campa = 256;
double * _array_Core_2_Campa_std;
const int _num__array_Core_2_Campa_std = 256;
double * _array_Core_2_Cgaba_a;
const int _num__array_Core_2_Cgaba_a = 256;
double * _array_Core_2_Cgaba_b;
const int _num__array_Core_2_Cgaba_b = 256;
double * _array_Core_2_Cnmda;
const int _num__array_Core_2_Cnmda = 256;
double * _array_Core_2_Csoma_ahp;
const int _num__array_Core_2_Csoma_ahp = 1;
double * _array_Core_2_Csoma_mem;
const int _num__array_Core_2_Csoma_mem = 1;
int32_t * _array_Core_2_i;
const int _num__array_Core_2_i = 256;
double * _array_Core_2_I0;
const int _num__array_Core_2_I0 = 1;
double * _array_Core_2_Iampa;
const int _num__array_Core_2_Iampa = 256;
double * _array_Core_2_Iampa_std;
const int _num__array_Core_2_Iampa_std = 256;
double * _array_Core_2_Iampa_std_tau;
const int _num__array_Core_2_Iampa_std_tau = 256;
double * _array_Core_2_Iampa_tau;
const int _num__array_Core_2_Iampa_tau = 256;
double * _array_Core_2_Iampa_w0;
const int _num__array_Core_2_Iampa_w0 = 256;
double * _array_Core_2_Idischarge_w;
const int _num__array_Core_2_Idischarge_w = 256;
double * _array_Core_2_Igaba_a;
const int _num__array_Core_2_Igaba_a = 256;
double * _array_Core_2_Igaba_a_tau;
const int _num__array_Core_2_Igaba_a_tau = 256;
double * _array_Core_2_Igaba_a_w0;
const int _num__array_Core_2_Igaba_a_w0 = 256;
double * _array_Core_2_Igaba_b;
const int _num__array_Core_2_Igaba_b = 256;
double * _array_Core_2_Igaba_b_tau;
const int _num__array_Core_2_Igaba_b_tau = 256;
double * _array_Core_2_Igaba_b_w0;
const int _num__array_Core_2_Igaba_b_w0 = 256;
double * _array_Core_2_Inmda;
const int _num__array_Core_2_Inmda = 256;
double * _array_Core_2_Inmda_tau;
const int _num__array_Core_2_Inmda_tau = 256;
double * _array_Core_2_Inmda_thr;
const int _num__array_Core_2_Inmda_thr = 256;
double * _array_Core_2_Inmda_w0;
const int _num__array_Core_2_Inmda_w0 = 256;
double * _array_Core_2_Isoma_ahp;
const int _num__array_Core_2_Isoma_ahp = 256;
double * _array_Core_2_Isoma_ahp_g;
const int _num__array_Core_2_Isoma_ahp_g = 1;
double * _array_Core_2_Isoma_ahp_tau;
const int _num__array_Core_2_Isoma_ahp_tau = 1;
double * _array_Core_2_Isoma_ahp_w;
const int _num__array_Core_2_Isoma_ahp_w = 256;
double * _array_Core_2_Isoma_const;
const int _num__array_Core_2_Isoma_const = 256;
double * _array_Core_2_Isoma_dpi_tau;
const int _num__array_Core_2_Isoma_dpi_tau = 1;
double * _array_Core_2_Isoma_mem;
const int _num__array_Core_2_Isoma_mem = 256;
double * _array_Core_2_Isoma_pfb_gain;
const int _num__array_Core_2_Isoma_pfb_gain = 1;
double * _array_Core_2_Isoma_pfb_norm;
const int _num__array_Core_2_Isoma_pfb_norm = 1;
double * _array_Core_2_Isoma_pfb_th;
const int _num__array_Core_2_Isoma_pfb_th = 1;
double * _array_Core_2_Isoma_reset;
const int _num__array_Core_2_Isoma_reset = 1;
double * _array_Core_2_Isoma_th;
const int _num__array_Core_2_Isoma_th = 1;
double * _array_Core_2_kn;
const int _num__array_Core_2_kn = 1;
double * _array_Core_2_kp;
const int _num__array_Core_2_kp = 1;
double * _array_Core_2_lastspike;
const int _num__array_Core_2_lastspike = 256;
char * _array_Core_2_not_refractory;
const int _num__array_Core_2_not_refractory = 256;
double * _array_Core_2_soma_refP;
const int _num__array_Core_2_soma_refP = 1;
double * _array_Core_2_std_pulse;
const int _num__array_Core_2_std_pulse = 256;
int32_t * _array_Core_2_subgroup_2__sub_idx;
const int _num__array_Core_2_subgroup_2__sub_idx = 6;
double * _array_Core_2_tau_pulse;
const int _num__array_Core_2_tau_pulse = 256;
double * _array_Core_2_Ut;
const int _num__array_Core_2_Ut = 1;
double * _array_Core_2_Va;
const int _num__array_Core_2_Va = 256;
double * _array_Core_2_Vw;
const int _num__array_Core_2_Vw = 256;
int32_t * _array_Core_3__spikespace;
const int _num__array_Core_3__spikespace = 257;
double * _array_Core_3_alpha_ahp;
const int _num__array_Core_3_alpha_ahp = 256;
double * _array_Core_3_alpha_ampa;
const int _num__array_Core_3_alpha_ampa = 256;
double * _array_Core_3_alpha_ampa_std;
const int _num__array_Core_3_alpha_ampa_std = 256;
double * _array_Core_3_alpha_gaba_a;
const int _num__array_Core_3_alpha_gaba_a = 256;
double * _array_Core_3_alpha_gaba_b;
const int _num__array_Core_3_alpha_gaba_b = 256;
double * _array_Core_3_alpha_nmda;
const int _num__array_Core_3_alpha_nmda = 256;
double * _array_Core_3_alpha_soma;
const int _num__array_Core_3_alpha_soma = 256;
double * _array_Core_3_Campa;
const int _num__array_Core_3_Campa = 256;
double * _array_Core_3_Campa_std;
const int _num__array_Core_3_Campa_std = 256;
double * _array_Core_3_Cgaba_a;
const int _num__array_Core_3_Cgaba_a = 256;
double * _array_Core_3_Cgaba_b;
const int _num__array_Core_3_Cgaba_b = 256;
double * _array_Core_3_Cnmda;
const int _num__array_Core_3_Cnmda = 256;
double * _array_Core_3_Csoma_ahp;
const int _num__array_Core_3_Csoma_ahp = 1;
double * _array_Core_3_Csoma_mem;
const int _num__array_Core_3_Csoma_mem = 1;
int32_t * _array_Core_3_i;
const int _num__array_Core_3_i = 256;
double * _array_Core_3_I0;
const int _num__array_Core_3_I0 = 1;
double * _array_Core_3_Iampa;
const int _num__array_Core_3_Iampa = 256;
double * _array_Core_3_Iampa_std;
const int _num__array_Core_3_Iampa_std = 256;
double * _array_Core_3_Iampa_std_tau;
const int _num__array_Core_3_Iampa_std_tau = 256;
double * _array_Core_3_Iampa_tau;
const int _num__array_Core_3_Iampa_tau = 256;
double * _array_Core_3_Iampa_w0;
const int _num__array_Core_3_Iampa_w0 = 256;
double * _array_Core_3_Idischarge_w;
const int _num__array_Core_3_Idischarge_w = 256;
double * _array_Core_3_Igaba_a;
const int _num__array_Core_3_Igaba_a = 256;
double * _array_Core_3_Igaba_a_tau;
const int _num__array_Core_3_Igaba_a_tau = 256;
double * _array_Core_3_Igaba_a_w0;
const int _num__array_Core_3_Igaba_a_w0 = 256;
double * _array_Core_3_Igaba_b;
const int _num__array_Core_3_Igaba_b = 256;
double * _array_Core_3_Igaba_b_tau;
const int _num__array_Core_3_Igaba_b_tau = 256;
double * _array_Core_3_Igaba_b_w0;
const int _num__array_Core_3_Igaba_b_w0 = 256;
double * _array_Core_3_Inmda;
const int _num__array_Core_3_Inmda = 256;
double * _array_Core_3_Inmda_tau;
const int _num__array_Core_3_Inmda_tau = 256;
double * _array_Core_3_Inmda_thr;
const int _num__array_Core_3_Inmda_thr = 256;
double * _array_Core_3_Inmda_w0;
const int _num__array_Core_3_Inmda_w0 = 256;
double * _array_Core_3_Isoma_ahp;
const int _num__array_Core_3_Isoma_ahp = 256;
double * _array_Core_3_Isoma_ahp_g;
const int _num__array_Core_3_Isoma_ahp_g = 1;
double * _array_Core_3_Isoma_ahp_tau;
const int _num__array_Core_3_Isoma_ahp_tau = 1;
double * _array_Core_3_Isoma_ahp_w;
const int _num__array_Core_3_Isoma_ahp_w = 256;
double * _array_Core_3_Isoma_const;
const int _num__array_Core_3_Isoma_const = 256;
double * _array_Core_3_Isoma_dpi_tau;
const int _num__array_Core_3_Isoma_dpi_tau = 1;
double * _array_Core_3_Isoma_mem;
const int _num__array_Core_3_Isoma_mem = 256;
double * _array_Core_3_Isoma_pfb_gain;
const int _num__array_Core_3_Isoma_pfb_gain = 1;
double * _array_Core_3_Isoma_pfb_norm;
const int _num__array_Core_3_Isoma_pfb_norm = 1;
double * _array_Core_3_Isoma_pfb_th;
const int _num__array_Core_3_Isoma_pfb_th = 1;
double * _array_Core_3_Isoma_reset;
const int _num__array_Core_3_Isoma_reset = 1;
double * _array_Core_3_Isoma_th;
const int _num__array_Core_3_Isoma_th = 1;
double * _array_Core_3_kn;
const int _num__array_Core_3_kn = 1;
double * _array_Core_3_kp;
const int _num__array_Core_3_kp = 1;
double * _array_Core_3_lastspike;
const int _num__array_Core_3_lastspike = 256;
char * _array_Core_3_not_refractory;
const int _num__array_Core_3_not_refractory = 256;
double * _array_Core_3_soma_refP;
const int _num__array_Core_3_soma_refP = 1;
double * _array_Core_3_std_pulse;
const int _num__array_Core_3_std_pulse = 256;
int32_t * _array_Core_3_subgroup_2__sub_idx;
const int _num__array_Core_3_subgroup_2__sub_idx = 4;
double * _array_Core_3_tau_pulse;
const int _num__array_Core_3_tau_pulse = 256;
double * _array_Core_3_Ut;
const int _num__array_Core_3_Ut = 1;
double * _array_Core_3_Va;
const int _num__array_Core_3_Va = 256;
double * _array_Core_3_Vw;
const int _num__array_Core_3_Vw = 256;
double * _array_defaultclock_dt;
const int _num__array_defaultclock_dt = 1;
double * _array_defaultclock_t;
const int _num__array_defaultclock_t = 1;
int64_t * _array_defaultclock_timestep;
const int _num__array_defaultclock_timestep = 1;
int32_t * _array_GABA_B10_N;
const int _num__array_GABA_B10_N = 1;
int32_t * _array_GABA_B4_N;
const int _num__array_GABA_B4_N = 1;
int32_t * _array_GABA_B5_N;
const int _num__array_GABA_B5_N = 1;
int32_t * _array_GABA_B6_N;
const int _num__array_GABA_B6_N = 1;
int32_t * _array_GABA_B9_N;
const int _num__array_GABA_B9_N = 1;
int32_t * _array_mon_neuron_input__source_idx;
const int _num__array_mon_neuron_input__source_idx = 1;
int32_t * _array_mon_neuron_input_count;
const int _num__array_mon_neuron_input_count = 1;
int32_t * _array_mon_neuron_input_N;
const int _num__array_mon_neuron_input_N = 1;
int32_t * _array_PC_output__source_idx;
const int _num__array_PC_output__source_idx = 40;
int32_t * _array_PC_output_count;
const int _num__array_PC_output_count = 40;
int32_t * _array_PC_output_N;
const int _num__array_PC_output_N = 1;
int32_t * _array_PV_output__source_idx;
const int _num__array_PV_output__source_idx = 6;
int32_t * _array_PV_output_count;
const int _num__array_PV_output_count = 6;
int32_t * _array_PV_output_N;
const int _num__array_PV_output_N = 1;
int32_t * _array_SpikeGenerator__lastindex;
const int _num__array_SpikeGenerator__lastindex = 1;
int32_t * _array_SpikeGenerator__period_bins;
const int _num__array_SpikeGenerator__period_bins = 1;
int32_t * _array_SpikeGenerator__spikespace;
const int _num__array_SpikeGenerator__spikespace = 2;
int32_t * _array_SpikeGenerator_i;
const int _num__array_SpikeGenerator_i = 1;
double * _array_SpikeGenerator_period;
const int _num__array_SpikeGenerator_period = 1;
int32_t * _array_SST_output__source_idx;
const int _num__array_SST_output__source_idx = 4;
int32_t * _array_SST_output_count;
const int _num__array_SST_output_count = 4;
int32_t * _array_SST_output_N;
const int _num__array_SST_output_N = 1;
int32_t * _array_statemonitor_10__indices;
const int _num__array_statemonitor_10__indices = 1;
double * _array_statemonitor_10_Iampa;
const int _num__array_statemonitor_10_Iampa = (0, 1);
int32_t * _array_statemonitor_10_N;
const int _num__array_statemonitor_10_N = 1;
int32_t * _array_statemonitor_11__indices;
const int _num__array_statemonitor_11__indices = 1;
double * _array_statemonitor_11_Iampa_std;
const int _num__array_statemonitor_11_Iampa_std = (0, 1);
int32_t * _array_statemonitor_11_N;
const int _num__array_statemonitor_11_N = 1;
int32_t * _array_statemonitor_12__indices;
const int _num__array_statemonitor_12__indices = 1;
double * _array_statemonitor_12_Igaba_b;
const int _num__array_statemonitor_12_Igaba_b = (0, 1);
int32_t * _array_statemonitor_12_N;
const int _num__array_statemonitor_12_N = 1;
int32_t * _array_statemonitor_13__indices;
const int _num__array_statemonitor_13__indices = 1;
double * _array_statemonitor_13_Igaba_b;
const int _num__array_statemonitor_13_Igaba_b = (0, 1);
int32_t * _array_statemonitor_13_N;
const int _num__array_statemonitor_13_N = 1;
int32_t * _array_statemonitor_1__indices;
const int _num__array_statemonitor_1__indices = 6;
double * _array_statemonitor_1_Isoma_mem;
const int _num__array_statemonitor_1_Isoma_mem = (0, 6);
int32_t * _array_statemonitor_1_N;
const int _num__array_statemonitor_1_N = 1;
int32_t * _array_statemonitor_2__indices;
const int _num__array_statemonitor_2__indices = 40;
double * _array_statemonitor_2_Isoma_mem;
const int _num__array_statemonitor_2_Isoma_mem = (0, 40);
int32_t * _array_statemonitor_2_N;
const int _num__array_statemonitor_2_N = 1;
int32_t * _array_statemonitor_3__indices;
const int _num__array_statemonitor_3__indices = 1;
double * _array_statemonitor_3_Iampa;
const int _num__array_statemonitor_3_Iampa = (0, 1);
int32_t * _array_statemonitor_3_N;
const int _num__array_statemonitor_3_N = 1;
int32_t * _array_statemonitor_4__indices;
const int _num__array_statemonitor_4__indices = 1;
double * _array_statemonitor_4_Iampa_std;
const int _num__array_statemonitor_4_Iampa_std = (0, 1);
int32_t * _array_statemonitor_4_N;
const int _num__array_statemonitor_4_N = 1;
int32_t * _array_statemonitor_5__indices;
const int _num__array_statemonitor_5__indices = 1;
double * _array_statemonitor_5_Iampa;
const int _num__array_statemonitor_5_Iampa = (0, 1);
int32_t * _array_statemonitor_5_N;
const int _num__array_statemonitor_5_N = 1;
int32_t * _array_statemonitor_6__indices;
const int _num__array_statemonitor_6__indices = 1;
double * _array_statemonitor_6_Iampa;
const int _num__array_statemonitor_6_Iampa = (0, 1);
int32_t * _array_statemonitor_6_N;
const int _num__array_statemonitor_6_N = 1;
int32_t * _array_statemonitor_7__indices;
const int _num__array_statemonitor_7__indices = 1;
double * _array_statemonitor_7_Igaba_b;
const int _num__array_statemonitor_7_Igaba_b = (0, 1);
int32_t * _array_statemonitor_7_N;
const int _num__array_statemonitor_7_N = 1;
int32_t * _array_statemonitor_8__indices;
const int _num__array_statemonitor_8__indices = 1;
double * _array_statemonitor_8_Igaba_b;
const int _num__array_statemonitor_8_Igaba_b = (0, 1);
int32_t * _array_statemonitor_8_N;
const int _num__array_statemonitor_8_N = 1;
int32_t * _array_statemonitor_9__indices;
const int _num__array_statemonitor_9__indices = 1;
double * _array_statemonitor_9_Igaba_b;
const int _num__array_statemonitor_9_Igaba_b = (0, 1);
int32_t * _array_statemonitor_9_N;
const int _num__array_statemonitor_9_N = 1;
int32_t * _array_statemonitor__indices;
const int _num__array_statemonitor__indices = 4;
double * _array_statemonitor_Isoma_mem;
const int _num__array_statemonitor_Isoma_mem = (0, 4);
int32_t * _array_statemonitor_N;
const int _num__array_statemonitor_N = 1;

//////////////// dynamic arrays 1d /////////
std::vector<int32_t> _dynamic_array_AMPA0__synaptic_post;
std::vector<int32_t> _dynamic_array_AMPA0__synaptic_pre;
std::vector<double> _dynamic_array_AMPA0_delay;
std::vector<double> _dynamic_array_AMPA0_delay_1;
std::vector<int32_t> _dynamic_array_AMPA0_N_incoming;
std::vector<int32_t> _dynamic_array_AMPA0_N_outgoing;
std::vector<double> _dynamic_array_AMPA0_weight;
std::vector<int32_t> _dynamic_array_AMPA2__synaptic_post;
std::vector<int32_t> _dynamic_array_AMPA2__synaptic_pre;
std::vector<double> _dynamic_array_AMPA2_delay;
std::vector<double> _dynamic_array_AMPA2_delay_1;
std::vector<int32_t> _dynamic_array_AMPA2_N_incoming;
std::vector<int32_t> _dynamic_array_AMPA2_N_outgoing;
std::vector<double> _dynamic_array_AMPA2_weight;
std::vector<int32_t> _dynamic_array_AMPA3__synaptic_post;
std::vector<int32_t> _dynamic_array_AMPA3__synaptic_pre;
std::vector<double> _dynamic_array_AMPA3_delay;
std::vector<double> _dynamic_array_AMPA3_delay_1;
std::vector<int32_t> _dynamic_array_AMPA3_N_incoming;
std::vector<int32_t> _dynamic_array_AMPA3_N_outgoing;
std::vector<double> _dynamic_array_AMPA3_weight;
std::vector<int32_t> _dynamic_array_AMPA7__synaptic_post;
std::vector<int32_t> _dynamic_array_AMPA7__synaptic_pre;
std::vector<double> _dynamic_array_AMPA7_delay;
std::vector<double> _dynamic_array_AMPA7_delay_1;
std::vector<int32_t> _dynamic_array_AMPA7_N_incoming;
std::vector<int32_t> _dynamic_array_AMPA7_N_outgoing;
std::vector<double> _dynamic_array_AMPA7_weight;
std::vector<int32_t> _dynamic_array_AMPA_STD1__synaptic_post;
std::vector<int32_t> _dynamic_array_AMPA_STD1__synaptic_pre;
std::vector<double> _dynamic_array_AMPA_STD1_delay;
std::vector<double> _dynamic_array_AMPA_STD1_delay_1;
std::vector<int32_t> _dynamic_array_AMPA_STD1_N_incoming;
std::vector<int32_t> _dynamic_array_AMPA_STD1_N_outgoing;
std::vector<double> _dynamic_array_AMPA_STD1_weight;
std::vector<int32_t> _dynamic_array_AMPA_STD8__synaptic_post;
std::vector<int32_t> _dynamic_array_AMPA_STD8__synaptic_pre;
std::vector<double> _dynamic_array_AMPA_STD8_delay;
std::vector<double> _dynamic_array_AMPA_STD8_delay_1;
std::vector<int32_t> _dynamic_array_AMPA_STD8_N_incoming;
std::vector<int32_t> _dynamic_array_AMPA_STD8_N_outgoing;
std::vector<double> _dynamic_array_AMPA_STD8_weight;
std::vector<int32_t> _dynamic_array_GABA_B10__synaptic_post;
std::vector<int32_t> _dynamic_array_GABA_B10__synaptic_pre;
std::vector<double> _dynamic_array_GABA_B10_delay;
std::vector<double> _dynamic_array_GABA_B10_delay_1;
std::vector<int32_t> _dynamic_array_GABA_B10_N_incoming;
std::vector<int32_t> _dynamic_array_GABA_B10_N_outgoing;
std::vector<double> _dynamic_array_GABA_B10_weight;
std::vector<int32_t> _dynamic_array_GABA_B4__synaptic_post;
std::vector<int32_t> _dynamic_array_GABA_B4__synaptic_pre;
std::vector<double> _dynamic_array_GABA_B4_delay;
std::vector<double> _dynamic_array_GABA_B4_delay_1;
std::vector<int32_t> _dynamic_array_GABA_B4_N_incoming;
std::vector<int32_t> _dynamic_array_GABA_B4_N_outgoing;
std::vector<double> _dynamic_array_GABA_B4_weight;
std::vector<int32_t> _dynamic_array_GABA_B5__synaptic_post;
std::vector<int32_t> _dynamic_array_GABA_B5__synaptic_pre;
std::vector<double> _dynamic_array_GABA_B5_delay;
std::vector<double> _dynamic_array_GABA_B5_delay_1;
std::vector<int32_t> _dynamic_array_GABA_B5_N_incoming;
std::vector<int32_t> _dynamic_array_GABA_B5_N_outgoing;
std::vector<double> _dynamic_array_GABA_B5_weight;
std::vector<int32_t> _dynamic_array_GABA_B6__synaptic_post;
std::vector<int32_t> _dynamic_array_GABA_B6__synaptic_pre;
std::vector<double> _dynamic_array_GABA_B6_delay;
std::vector<double> _dynamic_array_GABA_B6_delay_1;
std::vector<int32_t> _dynamic_array_GABA_B6_N_incoming;
std::vector<int32_t> _dynamic_array_GABA_B6_N_outgoing;
std::vector<double> _dynamic_array_GABA_B6_weight;
std::vector<int32_t> _dynamic_array_GABA_B9__synaptic_post;
std::vector<int32_t> _dynamic_array_GABA_B9__synaptic_pre;
std::vector<double> _dynamic_array_GABA_B9_delay;
std::vector<double> _dynamic_array_GABA_B9_delay_1;
std::vector<int32_t> _dynamic_array_GABA_B9_N_incoming;
std::vector<int32_t> _dynamic_array_GABA_B9_N_outgoing;
std::vector<double> _dynamic_array_GABA_B9_weight;
std::vector<int32_t> _dynamic_array_mon_neuron_input_i;
std::vector<double> _dynamic_array_mon_neuron_input_t;
std::vector<int32_t> _dynamic_array_PC_output_i;
std::vector<double> _dynamic_array_PC_output_t;
std::vector<int32_t> _dynamic_array_PV_output_i;
std::vector<double> _dynamic_array_PV_output_t;
std::vector<int32_t> _dynamic_array_SpikeGenerator__timebins;
std::vector<int32_t> _dynamic_array_SpikeGenerator_neuron_index;
std::vector<int32_t> _dynamic_array_SpikeGenerator_spike_number;
std::vector<double> _dynamic_array_SpikeGenerator_spike_time;
std::vector<int32_t> _dynamic_array_SST_output_i;
std::vector<double> _dynamic_array_SST_output_t;
std::vector<double> _dynamic_array_statemonitor_10_t;
std::vector<double> _dynamic_array_statemonitor_11_t;
std::vector<double> _dynamic_array_statemonitor_12_t;
std::vector<double> _dynamic_array_statemonitor_13_t;
std::vector<double> _dynamic_array_statemonitor_1_t;
std::vector<double> _dynamic_array_statemonitor_2_t;
std::vector<double> _dynamic_array_statemonitor_3_t;
std::vector<double> _dynamic_array_statemonitor_4_t;
std::vector<double> _dynamic_array_statemonitor_5_t;
std::vector<double> _dynamic_array_statemonitor_6_t;
std::vector<double> _dynamic_array_statemonitor_7_t;
std::vector<double> _dynamic_array_statemonitor_8_t;
std::vector<double> _dynamic_array_statemonitor_9_t;
std::vector<double> _dynamic_array_statemonitor_t;

//////////////// dynamic arrays 2d /////////
DynamicArray2D<double> _dynamic_array_statemonitor_10_Iampa;
DynamicArray2D<double> _dynamic_array_statemonitor_11_Iampa_std;
DynamicArray2D<double> _dynamic_array_statemonitor_12_Igaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_13_Igaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_1_Isoma_mem;
DynamicArray2D<double> _dynamic_array_statemonitor_2_Isoma_mem;
DynamicArray2D<double> _dynamic_array_statemonitor_3_Iampa;
DynamicArray2D<double> _dynamic_array_statemonitor_4_Iampa_std;
DynamicArray2D<double> _dynamic_array_statemonitor_5_Iampa;
DynamicArray2D<double> _dynamic_array_statemonitor_6_Iampa;
DynamicArray2D<double> _dynamic_array_statemonitor_7_Igaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_8_Igaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_9_Igaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_Isoma_mem;

/////////////// static arrays /////////////
int32_t * _static_array__array_statemonitor_1__indices;
const int _num__static_array__array_statemonitor_1__indices = 6;
int32_t * _static_array__array_statemonitor_2__indices;
const int _num__static_array__array_statemonitor_2__indices = 40;
int32_t * _static_array__array_statemonitor__indices;
const int _num__static_array__array_statemonitor__indices = 4;
int32_t * _static_array__dynamic_array_SpikeGenerator__timebins;
const int _num__static_array__dynamic_array_SpikeGenerator__timebins = 50;
double * _static_array__dynamic_array_SpikeGenerator_neuron_index;
const int _num__static_array__dynamic_array_SpikeGenerator_neuron_index = 50;
int64_t * _static_array__dynamic_array_SpikeGenerator_spike_number;
const int _num__static_array__dynamic_array_SpikeGenerator_spike_number = 50;
double * _static_array__dynamic_array_SpikeGenerator_spike_time;
const int _num__static_array__dynamic_array_SpikeGenerator_spike_time = 50;

//////////////// synapses /////////////////
// AMPA0
SynapticPathway AMPA0_post(
		_dynamic_array_AMPA0__synaptic_post,
		0, 40);
SynapticPathway AMPA0_pre(
		_dynamic_array_AMPA0__synaptic_pre,
		0, 1);
// AMPA2
SynapticPathway AMPA2_post(
		_dynamic_array_AMPA2__synaptic_post,
		0, 4);
SynapticPathway AMPA2_pre(
		_dynamic_array_AMPA2__synaptic_pre,
		0, 1);
// AMPA3
SynapticPathway AMPA3_post(
		_dynamic_array_AMPA3__synaptic_post,
		0, 40);
SynapticPathway AMPA3_pre(
		_dynamic_array_AMPA3__synaptic_pre,
		0, 40);
// AMPA7
SynapticPathway AMPA7_post(
		_dynamic_array_AMPA7__synaptic_post,
		0, 4);
SynapticPathway AMPA7_pre(
		_dynamic_array_AMPA7__synaptic_pre,
		0, 6);
// AMPA_STD1
SynapticPathway AMPA_STD1_post(
		_dynamic_array_AMPA_STD1__synaptic_post,
		0, 6);
SynapticPathway AMPA_STD1_pre(
		_dynamic_array_AMPA_STD1__synaptic_pre,
		0, 1);
// AMPA_STD8
SynapticPathway AMPA_STD8_post(
		_dynamic_array_AMPA_STD8__synaptic_post,
		0, 6);
SynapticPathway AMPA_STD8_pre(
		_dynamic_array_AMPA_STD8__synaptic_pre,
		0, 40);
// GABA_B10
SynapticPathway GABA_B10_post(
		_dynamic_array_GABA_B10__synaptic_post,
		0, 6);
SynapticPathway GABA_B10_pre(
		_dynamic_array_GABA_B10__synaptic_pre,
		0, 4);
// GABA_B4
SynapticPathway GABA_B4_post(
		_dynamic_array_GABA_B4__synaptic_post,
		0, 6);
SynapticPathway GABA_B4_pre(
		_dynamic_array_GABA_B4__synaptic_pre,
		0, 6);
// GABA_B5
SynapticPathway GABA_B5_post(
		_dynamic_array_GABA_B5__synaptic_post,
		0, 40);
SynapticPathway GABA_B5_pre(
		_dynamic_array_GABA_B5__synaptic_pre,
		0, 4);
// GABA_B6
SynapticPathway GABA_B6_post(
		_dynamic_array_GABA_B6__synaptic_post,
		0, 40);
SynapticPathway GABA_B6_pre(
		_dynamic_array_GABA_B6__synaptic_pre,
		0, 6);
// GABA_B9
SynapticPathway GABA_B9_post(
		_dynamic_array_GABA_B9__synaptic_post,
		0, 4);
SynapticPathway GABA_B9_pre(
		_dynamic_array_GABA_B9__synaptic_pre,
		0, 6);

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

	_array_AMPA2_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_AMPA2_N[i] = 0;

	_array_AMPA3_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_AMPA3_N[i] = 0;

	_array_AMPA7_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_AMPA7_N[i] = 0;

	_array_AMPA_STD1_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_AMPA_STD1_N[i] = 0;

	_array_AMPA_STD8_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_AMPA_STD8_N[i] = 0;

	_array_Core_0__spikespace = new int32_t[257];
    
	for(int i=0; i<257; i++) _array_Core_0__spikespace[i] = 0;

	_array_Core_0_alpha_ahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_alpha_ahp[i] = 0;

	_array_Core_0_alpha_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_alpha_ampa[i] = 0;

	_array_Core_0_alpha_ampa_std = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_alpha_ampa_std[i] = 0;

	_array_Core_0_alpha_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_alpha_gaba_a[i] = 0;

	_array_Core_0_alpha_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_alpha_gaba_b[i] = 0;

	_array_Core_0_alpha_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_alpha_nmda[i] = 0;

	_array_Core_0_alpha_soma = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_alpha_soma[i] = 0;

	_array_Core_0_Campa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Campa[i] = 0;

	_array_Core_0_Campa_std = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Campa_std[i] = 0;

	_array_Core_0_Cgaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Cgaba_a[i] = 0;

	_array_Core_0_Cgaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Cgaba_b[i] = 0;

	_array_Core_0_Cnmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Cnmda[i] = 0;

	_array_Core_0_Csoma_ahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Csoma_ahp[i] = 0;

	_array_Core_0_Csoma_mem = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Csoma_mem[i] = 0;

	_array_Core_0_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_0_i[i] = 0;

	_array_Core_0_I0 = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_I0[i] = 0;

	_array_Core_0_Iampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Iampa[i] = 0;

	_array_Core_0_Iampa_std = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Iampa_std[i] = 0;

	_array_Core_0_Iampa_std_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Iampa_std_tau[i] = 0;

	_array_Core_0_Iampa_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Iampa_tau[i] = 0;

	_array_Core_0_Iampa_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Iampa_w0[i] = 0;

	_array_Core_0_Idischarge_w = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Idischarge_w[i] = 0;

	_array_Core_0_Igaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Igaba_a[i] = 0;

	_array_Core_0_Igaba_a_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Igaba_a_tau[i] = 0;

	_array_Core_0_Igaba_a_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Igaba_a_w0[i] = 0;

	_array_Core_0_Igaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Igaba_b[i] = 0;

	_array_Core_0_Igaba_b_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Igaba_b_tau[i] = 0;

	_array_Core_0_Igaba_b_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Igaba_b_w0[i] = 0;

	_array_Core_0_Inmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Inmda[i] = 0;

	_array_Core_0_Inmda_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Inmda_tau[i] = 0;

	_array_Core_0_Inmda_thr = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Inmda_thr[i] = 0;

	_array_Core_0_Inmda_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Inmda_w0[i] = 0;

	_array_Core_0_Isoma_ahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Isoma_ahp[i] = 0;

	_array_Core_0_Isoma_ahp_g = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Isoma_ahp_g[i] = 0;

	_array_Core_0_Isoma_ahp_tau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Isoma_ahp_tau[i] = 0;

	_array_Core_0_Isoma_ahp_w = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Isoma_ahp_w[i] = 0;

	_array_Core_0_Isoma_const = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Isoma_const[i] = 0;

	_array_Core_0_Isoma_dpi_tau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Isoma_dpi_tau[i] = 0;

	_array_Core_0_Isoma_mem = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Isoma_mem[i] = 0;

	_array_Core_0_Isoma_pfb_gain = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Isoma_pfb_gain[i] = 0;

	_array_Core_0_Isoma_pfb_norm = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Isoma_pfb_norm[i] = 0;

	_array_Core_0_Isoma_pfb_th = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Isoma_pfb_th[i] = 0;

	_array_Core_0_Isoma_reset = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Isoma_reset[i] = 0;

	_array_Core_0_Isoma_th = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Isoma_th[i] = 0;

	_array_Core_0_kn = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_kn[i] = 0;

	_array_Core_0_kp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_kp[i] = 0;

	_array_Core_0_lastspike = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_lastspike[i] = 0;

	_array_Core_0_not_refractory = new char[256];
    
	for(int i=0; i<256; i++) _array_Core_0_not_refractory[i] = 0;

	_array_Core_0_soma_refP = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_soma_refP[i] = 0;

	_array_Core_0_std_pulse = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_std_pulse[i] = 0;

	_array_Core_0_tau_pulse = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_tau_pulse[i] = 0;

	_array_Core_0_Ut = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Ut[i] = 0;

	_array_Core_0_Va = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Va[i] = 0;

	_array_Core_0_Vw = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Vw[i] = 0;

	_array_Core_1__spikespace = new int32_t[257];
    
	for(int i=0; i<257; i++) _array_Core_1__spikespace[i] = 0;

	_array_Core_1_alpha_ahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_alpha_ahp[i] = 0;

	_array_Core_1_alpha_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_alpha_ampa[i] = 0;

	_array_Core_1_alpha_ampa_std = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_alpha_ampa_std[i] = 0;

	_array_Core_1_alpha_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_alpha_gaba_a[i] = 0;

	_array_Core_1_alpha_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_alpha_gaba_b[i] = 0;

	_array_Core_1_alpha_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_alpha_nmda[i] = 0;

	_array_Core_1_alpha_soma = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_alpha_soma[i] = 0;

	_array_Core_1_Campa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Campa[i] = 0;

	_array_Core_1_Campa_std = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Campa_std[i] = 0;

	_array_Core_1_Cgaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Cgaba_a[i] = 0;

	_array_Core_1_Cgaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Cgaba_b[i] = 0;

	_array_Core_1_Cnmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Cnmda[i] = 0;

	_array_Core_1_Csoma_ahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Csoma_ahp[i] = 0;

	_array_Core_1_Csoma_mem = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Csoma_mem[i] = 0;

	_array_Core_1_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_1_i[i] = 0;

	_array_Core_1_I0 = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_I0[i] = 0;

	_array_Core_1_Iampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Iampa[i] = 0;

	_array_Core_1_Iampa_std = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Iampa_std[i] = 0;

	_array_Core_1_Iampa_std_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Iampa_std_tau[i] = 0;

	_array_Core_1_Iampa_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Iampa_tau[i] = 0;

	_array_Core_1_Iampa_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Iampa_w0[i] = 0;

	_array_Core_1_Idischarge_w = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Idischarge_w[i] = 0;

	_array_Core_1_Igaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Igaba_a[i] = 0;

	_array_Core_1_Igaba_a_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Igaba_a_tau[i] = 0;

	_array_Core_1_Igaba_a_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Igaba_a_w0[i] = 0;

	_array_Core_1_Igaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Igaba_b[i] = 0;

	_array_Core_1_Igaba_b_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Igaba_b_tau[i] = 0;

	_array_Core_1_Igaba_b_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Igaba_b_w0[i] = 0;

	_array_Core_1_Inmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Inmda[i] = 0;

	_array_Core_1_Inmda_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Inmda_tau[i] = 0;

	_array_Core_1_Inmda_thr = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Inmda_thr[i] = 0;

	_array_Core_1_Inmda_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Inmda_w0[i] = 0;

	_array_Core_1_Isoma_ahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Isoma_ahp[i] = 0;

	_array_Core_1_Isoma_ahp_g = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Isoma_ahp_g[i] = 0;

	_array_Core_1_Isoma_ahp_tau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Isoma_ahp_tau[i] = 0;

	_array_Core_1_Isoma_ahp_w = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Isoma_ahp_w[i] = 0;

	_array_Core_1_Isoma_const = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Isoma_const[i] = 0;

	_array_Core_1_Isoma_dpi_tau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Isoma_dpi_tau[i] = 0;

	_array_Core_1_Isoma_mem = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Isoma_mem[i] = 0;

	_array_Core_1_Isoma_pfb_gain = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Isoma_pfb_gain[i] = 0;

	_array_Core_1_Isoma_pfb_norm = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Isoma_pfb_norm[i] = 0;

	_array_Core_1_Isoma_pfb_th = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Isoma_pfb_th[i] = 0;

	_array_Core_1_Isoma_reset = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Isoma_reset[i] = 0;

	_array_Core_1_Isoma_th = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Isoma_th[i] = 0;

	_array_Core_1_kn = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_kn[i] = 0;

	_array_Core_1_kp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_kp[i] = 0;

	_array_Core_1_lastspike = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_lastspike[i] = 0;

	_array_Core_1_not_refractory = new char[256];
    
	for(int i=0; i<256; i++) _array_Core_1_not_refractory[i] = 0;

	_array_Core_1_soma_refP = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_soma_refP[i] = 0;

	_array_Core_1_std_pulse = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_std_pulse[i] = 0;

	_array_Core_1_subgroup_2__sub_idx = new int32_t[40];
    
	for(int i=0; i<40; i++) _array_Core_1_subgroup_2__sub_idx[i] = 0;

	_array_Core_1_tau_pulse = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_tau_pulse[i] = 0;

	_array_Core_1_Ut = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Ut[i] = 0;

	_array_Core_1_Va = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Va[i] = 0;

	_array_Core_1_Vw = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Vw[i] = 0;

	_array_Core_2__spikespace = new int32_t[257];
    
	for(int i=0; i<257; i++) _array_Core_2__spikespace[i] = 0;

	_array_Core_2_alpha_ahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_alpha_ahp[i] = 0;

	_array_Core_2_alpha_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_alpha_ampa[i] = 0;

	_array_Core_2_alpha_ampa_std = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_alpha_ampa_std[i] = 0;

	_array_Core_2_alpha_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_alpha_gaba_a[i] = 0;

	_array_Core_2_alpha_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_alpha_gaba_b[i] = 0;

	_array_Core_2_alpha_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_alpha_nmda[i] = 0;

	_array_Core_2_alpha_soma = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_alpha_soma[i] = 0;

	_array_Core_2_Campa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Campa[i] = 0;

	_array_Core_2_Campa_std = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Campa_std[i] = 0;

	_array_Core_2_Cgaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Cgaba_a[i] = 0;

	_array_Core_2_Cgaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Cgaba_b[i] = 0;

	_array_Core_2_Cnmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Cnmda[i] = 0;

	_array_Core_2_Csoma_ahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Csoma_ahp[i] = 0;

	_array_Core_2_Csoma_mem = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Csoma_mem[i] = 0;

	_array_Core_2_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_2_i[i] = 0;

	_array_Core_2_I0 = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_I0[i] = 0;

	_array_Core_2_Iampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Iampa[i] = 0;

	_array_Core_2_Iampa_std = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Iampa_std[i] = 0;

	_array_Core_2_Iampa_std_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Iampa_std_tau[i] = 0;

	_array_Core_2_Iampa_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Iampa_tau[i] = 0;

	_array_Core_2_Iampa_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Iampa_w0[i] = 0;

	_array_Core_2_Idischarge_w = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Idischarge_w[i] = 0;

	_array_Core_2_Igaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Igaba_a[i] = 0;

	_array_Core_2_Igaba_a_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Igaba_a_tau[i] = 0;

	_array_Core_2_Igaba_a_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Igaba_a_w0[i] = 0;

	_array_Core_2_Igaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Igaba_b[i] = 0;

	_array_Core_2_Igaba_b_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Igaba_b_tau[i] = 0;

	_array_Core_2_Igaba_b_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Igaba_b_w0[i] = 0;

	_array_Core_2_Inmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Inmda[i] = 0;

	_array_Core_2_Inmda_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Inmda_tau[i] = 0;

	_array_Core_2_Inmda_thr = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Inmda_thr[i] = 0;

	_array_Core_2_Inmda_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Inmda_w0[i] = 0;

	_array_Core_2_Isoma_ahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Isoma_ahp[i] = 0;

	_array_Core_2_Isoma_ahp_g = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Isoma_ahp_g[i] = 0;

	_array_Core_2_Isoma_ahp_tau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Isoma_ahp_tau[i] = 0;

	_array_Core_2_Isoma_ahp_w = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Isoma_ahp_w[i] = 0;

	_array_Core_2_Isoma_const = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Isoma_const[i] = 0;

	_array_Core_2_Isoma_dpi_tau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Isoma_dpi_tau[i] = 0;

	_array_Core_2_Isoma_mem = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Isoma_mem[i] = 0;

	_array_Core_2_Isoma_pfb_gain = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Isoma_pfb_gain[i] = 0;

	_array_Core_2_Isoma_pfb_norm = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Isoma_pfb_norm[i] = 0;

	_array_Core_2_Isoma_pfb_th = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Isoma_pfb_th[i] = 0;

	_array_Core_2_Isoma_reset = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Isoma_reset[i] = 0;

	_array_Core_2_Isoma_th = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Isoma_th[i] = 0;

	_array_Core_2_kn = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_kn[i] = 0;

	_array_Core_2_kp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_kp[i] = 0;

	_array_Core_2_lastspike = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_lastspike[i] = 0;

	_array_Core_2_not_refractory = new char[256];
    
	for(int i=0; i<256; i++) _array_Core_2_not_refractory[i] = 0;

	_array_Core_2_soma_refP = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_soma_refP[i] = 0;

	_array_Core_2_std_pulse = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_std_pulse[i] = 0;

	_array_Core_2_subgroup_2__sub_idx = new int32_t[6];
    
	for(int i=0; i<6; i++) _array_Core_2_subgroup_2__sub_idx[i] = 0;

	_array_Core_2_tau_pulse = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_tau_pulse[i] = 0;

	_array_Core_2_Ut = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Ut[i] = 0;

	_array_Core_2_Va = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Va[i] = 0;

	_array_Core_2_Vw = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Vw[i] = 0;

	_array_Core_3__spikespace = new int32_t[257];
    
	for(int i=0; i<257; i++) _array_Core_3__spikespace[i] = 0;

	_array_Core_3_alpha_ahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_alpha_ahp[i] = 0;

	_array_Core_3_alpha_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_alpha_ampa[i] = 0;

	_array_Core_3_alpha_ampa_std = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_alpha_ampa_std[i] = 0;

	_array_Core_3_alpha_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_alpha_gaba_a[i] = 0;

	_array_Core_3_alpha_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_alpha_gaba_b[i] = 0;

	_array_Core_3_alpha_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_alpha_nmda[i] = 0;

	_array_Core_3_alpha_soma = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_alpha_soma[i] = 0;

	_array_Core_3_Campa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Campa[i] = 0;

	_array_Core_3_Campa_std = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Campa_std[i] = 0;

	_array_Core_3_Cgaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Cgaba_a[i] = 0;

	_array_Core_3_Cgaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Cgaba_b[i] = 0;

	_array_Core_3_Cnmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Cnmda[i] = 0;

	_array_Core_3_Csoma_ahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Csoma_ahp[i] = 0;

	_array_Core_3_Csoma_mem = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Csoma_mem[i] = 0;

	_array_Core_3_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_3_i[i] = 0;

	_array_Core_3_I0 = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_I0[i] = 0;

	_array_Core_3_Iampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Iampa[i] = 0;

	_array_Core_3_Iampa_std = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Iampa_std[i] = 0;

	_array_Core_3_Iampa_std_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Iampa_std_tau[i] = 0;

	_array_Core_3_Iampa_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Iampa_tau[i] = 0;

	_array_Core_3_Iampa_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Iampa_w0[i] = 0;

	_array_Core_3_Idischarge_w = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Idischarge_w[i] = 0;

	_array_Core_3_Igaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Igaba_a[i] = 0;

	_array_Core_3_Igaba_a_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Igaba_a_tau[i] = 0;

	_array_Core_3_Igaba_a_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Igaba_a_w0[i] = 0;

	_array_Core_3_Igaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Igaba_b[i] = 0;

	_array_Core_3_Igaba_b_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Igaba_b_tau[i] = 0;

	_array_Core_3_Igaba_b_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Igaba_b_w0[i] = 0;

	_array_Core_3_Inmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Inmda[i] = 0;

	_array_Core_3_Inmda_tau = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Inmda_tau[i] = 0;

	_array_Core_3_Inmda_thr = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Inmda_thr[i] = 0;

	_array_Core_3_Inmda_w0 = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Inmda_w0[i] = 0;

	_array_Core_3_Isoma_ahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Isoma_ahp[i] = 0;

	_array_Core_3_Isoma_ahp_g = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Isoma_ahp_g[i] = 0;

	_array_Core_3_Isoma_ahp_tau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Isoma_ahp_tau[i] = 0;

	_array_Core_3_Isoma_ahp_w = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Isoma_ahp_w[i] = 0;

	_array_Core_3_Isoma_const = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Isoma_const[i] = 0;

	_array_Core_3_Isoma_dpi_tau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Isoma_dpi_tau[i] = 0;

	_array_Core_3_Isoma_mem = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Isoma_mem[i] = 0;

	_array_Core_3_Isoma_pfb_gain = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Isoma_pfb_gain[i] = 0;

	_array_Core_3_Isoma_pfb_norm = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Isoma_pfb_norm[i] = 0;

	_array_Core_3_Isoma_pfb_th = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Isoma_pfb_th[i] = 0;

	_array_Core_3_Isoma_reset = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Isoma_reset[i] = 0;

	_array_Core_3_Isoma_th = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Isoma_th[i] = 0;

	_array_Core_3_kn = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_kn[i] = 0;

	_array_Core_3_kp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_kp[i] = 0;

	_array_Core_3_lastspike = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_lastspike[i] = 0;

	_array_Core_3_not_refractory = new char[256];
    
	for(int i=0; i<256; i++) _array_Core_3_not_refractory[i] = 0;

	_array_Core_3_soma_refP = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_soma_refP[i] = 0;

	_array_Core_3_std_pulse = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_std_pulse[i] = 0;

	_array_Core_3_subgroup_2__sub_idx = new int32_t[4];
    
	for(int i=0; i<4; i++) _array_Core_3_subgroup_2__sub_idx[i] = 0;

	_array_Core_3_tau_pulse = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_tau_pulse[i] = 0;

	_array_Core_3_Ut = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Ut[i] = 0;

	_array_Core_3_Va = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Va[i] = 0;

	_array_Core_3_Vw = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Vw[i] = 0;

	_array_defaultclock_dt = new double[1];
    
	for(int i=0; i<1; i++) _array_defaultclock_dt[i] = 0;

	_array_defaultclock_t = new double[1];
    
	for(int i=0; i<1; i++) _array_defaultclock_t[i] = 0;

	_array_defaultclock_timestep = new int64_t[1];
    
	for(int i=0; i<1; i++) _array_defaultclock_timestep[i] = 0;

	_array_GABA_B10_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_GABA_B10_N[i] = 0;

	_array_GABA_B4_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_GABA_B4_N[i] = 0;

	_array_GABA_B5_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_GABA_B5_N[i] = 0;

	_array_GABA_B6_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_GABA_B6_N[i] = 0;

	_array_GABA_B9_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_GABA_B9_N[i] = 0;

	_array_mon_neuron_input__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_input__source_idx[i] = 0;

	_array_mon_neuron_input_count = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_input_count[i] = 0;

	_array_mon_neuron_input_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_input_N[i] = 0;

	_array_PC_output__source_idx = new int32_t[40];
    
	for(int i=0; i<40; i++) _array_PC_output__source_idx[i] = 0;

	_array_PC_output_count = new int32_t[40];
    
	for(int i=0; i<40; i++) _array_PC_output_count[i] = 0;

	_array_PC_output_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_PC_output_N[i] = 0;

	_array_PV_output__source_idx = new int32_t[6];
    
	for(int i=0; i<6; i++) _array_PV_output__source_idx[i] = 0;

	_array_PV_output_count = new int32_t[6];
    
	for(int i=0; i<6; i++) _array_PV_output_count[i] = 0;

	_array_PV_output_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_PV_output_N[i] = 0;

	_array_SpikeGenerator__lastindex = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator__lastindex[i] = 0;

	_array_SpikeGenerator__period_bins = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator__period_bins[i] = 0;

	_array_SpikeGenerator__spikespace = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_SpikeGenerator__spikespace[i] = 0;

	_array_SpikeGenerator_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator_i[i] = 0;

	_array_SpikeGenerator_period = new double[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator_period[i] = 0;

	_array_SST_output__source_idx = new int32_t[4];
    
	for(int i=0; i<4; i++) _array_SST_output__source_idx[i] = 0;

	_array_SST_output_count = new int32_t[4];
    
	for(int i=0; i<4; i++) _array_SST_output_count[i] = 0;

	_array_SST_output_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SST_output_N[i] = 0;

	_array_statemonitor_10__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_10__indices[i] = 0;

	_array_statemonitor_10_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_10_N[i] = 0;

	_array_statemonitor_11__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_11__indices[i] = 0;

	_array_statemonitor_11_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_11_N[i] = 0;

	_array_statemonitor_12__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_12__indices[i] = 0;

	_array_statemonitor_12_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_12_N[i] = 0;

	_array_statemonitor_13__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_13__indices[i] = 0;

	_array_statemonitor_13_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_13_N[i] = 0;

	_array_statemonitor_1__indices = new int32_t[6];
    
	for(int i=0; i<6; i++) _array_statemonitor_1__indices[i] = 0;

	_array_statemonitor_1_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_1_N[i] = 0;

	_array_statemonitor_2__indices = new int32_t[40];
    
	for(int i=0; i<40; i++) _array_statemonitor_2__indices[i] = 0;

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

	_array_statemonitor_5__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_5__indices[i] = 0;

	_array_statemonitor_5_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_5_N[i] = 0;

	_array_statemonitor_6__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_6__indices[i] = 0;

	_array_statemonitor_6_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_6_N[i] = 0;

	_array_statemonitor_7__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_7__indices[i] = 0;

	_array_statemonitor_7_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_7_N[i] = 0;

	_array_statemonitor_8__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_8__indices[i] = 0;

	_array_statemonitor_8_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_8_N[i] = 0;

	_array_statemonitor_9__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_9__indices[i] = 0;

	_array_statemonitor_9_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_9_N[i] = 0;

	_array_statemonitor__indices = new int32_t[4];
    
	for(int i=0; i<4; i++) _array_statemonitor__indices[i] = 0;

	_array_statemonitor_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_N[i] = 0;

	_dynamic_array_SpikeGenerator__timebins.resize(50);
    
	for(int i=0; i<50; i++) _dynamic_array_SpikeGenerator__timebins[i] = 0;


	// Arrays initialized to an "arange"
	_array_Core_0_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_0_i[i] = 0 + i;

	_array_Core_1_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_1_i[i] = 0 + i;

	_array_Core_1_subgroup_2__sub_idx = new int32_t[40];
    
	for(int i=0; i<40; i++) _array_Core_1_subgroup_2__sub_idx[i] = 0 + i;

	_array_Core_2_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_2_i[i] = 0 + i;

	_array_Core_2_subgroup_2__sub_idx = new int32_t[6];
    
	for(int i=0; i<6; i++) _array_Core_2_subgroup_2__sub_idx[i] = 0 + i;

	_array_Core_3_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_3_i[i] = 0 + i;

	_array_Core_3_subgroup_2__sub_idx = new int32_t[4];
    
	for(int i=0; i<4; i++) _array_Core_3_subgroup_2__sub_idx[i] = 0 + i;

	_array_mon_neuron_input__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_input__source_idx[i] = 0 + i;

	_array_PC_output__source_idx = new int32_t[40];
    
	for(int i=0; i<40; i++) _array_PC_output__source_idx[i] = 0 + i;

	_array_PV_output__source_idx = new int32_t[6];
    
	for(int i=0; i<6; i++) _array_PV_output__source_idx[i] = 0 + i;

	_array_SpikeGenerator_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator_i[i] = 0 + i;

	_array_SST_output__source_idx = new int32_t[4];
    
	for(int i=0; i<4; i++) _array_SST_output__source_idx[i] = 0 + i;


	// static arrays
	_static_array__array_statemonitor_1__indices = new int32_t[6];
	_static_array__array_statemonitor_2__indices = new int32_t[40];
	_static_array__array_statemonitor__indices = new int32_t[4];
	_static_array__dynamic_array_SpikeGenerator__timebins = new int32_t[50];
	_static_array__dynamic_array_SpikeGenerator_neuron_index = new double[50];
	_static_array__dynamic_array_SpikeGenerator_spike_number = new int64_t[50];
	_static_array__dynamic_array_SpikeGenerator_spike_time = new double[50];

	// Random number generator states
	for (int i=0; i<1; i++)
	    _mersenne_twister_states.push_back(new rk_state());
}

void _load_arrays()
{
	using namespace brian;

	ifstream f_static_array__array_statemonitor_1__indices;
	f_static_array__array_statemonitor_1__indices.open("static_arrays/_static_array__array_statemonitor_1__indices", ios::in | ios::binary);
	if(f_static_array__array_statemonitor_1__indices.is_open())
	{
		f_static_array__array_statemonitor_1__indices.read(reinterpret_cast<char*>(_static_array__array_statemonitor_1__indices), 6*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__array_statemonitor_1__indices." << endl;
	}
	ifstream f_static_array__array_statemonitor_2__indices;
	f_static_array__array_statemonitor_2__indices.open("static_arrays/_static_array__array_statemonitor_2__indices", ios::in | ios::binary);
	if(f_static_array__array_statemonitor_2__indices.is_open())
	{
		f_static_array__array_statemonitor_2__indices.read(reinterpret_cast<char*>(_static_array__array_statemonitor_2__indices), 40*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__array_statemonitor_2__indices." << endl;
	}
	ifstream f_static_array__array_statemonitor__indices;
	f_static_array__array_statemonitor__indices.open("static_arrays/_static_array__array_statemonitor__indices", ios::in | ios::binary);
	if(f_static_array__array_statemonitor__indices.is_open())
	{
		f_static_array__array_statemonitor__indices.read(reinterpret_cast<char*>(_static_array__array_statemonitor__indices), 4*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__array_statemonitor__indices." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator__timebins;
	f_static_array__dynamic_array_SpikeGenerator__timebins.open("static_arrays/_static_array__dynamic_array_SpikeGenerator__timebins", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator__timebins.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator__timebins.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator__timebins), 50*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator__timebins." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator_neuron_index;
	f_static_array__dynamic_array_SpikeGenerator_neuron_index.open("static_arrays/_static_array__dynamic_array_SpikeGenerator_neuron_index", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator_neuron_index.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator_neuron_index.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator_neuron_index), 50*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator_neuron_index." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator_spike_number;
	f_static_array__dynamic_array_SpikeGenerator_spike_number.open("static_arrays/_static_array__dynamic_array_SpikeGenerator_spike_number", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator_spike_number.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator_spike_number.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator_spike_number), 50*sizeof(int64_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator_spike_number." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator_spike_time;
	f_static_array__dynamic_array_SpikeGenerator_spike_time.open("static_arrays/_static_array__dynamic_array_SpikeGenerator_spike_time", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator_spike_time.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator_spike_time.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator_spike_time), 50*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator_spike_time." << endl;
	}
}

void _write_arrays()
{
	using namespace brian;

	ofstream outfile__array_AMPA0_N;
	outfile__array_AMPA0_N.open("results/_array_AMPA0_N_156581628591503217", ios::binary | ios::out);
	if(outfile__array_AMPA0_N.is_open())
	{
		outfile__array_AMPA0_N.write(reinterpret_cast<char*>(_array_AMPA0_N), 1*sizeof(_array_AMPA0_N[0]));
		outfile__array_AMPA0_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA0_N." << endl;
	}
	ofstream outfile__array_AMPA2_N;
	outfile__array_AMPA2_N.open("results/_array_AMPA2_N_-3968095394999495835", ios::binary | ios::out);
	if(outfile__array_AMPA2_N.is_open())
	{
		outfile__array_AMPA2_N.write(reinterpret_cast<char*>(_array_AMPA2_N), 1*sizeof(_array_AMPA2_N[0]));
		outfile__array_AMPA2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA2_N." << endl;
	}
	ofstream outfile__array_AMPA3_N;
	outfile__array_AMPA3_N.open("results/_array_AMPA3_N_3999829308287602818", ios::binary | ios::out);
	if(outfile__array_AMPA3_N.is_open())
	{
		outfile__array_AMPA3_N.write(reinterpret_cast<char*>(_array_AMPA3_N), 1*sizeof(_array_AMPA3_N[0]));
		outfile__array_AMPA3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA3_N." << endl;
	}
	ofstream outfile__array_AMPA7_N;
	outfile__array_AMPA7_N.open("results/_array_AMPA7_N_6085357126295131213", ios::binary | ios::out);
	if(outfile__array_AMPA7_N.is_open())
	{
		outfile__array_AMPA7_N.write(reinterpret_cast<char*>(_array_AMPA7_N), 1*sizeof(_array_AMPA7_N[0]));
		outfile__array_AMPA7_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA7_N." << endl;
	}
	ofstream outfile__array_AMPA_STD1_N;
	outfile__array_AMPA_STD1_N.open("results/_array_AMPA_STD1_N_-7154944392534687795", ios::binary | ios::out);
	if(outfile__array_AMPA_STD1_N.is_open())
	{
		outfile__array_AMPA_STD1_N.write(reinterpret_cast<char*>(_array_AMPA_STD1_N), 1*sizeof(_array_AMPA_STD1_N[0]));
		outfile__array_AMPA_STD1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA_STD1_N." << endl;
	}
	ofstream outfile__array_AMPA_STD8_N;
	outfile__array_AMPA_STD8_N.open("results/_array_AMPA_STD8_N_-6290499238830120841", ios::binary | ios::out);
	if(outfile__array_AMPA_STD8_N.is_open())
	{
		outfile__array_AMPA_STD8_N.write(reinterpret_cast<char*>(_array_AMPA_STD8_N), 1*sizeof(_array_AMPA_STD8_N[0]));
		outfile__array_AMPA_STD8_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA_STD8_N." << endl;
	}
	ofstream outfile__array_Core_0__spikespace;
	outfile__array_Core_0__spikespace.open("results/_array_Core_0__spikespace_-6832548538541369283", ios::binary | ios::out);
	if(outfile__array_Core_0__spikespace.is_open())
	{
		outfile__array_Core_0__spikespace.write(reinterpret_cast<char*>(_array_Core_0__spikespace), 257*sizeof(_array_Core_0__spikespace[0]));
		outfile__array_Core_0__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0__spikespace." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ahp;
	outfile__array_Core_0_alpha_ahp.open("results/_array_Core_0_alpha_ahp_1173753489076406216", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ahp.is_open())
	{
		outfile__array_Core_0_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_0_alpha_ahp), 256*sizeof(_array_Core_0_alpha_ahp[0]));
		outfile__array_Core_0_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ampa;
	outfile__array_Core_0_alpha_ampa.open("results/_array_Core_0_alpha_ampa_-8273191443815295753", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ampa.is_open())
	{
		outfile__array_Core_0_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_0_alpha_ampa), 256*sizeof(_array_Core_0_alpha_ampa[0]));
		outfile__array_Core_0_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ampa_std;
	outfile__array_Core_0_alpha_ampa_std.open("results/_array_Core_0_alpha_ampa_std_-1349809658414414221", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ampa_std.is_open())
	{
		outfile__array_Core_0_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_0_alpha_ampa_std), 256*sizeof(_array_Core_0_alpha_ampa_std[0]));
		outfile__array_Core_0_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_0_alpha_gaba_a;
	outfile__array_Core_0_alpha_gaba_a.open("results/_array_Core_0_alpha_gaba_a_8930971102232605204", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_gaba_a.is_open())
	{
		outfile__array_Core_0_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_alpha_gaba_a), 256*sizeof(_array_Core_0_alpha_gaba_a[0]));
		outfile__array_Core_0_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_alpha_gaba_b;
	outfile__array_Core_0_alpha_gaba_b.open("results/_array_Core_0_alpha_gaba_b_4868717096543510539", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_gaba_b.is_open())
	{
		outfile__array_Core_0_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_alpha_gaba_b), 256*sizeof(_array_Core_0_alpha_gaba_b[0]));
		outfile__array_Core_0_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_alpha_nmda;
	outfile__array_Core_0_alpha_nmda.open("results/_array_Core_0_alpha_nmda_3847402180276524537", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_nmda.is_open())
	{
		outfile__array_Core_0_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_0_alpha_nmda), 256*sizeof(_array_Core_0_alpha_nmda[0]));
		outfile__array_Core_0_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_0_alpha_soma;
	outfile__array_Core_0_alpha_soma.open("results/_array_Core_0_alpha_soma_-1611939983039612091", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_soma.is_open())
	{
		outfile__array_Core_0_alpha_soma.write(reinterpret_cast<char*>(_array_Core_0_alpha_soma), 256*sizeof(_array_Core_0_alpha_soma[0]));
		outfile__array_Core_0_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_0_Campa;
	outfile__array_Core_0_Campa.open("results/_array_Core_0_Campa_-5671427062475386672", ios::binary | ios::out);
	if(outfile__array_Core_0_Campa.is_open())
	{
		outfile__array_Core_0_Campa.write(reinterpret_cast<char*>(_array_Core_0_Campa), 256*sizeof(_array_Core_0_Campa[0]));
		outfile__array_Core_0_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Campa." << endl;
	}
	ofstream outfile__array_Core_0_Campa_std;
	outfile__array_Core_0_Campa_std.open("results/_array_Core_0_Campa_std_9100836281289660547", ios::binary | ios::out);
	if(outfile__array_Core_0_Campa_std.is_open())
	{
		outfile__array_Core_0_Campa_std.write(reinterpret_cast<char*>(_array_Core_0_Campa_std), 256*sizeof(_array_Core_0_Campa_std[0]));
		outfile__array_Core_0_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Campa_std." << endl;
	}
	ofstream outfile__array_Core_0_Cgaba_a;
	outfile__array_Core_0_Cgaba_a.open("results/_array_Core_0_Cgaba_a_9087048587674960413", ios::binary | ios::out);
	if(outfile__array_Core_0_Cgaba_a.is_open())
	{
		outfile__array_Core_0_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_0_Cgaba_a), 256*sizeof(_array_Core_0_Cgaba_a[0]));
		outfile__array_Core_0_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_0_Cgaba_b;
	outfile__array_Core_0_Cgaba_b.open("results/_array_Core_0_Cgaba_b_-5188422271690708269", ios::binary | ios::out);
	if(outfile__array_Core_0_Cgaba_b.is_open())
	{
		outfile__array_Core_0_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_0_Cgaba_b), 256*sizeof(_array_Core_0_Cgaba_b[0]));
		outfile__array_Core_0_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_0_Cnmda;
	outfile__array_Core_0_Cnmda.open("results/_array_Core_0_Cnmda_1105885141408995975", ios::binary | ios::out);
	if(outfile__array_Core_0_Cnmda.is_open())
	{
		outfile__array_Core_0_Cnmda.write(reinterpret_cast<char*>(_array_Core_0_Cnmda), 256*sizeof(_array_Core_0_Cnmda[0]));
		outfile__array_Core_0_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cnmda." << endl;
	}
	ofstream outfile__array_Core_0_Csoma_ahp;
	outfile__array_Core_0_Csoma_ahp.open("results/_array_Core_0_Csoma_ahp_7346630680411414101", ios::binary | ios::out);
	if(outfile__array_Core_0_Csoma_ahp.is_open())
	{
		outfile__array_Core_0_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_0_Csoma_ahp), 1*sizeof(_array_Core_0_Csoma_ahp[0]));
		outfile__array_Core_0_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_0_Csoma_mem;
	outfile__array_Core_0_Csoma_mem.open("results/_array_Core_0_Csoma_mem_8803797061807934377", ios::binary | ios::out);
	if(outfile__array_Core_0_Csoma_mem.is_open())
	{
		outfile__array_Core_0_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_0_Csoma_mem), 1*sizeof(_array_Core_0_Csoma_mem[0]));
		outfile__array_Core_0_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_0_i;
	outfile__array_Core_0_i.open("results/_array_Core_0_i_-8249889580372173064", ios::binary | ios::out);
	if(outfile__array_Core_0_i.is_open())
	{
		outfile__array_Core_0_i.write(reinterpret_cast<char*>(_array_Core_0_i), 256*sizeof(_array_Core_0_i[0]));
		outfile__array_Core_0_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_i." << endl;
	}
	ofstream outfile__array_Core_0_I0;
	outfile__array_Core_0_I0.open("results/_array_Core_0_I0_4282949635160454471", ios::binary | ios::out);
	if(outfile__array_Core_0_I0.is_open())
	{
		outfile__array_Core_0_I0.write(reinterpret_cast<char*>(_array_Core_0_I0), 1*sizeof(_array_Core_0_I0[0]));
		outfile__array_Core_0_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I0." << endl;
	}
	ofstream outfile__array_Core_0_Iampa;
	outfile__array_Core_0_Iampa.open("results/_array_Core_0_Iampa_-458332230280598339", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa.is_open())
	{
		outfile__array_Core_0_Iampa.write(reinterpret_cast<char*>(_array_Core_0_Iampa), 256*sizeof(_array_Core_0_Iampa[0]));
		outfile__array_Core_0_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_std;
	outfile__array_Core_0_Iampa_std.open("results/_array_Core_0_Iampa_std_6170194189664037188", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_std.is_open())
	{
		outfile__array_Core_0_Iampa_std.write(reinterpret_cast<char*>(_array_Core_0_Iampa_std), 256*sizeof(_array_Core_0_Iampa_std[0]));
		outfile__array_Core_0_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_std_tau;
	outfile__array_Core_0_Iampa_std_tau.open("results/_array_Core_0_Iampa_std_tau_2075222185105885871", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_std_tau.is_open())
	{
		outfile__array_Core_0_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_0_Iampa_std_tau), 256*sizeof(_array_Core_0_Iampa_std_tau[0]));
		outfile__array_Core_0_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_tau;
	outfile__array_Core_0_Iampa_tau.open("results/_array_Core_0_Iampa_tau_742484465589418762", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_tau.is_open())
	{
		outfile__array_Core_0_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_0_Iampa_tau), 256*sizeof(_array_Core_0_Iampa_tau[0]));
		outfile__array_Core_0_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_w0;
	outfile__array_Core_0_Iampa_w0.open("results/_array_Core_0_Iampa_w0_-5206671825219368711", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_w0.is_open())
	{
		outfile__array_Core_0_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_0_Iampa_w0), 256*sizeof(_array_Core_0_Iampa_w0[0]));
		outfile__array_Core_0_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_0_Idischarge_w;
	outfile__array_Core_0_Idischarge_w.open("results/_array_Core_0_Idischarge_w_-8024233315246022499", ios::binary | ios::out);
	if(outfile__array_Core_0_Idischarge_w.is_open())
	{
		outfile__array_Core_0_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_0_Idischarge_w), 256*sizeof(_array_Core_0_Idischarge_w[0]));
		outfile__array_Core_0_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a;
	outfile__array_Core_0_Igaba_a.open("results/_array_Core_0_Igaba_a_1084039681882229480", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a.is_open())
	{
		outfile__array_Core_0_Igaba_a.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a), 256*sizeof(_array_Core_0_Igaba_a[0]));
		outfile__array_Core_0_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a_tau;
	outfile__array_Core_0_Igaba_a_tau.open("results/_array_Core_0_Igaba_a_tau_-493200032581097907", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a_tau.is_open())
	{
		outfile__array_Core_0_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a_tau), 256*sizeof(_array_Core_0_Igaba_a_tau[0]));
		outfile__array_Core_0_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a_w0;
	outfile__array_Core_0_Igaba_a_w0.open("results/_array_Core_0_Igaba_a_w0_-3915245403260149206", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a_w0.is_open())
	{
		outfile__array_Core_0_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a_w0), 256*sizeof(_array_Core_0_Igaba_a_w0[0]));
		outfile__array_Core_0_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b;
	outfile__array_Core_0_Igaba_b.open("results/_array_Core_0_Igaba_b_8611427078184024583", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b.is_open())
	{
		outfile__array_Core_0_Igaba_b.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b), 256*sizeof(_array_Core_0_Igaba_b[0]));
		outfile__array_Core_0_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b_tau;
	outfile__array_Core_0_Igaba_b_tau.open("results/_array_Core_0_Igaba_b_tau_-3269476437654023527", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b_tau.is_open())
	{
		outfile__array_Core_0_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b_tau), 256*sizeof(_array_Core_0_Igaba_b_tau[0]));
		outfile__array_Core_0_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b_w0;
	outfile__array_Core_0_Igaba_b_w0.open("results/_array_Core_0_Igaba_b_w0_8681727975559864608", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b_w0.is_open())
	{
		outfile__array_Core_0_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b_w0), 256*sizeof(_array_Core_0_Igaba_b_w0[0]));
		outfile__array_Core_0_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_0_Inmda;
	outfile__array_Core_0_Inmda.open("results/_array_Core_0_Inmda_4535362372439608661", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda.is_open())
	{
		outfile__array_Core_0_Inmda.write(reinterpret_cast<char*>(_array_Core_0_Inmda), 256*sizeof(_array_Core_0_Inmda[0]));
		outfile__array_Core_0_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_tau;
	outfile__array_Core_0_Inmda_tau.open("results/_array_Core_0_Inmda_tau_-8840559530778790564", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_tau.is_open())
	{
		outfile__array_Core_0_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_0_Inmda_tau), 256*sizeof(_array_Core_0_Inmda_tau[0]));
		outfile__array_Core_0_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_thr;
	outfile__array_Core_0_Inmda_thr.open("results/_array_Core_0_Inmda_thr_-5617348719976663124", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_thr.is_open())
	{
		outfile__array_Core_0_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_0_Inmda_thr), 256*sizeof(_array_Core_0_Inmda_thr[0]));
		outfile__array_Core_0_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_w0;
	outfile__array_Core_0_Inmda_w0.open("results/_array_Core_0_Inmda_w0_2713694120542087655", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_w0.is_open())
	{
		outfile__array_Core_0_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_0_Inmda_w0), 256*sizeof(_array_Core_0_Inmda_w0[0]));
		outfile__array_Core_0_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp;
	outfile__array_Core_0_Isoma_ahp.open("results/_array_Core_0_Isoma_ahp_-4889063445864437077", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp.is_open())
	{
		outfile__array_Core_0_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp), 256*sizeof(_array_Core_0_Isoma_ahp[0]));
		outfile__array_Core_0_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_g;
	outfile__array_Core_0_Isoma_ahp_g.open("results/_array_Core_0_Isoma_ahp_g_-305027754700138946", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_g), 1*sizeof(_array_Core_0_Isoma_ahp_g[0]));
		outfile__array_Core_0_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_tau;
	outfile__array_Core_0_Isoma_ahp_tau.open("results/_array_Core_0_Isoma_ahp_tau_7979065659662208153", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_tau), 1*sizeof(_array_Core_0_Isoma_ahp_tau[0]));
		outfile__array_Core_0_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_w;
	outfile__array_Core_0_Isoma_ahp_w.open("results/_array_Core_0_Isoma_ahp_w_1869720740022730776", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_w), 256*sizeof(_array_Core_0_Isoma_ahp_w[0]));
		outfile__array_Core_0_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_const;
	outfile__array_Core_0_Isoma_const.open("results/_array_Core_0_Isoma_const_7218972322614327834", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_const.is_open())
	{
		outfile__array_Core_0_Isoma_const.write(reinterpret_cast<char*>(_array_Core_0_Isoma_const), 256*sizeof(_array_Core_0_Isoma_const[0]));
		outfile__array_Core_0_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_dpi_tau;
	outfile__array_Core_0_Isoma_dpi_tau.open("results/_array_Core_0_Isoma_dpi_tau_-9004749565565336982", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_0_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_0_Isoma_dpi_tau), 1*sizeof(_array_Core_0_Isoma_dpi_tau[0]));
		outfile__array_Core_0_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_mem;
	outfile__array_Core_0_Isoma_mem.open("results/_array_Core_0_Isoma_mem_4633256284052095126", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_mem.is_open())
	{
		outfile__array_Core_0_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_0_Isoma_mem), 256*sizeof(_array_Core_0_Isoma_mem[0]));
		outfile__array_Core_0_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_gain;
	outfile__array_Core_0_Isoma_pfb_gain.open("results/_array_Core_0_Isoma_pfb_gain_-7300261454196008818", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_gain), 1*sizeof(_array_Core_0_Isoma_pfb_gain[0]));
		outfile__array_Core_0_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_norm;
	outfile__array_Core_0_Isoma_pfb_norm.open("results/_array_Core_0_Isoma_pfb_norm_3056701138786299528", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_norm), 1*sizeof(_array_Core_0_Isoma_pfb_norm[0]));
		outfile__array_Core_0_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_th;
	outfile__array_Core_0_Isoma_pfb_th.open("results/_array_Core_0_Isoma_pfb_th_-4988329314104740405", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_th), 1*sizeof(_array_Core_0_Isoma_pfb_th[0]));
		outfile__array_Core_0_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_reset;
	outfile__array_Core_0_Isoma_reset.open("results/_array_Core_0_Isoma_reset_1354355771007409589", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_reset.is_open())
	{
		outfile__array_Core_0_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_0_Isoma_reset), 1*sizeof(_array_Core_0_Isoma_reset[0]));
		outfile__array_Core_0_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_th;
	outfile__array_Core_0_Isoma_th.open("results/_array_Core_0_Isoma_th_-6148660181937369398", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_th.is_open())
	{
		outfile__array_Core_0_Isoma_th.write(reinterpret_cast<char*>(_array_Core_0_Isoma_th), 1*sizeof(_array_Core_0_Isoma_th[0]));
		outfile__array_Core_0_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_0_kn;
	outfile__array_Core_0_kn.open("results/_array_Core_0_kn_6924559671627925806", ios::binary | ios::out);
	if(outfile__array_Core_0_kn.is_open())
	{
		outfile__array_Core_0_kn.write(reinterpret_cast<char*>(_array_Core_0_kn), 1*sizeof(_array_Core_0_kn[0]));
		outfile__array_Core_0_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kn." << endl;
	}
	ofstream outfile__array_Core_0_kp;
	outfile__array_Core_0_kp.open("results/_array_Core_0_kp_-381761144410279711", ios::binary | ios::out);
	if(outfile__array_Core_0_kp.is_open())
	{
		outfile__array_Core_0_kp.write(reinterpret_cast<char*>(_array_Core_0_kp), 1*sizeof(_array_Core_0_kp[0]));
		outfile__array_Core_0_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kp." << endl;
	}
	ofstream outfile__array_Core_0_lastspike;
	outfile__array_Core_0_lastspike.open("results/_array_Core_0_lastspike_-6336512955774733837", ios::binary | ios::out);
	if(outfile__array_Core_0_lastspike.is_open())
	{
		outfile__array_Core_0_lastspike.write(reinterpret_cast<char*>(_array_Core_0_lastspike), 256*sizeof(_array_Core_0_lastspike[0]));
		outfile__array_Core_0_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_lastspike." << endl;
	}
	ofstream outfile__array_Core_0_not_refractory;
	outfile__array_Core_0_not_refractory.open("results/_array_Core_0_not_refractory_-8153248534450407238", ios::binary | ios::out);
	if(outfile__array_Core_0_not_refractory.is_open())
	{
		outfile__array_Core_0_not_refractory.write(reinterpret_cast<char*>(_array_Core_0_not_refractory), 256*sizeof(_array_Core_0_not_refractory[0]));
		outfile__array_Core_0_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_not_refractory." << endl;
	}
	ofstream outfile__array_Core_0_soma_refP;
	outfile__array_Core_0_soma_refP.open("results/_array_Core_0_soma_refP_-5400178636565090165", ios::binary | ios::out);
	if(outfile__array_Core_0_soma_refP.is_open())
	{
		outfile__array_Core_0_soma_refP.write(reinterpret_cast<char*>(_array_Core_0_soma_refP), 1*sizeof(_array_Core_0_soma_refP[0]));
		outfile__array_Core_0_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_soma_refP." << endl;
	}
	ofstream outfile__array_Core_0_std_pulse;
	outfile__array_Core_0_std_pulse.open("results/_array_Core_0_std_pulse_4742241242537418895", ios::binary | ios::out);
	if(outfile__array_Core_0_std_pulse.is_open())
	{
		outfile__array_Core_0_std_pulse.write(reinterpret_cast<char*>(_array_Core_0_std_pulse), 256*sizeof(_array_Core_0_std_pulse[0]));
		outfile__array_Core_0_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_std_pulse." << endl;
	}
	ofstream outfile__array_Core_0_tau_pulse;
	outfile__array_Core_0_tau_pulse.open("results/_array_Core_0_tau_pulse_894087002188653261", ios::binary | ios::out);
	if(outfile__array_Core_0_tau_pulse.is_open())
	{
		outfile__array_Core_0_tau_pulse.write(reinterpret_cast<char*>(_array_Core_0_tau_pulse), 256*sizeof(_array_Core_0_tau_pulse[0]));
		outfile__array_Core_0_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_0_Ut;
	outfile__array_Core_0_Ut.open("results/_array_Core_0_Ut_-1862995235156371281", ios::binary | ios::out);
	if(outfile__array_Core_0_Ut.is_open())
	{
		outfile__array_Core_0_Ut.write(reinterpret_cast<char*>(_array_Core_0_Ut), 1*sizeof(_array_Core_0_Ut[0]));
		outfile__array_Core_0_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ut." << endl;
	}
	ofstream outfile__array_Core_0_Va;
	outfile__array_Core_0_Va.open("results/_array_Core_0_Va_1729776852716591938", ios::binary | ios::out);
	if(outfile__array_Core_0_Va.is_open())
	{
		outfile__array_Core_0_Va.write(reinterpret_cast<char*>(_array_Core_0_Va), 256*sizeof(_array_Core_0_Va[0]));
		outfile__array_Core_0_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Va." << endl;
	}
	ofstream outfile__array_Core_0_Vw;
	outfile__array_Core_0_Vw.open("results/_array_Core_0_Vw_1545191370098210830", ios::binary | ios::out);
	if(outfile__array_Core_0_Vw.is_open())
	{
		outfile__array_Core_0_Vw.write(reinterpret_cast<char*>(_array_Core_0_Vw), 256*sizeof(_array_Core_0_Vw[0]));
		outfile__array_Core_0_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Vw." << endl;
	}
	ofstream outfile__array_Core_1__spikespace;
	outfile__array_Core_1__spikespace.open("results/_array_Core_1__spikespace_906641990771501165", ios::binary | ios::out);
	if(outfile__array_Core_1__spikespace.is_open())
	{
		outfile__array_Core_1__spikespace.write(reinterpret_cast<char*>(_array_Core_1__spikespace), 257*sizeof(_array_Core_1__spikespace[0]));
		outfile__array_Core_1__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1__spikespace." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ahp;
	outfile__array_Core_1_alpha_ahp.open("results/_array_Core_1_alpha_ahp_-3846714126146099062", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ahp.is_open())
	{
		outfile__array_Core_1_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_1_alpha_ahp), 256*sizeof(_array_Core_1_alpha_ahp[0]));
		outfile__array_Core_1_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ampa;
	outfile__array_Core_1_alpha_ampa.open("results/_array_Core_1_alpha_ampa_4114061486822850401", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ampa.is_open())
	{
		outfile__array_Core_1_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_1_alpha_ampa), 256*sizeof(_array_Core_1_alpha_ampa[0]));
		outfile__array_Core_1_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ampa_std;
	outfile__array_Core_1_alpha_ampa_std.open("results/_array_Core_1_alpha_ampa_std_-6939354410299658055", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ampa_std.is_open())
	{
		outfile__array_Core_1_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_1_alpha_ampa_std), 256*sizeof(_array_Core_1_alpha_ampa_std[0]));
		outfile__array_Core_1_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_1_alpha_gaba_a;
	outfile__array_Core_1_alpha_gaba_a.open("results/_array_Core_1_alpha_gaba_a_-7656123180046684011", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_gaba_a.is_open())
	{
		outfile__array_Core_1_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_alpha_gaba_a), 256*sizeof(_array_Core_1_alpha_gaba_a[0]));
		outfile__array_Core_1_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_alpha_gaba_b;
	outfile__array_Core_1_alpha_gaba_b.open("results/_array_Core_1_alpha_gaba_b_-3334678474848067048", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_gaba_b.is_open())
	{
		outfile__array_Core_1_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_alpha_gaba_b), 256*sizeof(_array_Core_1_alpha_gaba_b[0]));
		outfile__array_Core_1_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_alpha_nmda;
	outfile__array_Core_1_alpha_nmda.open("results/_array_Core_1_alpha_nmda_1387050326109915882", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_nmda.is_open())
	{
		outfile__array_Core_1_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_1_alpha_nmda), 256*sizeof(_array_Core_1_alpha_nmda[0]));
		outfile__array_Core_1_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_1_alpha_soma;
	outfile__array_Core_1_alpha_soma.open("results/_array_Core_1_alpha_soma_1557348585923096808", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_soma.is_open())
	{
		outfile__array_Core_1_alpha_soma.write(reinterpret_cast<char*>(_array_Core_1_alpha_soma), 256*sizeof(_array_Core_1_alpha_soma[0]));
		outfile__array_Core_1_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_1_Campa;
	outfile__array_Core_1_Campa.open("results/_array_Core_1_Campa_-6790595862903651307", ios::binary | ios::out);
	if(outfile__array_Core_1_Campa.is_open())
	{
		outfile__array_Core_1_Campa.write(reinterpret_cast<char*>(_array_Core_1_Campa), 256*sizeof(_array_Core_1_Campa[0]));
		outfile__array_Core_1_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Campa." << endl;
	}
	ofstream outfile__array_Core_1_Campa_std;
	outfile__array_Core_1_Campa_std.open("results/_array_Core_1_Campa_std_-5991628474335206896", ios::binary | ios::out);
	if(outfile__array_Core_1_Campa_std.is_open())
	{
		outfile__array_Core_1_Campa_std.write(reinterpret_cast<char*>(_array_Core_1_Campa_std), 256*sizeof(_array_Core_1_Campa_std[0]));
		outfile__array_Core_1_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Campa_std." << endl;
	}
	ofstream outfile__array_Core_1_Cgaba_a;
	outfile__array_Core_1_Cgaba_a.open("results/_array_Core_1_Cgaba_a_5508969279763584493", ios::binary | ios::out);
	if(outfile__array_Core_1_Cgaba_a.is_open())
	{
		outfile__array_Core_1_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_1_Cgaba_a), 256*sizeof(_array_Core_1_Cgaba_a[0]));
		outfile__array_Core_1_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_1_Cgaba_b;
	outfile__array_Core_1_Cgaba_b.open("results/_array_Core_1_Cgaba_b_406778029523128976", ios::binary | ios::out);
	if(outfile__array_Core_1_Cgaba_b.is_open())
	{
		outfile__array_Core_1_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_1_Cgaba_b), 256*sizeof(_array_Core_1_Cgaba_b[0]));
		outfile__array_Core_1_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_1_Cnmda;
	outfile__array_Core_1_Cnmda.open("results/_array_Core_1_Cnmda_-7691257740668142837", ios::binary | ios::out);
	if(outfile__array_Core_1_Cnmda.is_open())
	{
		outfile__array_Core_1_Cnmda.write(reinterpret_cast<char*>(_array_Core_1_Cnmda), 256*sizeof(_array_Core_1_Cnmda[0]));
		outfile__array_Core_1_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cnmda." << endl;
	}
	ofstream outfile__array_Core_1_Csoma_ahp;
	outfile__array_Core_1_Csoma_ahp.open("results/_array_Core_1_Csoma_ahp_119535373407972201", ios::binary | ios::out);
	if(outfile__array_Core_1_Csoma_ahp.is_open())
	{
		outfile__array_Core_1_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_1_Csoma_ahp), 1*sizeof(_array_Core_1_Csoma_ahp[0]));
		outfile__array_Core_1_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_1_Csoma_mem;
	outfile__array_Core_1_Csoma_mem.open("results/_array_Core_1_Csoma_mem_-2771392961967761563", ios::binary | ios::out);
	if(outfile__array_Core_1_Csoma_mem.is_open())
	{
		outfile__array_Core_1_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_1_Csoma_mem), 1*sizeof(_array_Core_1_Csoma_mem[0]));
		outfile__array_Core_1_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_1_i;
	outfile__array_Core_1_i.open("results/_array_Core_1_i_333194275024610699", ios::binary | ios::out);
	if(outfile__array_Core_1_i.is_open())
	{
		outfile__array_Core_1_i.write(reinterpret_cast<char*>(_array_Core_1_i), 256*sizeof(_array_Core_1_i[0]));
		outfile__array_Core_1_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_i." << endl;
	}
	ofstream outfile__array_Core_1_I0;
	outfile__array_Core_1_I0.open("results/_array_Core_1_I0_-3695650188741357334", ios::binary | ios::out);
	if(outfile__array_Core_1_I0.is_open())
	{
		outfile__array_Core_1_I0.write(reinterpret_cast<char*>(_array_Core_1_I0), 1*sizeof(_array_Core_1_I0[0]));
		outfile__array_Core_1_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I0." << endl;
	}
	ofstream outfile__array_Core_1_Iampa;
	outfile__array_Core_1_Iampa.open("results/_array_Core_1_Iampa_-64054025747488766", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa.is_open())
	{
		outfile__array_Core_1_Iampa.write(reinterpret_cast<char*>(_array_Core_1_Iampa), 256*sizeof(_array_Core_1_Iampa[0]));
		outfile__array_Core_1_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_std;
	outfile__array_Core_1_Iampa_std.open("results/_array_Core_1_Iampa_std_4361341042942003312", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_std.is_open())
	{
		outfile__array_Core_1_Iampa_std.write(reinterpret_cast<char*>(_array_Core_1_Iampa_std), 256*sizeof(_array_Core_1_Iampa_std[0]));
		outfile__array_Core_1_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_std_tau;
	outfile__array_Core_1_Iampa_std_tau.open("results/_array_Core_1_Iampa_std_tau_1755610625689640195", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_std_tau.is_open())
	{
		outfile__array_Core_1_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_1_Iampa_std_tau), 256*sizeof(_array_Core_1_Iampa_std_tau[0]));
		outfile__array_Core_1_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_tau;
	outfile__array_Core_1_Iampa_tau.open("results/_array_Core_1_Iampa_tau_-7261957544033027188", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_tau.is_open())
	{
		outfile__array_Core_1_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_1_Iampa_tau), 256*sizeof(_array_Core_1_Iampa_tau[0]));
		outfile__array_Core_1_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_w0;
	outfile__array_Core_1_Iampa_w0.open("results/_array_Core_1_Iampa_w0_7999947171726204006", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_w0.is_open())
	{
		outfile__array_Core_1_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_1_Iampa_w0), 256*sizeof(_array_Core_1_Iampa_w0[0]));
		outfile__array_Core_1_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_1_Idischarge_w;
	outfile__array_Core_1_Idischarge_w.open("results/_array_Core_1_Idischarge_w_-2430868554360284719", ios::binary | ios::out);
	if(outfile__array_Core_1_Idischarge_w.is_open())
	{
		outfile__array_Core_1_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_1_Idischarge_w), 256*sizeof(_array_Core_1_Idischarge_w[0]));
		outfile__array_Core_1_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a;
	outfile__array_Core_1_Igaba_a.open("results/_array_Core_1_Igaba_a_-5390677249377533036", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a.is_open())
	{
		outfile__array_Core_1_Igaba_a.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a), 256*sizeof(_array_Core_1_Igaba_a[0]));
		outfile__array_Core_1_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a_tau;
	outfile__array_Core_1_Igaba_a_tau.open("results/_array_Core_1_Igaba_a_tau_3977342028268163543", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a_tau.is_open())
	{
		outfile__array_Core_1_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a_tau), 256*sizeof(_array_Core_1_Igaba_a_tau[0]));
		outfile__array_Core_1_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a_w0;
	outfile__array_Core_1_Igaba_a_w0.open("results/_array_Core_1_Igaba_a_w0_624434018450400566", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a_w0.is_open())
	{
		outfile__array_Core_1_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a_w0), 256*sizeof(_array_Core_1_Igaba_a_w0[0]));
		outfile__array_Core_1_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b;
	outfile__array_Core_1_Igaba_b.open("results/_array_Core_1_Igaba_b_4124233387247918692", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b.is_open())
	{
		outfile__array_Core_1_Igaba_b.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b), 256*sizeof(_array_Core_1_Igaba_b[0]));
		outfile__array_Core_1_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b_tau;
	outfile__array_Core_1_Igaba_b_tau.open("results/_array_Core_1_Igaba_b_tau_-1539069005621002970", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b_tau.is_open())
	{
		outfile__array_Core_1_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b_tau), 256*sizeof(_array_Core_1_Igaba_b_tau[0]));
		outfile__array_Core_1_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b_w0;
	outfile__array_Core_1_Igaba_b_w0.open("results/_array_Core_1_Igaba_b_w0_-6437724653276267817", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b_w0.is_open())
	{
		outfile__array_Core_1_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b_w0), 256*sizeof(_array_Core_1_Igaba_b_w0[0]));
		outfile__array_Core_1_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_1_Inmda;
	outfile__array_Core_1_Inmda.open("results/_array_Core_1_Inmda_-6132365283363056308", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda.is_open())
	{
		outfile__array_Core_1_Inmda.write(reinterpret_cast<char*>(_array_Core_1_Inmda), 256*sizeof(_array_Core_1_Inmda[0]));
		outfile__array_Core_1_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_tau;
	outfile__array_Core_1_Inmda_tau.open("results/_array_Core_1_Inmda_tau_8082523900054303459", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_tau.is_open())
	{
		outfile__array_Core_1_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_1_Inmda_tau), 256*sizeof(_array_Core_1_Inmda_tau[0]));
		outfile__array_Core_1_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_thr;
	outfile__array_Core_1_Inmda_thr.open("results/_array_Core_1_Inmda_thr_-5319975141542030808", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_thr.is_open())
	{
		outfile__array_Core_1_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_1_Inmda_thr), 256*sizeof(_array_Core_1_Inmda_thr[0]));
		outfile__array_Core_1_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_w0;
	outfile__array_Core_1_Inmda_w0.open("results/_array_Core_1_Inmda_w0_2299869222766834371", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_w0.is_open())
	{
		outfile__array_Core_1_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_1_Inmda_w0), 256*sizeof(_array_Core_1_Inmda_w0[0]));
		outfile__array_Core_1_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp;
	outfile__array_Core_1_Isoma_ahp.open("results/_array_Core_1_Isoma_ahp_5501965189685115173", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp.is_open())
	{
		outfile__array_Core_1_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp), 256*sizeof(_array_Core_1_Isoma_ahp[0]));
		outfile__array_Core_1_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_g;
	outfile__array_Core_1_Isoma_ahp_g.open("results/_array_Core_1_Isoma_ahp_g_187458068590722691", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_g), 1*sizeof(_array_Core_1_Isoma_ahp_g[0]));
		outfile__array_Core_1_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_tau;
	outfile__array_Core_1_Isoma_ahp_tau.open("results/_array_Core_1_Isoma_ahp_tau_8452733673311805731", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_tau), 1*sizeof(_array_Core_1_Isoma_ahp_tau[0]));
		outfile__array_Core_1_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_w;
	outfile__array_Core_1_Isoma_ahp_w.open("results/_array_Core_1_Isoma_ahp_w_671786872437619907", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_w), 256*sizeof(_array_Core_1_Isoma_ahp_w[0]));
		outfile__array_Core_1_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_const;
	outfile__array_Core_1_Isoma_const.open("results/_array_Core_1_Isoma_const_-2994078975548766731", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_const.is_open())
	{
		outfile__array_Core_1_Isoma_const.write(reinterpret_cast<char*>(_array_Core_1_Isoma_const), 256*sizeof(_array_Core_1_Isoma_const[0]));
		outfile__array_Core_1_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_dpi_tau;
	outfile__array_Core_1_Isoma_dpi_tau.open("results/_array_Core_1_Isoma_dpi_tau_4221693287977237474", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_1_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_1_Isoma_dpi_tau), 1*sizeof(_array_Core_1_Isoma_dpi_tau[0]));
		outfile__array_Core_1_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_mem;
	outfile__array_Core_1_Isoma_mem.open("results/_array_Core_1_Isoma_mem_688445267657438520", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_mem.is_open())
	{
		outfile__array_Core_1_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_1_Isoma_mem), 256*sizeof(_array_Core_1_Isoma_mem[0]));
		outfile__array_Core_1_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_gain;
	outfile__array_Core_1_Isoma_pfb_gain.open("results/_array_Core_1_Isoma_pfb_gain_-7863418910646548459", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_gain), 1*sizeof(_array_Core_1_Isoma_pfb_gain[0]));
		outfile__array_Core_1_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_norm;
	outfile__array_Core_1_Isoma_pfb_norm.open("results/_array_Core_1_Isoma_pfb_norm_7946936938962551504", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_norm), 1*sizeof(_array_Core_1_Isoma_pfb_norm[0]));
		outfile__array_Core_1_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_th;
	outfile__array_Core_1_Isoma_pfb_th.open("results/_array_Core_1_Isoma_pfb_th_4618571772534050667", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_th), 1*sizeof(_array_Core_1_Isoma_pfb_th[0]));
		outfile__array_Core_1_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_reset;
	outfile__array_Core_1_Isoma_reset.open("results/_array_Core_1_Isoma_reset_-5643880413303178035", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_reset.is_open())
	{
		outfile__array_Core_1_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_1_Isoma_reset), 1*sizeof(_array_Core_1_Isoma_reset[0]));
		outfile__array_Core_1_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_th;
	outfile__array_Core_1_Isoma_th.open("results/_array_Core_1_Isoma_th_8529218065948863153", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_th.is_open())
	{
		outfile__array_Core_1_Isoma_th.write(reinterpret_cast<char*>(_array_Core_1_Isoma_th), 1*sizeof(_array_Core_1_Isoma_th[0]));
		outfile__array_Core_1_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_1_kn;
	outfile__array_Core_1_kn.open("results/_array_Core_1_kn_539836821404033390", ios::binary | ios::out);
	if(outfile__array_Core_1_kn.is_open())
	{
		outfile__array_Core_1_kn.write(reinterpret_cast<char*>(_array_Core_1_kn), 1*sizeof(_array_Core_1_kn[0]));
		outfile__array_Core_1_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kn." << endl;
	}
	ofstream outfile__array_Core_1_kp;
	outfile__array_Core_1_kp.open("results/_array_Core_1_kp_-1561246279728864866", ios::binary | ios::out);
	if(outfile__array_Core_1_kp.is_open())
	{
		outfile__array_Core_1_kp.write(reinterpret_cast<char*>(_array_Core_1_kp), 1*sizeof(_array_Core_1_kp[0]));
		outfile__array_Core_1_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kp." << endl;
	}
	ofstream outfile__array_Core_1_lastspike;
	outfile__array_Core_1_lastspike.open("results/_array_Core_1_lastspike_-5583988912286365024", ios::binary | ios::out);
	if(outfile__array_Core_1_lastspike.is_open())
	{
		outfile__array_Core_1_lastspike.write(reinterpret_cast<char*>(_array_Core_1_lastspike), 256*sizeof(_array_Core_1_lastspike[0]));
		outfile__array_Core_1_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_lastspike." << endl;
	}
	ofstream outfile__array_Core_1_not_refractory;
	outfile__array_Core_1_not_refractory.open("results/_array_Core_1_not_refractory_1657965348351064465", ios::binary | ios::out);
	if(outfile__array_Core_1_not_refractory.is_open())
	{
		outfile__array_Core_1_not_refractory.write(reinterpret_cast<char*>(_array_Core_1_not_refractory), 256*sizeof(_array_Core_1_not_refractory[0]));
		outfile__array_Core_1_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_not_refractory." << endl;
	}
	ofstream outfile__array_Core_1_soma_refP;
	outfile__array_Core_1_soma_refP.open("results/_array_Core_1_soma_refP_8793525932115535226", ios::binary | ios::out);
	if(outfile__array_Core_1_soma_refP.is_open())
	{
		outfile__array_Core_1_soma_refP.write(reinterpret_cast<char*>(_array_Core_1_soma_refP), 1*sizeof(_array_Core_1_soma_refP[0]));
		outfile__array_Core_1_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_soma_refP." << endl;
	}
	ofstream outfile__array_Core_1_std_pulse;
	outfile__array_Core_1_std_pulse.open("results/_array_Core_1_std_pulse_926786838388535556", ios::binary | ios::out);
	if(outfile__array_Core_1_std_pulse.is_open())
	{
		outfile__array_Core_1_std_pulse.write(reinterpret_cast<char*>(_array_Core_1_std_pulse), 256*sizeof(_array_Core_1_std_pulse[0]));
		outfile__array_Core_1_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_std_pulse." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_2__sub_idx;
	outfile__array_Core_1_subgroup_2__sub_idx.open("results/_array_Core_1_subgroup_2__sub_idx_-8771881096613844799", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_2__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_2__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_2__sub_idx), 40*sizeof(_array_Core_1_subgroup_2__sub_idx[0]));
		outfile__array_Core_1_subgroup_2__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_2__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_tau_pulse;
	outfile__array_Core_1_tau_pulse.open("results/_array_Core_1_tau_pulse_-341949636305654011", ios::binary | ios::out);
	if(outfile__array_Core_1_tau_pulse.is_open())
	{
		outfile__array_Core_1_tau_pulse.write(reinterpret_cast<char*>(_array_Core_1_tau_pulse), 256*sizeof(_array_Core_1_tau_pulse[0]));
		outfile__array_Core_1_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_1_Ut;
	outfile__array_Core_1_Ut.open("results/_array_Core_1_Ut_-7651336649330498397", ios::binary | ios::out);
	if(outfile__array_Core_1_Ut.is_open())
	{
		outfile__array_Core_1_Ut.write(reinterpret_cast<char*>(_array_Core_1_Ut), 1*sizeof(_array_Core_1_Ut[0]));
		outfile__array_Core_1_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ut." << endl;
	}
	ofstream outfile__array_Core_1_Va;
	outfile__array_Core_1_Va.open("results/_array_Core_1_Va_-6736721152529041276", ios::binary | ios::out);
	if(outfile__array_Core_1_Va.is_open())
	{
		outfile__array_Core_1_Va.write(reinterpret_cast<char*>(_array_Core_1_Va), 256*sizeof(_array_Core_1_Va[0]));
		outfile__array_Core_1_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Va." << endl;
	}
	ofstream outfile__array_Core_1_Vw;
	outfile__array_Core_1_Vw.open("results/_array_Core_1_Vw_2296615950192735810", ios::binary | ios::out);
	if(outfile__array_Core_1_Vw.is_open())
	{
		outfile__array_Core_1_Vw.write(reinterpret_cast<char*>(_array_Core_1_Vw), 256*sizeof(_array_Core_1_Vw[0]));
		outfile__array_Core_1_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Vw." << endl;
	}
	ofstream outfile__array_Core_2__spikespace;
	outfile__array_Core_2__spikespace.open("results/_array_Core_2__spikespace_2736151350019543095", ios::binary | ios::out);
	if(outfile__array_Core_2__spikespace.is_open())
	{
		outfile__array_Core_2__spikespace.write(reinterpret_cast<char*>(_array_Core_2__spikespace), 257*sizeof(_array_Core_2__spikespace[0]));
		outfile__array_Core_2__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2__spikespace." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ahp;
	outfile__array_Core_2_alpha_ahp.open("results/_array_Core_2_alpha_ahp_5968992549971613822", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ahp.is_open())
	{
		outfile__array_Core_2_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_2_alpha_ahp), 256*sizeof(_array_Core_2_alpha_ahp[0]));
		outfile__array_Core_2_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ampa;
	outfile__array_Core_2_alpha_ampa.open("results/_array_Core_2_alpha_ampa_4068347643291812116", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ampa.is_open())
	{
		outfile__array_Core_2_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_2_alpha_ampa), 256*sizeof(_array_Core_2_alpha_ampa[0]));
		outfile__array_Core_2_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ampa_std;
	outfile__array_Core_2_alpha_ampa_std.open("results/_array_Core_2_alpha_ampa_std_-7463542991654182403", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ampa_std.is_open())
	{
		outfile__array_Core_2_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_2_alpha_ampa_std), 256*sizeof(_array_Core_2_alpha_ampa_std[0]));
		outfile__array_Core_2_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_2_alpha_gaba_a;
	outfile__array_Core_2_alpha_gaba_a.open("results/_array_Core_2_alpha_gaba_a_-9187372987439941896", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_gaba_a.is_open())
	{
		outfile__array_Core_2_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_alpha_gaba_a), 256*sizeof(_array_Core_2_alpha_gaba_a[0]));
		outfile__array_Core_2_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_alpha_gaba_b;
	outfile__array_Core_2_alpha_gaba_b.open("results/_array_Core_2_alpha_gaba_b_-5729277369678267311", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_gaba_b.is_open())
	{
		outfile__array_Core_2_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_alpha_gaba_b), 256*sizeof(_array_Core_2_alpha_gaba_b[0]));
		outfile__array_Core_2_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_alpha_nmda;
	outfile__array_Core_2_alpha_nmda.open("results/_array_Core_2_alpha_nmda_1504737432030576520", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_nmda.is_open())
	{
		outfile__array_Core_2_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_2_alpha_nmda), 256*sizeof(_array_Core_2_alpha_nmda[0]));
		outfile__array_Core_2_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_2_alpha_soma;
	outfile__array_Core_2_alpha_soma.open("results/_array_Core_2_alpha_soma_6352819430839151903", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_soma.is_open())
	{
		outfile__array_Core_2_alpha_soma.write(reinterpret_cast<char*>(_array_Core_2_alpha_soma), 256*sizeof(_array_Core_2_alpha_soma[0]));
		outfile__array_Core_2_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_2_Campa;
	outfile__array_Core_2_Campa.open("results/_array_Core_2_Campa_-8231786927190264093", ios::binary | ios::out);
	if(outfile__array_Core_2_Campa.is_open())
	{
		outfile__array_Core_2_Campa.write(reinterpret_cast<char*>(_array_Core_2_Campa), 256*sizeof(_array_Core_2_Campa[0]));
		outfile__array_Core_2_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Campa." << endl;
	}
	ofstream outfile__array_Core_2_Campa_std;
	outfile__array_Core_2_Campa_std.open("results/_array_Core_2_Campa_std_5339537888271181906", ios::binary | ios::out);
	if(outfile__array_Core_2_Campa_std.is_open())
	{
		outfile__array_Core_2_Campa_std.write(reinterpret_cast<char*>(_array_Core_2_Campa_std), 256*sizeof(_array_Core_2_Campa_std[0]));
		outfile__array_Core_2_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Campa_std." << endl;
	}
	ofstream outfile__array_Core_2_Cgaba_a;
	outfile__array_Core_2_Cgaba_a.open("results/_array_Core_2_Cgaba_a_-3769077129078959673", ios::binary | ios::out);
	if(outfile__array_Core_2_Cgaba_a.is_open())
	{
		outfile__array_Core_2_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_2_Cgaba_a), 256*sizeof(_array_Core_2_Cgaba_a[0]));
		outfile__array_Core_2_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_2_Cgaba_b;
	outfile__array_Core_2_Cgaba_b.open("results/_array_Core_2_Cgaba_b_-7161626489029586818", ios::binary | ios::out);
	if(outfile__array_Core_2_Cgaba_b.is_open())
	{
		outfile__array_Core_2_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_2_Cgaba_b), 256*sizeof(_array_Core_2_Cgaba_b[0]));
		outfile__array_Core_2_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_2_Cnmda;
	outfile__array_Core_2_Cnmda.open("results/_array_Core_2_Cnmda_-5022282974193156773", ios::binary | ios::out);
	if(outfile__array_Core_2_Cnmda.is_open())
	{
		outfile__array_Core_2_Cnmda.write(reinterpret_cast<char*>(_array_Core_2_Cnmda), 256*sizeof(_array_Core_2_Cnmda[0]));
		outfile__array_Core_2_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cnmda." << endl;
	}
	ofstream outfile__array_Core_2_Csoma_ahp;
	outfile__array_Core_2_Csoma_ahp.open("results/_array_Core_2_Csoma_ahp_7267759746625373934", ios::binary | ios::out);
	if(outfile__array_Core_2_Csoma_ahp.is_open())
	{
		outfile__array_Core_2_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_2_Csoma_ahp), 1*sizeof(_array_Core_2_Csoma_ahp[0]));
		outfile__array_Core_2_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_2_Csoma_mem;
	outfile__array_Core_2_Csoma_mem.open("results/_array_Core_2_Csoma_mem_-1312930499787510135", ios::binary | ios::out);
	if(outfile__array_Core_2_Csoma_mem.is_open())
	{
		outfile__array_Core_2_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_2_Csoma_mem), 1*sizeof(_array_Core_2_Csoma_mem[0]));
		outfile__array_Core_2_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_2_i;
	outfile__array_Core_2_i.open("results/_array_Core_2_i_-7345681014718434713", ios::binary | ios::out);
	if(outfile__array_Core_2_i.is_open())
	{
		outfile__array_Core_2_i.write(reinterpret_cast<char*>(_array_Core_2_i), 256*sizeof(_array_Core_2_i[0]));
		outfile__array_Core_2_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_i." << endl;
	}
	ofstream outfile__array_Core_2_I0;
	outfile__array_Core_2_I0.open("results/_array_Core_2_I0_-2465443659674657281", ios::binary | ios::out);
	if(outfile__array_Core_2_I0.is_open())
	{
		outfile__array_Core_2_I0.write(reinterpret_cast<char*>(_array_Core_2_I0), 1*sizeof(_array_Core_2_I0[0]));
		outfile__array_Core_2_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I0." << endl;
	}
	ofstream outfile__array_Core_2_Iampa;
	outfile__array_Core_2_Iampa.open("results/_array_Core_2_Iampa_-7573636996659012612", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa.is_open())
	{
		outfile__array_Core_2_Iampa.write(reinterpret_cast<char*>(_array_Core_2_Iampa), 256*sizeof(_array_Core_2_Iampa[0]));
		outfile__array_Core_2_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_std;
	outfile__array_Core_2_Iampa_std.open("results/_array_Core_2_Iampa_std_-3926750897633480553", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_std.is_open())
	{
		outfile__array_Core_2_Iampa_std.write(reinterpret_cast<char*>(_array_Core_2_Iampa_std), 256*sizeof(_array_Core_2_Iampa_std[0]));
		outfile__array_Core_2_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_std_tau;
	outfile__array_Core_2_Iampa_std_tau.open("results/_array_Core_2_Iampa_std_tau_-6169774782481645501", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_std_tau.is_open())
	{
		outfile__array_Core_2_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_2_Iampa_std_tau), 256*sizeof(_array_Core_2_Iampa_std_tau[0]));
		outfile__array_Core_2_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_tau;
	outfile__array_Core_2_Iampa_tau.open("results/_array_Core_2_Iampa_tau_7632407768991686875", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_tau.is_open())
	{
		outfile__array_Core_2_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_2_Iampa_tau), 256*sizeof(_array_Core_2_Iampa_tau[0]));
		outfile__array_Core_2_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_w0;
	outfile__array_Core_2_Iampa_w0.open("results/_array_Core_2_Iampa_w0_-8314295531435482580", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_w0.is_open())
	{
		outfile__array_Core_2_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_2_Iampa_w0), 256*sizeof(_array_Core_2_Iampa_w0[0]));
		outfile__array_Core_2_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_2_Idischarge_w;
	outfile__array_Core_2_Idischarge_w.open("results/_array_Core_2_Idischarge_w_-318507395717920199", ios::binary | ios::out);
	if(outfile__array_Core_2_Idischarge_w.is_open())
	{
		outfile__array_Core_2_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_2_Idischarge_w), 256*sizeof(_array_Core_2_Idischarge_w[0]));
		outfile__array_Core_2_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a;
	outfile__array_Core_2_Igaba_a.open("results/_array_Core_2_Igaba_a_5719652294170059866", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a.is_open())
	{
		outfile__array_Core_2_Igaba_a.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a), 256*sizeof(_array_Core_2_Igaba_a[0]));
		outfile__array_Core_2_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a_tau;
	outfile__array_Core_2_Igaba_a_tau.open("results/_array_Core_2_Igaba_a_tau_4898004934316350614", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a_tau.is_open())
	{
		outfile__array_Core_2_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a_tau), 256*sizeof(_array_Core_2_Igaba_a_tau[0]));
		outfile__array_Core_2_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a_w0;
	outfile__array_Core_2_Igaba_a_w0.open("results/_array_Core_2_Igaba_a_w0_4383600114851141694", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a_w0.is_open())
	{
		outfile__array_Core_2_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a_w0), 256*sizeof(_array_Core_2_Igaba_a_w0[0]));
		outfile__array_Core_2_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b;
	outfile__array_Core_2_Igaba_b.open("results/_array_Core_2_Igaba_b_2775581254553971632", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b.is_open())
	{
		outfile__array_Core_2_Igaba_b.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b), 256*sizeof(_array_Core_2_Igaba_b[0]));
		outfile__array_Core_2_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b_tau;
	outfile__array_Core_2_Igaba_b_tau.open("results/_array_Core_2_Igaba_b_tau_-5969647250415884148", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b_tau.is_open())
	{
		outfile__array_Core_2_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b_tau), 256*sizeof(_array_Core_2_Igaba_b_tau[0]));
		outfile__array_Core_2_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b_w0;
	outfile__array_Core_2_Igaba_b_w0.open("results/_array_Core_2_Igaba_b_w0_-6117391942571489378", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b_w0.is_open())
	{
		outfile__array_Core_2_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b_w0), 256*sizeof(_array_Core_2_Igaba_b_w0[0]));
		outfile__array_Core_2_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_2_Inmda;
	outfile__array_Core_2_Inmda.open("results/_array_Core_2_Inmda_-411814367388471205", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda.is_open())
	{
		outfile__array_Core_2_Inmda.write(reinterpret_cast<char*>(_array_Core_2_Inmda), 256*sizeof(_array_Core_2_Inmda[0]));
		outfile__array_Core_2_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_tau;
	outfile__array_Core_2_Inmda_tau.open("results/_array_Core_2_Inmda_tau_5359428917712201482", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_tau.is_open())
	{
		outfile__array_Core_2_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_2_Inmda_tau), 256*sizeof(_array_Core_2_Inmda_tau[0]));
		outfile__array_Core_2_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_thr;
	outfile__array_Core_2_Inmda_thr.open("results/_array_Core_2_Inmda_thr_1612366540565274149", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_thr.is_open())
	{
		outfile__array_Core_2_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_2_Inmda_thr), 256*sizeof(_array_Core_2_Inmda_thr[0]));
		outfile__array_Core_2_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_w0;
	outfile__array_Core_2_Inmda_w0.open("results/_array_Core_2_Inmda_w0_-228616461506575616", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_w0.is_open())
	{
		outfile__array_Core_2_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_2_Inmda_w0), 256*sizeof(_array_Core_2_Inmda_w0[0]));
		outfile__array_Core_2_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp;
	outfile__array_Core_2_Isoma_ahp.open("results/_array_Core_2_Isoma_ahp_-3270078547382664775", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp.is_open())
	{
		outfile__array_Core_2_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp), 256*sizeof(_array_Core_2_Isoma_ahp[0]));
		outfile__array_Core_2_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_g;
	outfile__array_Core_2_Isoma_ahp_g.open("results/_array_Core_2_Isoma_ahp_g_2606747330160475763", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_g), 1*sizeof(_array_Core_2_Isoma_ahp_g[0]));
		outfile__array_Core_2_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_tau;
	outfile__array_Core_2_Isoma_ahp_tau.open("results/_array_Core_2_Isoma_ahp_tau_9168919496683510703", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_tau), 1*sizeof(_array_Core_2_Isoma_ahp_tau[0]));
		outfile__array_Core_2_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_w;
	outfile__array_Core_2_Isoma_ahp_w.open("results/_array_Core_2_Isoma_ahp_w_-8801353669938010088", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_w), 256*sizeof(_array_Core_2_Isoma_ahp_w[0]));
		outfile__array_Core_2_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_const;
	outfile__array_Core_2_Isoma_const.open("results/_array_Core_2_Isoma_const_-5896080566820252307", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_const.is_open())
	{
		outfile__array_Core_2_Isoma_const.write(reinterpret_cast<char*>(_array_Core_2_Isoma_const), 256*sizeof(_array_Core_2_Isoma_const[0]));
		outfile__array_Core_2_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_dpi_tau;
	outfile__array_Core_2_Isoma_dpi_tau.open("results/_array_Core_2_Isoma_dpi_tau_8073509462630105569", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_2_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_2_Isoma_dpi_tau), 1*sizeof(_array_Core_2_Isoma_dpi_tau[0]));
		outfile__array_Core_2_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_mem;
	outfile__array_Core_2_Isoma_mem.open("results/_array_Core_2_Isoma_mem_-2337499849858967273", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_mem.is_open())
	{
		outfile__array_Core_2_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_2_Isoma_mem), 256*sizeof(_array_Core_2_Isoma_mem[0]));
		outfile__array_Core_2_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_gain;
	outfile__array_Core_2_Isoma_pfb_gain.open("results/_array_Core_2_Isoma_pfb_gain_4775845129683868290", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_gain), 1*sizeof(_array_Core_2_Isoma_pfb_gain[0]));
		outfile__array_Core_2_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_norm;
	outfile__array_Core_2_Isoma_pfb_norm.open("results/_array_Core_2_Isoma_pfb_norm_347853322646815914", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_norm), 1*sizeof(_array_Core_2_Isoma_pfb_norm[0]));
		outfile__array_Core_2_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_th;
	outfile__array_Core_2_Isoma_pfb_th.open("results/_array_Core_2_Isoma_pfb_th_-2609133957384575675", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_th), 1*sizeof(_array_Core_2_Isoma_pfb_th[0]));
		outfile__array_Core_2_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_reset;
	outfile__array_Core_2_Isoma_reset.open("results/_array_Core_2_Isoma_reset_-3240413975012134078", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_reset.is_open())
	{
		outfile__array_Core_2_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_2_Isoma_reset), 1*sizeof(_array_Core_2_Isoma_reset[0]));
		outfile__array_Core_2_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_th;
	outfile__array_Core_2_Isoma_th.open("results/_array_Core_2_Isoma_th_6025507575448305543", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_th.is_open())
	{
		outfile__array_Core_2_Isoma_th.write(reinterpret_cast<char*>(_array_Core_2_Isoma_th), 1*sizeof(_array_Core_2_Isoma_th[0]));
		outfile__array_Core_2_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_2_kn;
	outfile__array_Core_2_kn.open("results/_array_Core_2_kn_8935561031475582798", ios::binary | ios::out);
	if(outfile__array_Core_2_kn.is_open())
	{
		outfile__array_Core_2_kn.write(reinterpret_cast<char*>(_array_Core_2_kn), 1*sizeof(_array_Core_2_kn[0]));
		outfile__array_Core_2_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kn." << endl;
	}
	ofstream outfile__array_Core_2_kp;
	outfile__array_Core_2_kp.open("results/_array_Core_2_kp_758856511265048694", ios::binary | ios::out);
	if(outfile__array_Core_2_kp.is_open())
	{
		outfile__array_Core_2_kp.write(reinterpret_cast<char*>(_array_Core_2_kp), 1*sizeof(_array_Core_2_kp[0]));
		outfile__array_Core_2_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kp." << endl;
	}
	ofstream outfile__array_Core_2_lastspike;
	outfile__array_Core_2_lastspike.open("results/_array_Core_2_lastspike_5409477500549718338", ios::binary | ios::out);
	if(outfile__array_Core_2_lastspike.is_open())
	{
		outfile__array_Core_2_lastspike.write(reinterpret_cast<char*>(_array_Core_2_lastspike), 256*sizeof(_array_Core_2_lastspike[0]));
		outfile__array_Core_2_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_lastspike." << endl;
	}
	ofstream outfile__array_Core_2_not_refractory;
	outfile__array_Core_2_not_refractory.open("results/_array_Core_2_not_refractory_-7218363698393766507", ios::binary | ios::out);
	if(outfile__array_Core_2_not_refractory.is_open())
	{
		outfile__array_Core_2_not_refractory.write(reinterpret_cast<char*>(_array_Core_2_not_refractory), 256*sizeof(_array_Core_2_not_refractory[0]));
		outfile__array_Core_2_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_not_refractory." << endl;
	}
	ofstream outfile__array_Core_2_soma_refP;
	outfile__array_Core_2_soma_refP.open("results/_array_Core_2_soma_refP_-1381716404796434959", ios::binary | ios::out);
	if(outfile__array_Core_2_soma_refP.is_open())
	{
		outfile__array_Core_2_soma_refP.write(reinterpret_cast<char*>(_array_Core_2_soma_refP), 1*sizeof(_array_Core_2_soma_refP[0]));
		outfile__array_Core_2_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_soma_refP." << endl;
	}
	ofstream outfile__array_Core_2_std_pulse;
	outfile__array_Core_2_std_pulse.open("results/_array_Core_2_std_pulse_-2988679270554077900", ios::binary | ios::out);
	if(outfile__array_Core_2_std_pulse.is_open())
	{
		outfile__array_Core_2_std_pulse.write(reinterpret_cast<char*>(_array_Core_2_std_pulse), 256*sizeof(_array_Core_2_std_pulse[0]));
		outfile__array_Core_2_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_std_pulse." << endl;
	}
	ofstream outfile__array_Core_2_subgroup_2__sub_idx;
	outfile__array_Core_2_subgroup_2__sub_idx.open("results/_array_Core_2_subgroup_2__sub_idx_-7779890042136458143", ios::binary | ios::out);
	if(outfile__array_Core_2_subgroup_2__sub_idx.is_open())
	{
		outfile__array_Core_2_subgroup_2__sub_idx.write(reinterpret_cast<char*>(_array_Core_2_subgroup_2__sub_idx), 6*sizeof(_array_Core_2_subgroup_2__sub_idx[0]));
		outfile__array_Core_2_subgroup_2__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_subgroup_2__sub_idx." << endl;
	}
	ofstream outfile__array_Core_2_tau_pulse;
	outfile__array_Core_2_tau_pulse.open("results/_array_Core_2_tau_pulse_-5330225676614205230", ios::binary | ios::out);
	if(outfile__array_Core_2_tau_pulse.is_open())
	{
		outfile__array_Core_2_tau_pulse.write(reinterpret_cast<char*>(_array_Core_2_tau_pulse), 256*sizeof(_array_Core_2_tau_pulse[0]));
		outfile__array_Core_2_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_2_Ut;
	outfile__array_Core_2_Ut.open("results/_array_Core_2_Ut_4382179746452988361", ios::binary | ios::out);
	if(outfile__array_Core_2_Ut.is_open())
	{
		outfile__array_Core_2_Ut.write(reinterpret_cast<char*>(_array_Core_2_Ut), 1*sizeof(_array_Core_2_Ut[0]));
		outfile__array_Core_2_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ut." << endl;
	}
	ofstream outfile__array_Core_2_Va;
	outfile__array_Core_2_Va.open("results/_array_Core_2_Va_6466236965196299152", ios::binary | ios::out);
	if(outfile__array_Core_2_Va.is_open())
	{
		outfile__array_Core_2_Va.write(reinterpret_cast<char*>(_array_Core_2_Va), 256*sizeof(_array_Core_2_Va[0]));
		outfile__array_Core_2_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Va." << endl;
	}
	ofstream outfile__array_Core_2_Vw;
	outfile__array_Core_2_Vw.open("results/_array_Core_2_Vw_-2672053205714182613", ios::binary | ios::out);
	if(outfile__array_Core_2_Vw.is_open())
	{
		outfile__array_Core_2_Vw.write(reinterpret_cast<char*>(_array_Core_2_Vw), 256*sizeof(_array_Core_2_Vw[0]));
		outfile__array_Core_2_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Vw." << endl;
	}
	ofstream outfile__array_Core_3__spikespace;
	outfile__array_Core_3__spikespace.open("results/_array_Core_3__spikespace_5019693881893771708", ios::binary | ios::out);
	if(outfile__array_Core_3__spikespace.is_open())
	{
		outfile__array_Core_3__spikespace.write(reinterpret_cast<char*>(_array_Core_3__spikespace), 257*sizeof(_array_Core_3__spikespace[0]));
		outfile__array_Core_3__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3__spikespace." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ahp;
	outfile__array_Core_3_alpha_ahp.open("results/_array_Core_3_alpha_ahp_-7571316168115700903", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ahp.is_open())
	{
		outfile__array_Core_3_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_3_alpha_ahp), 256*sizeof(_array_Core_3_alpha_ahp[0]));
		outfile__array_Core_3_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ampa;
	outfile__array_Core_3_alpha_ampa.open("results/_array_Core_3_alpha_ampa_-4265826694143275895", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ampa.is_open())
	{
		outfile__array_Core_3_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_3_alpha_ampa), 256*sizeof(_array_Core_3_alpha_ampa[0]));
		outfile__array_Core_3_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ampa_std;
	outfile__array_Core_3_alpha_ampa_std.open("results/_array_Core_3_alpha_ampa_std_2107914630454793054", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ampa_std.is_open())
	{
		outfile__array_Core_3_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_3_alpha_ampa_std), 256*sizeof(_array_Core_3_alpha_ampa_std[0]));
		outfile__array_Core_3_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_3_alpha_gaba_a;
	outfile__array_Core_3_alpha_gaba_a.open("results/_array_Core_3_alpha_gaba_a_4452825729449295862", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_gaba_a.is_open())
	{
		outfile__array_Core_3_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_alpha_gaba_a), 256*sizeof(_array_Core_3_alpha_gaba_a[0]));
		outfile__array_Core_3_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_alpha_gaba_b;
	outfile__array_Core_3_alpha_gaba_b.open("results/_array_Core_3_alpha_gaba_b_5684858171074779392", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_gaba_b.is_open())
	{
		outfile__array_Core_3_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_alpha_gaba_b), 256*sizeof(_array_Core_3_alpha_gaba_b[0]));
		outfile__array_Core_3_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_alpha_nmda;
	outfile__array_Core_3_alpha_nmda.open("results/_array_Core_3_alpha_nmda_-5856536795296708163", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_nmda.is_open())
	{
		outfile__array_Core_3_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_3_alpha_nmda), 256*sizeof(_array_Core_3_alpha_nmda[0]));
		outfile__array_Core_3_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_3_alpha_soma;
	outfile__array_Core_3_alpha_soma.open("results/_array_Core_3_alpha_soma_-3236495908597429772", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_soma.is_open())
	{
		outfile__array_Core_3_alpha_soma.write(reinterpret_cast<char*>(_array_Core_3_alpha_soma), 256*sizeof(_array_Core_3_alpha_soma[0]));
		outfile__array_Core_3_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_3_Campa;
	outfile__array_Core_3_Campa.open("results/_array_Core_3_Campa_5738252182942114267", ios::binary | ios::out);
	if(outfile__array_Core_3_Campa.is_open())
	{
		outfile__array_Core_3_Campa.write(reinterpret_cast<char*>(_array_Core_3_Campa), 256*sizeof(_array_Core_3_Campa[0]));
		outfile__array_Core_3_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Campa." << endl;
	}
	ofstream outfile__array_Core_3_Campa_std;
	outfile__array_Core_3_Campa_std.open("results/_array_Core_3_Campa_std_4208727209866726898", ios::binary | ios::out);
	if(outfile__array_Core_3_Campa_std.is_open())
	{
		outfile__array_Core_3_Campa_std.write(reinterpret_cast<char*>(_array_Core_3_Campa_std), 256*sizeof(_array_Core_3_Campa_std[0]));
		outfile__array_Core_3_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Campa_std." << endl;
	}
	ofstream outfile__array_Core_3_Cgaba_a;
	outfile__array_Core_3_Cgaba_a.open("results/_array_Core_3_Cgaba_a_-5604958047160994363", ios::binary | ios::out);
	if(outfile__array_Core_3_Cgaba_a.is_open())
	{
		outfile__array_Core_3_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_3_Cgaba_a), 256*sizeof(_array_Core_3_Cgaba_a[0]));
		outfile__array_Core_3_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_3_Cgaba_b;
	outfile__array_Core_3_Cgaba_b.open("results/_array_Core_3_Cgaba_b_-8507962670414179758", ios::binary | ios::out);
	if(outfile__array_Core_3_Cgaba_b.is_open())
	{
		outfile__array_Core_3_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_3_Cgaba_b), 256*sizeof(_array_Core_3_Cgaba_b[0]));
		outfile__array_Core_3_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_3_Cnmda;
	outfile__array_Core_3_Cnmda.open("results/_array_Core_3_Cnmda_-3657564361345483849", ios::binary | ios::out);
	if(outfile__array_Core_3_Cnmda.is_open())
	{
		outfile__array_Core_3_Cnmda.write(reinterpret_cast<char*>(_array_Core_3_Cnmda), 256*sizeof(_array_Core_3_Cnmda[0]));
		outfile__array_Core_3_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cnmda." << endl;
	}
	ofstream outfile__array_Core_3_Csoma_ahp;
	outfile__array_Core_3_Csoma_ahp.open("results/_array_Core_3_Csoma_ahp_-5354497070499482322", ios::binary | ios::out);
	if(outfile__array_Core_3_Csoma_ahp.is_open())
	{
		outfile__array_Core_3_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_3_Csoma_ahp), 1*sizeof(_array_Core_3_Csoma_ahp[0]));
		outfile__array_Core_3_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_3_Csoma_mem;
	outfile__array_Core_3_Csoma_mem.open("results/_array_Core_3_Csoma_mem_1568502887024989273", ios::binary | ios::out);
	if(outfile__array_Core_3_Csoma_mem.is_open())
	{
		outfile__array_Core_3_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_3_Csoma_mem), 1*sizeof(_array_Core_3_Csoma_mem[0]));
		outfile__array_Core_3_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_3_i;
	outfile__array_Core_3_i.open("results/_array_Core_3_i_-8725920950400262837", ios::binary | ios::out);
	if(outfile__array_Core_3_i.is_open())
	{
		outfile__array_Core_3_i.write(reinterpret_cast<char*>(_array_Core_3_i), 256*sizeof(_array_Core_3_i[0]));
		outfile__array_Core_3_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_i." << endl;
	}
	ofstream outfile__array_Core_3_I0;
	outfile__array_Core_3_I0.open("results/_array_Core_3_I0_4117368154914440624", ios::binary | ios::out);
	if(outfile__array_Core_3_I0.is_open())
	{
		outfile__array_Core_3_I0.write(reinterpret_cast<char*>(_array_Core_3_I0), 1*sizeof(_array_Core_3_I0[0]));
		outfile__array_Core_3_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I0." << endl;
	}
	ofstream outfile__array_Core_3_Iampa;
	outfile__array_Core_3_Iampa.open("results/_array_Core_3_Iampa_1449926335107475837", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa.is_open())
	{
		outfile__array_Core_3_Iampa.write(reinterpret_cast<char*>(_array_Core_3_Iampa), 256*sizeof(_array_Core_3_Iampa[0]));
		outfile__array_Core_3_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_std;
	outfile__array_Core_3_Iampa_std.open("results/_array_Core_3_Iampa_std_1915772856184298663", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_std.is_open())
	{
		outfile__array_Core_3_Iampa_std.write(reinterpret_cast<char*>(_array_Core_3_Iampa_std), 256*sizeof(_array_Core_3_Iampa_std[0]));
		outfile__array_Core_3_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_std_tau;
	outfile__array_Core_3_Iampa_std_tau.open("results/_array_Core_3_Iampa_std_tau_-905454278669197745", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_std_tau.is_open())
	{
		outfile__array_Core_3_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_3_Iampa_std_tau), 256*sizeof(_array_Core_3_Iampa_std_tau[0]));
		outfile__array_Core_3_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_tau;
	outfile__array_Core_3_Iampa_tau.open("results/_array_Core_3_Iampa_tau_6679126045217869914", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_tau.is_open())
	{
		outfile__array_Core_3_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_3_Iampa_tau), 256*sizeof(_array_Core_3_Iampa_tau[0]));
		outfile__array_Core_3_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_w0;
	outfile__array_Core_3_Iampa_w0.open("results/_array_Core_3_Iampa_w0_-626248768294003878", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_w0.is_open())
	{
		outfile__array_Core_3_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_3_Iampa_w0), 256*sizeof(_array_Core_3_Iampa_w0[0]));
		outfile__array_Core_3_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_3_Idischarge_w;
	outfile__array_Core_3_Idischarge_w.open("results/_array_Core_3_Idischarge_w_7337343216918551391", ios::binary | ios::out);
	if(outfile__array_Core_3_Idischarge_w.is_open())
	{
		outfile__array_Core_3_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_3_Idischarge_w), 256*sizeof(_array_Core_3_Idischarge_w[0]));
		outfile__array_Core_3_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a;
	outfile__array_Core_3_Igaba_a.open("results/_array_Core_3_Igaba_a_3877567438014574587", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a.is_open())
	{
		outfile__array_Core_3_Igaba_a.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a), 256*sizeof(_array_Core_3_Igaba_a[0]));
		outfile__array_Core_3_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a_tau;
	outfile__array_Core_3_Igaba_a_tau.open("results/_array_Core_3_Igaba_a_tau_-8138030084022552982", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a_tau.is_open())
	{
		outfile__array_Core_3_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a_tau), 256*sizeof(_array_Core_3_Igaba_a_tau[0]));
		outfile__array_Core_3_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a_w0;
	outfile__array_Core_3_Igaba_a_w0.open("results/_array_Core_3_Igaba_a_w0_9211387447652132211", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a_w0.is_open())
	{
		outfile__array_Core_3_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a_w0), 256*sizeof(_array_Core_3_Igaba_a_w0[0]));
		outfile__array_Core_3_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b;
	outfile__array_Core_3_Igaba_b.open("results/_array_Core_3_Igaba_b_-1424058443484642572", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b.is_open())
	{
		outfile__array_Core_3_Igaba_b.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b), 256*sizeof(_array_Core_3_Igaba_b[0]));
		outfile__array_Core_3_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b_tau;
	outfile__array_Core_3_Igaba_b_tau.open("results/_array_Core_3_Igaba_b_tau_-1190440514870335216", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b_tau.is_open())
	{
		outfile__array_Core_3_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b_tau), 256*sizeof(_array_Core_3_Igaba_b_tau[0]));
		outfile__array_Core_3_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b_w0;
	outfile__array_Core_3_Igaba_b_w0.open("results/_array_Core_3_Igaba_b_w0_2018768908062777456", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b_w0.is_open())
	{
		outfile__array_Core_3_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b_w0), 256*sizeof(_array_Core_3_Igaba_b_w0[0]));
		outfile__array_Core_3_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_3_Inmda;
	outfile__array_Core_3_Inmda.open("results/_array_Core_3_Inmda_9109064269999049429", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda.is_open())
	{
		outfile__array_Core_3_Inmda.write(reinterpret_cast<char*>(_array_Core_3_Inmda), 256*sizeof(_array_Core_3_Inmda[0]));
		outfile__array_Core_3_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_tau;
	outfile__array_Core_3_Inmda_tau.open("results/_array_Core_3_Inmda_tau_-1095629696842353054", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_tau.is_open())
	{
		outfile__array_Core_3_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_3_Inmda_tau), 256*sizeof(_array_Core_3_Inmda_tau[0]));
		outfile__array_Core_3_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_thr;
	outfile__array_Core_3_Inmda_thr.open("results/_array_Core_3_Inmda_thr_4957478891991561153", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_thr.is_open())
	{
		outfile__array_Core_3_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_3_Inmda_thr), 256*sizeof(_array_Core_3_Inmda_thr[0]));
		outfile__array_Core_3_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_w0;
	outfile__array_Core_3_Inmda_w0.open("results/_array_Core_3_Inmda_w0_-4117287025830541366", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_w0.is_open())
	{
		outfile__array_Core_3_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_3_Inmda_w0), 256*sizeof(_array_Core_3_Inmda_w0[0]));
		outfile__array_Core_3_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp;
	outfile__array_Core_3_Isoma_ahp.open("results/_array_Core_3_Isoma_ahp_-7820775236562995652", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp.is_open())
	{
		outfile__array_Core_3_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp), 256*sizeof(_array_Core_3_Isoma_ahp[0]));
		outfile__array_Core_3_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_g;
	outfile__array_Core_3_Isoma_ahp_g.open("results/_array_Core_3_Isoma_ahp_g_6481038545576329825", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_g), 1*sizeof(_array_Core_3_Isoma_ahp_g[0]));
		outfile__array_Core_3_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_tau;
	outfile__array_Core_3_Isoma_ahp_tau.open("results/_array_Core_3_Isoma_ahp_tau_-4678596444573284203", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_tau), 1*sizeof(_array_Core_3_Isoma_ahp_tau[0]));
		outfile__array_Core_3_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_w;
	outfile__array_Core_3_Isoma_ahp_w.open("results/_array_Core_3_Isoma_ahp_w_-7112349191765233930", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_w), 256*sizeof(_array_Core_3_Isoma_ahp_w[0]));
		outfile__array_Core_3_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_const;
	outfile__array_Core_3_Isoma_const.open("results/_array_Core_3_Isoma_const_-1509582925514693861", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_const.is_open())
	{
		outfile__array_Core_3_Isoma_const.write(reinterpret_cast<char*>(_array_Core_3_Isoma_const), 256*sizeof(_array_Core_3_Isoma_const[0]));
		outfile__array_Core_3_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_dpi_tau;
	outfile__array_Core_3_Isoma_dpi_tau.open("results/_array_Core_3_Isoma_dpi_tau_5202494469471850394", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_3_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_3_Isoma_dpi_tau), 1*sizeof(_array_Core_3_Isoma_dpi_tau[0]));
		outfile__array_Core_3_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_mem;
	outfile__array_Core_3_Isoma_mem.open("results/_array_Core_3_Isoma_mem_-486544209377800283", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_mem.is_open())
	{
		outfile__array_Core_3_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_3_Isoma_mem), 256*sizeof(_array_Core_3_Isoma_mem[0]));
		outfile__array_Core_3_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_gain;
	outfile__array_Core_3_Isoma_pfb_gain.open("results/_array_Core_3_Isoma_pfb_gain_-1220120338115045112", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_gain), 1*sizeof(_array_Core_3_Isoma_pfb_gain[0]));
		outfile__array_Core_3_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_norm;
	outfile__array_Core_3_Isoma_pfb_norm.open("results/_array_Core_3_Isoma_pfb_norm_2299566361348646229", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_norm), 1*sizeof(_array_Core_3_Isoma_pfb_norm[0]));
		outfile__array_Core_3_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_th;
	outfile__array_Core_3_Isoma_pfb_th.open("results/_array_Core_3_Isoma_pfb_th_426999239398616849", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_th), 1*sizeof(_array_Core_3_Isoma_pfb_th[0]));
		outfile__array_Core_3_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_reset;
	outfile__array_Core_3_Isoma_reset.open("results/_array_Core_3_Isoma_reset_2770764145885289792", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_reset.is_open())
	{
		outfile__array_Core_3_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_3_Isoma_reset), 1*sizeof(_array_Core_3_Isoma_reset[0]));
		outfile__array_Core_3_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_th;
	outfile__array_Core_3_Isoma_th.open("results/_array_Core_3_Isoma_th_923760175261633033", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_th.is_open())
	{
		outfile__array_Core_3_Isoma_th.write(reinterpret_cast<char*>(_array_Core_3_Isoma_th), 1*sizeof(_array_Core_3_Isoma_th[0]));
		outfile__array_Core_3_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_3_kn;
	outfile__array_Core_3_kn.open("results/_array_Core_3_kn_2248128681204034361", ios::binary | ios::out);
	if(outfile__array_Core_3_kn.is_open())
	{
		outfile__array_Core_3_kn.write(reinterpret_cast<char*>(_array_Core_3_kn), 1*sizeof(_array_Core_3_kn[0]));
		outfile__array_Core_3_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kn." << endl;
	}
	ofstream outfile__array_Core_3_kp;
	outfile__array_Core_3_kp.open("results/_array_Core_3_kp_-8087281248582539599", ios::binary | ios::out);
	if(outfile__array_Core_3_kp.is_open())
	{
		outfile__array_Core_3_kp.write(reinterpret_cast<char*>(_array_Core_3_kp), 1*sizeof(_array_Core_3_kp[0]));
		outfile__array_Core_3_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kp." << endl;
	}
	ofstream outfile__array_Core_3_lastspike;
	outfile__array_Core_3_lastspike.open("results/_array_Core_3_lastspike_5618160942684713862", ios::binary | ios::out);
	if(outfile__array_Core_3_lastspike.is_open())
	{
		outfile__array_Core_3_lastspike.write(reinterpret_cast<char*>(_array_Core_3_lastspike), 256*sizeof(_array_Core_3_lastspike[0]));
		outfile__array_Core_3_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_lastspike." << endl;
	}
	ofstream outfile__array_Core_3_not_refractory;
	outfile__array_Core_3_not_refractory.open("results/_array_Core_3_not_refractory_4132479158221720922", ios::binary | ios::out);
	if(outfile__array_Core_3_not_refractory.is_open())
	{
		outfile__array_Core_3_not_refractory.write(reinterpret_cast<char*>(_array_Core_3_not_refractory), 256*sizeof(_array_Core_3_not_refractory[0]));
		outfile__array_Core_3_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_not_refractory." << endl;
	}
	ofstream outfile__array_Core_3_soma_refP;
	outfile__array_Core_3_soma_refP.open("results/_array_Core_3_soma_refP_-506708632901226168", ios::binary | ios::out);
	if(outfile__array_Core_3_soma_refP.is_open())
	{
		outfile__array_Core_3_soma_refP.write(reinterpret_cast<char*>(_array_Core_3_soma_refP), 1*sizeof(_array_Core_3_soma_refP[0]));
		outfile__array_Core_3_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_soma_refP." << endl;
	}
	ofstream outfile__array_Core_3_std_pulse;
	outfile__array_Core_3_std_pulse.open("results/_array_Core_3_std_pulse_-3046947122437872651", ios::binary | ios::out);
	if(outfile__array_Core_3_std_pulse.is_open())
	{
		outfile__array_Core_3_std_pulse.write(reinterpret_cast<char*>(_array_Core_3_std_pulse), 256*sizeof(_array_Core_3_std_pulse[0]));
		outfile__array_Core_3_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_std_pulse." << endl;
	}
	ofstream outfile__array_Core_3_subgroup_2__sub_idx;
	outfile__array_Core_3_subgroup_2__sub_idx.open("results/_array_Core_3_subgroup_2__sub_idx_7381362259108301561", ios::binary | ios::out);
	if(outfile__array_Core_3_subgroup_2__sub_idx.is_open())
	{
		outfile__array_Core_3_subgroup_2__sub_idx.write(reinterpret_cast<char*>(_array_Core_3_subgroup_2__sub_idx), 4*sizeof(_array_Core_3_subgroup_2__sub_idx[0]));
		outfile__array_Core_3_subgroup_2__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_subgroup_2__sub_idx." << endl;
	}
	ofstream outfile__array_Core_3_tau_pulse;
	outfile__array_Core_3_tau_pulse.open("results/_array_Core_3_tau_pulse_4294492356704328881", ios::binary | ios::out);
	if(outfile__array_Core_3_tau_pulse.is_open())
	{
		outfile__array_Core_3_tau_pulse.write(reinterpret_cast<char*>(_array_Core_3_tau_pulse), 256*sizeof(_array_Core_3_tau_pulse[0]));
		outfile__array_Core_3_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_3_Ut;
	outfile__array_Core_3_Ut.open("results/_array_Core_3_Ut_-4718375204188783529", ios::binary | ios::out);
	if(outfile__array_Core_3_Ut.is_open())
	{
		outfile__array_Core_3_Ut.write(reinterpret_cast<char*>(_array_Core_3_Ut), 1*sizeof(_array_Core_3_Ut[0]));
		outfile__array_Core_3_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ut." << endl;
	}
	ofstream outfile__array_Core_3_Va;
	outfile__array_Core_3_Va.open("results/_array_Core_3_Va_776496972691983043", ios::binary | ios::out);
	if(outfile__array_Core_3_Va.is_open())
	{
		outfile__array_Core_3_Va.write(reinterpret_cast<char*>(_array_Core_3_Va), 256*sizeof(_array_Core_3_Va[0]));
		outfile__array_Core_3_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Va." << endl;
	}
	ofstream outfile__array_Core_3_Vw;
	outfile__array_Core_3_Vw.open("results/_array_Core_3_Vw_-523819138379152125", ios::binary | ios::out);
	if(outfile__array_Core_3_Vw.is_open())
	{
		outfile__array_Core_3_Vw.write(reinterpret_cast<char*>(_array_Core_3_Vw), 256*sizeof(_array_Core_3_Vw[0]));
		outfile__array_Core_3_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Vw." << endl;
	}
	ofstream outfile__array_defaultclock_dt;
	outfile__array_defaultclock_dt.open("results/_array_defaultclock_dt_4714713396548265616", ios::binary | ios::out);
	if(outfile__array_defaultclock_dt.is_open())
	{
		outfile__array_defaultclock_dt.write(reinterpret_cast<char*>(_array_defaultclock_dt), 1*sizeof(_array_defaultclock_dt[0]));
		outfile__array_defaultclock_dt.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_dt." << endl;
	}
	ofstream outfile__array_defaultclock_t;
	outfile__array_defaultclock_t.open("results/_array_defaultclock_t_-3209345617822725107", ios::binary | ios::out);
	if(outfile__array_defaultclock_t.is_open())
	{
		outfile__array_defaultclock_t.write(reinterpret_cast<char*>(_array_defaultclock_t), 1*sizeof(_array_defaultclock_t[0]));
		outfile__array_defaultclock_t.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_t." << endl;
	}
	ofstream outfile__array_defaultclock_timestep;
	outfile__array_defaultclock_timestep.open("results/_array_defaultclock_timestep_-4668020329873280153", ios::binary | ios::out);
	if(outfile__array_defaultclock_timestep.is_open())
	{
		outfile__array_defaultclock_timestep.write(reinterpret_cast<char*>(_array_defaultclock_timestep), 1*sizeof(_array_defaultclock_timestep[0]));
		outfile__array_defaultclock_timestep.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_timestep." << endl;
	}
	ofstream outfile__array_GABA_B10_N;
	outfile__array_GABA_B10_N.open("results/_array_GABA_B10_N_4148610571223150629", ios::binary | ios::out);
	if(outfile__array_GABA_B10_N.is_open())
	{
		outfile__array_GABA_B10_N.write(reinterpret_cast<char*>(_array_GABA_B10_N), 1*sizeof(_array_GABA_B10_N[0]));
		outfile__array_GABA_B10_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B10_N." << endl;
	}
	ofstream outfile__array_GABA_B4_N;
	outfile__array_GABA_B4_N.open("results/_array_GABA_B4_N_-5508866199672547638", ios::binary | ios::out);
	if(outfile__array_GABA_B4_N.is_open())
	{
		outfile__array_GABA_B4_N.write(reinterpret_cast<char*>(_array_GABA_B4_N), 1*sizeof(_array_GABA_B4_N[0]));
		outfile__array_GABA_B4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B4_N." << endl;
	}
	ofstream outfile__array_GABA_B5_N;
	outfile__array_GABA_B5_N.open("results/_array_GABA_B5_N_-7961506934133170365", ios::binary | ios::out);
	if(outfile__array_GABA_B5_N.is_open())
	{
		outfile__array_GABA_B5_N.write(reinterpret_cast<char*>(_array_GABA_B5_N), 1*sizeof(_array_GABA_B5_N[0]));
		outfile__array_GABA_B5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B5_N." << endl;
	}
	ofstream outfile__array_GABA_B6_N;
	outfile__array_GABA_B6_N.open("results/_array_GABA_B6_N_-4456803849166236044", ios::binary | ios::out);
	if(outfile__array_GABA_B6_N.is_open())
	{
		outfile__array_GABA_B6_N.write(reinterpret_cast<char*>(_array_GABA_B6_N), 1*sizeof(_array_GABA_B6_N[0]));
		outfile__array_GABA_B6_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B6_N." << endl;
	}
	ofstream outfile__array_GABA_B9_N;
	outfile__array_GABA_B9_N.open("results/_array_GABA_B9_N_-8404083138884944830", ios::binary | ios::out);
	if(outfile__array_GABA_B9_N.is_open())
	{
		outfile__array_GABA_B9_N.write(reinterpret_cast<char*>(_array_GABA_B9_N), 1*sizeof(_array_GABA_B9_N[0]));
		outfile__array_GABA_B9_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B9_N." << endl;
	}
	ofstream outfile__array_mon_neuron_input__source_idx;
	outfile__array_mon_neuron_input__source_idx.open("results/_array_mon_neuron_input__source_idx_-2037042644312338504", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input__source_idx.is_open())
	{
		outfile__array_mon_neuron_input__source_idx.write(reinterpret_cast<char*>(_array_mon_neuron_input__source_idx), 1*sizeof(_array_mon_neuron_input__source_idx[0]));
		outfile__array_mon_neuron_input__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input__source_idx." << endl;
	}
	ofstream outfile__array_mon_neuron_input_count;
	outfile__array_mon_neuron_input_count.open("results/_array_mon_neuron_input_count_-5750456426915143396", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_count.is_open())
	{
		outfile__array_mon_neuron_input_count.write(reinterpret_cast<char*>(_array_mon_neuron_input_count), 1*sizeof(_array_mon_neuron_input_count[0]));
		outfile__array_mon_neuron_input_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_count." << endl;
	}
	ofstream outfile__array_mon_neuron_input_N;
	outfile__array_mon_neuron_input_N.open("results/_array_mon_neuron_input_N_7868893795556050634", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_N.is_open())
	{
		outfile__array_mon_neuron_input_N.write(reinterpret_cast<char*>(_array_mon_neuron_input_N), 1*sizeof(_array_mon_neuron_input_N[0]));
		outfile__array_mon_neuron_input_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_N." << endl;
	}
	ofstream outfile__array_PC_output__source_idx;
	outfile__array_PC_output__source_idx.open("results/_array_PC_output__source_idx_804518744674125133", ios::binary | ios::out);
	if(outfile__array_PC_output__source_idx.is_open())
	{
		outfile__array_PC_output__source_idx.write(reinterpret_cast<char*>(_array_PC_output__source_idx), 40*sizeof(_array_PC_output__source_idx[0]));
		outfile__array_PC_output__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_PC_output__source_idx." << endl;
	}
	ofstream outfile__array_PC_output_count;
	outfile__array_PC_output_count.open("results/_array_PC_output_count_1180440631971991886", ios::binary | ios::out);
	if(outfile__array_PC_output_count.is_open())
	{
		outfile__array_PC_output_count.write(reinterpret_cast<char*>(_array_PC_output_count), 40*sizeof(_array_PC_output_count[0]));
		outfile__array_PC_output_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_PC_output_count." << endl;
	}
	ofstream outfile__array_PC_output_N;
	outfile__array_PC_output_N.open("results/_array_PC_output_N_-9152010418308319241", ios::binary | ios::out);
	if(outfile__array_PC_output_N.is_open())
	{
		outfile__array_PC_output_N.write(reinterpret_cast<char*>(_array_PC_output_N), 1*sizeof(_array_PC_output_N[0]));
		outfile__array_PC_output_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_PC_output_N." << endl;
	}
	ofstream outfile__array_PV_output__source_idx;
	outfile__array_PV_output__source_idx.open("results/_array_PV_output__source_idx_1930947684040824655", ios::binary | ios::out);
	if(outfile__array_PV_output__source_idx.is_open())
	{
		outfile__array_PV_output__source_idx.write(reinterpret_cast<char*>(_array_PV_output__source_idx), 6*sizeof(_array_PV_output__source_idx[0]));
		outfile__array_PV_output__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_PV_output__source_idx." << endl;
	}
	ofstream outfile__array_PV_output_count;
	outfile__array_PV_output_count.open("results/_array_PV_output_count_727143156872097617", ios::binary | ios::out);
	if(outfile__array_PV_output_count.is_open())
	{
		outfile__array_PV_output_count.write(reinterpret_cast<char*>(_array_PV_output_count), 6*sizeof(_array_PV_output_count[0]));
		outfile__array_PV_output_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_PV_output_count." << endl;
	}
	ofstream outfile__array_PV_output_N;
	outfile__array_PV_output_N.open("results/_array_PV_output_N_-8063238694411529444", ios::binary | ios::out);
	if(outfile__array_PV_output_N.is_open())
	{
		outfile__array_PV_output_N.write(reinterpret_cast<char*>(_array_PV_output_N), 1*sizeof(_array_PV_output_N[0]));
		outfile__array_PV_output_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_PV_output_N." << endl;
	}
	ofstream outfile__array_SpikeGenerator__lastindex;
	outfile__array_SpikeGenerator__lastindex.open("results/_array_SpikeGenerator__lastindex_3274057846803006745", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator__lastindex.is_open())
	{
		outfile__array_SpikeGenerator__lastindex.write(reinterpret_cast<char*>(_array_SpikeGenerator__lastindex), 1*sizeof(_array_SpikeGenerator__lastindex[0]));
		outfile__array_SpikeGenerator__lastindex.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator__lastindex." << endl;
	}
	ofstream outfile__array_SpikeGenerator__period_bins;
	outfile__array_SpikeGenerator__period_bins.open("results/_array_SpikeGenerator__period_bins_240489157561045351", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator__period_bins.is_open())
	{
		outfile__array_SpikeGenerator__period_bins.write(reinterpret_cast<char*>(_array_SpikeGenerator__period_bins), 1*sizeof(_array_SpikeGenerator__period_bins[0]));
		outfile__array_SpikeGenerator__period_bins.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator__period_bins." << endl;
	}
	ofstream outfile__array_SpikeGenerator__spikespace;
	outfile__array_SpikeGenerator__spikespace.open("results/_array_SpikeGenerator__spikespace_-6360935200776007165", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator__spikespace.is_open())
	{
		outfile__array_SpikeGenerator__spikespace.write(reinterpret_cast<char*>(_array_SpikeGenerator__spikespace), 2*sizeof(_array_SpikeGenerator__spikespace[0]));
		outfile__array_SpikeGenerator__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator__spikespace." << endl;
	}
	ofstream outfile__array_SpikeGenerator_i;
	outfile__array_SpikeGenerator_i.open("results/_array_SpikeGenerator_i_8729327539653461293", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator_i.is_open())
	{
		outfile__array_SpikeGenerator_i.write(reinterpret_cast<char*>(_array_SpikeGenerator_i), 1*sizeof(_array_SpikeGenerator_i[0]));
		outfile__array_SpikeGenerator_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator_i." << endl;
	}
	ofstream outfile__array_SpikeGenerator_period;
	outfile__array_SpikeGenerator_period.open("results/_array_SpikeGenerator_period_5001388210788361710", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator_period.is_open())
	{
		outfile__array_SpikeGenerator_period.write(reinterpret_cast<char*>(_array_SpikeGenerator_period), 1*sizeof(_array_SpikeGenerator_period[0]));
		outfile__array_SpikeGenerator_period.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator_period." << endl;
	}
	ofstream outfile__array_SST_output__source_idx;
	outfile__array_SST_output__source_idx.open("results/_array_SST_output__source_idx_6069318693717560779", ios::binary | ios::out);
	if(outfile__array_SST_output__source_idx.is_open())
	{
		outfile__array_SST_output__source_idx.write(reinterpret_cast<char*>(_array_SST_output__source_idx), 4*sizeof(_array_SST_output__source_idx[0]));
		outfile__array_SST_output__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_SST_output__source_idx." << endl;
	}
	ofstream outfile__array_SST_output_count;
	outfile__array_SST_output_count.open("results/_array_SST_output_count_7132810858808604265", ios::binary | ios::out);
	if(outfile__array_SST_output_count.is_open())
	{
		outfile__array_SST_output_count.write(reinterpret_cast<char*>(_array_SST_output_count), 4*sizeof(_array_SST_output_count[0]));
		outfile__array_SST_output_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_SST_output_count." << endl;
	}
	ofstream outfile__array_SST_output_N;
	outfile__array_SST_output_N.open("results/_array_SST_output_N_-7985471911712551473", ios::binary | ios::out);
	if(outfile__array_SST_output_N.is_open())
	{
		outfile__array_SST_output_N.write(reinterpret_cast<char*>(_array_SST_output_N), 1*sizeof(_array_SST_output_N[0]));
		outfile__array_SST_output_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_SST_output_N." << endl;
	}
	ofstream outfile__array_statemonitor_10__indices;
	outfile__array_statemonitor_10__indices.open("results/_array_statemonitor_10__indices_-1002967201272596352", ios::binary | ios::out);
	if(outfile__array_statemonitor_10__indices.is_open())
	{
		outfile__array_statemonitor_10__indices.write(reinterpret_cast<char*>(_array_statemonitor_10__indices), 1*sizeof(_array_statemonitor_10__indices[0]));
		outfile__array_statemonitor_10__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_10__indices." << endl;
	}
	ofstream outfile__array_statemonitor_10_N;
	outfile__array_statemonitor_10_N.open("results/_array_statemonitor_10_N_417201978335805982", ios::binary | ios::out);
	if(outfile__array_statemonitor_10_N.is_open())
	{
		outfile__array_statemonitor_10_N.write(reinterpret_cast<char*>(_array_statemonitor_10_N), 1*sizeof(_array_statemonitor_10_N[0]));
		outfile__array_statemonitor_10_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_10_N." << endl;
	}
	ofstream outfile__array_statemonitor_11__indices;
	outfile__array_statemonitor_11__indices.open("results/_array_statemonitor_11__indices_-6036548377428900129", ios::binary | ios::out);
	if(outfile__array_statemonitor_11__indices.is_open())
	{
		outfile__array_statemonitor_11__indices.write(reinterpret_cast<char*>(_array_statemonitor_11__indices), 1*sizeof(_array_statemonitor_11__indices[0]));
		outfile__array_statemonitor_11__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_11__indices." << endl;
	}
	ofstream outfile__array_statemonitor_11_N;
	outfile__array_statemonitor_11_N.open("results/_array_statemonitor_11_N_-8066763353130478896", ios::binary | ios::out);
	if(outfile__array_statemonitor_11_N.is_open())
	{
		outfile__array_statemonitor_11_N.write(reinterpret_cast<char*>(_array_statemonitor_11_N), 1*sizeof(_array_statemonitor_11_N[0]));
		outfile__array_statemonitor_11_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_11_N." << endl;
	}
	ofstream outfile__array_statemonitor_12__indices;
	outfile__array_statemonitor_12__indices.open("results/_array_statemonitor_12__indices_7350240056549676036", ios::binary | ios::out);
	if(outfile__array_statemonitor_12__indices.is_open())
	{
		outfile__array_statemonitor_12__indices.write(reinterpret_cast<char*>(_array_statemonitor_12__indices), 1*sizeof(_array_statemonitor_12__indices[0]));
		outfile__array_statemonitor_12__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_12__indices." << endl;
	}
	ofstream outfile__array_statemonitor_12_N;
	outfile__array_statemonitor_12_N.open("results/_array_statemonitor_12_N_-9108530840012304159", ios::binary | ios::out);
	if(outfile__array_statemonitor_12_N.is_open())
	{
		outfile__array_statemonitor_12_N.write(reinterpret_cast<char*>(_array_statemonitor_12_N), 1*sizeof(_array_statemonitor_12_N[0]));
		outfile__array_statemonitor_12_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_12_N." << endl;
	}
	ofstream outfile__array_statemonitor_13__indices;
	outfile__array_statemonitor_13__indices.open("results/_array_statemonitor_13__indices_7827803237395834418", ios::binary | ios::out);
	if(outfile__array_statemonitor_13__indices.is_open())
	{
		outfile__array_statemonitor_13__indices.write(reinterpret_cast<char*>(_array_statemonitor_13__indices), 1*sizeof(_array_statemonitor_13__indices[0]));
		outfile__array_statemonitor_13__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_13__indices." << endl;
	}
	ofstream outfile__array_statemonitor_13_N;
	outfile__array_statemonitor_13_N.open("results/_array_statemonitor_13_N_8971667944103704500", ios::binary | ios::out);
	if(outfile__array_statemonitor_13_N.is_open())
	{
		outfile__array_statemonitor_13_N.write(reinterpret_cast<char*>(_array_statemonitor_13_N), 1*sizeof(_array_statemonitor_13_N[0]));
		outfile__array_statemonitor_13_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_13_N." << endl;
	}
	ofstream outfile__array_statemonitor_1__indices;
	outfile__array_statemonitor_1__indices.open("results/_array_statemonitor_1__indices_-1501805977892621958", ios::binary | ios::out);
	if(outfile__array_statemonitor_1__indices.is_open())
	{
		outfile__array_statemonitor_1__indices.write(reinterpret_cast<char*>(_array_statemonitor_1__indices), 6*sizeof(_array_statemonitor_1__indices[0]));
		outfile__array_statemonitor_1__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1__indices." << endl;
	}
	ofstream outfile__array_statemonitor_1_N;
	outfile__array_statemonitor_1_N.open("results/_array_statemonitor_1_N_-2256539460526288552", ios::binary | ios::out);
	if(outfile__array_statemonitor_1_N.is_open())
	{
		outfile__array_statemonitor_1_N.write(reinterpret_cast<char*>(_array_statemonitor_1_N), 1*sizeof(_array_statemonitor_1_N[0]));
		outfile__array_statemonitor_1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1_N." << endl;
	}
	ofstream outfile__array_statemonitor_2__indices;
	outfile__array_statemonitor_2__indices.open("results/_array_statemonitor_2__indices_4518856453107192199", ios::binary | ios::out);
	if(outfile__array_statemonitor_2__indices.is_open())
	{
		outfile__array_statemonitor_2__indices.write(reinterpret_cast<char*>(_array_statemonitor_2__indices), 40*sizeof(_array_statemonitor_2__indices[0]));
		outfile__array_statemonitor_2__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2__indices." << endl;
	}
	ofstream outfile__array_statemonitor_2_N;
	outfile__array_statemonitor_2_N.open("results/_array_statemonitor_2_N_-924975551973670929", ios::binary | ios::out);
	if(outfile__array_statemonitor_2_N.is_open())
	{
		outfile__array_statemonitor_2_N.write(reinterpret_cast<char*>(_array_statemonitor_2_N), 1*sizeof(_array_statemonitor_2_N[0]));
		outfile__array_statemonitor_2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2_N." << endl;
	}
	ofstream outfile__array_statemonitor_3__indices;
	outfile__array_statemonitor_3__indices.open("results/_array_statemonitor_3__indices_-2460236687961684343", ios::binary | ios::out);
	if(outfile__array_statemonitor_3__indices.is_open())
	{
		outfile__array_statemonitor_3__indices.write(reinterpret_cast<char*>(_array_statemonitor_3__indices), 1*sizeof(_array_statemonitor_3__indices[0]));
		outfile__array_statemonitor_3__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_3__indices." << endl;
	}
	ofstream outfile__array_statemonitor_3_N;
	outfile__array_statemonitor_3_N.open("results/_array_statemonitor_3_N_6321101476797603845", ios::binary | ios::out);
	if(outfile__array_statemonitor_3_N.is_open())
	{
		outfile__array_statemonitor_3_N.write(reinterpret_cast<char*>(_array_statemonitor_3_N), 1*sizeof(_array_statemonitor_3_N[0]));
		outfile__array_statemonitor_3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_3_N." << endl;
	}
	ofstream outfile__array_statemonitor_4__indices;
	outfile__array_statemonitor_4__indices.open("results/_array_statemonitor_4__indices_8691574032950764176", ios::binary | ios::out);
	if(outfile__array_statemonitor_4__indices.is_open())
	{
		outfile__array_statemonitor_4__indices.write(reinterpret_cast<char*>(_array_statemonitor_4__indices), 1*sizeof(_array_statemonitor_4__indices[0]));
		outfile__array_statemonitor_4__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4__indices." << endl;
	}
	ofstream outfile__array_statemonitor_4_N;
	outfile__array_statemonitor_4_N.open("results/_array_statemonitor_4_N_-3338275445433391458", ios::binary | ios::out);
	if(outfile__array_statemonitor_4_N.is_open())
	{
		outfile__array_statemonitor_4_N.write(reinterpret_cast<char*>(_array_statemonitor_4_N), 1*sizeof(_array_statemonitor_4_N[0]));
		outfile__array_statemonitor_4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4_N." << endl;
	}
	ofstream outfile__array_statemonitor_5__indices;
	outfile__array_statemonitor_5__indices.open("results/_array_statemonitor_5__indices_4239380316165556936", ios::binary | ios::out);
	if(outfile__array_statemonitor_5__indices.is_open())
	{
		outfile__array_statemonitor_5__indices.write(reinterpret_cast<char*>(_array_statemonitor_5__indices), 1*sizeof(_array_statemonitor_5__indices[0]));
		outfile__array_statemonitor_5__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_5__indices." << endl;
	}
	ofstream outfile__array_statemonitor_5_N;
	outfile__array_statemonitor_5_N.open("results/_array_statemonitor_5_N_5109226556196899395", ios::binary | ios::out);
	if(outfile__array_statemonitor_5_N.is_open())
	{
		outfile__array_statemonitor_5_N.write(reinterpret_cast<char*>(_array_statemonitor_5_N), 1*sizeof(_array_statemonitor_5_N[0]));
		outfile__array_statemonitor_5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_5_N." << endl;
	}
	ofstream outfile__array_statemonitor_6__indices;
	outfile__array_statemonitor_6__indices.open("results/_array_statemonitor_6__indices_1722743900208240824", ios::binary | ios::out);
	if(outfile__array_statemonitor_6__indices.is_open())
	{
		outfile__array_statemonitor_6__indices.write(reinterpret_cast<char*>(_array_statemonitor_6__indices), 1*sizeof(_array_statemonitor_6__indices[0]));
		outfile__array_statemonitor_6__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_6__indices." << endl;
	}
	ofstream outfile__array_statemonitor_6_N;
	outfile__array_statemonitor_6_N.open("results/_array_statemonitor_6_N_5309799188113912804", ios::binary | ios::out);
	if(outfile__array_statemonitor_6_N.is_open())
	{
		outfile__array_statemonitor_6_N.write(reinterpret_cast<char*>(_array_statemonitor_6_N), 1*sizeof(_array_statemonitor_6_N[0]));
		outfile__array_statemonitor_6_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_6_N." << endl;
	}
	ofstream outfile__array_statemonitor_7__indices;
	outfile__array_statemonitor_7__indices.open("results/_array_statemonitor_7__indices_1653068044928318243", ios::binary | ios::out);
	if(outfile__array_statemonitor_7__indices.is_open())
	{
		outfile__array_statemonitor_7__indices.write(reinterpret_cast<char*>(_array_statemonitor_7__indices), 1*sizeof(_array_statemonitor_7__indices[0]));
		outfile__array_statemonitor_7__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_7__indices." << endl;
	}
	ofstream outfile__array_statemonitor_7_N;
	outfile__array_statemonitor_7_N.open("results/_array_statemonitor_7_N_4817419607372223265", ios::binary | ios::out);
	if(outfile__array_statemonitor_7_N.is_open())
	{
		outfile__array_statemonitor_7_N.write(reinterpret_cast<char*>(_array_statemonitor_7_N), 1*sizeof(_array_statemonitor_7_N[0]));
		outfile__array_statemonitor_7_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_7_N." << endl;
	}
	ofstream outfile__array_statemonitor_8__indices;
	outfile__array_statemonitor_8__indices.open("results/_array_statemonitor_8__indices_-4235225062895757235", ios::binary | ios::out);
	if(outfile__array_statemonitor_8__indices.is_open())
	{
		outfile__array_statemonitor_8__indices.write(reinterpret_cast<char*>(_array_statemonitor_8__indices), 1*sizeof(_array_statemonitor_8__indices[0]));
		outfile__array_statemonitor_8__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_8__indices." << endl;
	}
	ofstream outfile__array_statemonitor_8_N;
	outfile__array_statemonitor_8_N.open("results/_array_statemonitor_8_N_-3195104974162597077", ios::binary | ios::out);
	if(outfile__array_statemonitor_8_N.is_open())
	{
		outfile__array_statemonitor_8_N.write(reinterpret_cast<char*>(_array_statemonitor_8_N), 1*sizeof(_array_statemonitor_8_N[0]));
		outfile__array_statemonitor_8_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_8_N." << endl;
	}
	ofstream outfile__array_statemonitor_9__indices;
	outfile__array_statemonitor_9__indices.open("results/_array_statemonitor_9__indices_-810068847673581662", ios::binary | ios::out);
	if(outfile__array_statemonitor_9__indices.is_open())
	{
		outfile__array_statemonitor_9__indices.write(reinterpret_cast<char*>(_array_statemonitor_9__indices), 1*sizeof(_array_statemonitor_9__indices[0]));
		outfile__array_statemonitor_9__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_9__indices." << endl;
	}
	ofstream outfile__array_statemonitor_9_N;
	outfile__array_statemonitor_9_N.open("results/_array_statemonitor_9_N_-4455837214163919804", ios::binary | ios::out);
	if(outfile__array_statemonitor_9_N.is_open())
	{
		outfile__array_statemonitor_9_N.write(reinterpret_cast<char*>(_array_statemonitor_9_N), 1*sizeof(_array_statemonitor_9_N[0]));
		outfile__array_statemonitor_9_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_9_N." << endl;
	}
	ofstream outfile__array_statemonitor__indices;
	outfile__array_statemonitor__indices.open("results/_array_statemonitor__indices_-7599631070735832514", ios::binary | ios::out);
	if(outfile__array_statemonitor__indices.is_open())
	{
		outfile__array_statemonitor__indices.write(reinterpret_cast<char*>(_array_statemonitor__indices), 4*sizeof(_array_statemonitor__indices[0]));
		outfile__array_statemonitor__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor__indices." << endl;
	}
	ofstream outfile__array_statemonitor_N;
	outfile__array_statemonitor_N.open("results/_array_statemonitor_N_-7060104955759283219", ios::binary | ios::out);
	if(outfile__array_statemonitor_N.is_open())
	{
		outfile__array_statemonitor_N.write(reinterpret_cast<char*>(_array_statemonitor_N), 1*sizeof(_array_statemonitor_N[0]));
		outfile__array_statemonitor_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_N." << endl;
	}

	ofstream outfile__dynamic_array_AMPA0__synaptic_post;
	outfile__dynamic_array_AMPA0__synaptic_post.open("results/_dynamic_array_AMPA0__synaptic_post_1873558156222712076", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0__synaptic_pre.open("results/_dynamic_array_AMPA0__synaptic_pre_4936950720525945269", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_AMPA0_delay;
	outfile__dynamic_array_AMPA0_delay.open("results/_dynamic_array_AMPA0_delay_2708546085858323761", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_delay_1.open("results/_dynamic_array_AMPA0_delay_1_-826603678879387907", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_N_incoming.open("results/_dynamic_array_AMPA0_N_incoming_2691930754289759041", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_N_outgoing.open("results/_dynamic_array_AMPA0_N_outgoing_2765843279248112148", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_weight.open("results/_dynamic_array_AMPA0_weight_-1639474516055180745", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_AMPA2__synaptic_post;
	outfile__dynamic_array_AMPA2__synaptic_post.open("results/_dynamic_array_AMPA2__synaptic_post_1045032404528688826", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA2__synaptic_pre.open("results/_dynamic_array_AMPA2__synaptic_pre_2241989518748777634", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_AMPA2_delay;
	outfile__dynamic_array_AMPA2_delay.open("results/_dynamic_array_AMPA2_delay_2684454095498457590", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA2_delay_1.open("results/_dynamic_array_AMPA2_delay_1_6482569448785904822", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA2_N_incoming.open("results/_dynamic_array_AMPA2_N_incoming_-2040218583682650026", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA2_N_outgoing.open("results/_dynamic_array_AMPA2_N_outgoing_-798995969555932094", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA2_weight.open("results/_dynamic_array_AMPA2_weight_4148389941850822153", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA3__synaptic_post.open("results/_dynamic_array_AMPA3__synaptic_post_-279926024627228015", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA3__synaptic_pre.open("results/_dynamic_array_AMPA3__synaptic_pre_-4138266418125753439", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_AMPA3_delay;
	outfile__dynamic_array_AMPA3_delay.open("results/_dynamic_array_AMPA3_delay_8315292651729512558", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA3_delay_1.open("results/_dynamic_array_AMPA3_delay_1_6637625034657285340", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA3_N_incoming.open("results/_dynamic_array_AMPA3_N_incoming_-7358605756768874596", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA3_N_outgoing.open("results/_dynamic_array_AMPA3_N_outgoing_2340544572307646668", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA3_weight.open("results/_dynamic_array_AMPA3_weight_3956179902586660042", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_AMPA7__synaptic_post;
	outfile__dynamic_array_AMPA7__synaptic_post.open("results/_dynamic_array_AMPA7__synaptic_post_654733864871128162", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA7__synaptic_post.is_open())
	{
        if (! _dynamic_array_AMPA7__synaptic_post.empty() )
        {
			outfile__dynamic_array_AMPA7__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_AMPA7__synaptic_post[0]), _dynamic_array_AMPA7__synaptic_post.size()*sizeof(_dynamic_array_AMPA7__synaptic_post[0]));
		    outfile__dynamic_array_AMPA7__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA7__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_AMPA7__synaptic_pre;
	outfile__dynamic_array_AMPA7__synaptic_pre.open("results/_dynamic_array_AMPA7__synaptic_pre_4669823045739758787", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA7__synaptic_pre.is_open())
	{
        if (! _dynamic_array_AMPA7__synaptic_pre.empty() )
        {
			outfile__dynamic_array_AMPA7__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_AMPA7__synaptic_pre[0]), _dynamic_array_AMPA7__synaptic_pre.size()*sizeof(_dynamic_array_AMPA7__synaptic_pre[0]));
		    outfile__dynamic_array_AMPA7__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA7__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_AMPA7_delay;
	outfile__dynamic_array_AMPA7_delay.open("results/_dynamic_array_AMPA7_delay_5930189813583583406", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA7_delay.is_open())
	{
        if (! _dynamic_array_AMPA7_delay.empty() )
        {
			outfile__dynamic_array_AMPA7_delay.write(reinterpret_cast<char*>(&_dynamic_array_AMPA7_delay[0]), _dynamic_array_AMPA7_delay.size()*sizeof(_dynamic_array_AMPA7_delay[0]));
		    outfile__dynamic_array_AMPA7_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA7_delay." << endl;
	}
	ofstream outfile__dynamic_array_AMPA7_delay_1;
	outfile__dynamic_array_AMPA7_delay_1.open("results/_dynamic_array_AMPA7_delay_1_7551128792330852679", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA7_delay_1.is_open())
	{
        if (! _dynamic_array_AMPA7_delay_1.empty() )
        {
			outfile__dynamic_array_AMPA7_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_AMPA7_delay_1[0]), _dynamic_array_AMPA7_delay_1.size()*sizeof(_dynamic_array_AMPA7_delay_1[0]));
		    outfile__dynamic_array_AMPA7_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA7_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_AMPA7_N_incoming;
	outfile__dynamic_array_AMPA7_N_incoming.open("results/_dynamic_array_AMPA7_N_incoming_2261676288163426729", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA7_N_incoming.is_open())
	{
        if (! _dynamic_array_AMPA7_N_incoming.empty() )
        {
			outfile__dynamic_array_AMPA7_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_AMPA7_N_incoming[0]), _dynamic_array_AMPA7_N_incoming.size()*sizeof(_dynamic_array_AMPA7_N_incoming[0]));
		    outfile__dynamic_array_AMPA7_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA7_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_AMPA7_N_outgoing;
	outfile__dynamic_array_AMPA7_N_outgoing.open("results/_dynamic_array_AMPA7_N_outgoing_-292006078454131163", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA7_N_outgoing.is_open())
	{
        if (! _dynamic_array_AMPA7_N_outgoing.empty() )
        {
			outfile__dynamic_array_AMPA7_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_AMPA7_N_outgoing[0]), _dynamic_array_AMPA7_N_outgoing.size()*sizeof(_dynamic_array_AMPA7_N_outgoing[0]));
		    outfile__dynamic_array_AMPA7_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA7_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_AMPA7_weight;
	outfile__dynamic_array_AMPA7_weight.open("results/_dynamic_array_AMPA7_weight_4337518893972630980", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA7_weight.is_open())
	{
        if (! _dynamic_array_AMPA7_weight.empty() )
        {
			outfile__dynamic_array_AMPA7_weight.write(reinterpret_cast<char*>(&_dynamic_array_AMPA7_weight[0]), _dynamic_array_AMPA7_weight.size()*sizeof(_dynamic_array_AMPA7_weight[0]));
		    outfile__dynamic_array_AMPA7_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA7_weight." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD1__synaptic_post;
	outfile__dynamic_array_AMPA_STD1__synaptic_post.open("results/_dynamic_array_AMPA_STD1__synaptic_post_2415073431144239268", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD1__synaptic_post.is_open())
	{
        if (! _dynamic_array_AMPA_STD1__synaptic_post.empty() )
        {
			outfile__dynamic_array_AMPA_STD1__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD1__synaptic_post[0]), _dynamic_array_AMPA_STD1__synaptic_post.size()*sizeof(_dynamic_array_AMPA_STD1__synaptic_post[0]));
		    outfile__dynamic_array_AMPA_STD1__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD1__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD1__synaptic_pre;
	outfile__dynamic_array_AMPA_STD1__synaptic_pre.open("results/_dynamic_array_AMPA_STD1__synaptic_pre_6250716210919137596", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD1__synaptic_pre.is_open())
	{
        if (! _dynamic_array_AMPA_STD1__synaptic_pre.empty() )
        {
			outfile__dynamic_array_AMPA_STD1__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD1__synaptic_pre[0]), _dynamic_array_AMPA_STD1__synaptic_pre.size()*sizeof(_dynamic_array_AMPA_STD1__synaptic_pre[0]));
		    outfile__dynamic_array_AMPA_STD1__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD1__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD1_delay;
	outfile__dynamic_array_AMPA_STD1_delay.open("results/_dynamic_array_AMPA_STD1_delay_-956264107700616624", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD1_delay.is_open())
	{
        if (! _dynamic_array_AMPA_STD1_delay.empty() )
        {
			outfile__dynamic_array_AMPA_STD1_delay.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD1_delay[0]), _dynamic_array_AMPA_STD1_delay.size()*sizeof(_dynamic_array_AMPA_STD1_delay[0]));
		    outfile__dynamic_array_AMPA_STD1_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD1_delay." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD1_delay_1;
	outfile__dynamic_array_AMPA_STD1_delay_1.open("results/_dynamic_array_AMPA_STD1_delay_1_-3420246551912923269", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD1_delay_1.is_open())
	{
        if (! _dynamic_array_AMPA_STD1_delay_1.empty() )
        {
			outfile__dynamic_array_AMPA_STD1_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD1_delay_1[0]), _dynamic_array_AMPA_STD1_delay_1.size()*sizeof(_dynamic_array_AMPA_STD1_delay_1[0]));
		    outfile__dynamic_array_AMPA_STD1_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD1_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD1_N_incoming;
	outfile__dynamic_array_AMPA_STD1_N_incoming.open("results/_dynamic_array_AMPA_STD1_N_incoming_-143341426364127818", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD1_N_incoming.is_open())
	{
        if (! _dynamic_array_AMPA_STD1_N_incoming.empty() )
        {
			outfile__dynamic_array_AMPA_STD1_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD1_N_incoming[0]), _dynamic_array_AMPA_STD1_N_incoming.size()*sizeof(_dynamic_array_AMPA_STD1_N_incoming[0]));
		    outfile__dynamic_array_AMPA_STD1_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD1_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD1_N_outgoing;
	outfile__dynamic_array_AMPA_STD1_N_outgoing.open("results/_dynamic_array_AMPA_STD1_N_outgoing_982996732130342250", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD1_N_outgoing.is_open())
	{
        if (! _dynamic_array_AMPA_STD1_N_outgoing.empty() )
        {
			outfile__dynamic_array_AMPA_STD1_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD1_N_outgoing[0]), _dynamic_array_AMPA_STD1_N_outgoing.size()*sizeof(_dynamic_array_AMPA_STD1_N_outgoing[0]));
		    outfile__dynamic_array_AMPA_STD1_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD1_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD1_weight;
	outfile__dynamic_array_AMPA_STD1_weight.open("results/_dynamic_array_AMPA_STD1_weight_-8626316000359974605", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD1_weight.is_open())
	{
        if (! _dynamic_array_AMPA_STD1_weight.empty() )
        {
			outfile__dynamic_array_AMPA_STD1_weight.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD1_weight[0]), _dynamic_array_AMPA_STD1_weight.size()*sizeof(_dynamic_array_AMPA_STD1_weight[0]));
		    outfile__dynamic_array_AMPA_STD1_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD1_weight." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD8__synaptic_post;
	outfile__dynamic_array_AMPA_STD8__synaptic_post.open("results/_dynamic_array_AMPA_STD8__synaptic_post_4446008802794415735", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD8__synaptic_post.is_open())
	{
        if (! _dynamic_array_AMPA_STD8__synaptic_post.empty() )
        {
			outfile__dynamic_array_AMPA_STD8__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD8__synaptic_post[0]), _dynamic_array_AMPA_STD8__synaptic_post.size()*sizeof(_dynamic_array_AMPA_STD8__synaptic_post[0]));
		    outfile__dynamic_array_AMPA_STD8__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD8__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD8__synaptic_pre;
	outfile__dynamic_array_AMPA_STD8__synaptic_pre.open("results/_dynamic_array_AMPA_STD8__synaptic_pre_-2284907044866631263", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD8__synaptic_pre.is_open())
	{
        if (! _dynamic_array_AMPA_STD8__synaptic_pre.empty() )
        {
			outfile__dynamic_array_AMPA_STD8__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD8__synaptic_pre[0]), _dynamic_array_AMPA_STD8__synaptic_pre.size()*sizeof(_dynamic_array_AMPA_STD8__synaptic_pre[0]));
		    outfile__dynamic_array_AMPA_STD8__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD8__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD8_delay;
	outfile__dynamic_array_AMPA_STD8_delay.open("results/_dynamic_array_AMPA_STD8_delay_2878559490449423153", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD8_delay.is_open())
	{
        if (! _dynamic_array_AMPA_STD8_delay.empty() )
        {
			outfile__dynamic_array_AMPA_STD8_delay.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD8_delay[0]), _dynamic_array_AMPA_STD8_delay.size()*sizeof(_dynamic_array_AMPA_STD8_delay[0]));
		    outfile__dynamic_array_AMPA_STD8_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD8_delay." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD8_delay_1;
	outfile__dynamic_array_AMPA_STD8_delay_1.open("results/_dynamic_array_AMPA_STD8_delay_1_-3326356042517969945", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD8_delay_1.is_open())
	{
        if (! _dynamic_array_AMPA_STD8_delay_1.empty() )
        {
			outfile__dynamic_array_AMPA_STD8_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD8_delay_1[0]), _dynamic_array_AMPA_STD8_delay_1.size()*sizeof(_dynamic_array_AMPA_STD8_delay_1[0]));
		    outfile__dynamic_array_AMPA_STD8_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD8_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD8_N_incoming;
	outfile__dynamic_array_AMPA_STD8_N_incoming.open("results/_dynamic_array_AMPA_STD8_N_incoming_4153664134135864400", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD8_N_incoming.is_open())
	{
        if (! _dynamic_array_AMPA_STD8_N_incoming.empty() )
        {
			outfile__dynamic_array_AMPA_STD8_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD8_N_incoming[0]), _dynamic_array_AMPA_STD8_N_incoming.size()*sizeof(_dynamic_array_AMPA_STD8_N_incoming[0]));
		    outfile__dynamic_array_AMPA_STD8_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD8_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD8_N_outgoing;
	outfile__dynamic_array_AMPA_STD8_N_outgoing.open("results/_dynamic_array_AMPA_STD8_N_outgoing_7097862427266375851", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD8_N_outgoing.is_open())
	{
        if (! _dynamic_array_AMPA_STD8_N_outgoing.empty() )
        {
			outfile__dynamic_array_AMPA_STD8_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD8_N_outgoing[0]), _dynamic_array_AMPA_STD8_N_outgoing.size()*sizeof(_dynamic_array_AMPA_STD8_N_outgoing[0]));
		    outfile__dynamic_array_AMPA_STD8_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD8_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_AMPA_STD8_weight;
	outfile__dynamic_array_AMPA_STD8_weight.open("results/_dynamic_array_AMPA_STD8_weight_3299334598229806065", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA_STD8_weight.is_open())
	{
        if (! _dynamic_array_AMPA_STD8_weight.empty() )
        {
			outfile__dynamic_array_AMPA_STD8_weight.write(reinterpret_cast<char*>(&_dynamic_array_AMPA_STD8_weight[0]), _dynamic_array_AMPA_STD8_weight.size()*sizeof(_dynamic_array_AMPA_STD8_weight[0]));
		    outfile__dynamic_array_AMPA_STD8_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA_STD8_weight." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B10__synaptic_post;
	outfile__dynamic_array_GABA_B10__synaptic_post.open("results/_dynamic_array_GABA_B10__synaptic_post_8298290370383972843", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B10__synaptic_post.is_open())
	{
        if (! _dynamic_array_GABA_B10__synaptic_post.empty() )
        {
			outfile__dynamic_array_GABA_B10__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B10__synaptic_post[0]), _dynamic_array_GABA_B10__synaptic_post.size()*sizeof(_dynamic_array_GABA_B10__synaptic_post[0]));
		    outfile__dynamic_array_GABA_B10__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B10__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B10__synaptic_pre;
	outfile__dynamic_array_GABA_B10__synaptic_pre.open("results/_dynamic_array_GABA_B10__synaptic_pre_6152117378362399530", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B10__synaptic_pre.is_open())
	{
        if (! _dynamic_array_GABA_B10__synaptic_pre.empty() )
        {
			outfile__dynamic_array_GABA_B10__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B10__synaptic_pre[0]), _dynamic_array_GABA_B10__synaptic_pre.size()*sizeof(_dynamic_array_GABA_B10__synaptic_pre[0]));
		    outfile__dynamic_array_GABA_B10__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B10__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B10_delay;
	outfile__dynamic_array_GABA_B10_delay.open("results/_dynamic_array_GABA_B10_delay_-2537391163922158638", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B10_delay.is_open())
	{
        if (! _dynamic_array_GABA_B10_delay.empty() )
        {
			outfile__dynamic_array_GABA_B10_delay.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B10_delay[0]), _dynamic_array_GABA_B10_delay.size()*sizeof(_dynamic_array_GABA_B10_delay[0]));
		    outfile__dynamic_array_GABA_B10_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B10_delay." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B10_delay_1;
	outfile__dynamic_array_GABA_B10_delay_1.open("results/_dynamic_array_GABA_B10_delay_1_4938286174709445688", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B10_delay_1.is_open())
	{
        if (! _dynamic_array_GABA_B10_delay_1.empty() )
        {
			outfile__dynamic_array_GABA_B10_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B10_delay_1[0]), _dynamic_array_GABA_B10_delay_1.size()*sizeof(_dynamic_array_GABA_B10_delay_1[0]));
		    outfile__dynamic_array_GABA_B10_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B10_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B10_N_incoming;
	outfile__dynamic_array_GABA_B10_N_incoming.open("results/_dynamic_array_GABA_B10_N_incoming_-4515637856281600090", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B10_N_incoming.is_open())
	{
        if (! _dynamic_array_GABA_B10_N_incoming.empty() )
        {
			outfile__dynamic_array_GABA_B10_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B10_N_incoming[0]), _dynamic_array_GABA_B10_N_incoming.size()*sizeof(_dynamic_array_GABA_B10_N_incoming[0]));
		    outfile__dynamic_array_GABA_B10_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B10_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B10_N_outgoing;
	outfile__dynamic_array_GABA_B10_N_outgoing.open("results/_dynamic_array_GABA_B10_N_outgoing_-2465285098460724561", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B10_N_outgoing.is_open())
	{
        if (! _dynamic_array_GABA_B10_N_outgoing.empty() )
        {
			outfile__dynamic_array_GABA_B10_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B10_N_outgoing[0]), _dynamic_array_GABA_B10_N_outgoing.size()*sizeof(_dynamic_array_GABA_B10_N_outgoing[0]));
		    outfile__dynamic_array_GABA_B10_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B10_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B10_weight;
	outfile__dynamic_array_GABA_B10_weight.open("results/_dynamic_array_GABA_B10_weight_-272609543381564662", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B10_weight.is_open())
	{
        if (! _dynamic_array_GABA_B10_weight.empty() )
        {
			outfile__dynamic_array_GABA_B10_weight.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B10_weight[0]), _dynamic_array_GABA_B10_weight.size()*sizeof(_dynamic_array_GABA_B10_weight[0]));
		    outfile__dynamic_array_GABA_B10_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B10_weight." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4__synaptic_post;
	outfile__dynamic_array_GABA_B4__synaptic_post.open("results/_dynamic_array_GABA_B4__synaptic_post_-78052958524019094", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4__synaptic_post.is_open())
	{
        if (! _dynamic_array_GABA_B4__synaptic_post.empty() )
        {
			outfile__dynamic_array_GABA_B4__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4__synaptic_post[0]), _dynamic_array_GABA_B4__synaptic_post.size()*sizeof(_dynamic_array_GABA_B4__synaptic_post[0]));
		    outfile__dynamic_array_GABA_B4__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4__synaptic_pre;
	outfile__dynamic_array_GABA_B4__synaptic_pre.open("results/_dynamic_array_GABA_B4__synaptic_pre_6899443902905872150", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4__synaptic_pre.is_open())
	{
        if (! _dynamic_array_GABA_B4__synaptic_pre.empty() )
        {
			outfile__dynamic_array_GABA_B4__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4__synaptic_pre[0]), _dynamic_array_GABA_B4__synaptic_pre.size()*sizeof(_dynamic_array_GABA_B4__synaptic_pre[0]));
		    outfile__dynamic_array_GABA_B4__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4_delay;
	outfile__dynamic_array_GABA_B4_delay.open("results/_dynamic_array_GABA_B4_delay_-2053501576346247316", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4_delay.is_open())
	{
        if (! _dynamic_array_GABA_B4_delay.empty() )
        {
			outfile__dynamic_array_GABA_B4_delay.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4_delay[0]), _dynamic_array_GABA_B4_delay.size()*sizeof(_dynamic_array_GABA_B4_delay[0]));
		    outfile__dynamic_array_GABA_B4_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4_delay." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4_delay_1;
	outfile__dynamic_array_GABA_B4_delay_1.open("results/_dynamic_array_GABA_B4_delay_1_1478055512633889905", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4_delay_1.is_open())
	{
        if (! _dynamic_array_GABA_B4_delay_1.empty() )
        {
			outfile__dynamic_array_GABA_B4_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4_delay_1[0]), _dynamic_array_GABA_B4_delay_1.size()*sizeof(_dynamic_array_GABA_B4_delay_1[0]));
		    outfile__dynamic_array_GABA_B4_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4_N_incoming;
	outfile__dynamic_array_GABA_B4_N_incoming.open("results/_dynamic_array_GABA_B4_N_incoming_-2485372081473104255", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4_N_incoming.is_open())
	{
        if (! _dynamic_array_GABA_B4_N_incoming.empty() )
        {
			outfile__dynamic_array_GABA_B4_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4_N_incoming[0]), _dynamic_array_GABA_B4_N_incoming.size()*sizeof(_dynamic_array_GABA_B4_N_incoming[0]));
		    outfile__dynamic_array_GABA_B4_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4_N_outgoing;
	outfile__dynamic_array_GABA_B4_N_outgoing.open("results/_dynamic_array_GABA_B4_N_outgoing_3826046782353083899", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4_N_outgoing.is_open())
	{
        if (! _dynamic_array_GABA_B4_N_outgoing.empty() )
        {
			outfile__dynamic_array_GABA_B4_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4_N_outgoing[0]), _dynamic_array_GABA_B4_N_outgoing.size()*sizeof(_dynamic_array_GABA_B4_N_outgoing[0]));
		    outfile__dynamic_array_GABA_B4_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4_weight;
	outfile__dynamic_array_GABA_B4_weight.open("results/_dynamic_array_GABA_B4_weight_4634805694219302616", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4_weight.is_open())
	{
        if (! _dynamic_array_GABA_B4_weight.empty() )
        {
			outfile__dynamic_array_GABA_B4_weight.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4_weight[0]), _dynamic_array_GABA_B4_weight.size()*sizeof(_dynamic_array_GABA_B4_weight[0]));
		    outfile__dynamic_array_GABA_B4_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4_weight." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5__synaptic_post;
	outfile__dynamic_array_GABA_B5__synaptic_post.open("results/_dynamic_array_GABA_B5__synaptic_post_6578602848271531225", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5__synaptic_post.is_open())
	{
        if (! _dynamic_array_GABA_B5__synaptic_post.empty() )
        {
			outfile__dynamic_array_GABA_B5__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5__synaptic_post[0]), _dynamic_array_GABA_B5__synaptic_post.size()*sizeof(_dynamic_array_GABA_B5__synaptic_post[0]));
		    outfile__dynamic_array_GABA_B5__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5__synaptic_pre;
	outfile__dynamic_array_GABA_B5__synaptic_pre.open("results/_dynamic_array_GABA_B5__synaptic_pre_6431252827819535836", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5__synaptic_pre.is_open())
	{
        if (! _dynamic_array_GABA_B5__synaptic_pre.empty() )
        {
			outfile__dynamic_array_GABA_B5__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5__synaptic_pre[0]), _dynamic_array_GABA_B5__synaptic_pre.size()*sizeof(_dynamic_array_GABA_B5__synaptic_pre[0]));
		    outfile__dynamic_array_GABA_B5__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5_delay;
	outfile__dynamic_array_GABA_B5_delay.open("results/_dynamic_array_GABA_B5_delay_-2386220472322273895", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5_delay.is_open())
	{
        if (! _dynamic_array_GABA_B5_delay.empty() )
        {
			outfile__dynamic_array_GABA_B5_delay.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5_delay[0]), _dynamic_array_GABA_B5_delay.size()*sizeof(_dynamic_array_GABA_B5_delay[0]));
		    outfile__dynamic_array_GABA_B5_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5_delay." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5_delay_1;
	outfile__dynamic_array_GABA_B5_delay_1.open("results/_dynamic_array_GABA_B5_delay_1_3710548603338164724", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5_delay_1.is_open())
	{
        if (! _dynamic_array_GABA_B5_delay_1.empty() )
        {
			outfile__dynamic_array_GABA_B5_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5_delay_1[0]), _dynamic_array_GABA_B5_delay_1.size()*sizeof(_dynamic_array_GABA_B5_delay_1[0]));
		    outfile__dynamic_array_GABA_B5_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5_N_incoming;
	outfile__dynamic_array_GABA_B5_N_incoming.open("results/_dynamic_array_GABA_B5_N_incoming_-4523647269517686577", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5_N_incoming.is_open())
	{
        if (! _dynamic_array_GABA_B5_N_incoming.empty() )
        {
			outfile__dynamic_array_GABA_B5_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5_N_incoming[0]), _dynamic_array_GABA_B5_N_incoming.size()*sizeof(_dynamic_array_GABA_B5_N_incoming[0]));
		    outfile__dynamic_array_GABA_B5_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5_N_outgoing;
	outfile__dynamic_array_GABA_B5_N_outgoing.open("results/_dynamic_array_GABA_B5_N_outgoing_-1611897963749457130", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5_N_outgoing.is_open())
	{
        if (! _dynamic_array_GABA_B5_N_outgoing.empty() )
        {
			outfile__dynamic_array_GABA_B5_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5_N_outgoing[0]), _dynamic_array_GABA_B5_N_outgoing.size()*sizeof(_dynamic_array_GABA_B5_N_outgoing[0]));
		    outfile__dynamic_array_GABA_B5_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5_weight;
	outfile__dynamic_array_GABA_B5_weight.open("results/_dynamic_array_GABA_B5_weight_-3278924613761266554", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5_weight.is_open())
	{
        if (! _dynamic_array_GABA_B5_weight.empty() )
        {
			outfile__dynamic_array_GABA_B5_weight.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5_weight[0]), _dynamic_array_GABA_B5_weight.size()*sizeof(_dynamic_array_GABA_B5_weight[0]));
		    outfile__dynamic_array_GABA_B5_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5_weight." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6__synaptic_post;
	outfile__dynamic_array_GABA_B6__synaptic_post.open("results/_dynamic_array_GABA_B6__synaptic_post_7896406601016168810", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6__synaptic_post.is_open())
	{
        if (! _dynamic_array_GABA_B6__synaptic_post.empty() )
        {
			outfile__dynamic_array_GABA_B6__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6__synaptic_post[0]), _dynamic_array_GABA_B6__synaptic_post.size()*sizeof(_dynamic_array_GABA_B6__synaptic_post[0]));
		    outfile__dynamic_array_GABA_B6__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6__synaptic_pre;
	outfile__dynamic_array_GABA_B6__synaptic_pre.open("results/_dynamic_array_GABA_B6__synaptic_pre_2441709993762826699", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6__synaptic_pre.is_open())
	{
        if (! _dynamic_array_GABA_B6__synaptic_pre.empty() )
        {
			outfile__dynamic_array_GABA_B6__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6__synaptic_pre[0]), _dynamic_array_GABA_B6__synaptic_pre.size()*sizeof(_dynamic_array_GABA_B6__synaptic_pre[0]));
		    outfile__dynamic_array_GABA_B6__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6_delay;
	outfile__dynamic_array_GABA_B6_delay.open("results/_dynamic_array_GABA_B6_delay_1249507518419863732", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6_delay.is_open())
	{
        if (! _dynamic_array_GABA_B6_delay.empty() )
        {
			outfile__dynamic_array_GABA_B6_delay.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6_delay[0]), _dynamic_array_GABA_B6_delay.size()*sizeof(_dynamic_array_GABA_B6_delay[0]));
		    outfile__dynamic_array_GABA_B6_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6_delay." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6_delay_1;
	outfile__dynamic_array_GABA_B6_delay_1.open("results/_dynamic_array_GABA_B6_delay_1_2375720339109002582", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6_delay_1.is_open())
	{
        if (! _dynamic_array_GABA_B6_delay_1.empty() )
        {
			outfile__dynamic_array_GABA_B6_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6_delay_1[0]), _dynamic_array_GABA_B6_delay_1.size()*sizeof(_dynamic_array_GABA_B6_delay_1[0]));
		    outfile__dynamic_array_GABA_B6_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6_N_incoming;
	outfile__dynamic_array_GABA_B6_N_incoming.open("results/_dynamic_array_GABA_B6_N_incoming_3731345496041690834", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6_N_incoming.is_open())
	{
        if (! _dynamic_array_GABA_B6_N_incoming.empty() )
        {
			outfile__dynamic_array_GABA_B6_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6_N_incoming[0]), _dynamic_array_GABA_B6_N_incoming.size()*sizeof(_dynamic_array_GABA_B6_N_incoming[0]));
		    outfile__dynamic_array_GABA_B6_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6_N_outgoing;
	outfile__dynamic_array_GABA_B6_N_outgoing.open("results/_dynamic_array_GABA_B6_N_outgoing_4983372906105921574", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6_N_outgoing.is_open())
	{
        if (! _dynamic_array_GABA_B6_N_outgoing.empty() )
        {
			outfile__dynamic_array_GABA_B6_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6_N_outgoing[0]), _dynamic_array_GABA_B6_N_outgoing.size()*sizeof(_dynamic_array_GABA_B6_N_outgoing[0]));
		    outfile__dynamic_array_GABA_B6_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6_weight;
	outfile__dynamic_array_GABA_B6_weight.open("results/_dynamic_array_GABA_B6_weight_-4290339149330692330", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6_weight.is_open())
	{
        if (! _dynamic_array_GABA_B6_weight.empty() )
        {
			outfile__dynamic_array_GABA_B6_weight.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6_weight[0]), _dynamic_array_GABA_B6_weight.size()*sizeof(_dynamic_array_GABA_B6_weight[0]));
		    outfile__dynamic_array_GABA_B6_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6_weight." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9__synaptic_post;
	outfile__dynamic_array_GABA_B9__synaptic_post.open("results/_dynamic_array_GABA_B9__synaptic_post_4412699057598602600", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9__synaptic_post.is_open())
	{
        if (! _dynamic_array_GABA_B9__synaptic_post.empty() )
        {
			outfile__dynamic_array_GABA_B9__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9__synaptic_post[0]), _dynamic_array_GABA_B9__synaptic_post.size()*sizeof(_dynamic_array_GABA_B9__synaptic_post[0]));
		    outfile__dynamic_array_GABA_B9__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9__synaptic_pre;
	outfile__dynamic_array_GABA_B9__synaptic_pre.open("results/_dynamic_array_GABA_B9__synaptic_pre_-1286779549454503773", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9__synaptic_pre.is_open())
	{
        if (! _dynamic_array_GABA_B9__synaptic_pre.empty() )
        {
			outfile__dynamic_array_GABA_B9__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9__synaptic_pre[0]), _dynamic_array_GABA_B9__synaptic_pre.size()*sizeof(_dynamic_array_GABA_B9__synaptic_pre[0]));
		    outfile__dynamic_array_GABA_B9__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9_delay;
	outfile__dynamic_array_GABA_B9_delay.open("results/_dynamic_array_GABA_B9_delay_479119983086436178", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9_delay.is_open())
	{
        if (! _dynamic_array_GABA_B9_delay.empty() )
        {
			outfile__dynamic_array_GABA_B9_delay.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9_delay[0]), _dynamic_array_GABA_B9_delay.size()*sizeof(_dynamic_array_GABA_B9_delay[0]));
		    outfile__dynamic_array_GABA_B9_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9_delay." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9_delay_1;
	outfile__dynamic_array_GABA_B9_delay_1.open("results/_dynamic_array_GABA_B9_delay_1_4245496369110750538", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9_delay_1.is_open())
	{
        if (! _dynamic_array_GABA_B9_delay_1.empty() )
        {
			outfile__dynamic_array_GABA_B9_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9_delay_1[0]), _dynamic_array_GABA_B9_delay_1.size()*sizeof(_dynamic_array_GABA_B9_delay_1[0]));
		    outfile__dynamic_array_GABA_B9_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9_N_incoming;
	outfile__dynamic_array_GABA_B9_N_incoming.open("results/_dynamic_array_GABA_B9_N_incoming_5884779929987706568", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9_N_incoming.is_open())
	{
        if (! _dynamic_array_GABA_B9_N_incoming.empty() )
        {
			outfile__dynamic_array_GABA_B9_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9_N_incoming[0]), _dynamic_array_GABA_B9_N_incoming.size()*sizeof(_dynamic_array_GABA_B9_N_incoming[0]));
		    outfile__dynamic_array_GABA_B9_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9_N_outgoing;
	outfile__dynamic_array_GABA_B9_N_outgoing.open("results/_dynamic_array_GABA_B9_N_outgoing_7695658249638954112", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9_N_outgoing.is_open())
	{
        if (! _dynamic_array_GABA_B9_N_outgoing.empty() )
        {
			outfile__dynamic_array_GABA_B9_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9_N_outgoing[0]), _dynamic_array_GABA_B9_N_outgoing.size()*sizeof(_dynamic_array_GABA_B9_N_outgoing[0]));
		    outfile__dynamic_array_GABA_B9_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9_weight;
	outfile__dynamic_array_GABA_B9_weight.open("results/_dynamic_array_GABA_B9_weight_5294221273733692155", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9_weight.is_open())
	{
        if (! _dynamic_array_GABA_B9_weight.empty() )
        {
			outfile__dynamic_array_GABA_B9_weight.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9_weight[0]), _dynamic_array_GABA_B9_weight.size()*sizeof(_dynamic_array_GABA_B9_weight[0]));
		    outfile__dynamic_array_GABA_B9_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9_weight." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_input_i;
	outfile__dynamic_array_mon_neuron_input_i.open("results/_dynamic_array_mon_neuron_input_i_2064109260027783070", ios::binary | ios::out);
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
	outfile__dynamic_array_mon_neuron_input_t.open("results/_dynamic_array_mon_neuron_input_t_-1421663139063372559", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_PC_output_i;
	outfile__dynamic_array_PC_output_i.open("results/_dynamic_array_PC_output_i_4902353206965578834", ios::binary | ios::out);
	if(outfile__dynamic_array_PC_output_i.is_open())
	{
        if (! _dynamic_array_PC_output_i.empty() )
        {
			outfile__dynamic_array_PC_output_i.write(reinterpret_cast<char*>(&_dynamic_array_PC_output_i[0]), _dynamic_array_PC_output_i.size()*sizeof(_dynamic_array_PC_output_i[0]));
		    outfile__dynamic_array_PC_output_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_PC_output_i." << endl;
	}
	ofstream outfile__dynamic_array_PC_output_t;
	outfile__dynamic_array_PC_output_t.open("results/_dynamic_array_PC_output_t_-5517150255442048443", ios::binary | ios::out);
	if(outfile__dynamic_array_PC_output_t.is_open())
	{
        if (! _dynamic_array_PC_output_t.empty() )
        {
			outfile__dynamic_array_PC_output_t.write(reinterpret_cast<char*>(&_dynamic_array_PC_output_t[0]), _dynamic_array_PC_output_t.size()*sizeof(_dynamic_array_PC_output_t[0]));
		    outfile__dynamic_array_PC_output_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_PC_output_t." << endl;
	}
	ofstream outfile__dynamic_array_PV_output_i;
	outfile__dynamic_array_PV_output_i.open("results/_dynamic_array_PV_output_i_-3875975691196506191", ios::binary | ios::out);
	if(outfile__dynamic_array_PV_output_i.is_open())
	{
        if (! _dynamic_array_PV_output_i.empty() )
        {
			outfile__dynamic_array_PV_output_i.write(reinterpret_cast<char*>(&_dynamic_array_PV_output_i[0]), _dynamic_array_PV_output_i.size()*sizeof(_dynamic_array_PV_output_i[0]));
		    outfile__dynamic_array_PV_output_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_PV_output_i." << endl;
	}
	ofstream outfile__dynamic_array_PV_output_t;
	outfile__dynamic_array_PV_output_t.open("results/_dynamic_array_PV_output_t_-1837551225121357684", ios::binary | ios::out);
	if(outfile__dynamic_array_PV_output_t.is_open())
	{
        if (! _dynamic_array_PV_output_t.empty() )
        {
			outfile__dynamic_array_PV_output_t.write(reinterpret_cast<char*>(&_dynamic_array_PV_output_t[0]), _dynamic_array_PV_output_t.size()*sizeof(_dynamic_array_PV_output_t[0]));
		    outfile__dynamic_array_PV_output_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_PV_output_t." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator__timebins;
	outfile__dynamic_array_SpikeGenerator__timebins.open("results/_dynamic_array_SpikeGenerator__timebins_-4757313422691926814", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator__timebins.is_open())
	{
        if (! _dynamic_array_SpikeGenerator__timebins.empty() )
        {
			outfile__dynamic_array_SpikeGenerator__timebins.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator__timebins[0]), _dynamic_array_SpikeGenerator__timebins.size()*sizeof(_dynamic_array_SpikeGenerator__timebins[0]));
		    outfile__dynamic_array_SpikeGenerator__timebins.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator__timebins." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator_neuron_index;
	outfile__dynamic_array_SpikeGenerator_neuron_index.open("results/_dynamic_array_SpikeGenerator_neuron_index_6495609480975104020", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator_neuron_index.is_open())
	{
        if (! _dynamic_array_SpikeGenerator_neuron_index.empty() )
        {
			outfile__dynamic_array_SpikeGenerator_neuron_index.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator_neuron_index[0]), _dynamic_array_SpikeGenerator_neuron_index.size()*sizeof(_dynamic_array_SpikeGenerator_neuron_index[0]));
		    outfile__dynamic_array_SpikeGenerator_neuron_index.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator_neuron_index." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator_spike_number;
	outfile__dynamic_array_SpikeGenerator_spike_number.open("results/_dynamic_array_SpikeGenerator_spike_number_-8328122921968684797", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator_spike_number.is_open())
	{
        if (! _dynamic_array_SpikeGenerator_spike_number.empty() )
        {
			outfile__dynamic_array_SpikeGenerator_spike_number.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator_spike_number[0]), _dynamic_array_SpikeGenerator_spike_number.size()*sizeof(_dynamic_array_SpikeGenerator_spike_number[0]));
		    outfile__dynamic_array_SpikeGenerator_spike_number.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator_spike_number." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator_spike_time;
	outfile__dynamic_array_SpikeGenerator_spike_time.open("results/_dynamic_array_SpikeGenerator_spike_time_7476639374730943078", ios::binary | ios::out);
	if(outfile__dynamic_array_SpikeGenerator_spike_time.is_open())
	{
        if (! _dynamic_array_SpikeGenerator_spike_time.empty() )
        {
			outfile__dynamic_array_SpikeGenerator_spike_time.write(reinterpret_cast<char*>(&_dynamic_array_SpikeGenerator_spike_time[0]), _dynamic_array_SpikeGenerator_spike_time.size()*sizeof(_dynamic_array_SpikeGenerator_spike_time[0]));
		    outfile__dynamic_array_SpikeGenerator_spike_time.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SpikeGenerator_spike_time." << endl;
	}
	ofstream outfile__dynamic_array_SST_output_i;
	outfile__dynamic_array_SST_output_i.open("results/_dynamic_array_SST_output_i_-1259664596434220796", ios::binary | ios::out);
	if(outfile__dynamic_array_SST_output_i.is_open())
	{
        if (! _dynamic_array_SST_output_i.empty() )
        {
			outfile__dynamic_array_SST_output_i.write(reinterpret_cast<char*>(&_dynamic_array_SST_output_i[0]), _dynamic_array_SST_output_i.size()*sizeof(_dynamic_array_SST_output_i[0]));
		    outfile__dynamic_array_SST_output_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SST_output_i." << endl;
	}
	ofstream outfile__dynamic_array_SST_output_t;
	outfile__dynamic_array_SST_output_t.open("results/_dynamic_array_SST_output_t_2426556634074533953", ios::binary | ios::out);
	if(outfile__dynamic_array_SST_output_t.is_open())
	{
        if (! _dynamic_array_SST_output_t.empty() )
        {
			outfile__dynamic_array_SST_output_t.write(reinterpret_cast<char*>(&_dynamic_array_SST_output_t[0]), _dynamic_array_SST_output_t.size()*sizeof(_dynamic_array_SST_output_t[0]));
		    outfile__dynamic_array_SST_output_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_SST_output_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_10_t;
	outfile__dynamic_array_statemonitor_10_t.open("results/_dynamic_array_statemonitor_10_t_-2591194061202115640", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_10_t.is_open())
	{
        if (! _dynamic_array_statemonitor_10_t.empty() )
        {
			outfile__dynamic_array_statemonitor_10_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_10_t[0]), _dynamic_array_statemonitor_10_t.size()*sizeof(_dynamic_array_statemonitor_10_t[0]));
		    outfile__dynamic_array_statemonitor_10_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_10_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_11_t;
	outfile__dynamic_array_statemonitor_11_t.open("results/_dynamic_array_statemonitor_11_t_2517932491001593430", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_11_t.is_open())
	{
        if (! _dynamic_array_statemonitor_11_t.empty() )
        {
			outfile__dynamic_array_statemonitor_11_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_11_t[0]), _dynamic_array_statemonitor_11_t.size()*sizeof(_dynamic_array_statemonitor_11_t[0]));
		    outfile__dynamic_array_statemonitor_11_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_11_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_12_t;
	outfile__dynamic_array_statemonitor_12_t.open("results/_dynamic_array_statemonitor_12_t_-2445937820587969266", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_12_t.is_open())
	{
        if (! _dynamic_array_statemonitor_12_t.empty() )
        {
			outfile__dynamic_array_statemonitor_12_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_12_t[0]), _dynamic_array_statemonitor_12_t.size()*sizeof(_dynamic_array_statemonitor_12_t[0]));
		    outfile__dynamic_array_statemonitor_12_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_12_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_13_t;
	outfile__dynamic_array_statemonitor_13_t.open("results/_dynamic_array_statemonitor_13_t_-7483576882695712633", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_13_t.is_open())
	{
        if (! _dynamic_array_statemonitor_13_t.empty() )
        {
			outfile__dynamic_array_statemonitor_13_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_13_t[0]), _dynamic_array_statemonitor_13_t.size()*sizeof(_dynamic_array_statemonitor_13_t[0]));
		    outfile__dynamic_array_statemonitor_13_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_13_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_1_t;
	outfile__dynamic_array_statemonitor_1_t.open("results/_dynamic_array_statemonitor_1_t_2979636388824300194", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_statemonitor_2_t;
	outfile__dynamic_array_statemonitor_2_t.open("results/_dynamic_array_statemonitor_2_t_709152862362953506", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_3_t.open("results/_dynamic_array_statemonitor_3_t_-2052728938740093823", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_4_t.open("results/_dynamic_array_statemonitor_4_t_620962349961306737", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_statemonitor_5_t;
	outfile__dynamic_array_statemonitor_5_t.open("results/_dynamic_array_statemonitor_5_t_9132200254769831130", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_5_t.is_open())
	{
        if (! _dynamic_array_statemonitor_5_t.empty() )
        {
			outfile__dynamic_array_statemonitor_5_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_5_t[0]), _dynamic_array_statemonitor_5_t.size()*sizeof(_dynamic_array_statemonitor_5_t[0]));
		    outfile__dynamic_array_statemonitor_5_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_5_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_6_t;
	outfile__dynamic_array_statemonitor_6_t.open("results/_dynamic_array_statemonitor_6_t_4402256389952820406", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_6_t.is_open())
	{
        if (! _dynamic_array_statemonitor_6_t.empty() )
        {
			outfile__dynamic_array_statemonitor_6_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_6_t[0]), _dynamic_array_statemonitor_6_t.size()*sizeof(_dynamic_array_statemonitor_6_t[0]));
		    outfile__dynamic_array_statemonitor_6_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_6_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_7_t;
	outfile__dynamic_array_statemonitor_7_t.open("results/_dynamic_array_statemonitor_7_t_1257530368353249377", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_7_t.is_open())
	{
        if (! _dynamic_array_statemonitor_7_t.empty() )
        {
			outfile__dynamic_array_statemonitor_7_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_7_t[0]), _dynamic_array_statemonitor_7_t.size()*sizeof(_dynamic_array_statemonitor_7_t[0]));
		    outfile__dynamic_array_statemonitor_7_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_7_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_8_t;
	outfile__dynamic_array_statemonitor_8_t.open("results/_dynamic_array_statemonitor_8_t_4865240912715287476", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_8_t.is_open())
	{
        if (! _dynamic_array_statemonitor_8_t.empty() )
        {
			outfile__dynamic_array_statemonitor_8_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_8_t[0]), _dynamic_array_statemonitor_8_t.size()*sizeof(_dynamic_array_statemonitor_8_t[0]));
		    outfile__dynamic_array_statemonitor_8_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_8_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_9_t;
	outfile__dynamic_array_statemonitor_9_t.open("results/_dynamic_array_statemonitor_9_t_2404972761451433578", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_9_t.is_open())
	{
        if (! _dynamic_array_statemonitor_9_t.empty() )
        {
			outfile__dynamic_array_statemonitor_9_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_9_t[0]), _dynamic_array_statemonitor_9_t.size()*sizeof(_dynamic_array_statemonitor_9_t[0]));
		    outfile__dynamic_array_statemonitor_9_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_9_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_t;
	outfile__dynamic_array_statemonitor_t.open("results/_dynamic_array_statemonitor_t_5970427202552121201", ios::binary | ios::out);
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

	ofstream outfile__dynamic_array_statemonitor_10_Iampa;
	outfile__dynamic_array_statemonitor_10_Iampa.open("results/_dynamic_array_statemonitor_10_Iampa_4561144131518930278", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_10_Iampa.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_10_Iampa.n; n++)
        {
            if (! _dynamic_array_statemonitor_10_Iampa(n).empty())
            {
                outfile__dynamic_array_statemonitor_10_Iampa.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_10_Iampa(n, 0)), _dynamic_array_statemonitor_10_Iampa.m*sizeof(_dynamic_array_statemonitor_10_Iampa(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_10_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_10_Iampa." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_11_Iampa_std;
	outfile__dynamic_array_statemonitor_11_Iampa_std.open("results/_dynamic_array_statemonitor_11_Iampa_std_-5647181578501045390", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_11_Iampa_std.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_11_Iampa_std.n; n++)
        {
            if (! _dynamic_array_statemonitor_11_Iampa_std(n).empty())
            {
                outfile__dynamic_array_statemonitor_11_Iampa_std.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_11_Iampa_std(n, 0)), _dynamic_array_statemonitor_11_Iampa_std.m*sizeof(_dynamic_array_statemonitor_11_Iampa_std(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_11_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_11_Iampa_std." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_12_Igaba_b;
	outfile__dynamic_array_statemonitor_12_Igaba_b.open("results/_dynamic_array_statemonitor_12_Igaba_b_-7761719355484677462", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_12_Igaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_12_Igaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_12_Igaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_12_Igaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_12_Igaba_b(n, 0)), _dynamic_array_statemonitor_12_Igaba_b.m*sizeof(_dynamic_array_statemonitor_12_Igaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_12_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_12_Igaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_13_Igaba_b;
	outfile__dynamic_array_statemonitor_13_Igaba_b.open("results/_dynamic_array_statemonitor_13_Igaba_b_5881869714754779871", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_13_Igaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_13_Igaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_13_Igaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_13_Igaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_13_Igaba_b(n, 0)), _dynamic_array_statemonitor_13_Igaba_b.m*sizeof(_dynamic_array_statemonitor_13_Igaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_13_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_13_Igaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_1_Isoma_mem;
	outfile__dynamic_array_statemonitor_1_Isoma_mem.open("results/_dynamic_array_statemonitor_1_Isoma_mem_-2835226360695472816", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_1_Isoma_mem.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_1_Isoma_mem.n; n++)
        {
            if (! _dynamic_array_statemonitor_1_Isoma_mem(n).empty())
            {
                outfile__dynamic_array_statemonitor_1_Isoma_mem.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_1_Isoma_mem(n, 0)), _dynamic_array_statemonitor_1_Isoma_mem.m*sizeof(_dynamic_array_statemonitor_1_Isoma_mem(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_1_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_1_Isoma_mem." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_2_Isoma_mem;
	outfile__dynamic_array_statemonitor_2_Isoma_mem.open("results/_dynamic_array_statemonitor_2_Isoma_mem_8860709912382180534", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_2_Isoma_mem.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_2_Isoma_mem.n; n++)
        {
            if (! _dynamic_array_statemonitor_2_Isoma_mem(n).empty())
            {
                outfile__dynamic_array_statemonitor_2_Isoma_mem.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_2_Isoma_mem(n, 0)), _dynamic_array_statemonitor_2_Isoma_mem.m*sizeof(_dynamic_array_statemonitor_2_Isoma_mem(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_2_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_2_Isoma_mem." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_3_Iampa;
	outfile__dynamic_array_statemonitor_3_Iampa.open("results/_dynamic_array_statemonitor_3_Iampa_2826194318257381925", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_3_Iampa.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_3_Iampa.n; n++)
        {
            if (! _dynamic_array_statemonitor_3_Iampa(n).empty())
            {
                outfile__dynamic_array_statemonitor_3_Iampa.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_3_Iampa(n, 0)), _dynamic_array_statemonitor_3_Iampa.m*sizeof(_dynamic_array_statemonitor_3_Iampa(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_3_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_3_Iampa." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_4_Iampa_std;
	outfile__dynamic_array_statemonitor_4_Iampa_std.open("results/_dynamic_array_statemonitor_4_Iampa_std_-3298958092666930487", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_4_Iampa_std.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_4_Iampa_std.n; n++)
        {
            if (! _dynamic_array_statemonitor_4_Iampa_std(n).empty())
            {
                outfile__dynamic_array_statemonitor_4_Iampa_std.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_4_Iampa_std(n, 0)), _dynamic_array_statemonitor_4_Iampa_std.m*sizeof(_dynamic_array_statemonitor_4_Iampa_std(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_4_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_4_Iampa_std." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_5_Iampa;
	outfile__dynamic_array_statemonitor_5_Iampa.open("results/_dynamic_array_statemonitor_5_Iampa_6722419631274516481", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_5_Iampa.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_5_Iampa.n; n++)
        {
            if (! _dynamic_array_statemonitor_5_Iampa(n).empty())
            {
                outfile__dynamic_array_statemonitor_5_Iampa.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_5_Iampa(n, 0)), _dynamic_array_statemonitor_5_Iampa.m*sizeof(_dynamic_array_statemonitor_5_Iampa(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_5_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_5_Iampa." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_6_Iampa;
	outfile__dynamic_array_statemonitor_6_Iampa.open("results/_dynamic_array_statemonitor_6_Iampa_-7819369504426041486", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_6_Iampa.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_6_Iampa.n; n++)
        {
            if (! _dynamic_array_statemonitor_6_Iampa(n).empty())
            {
                outfile__dynamic_array_statemonitor_6_Iampa.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_6_Iampa(n, 0)), _dynamic_array_statemonitor_6_Iampa.m*sizeof(_dynamic_array_statemonitor_6_Iampa(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_6_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_6_Iampa." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_7_Igaba_b;
	outfile__dynamic_array_statemonitor_7_Igaba_b.open("results/_dynamic_array_statemonitor_7_Igaba_b_1601420750270142870", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_7_Igaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_7_Igaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_7_Igaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_7_Igaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_7_Igaba_b(n, 0)), _dynamic_array_statemonitor_7_Igaba_b.m*sizeof(_dynamic_array_statemonitor_7_Igaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_7_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_7_Igaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_8_Igaba_b;
	outfile__dynamic_array_statemonitor_8_Igaba_b.open("results/_dynamic_array_statemonitor_8_Igaba_b_-5372569748163593977", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_8_Igaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_8_Igaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_8_Igaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_8_Igaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_8_Igaba_b(n, 0)), _dynamic_array_statemonitor_8_Igaba_b.m*sizeof(_dynamic_array_statemonitor_8_Igaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_8_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_8_Igaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_9_Igaba_b;
	outfile__dynamic_array_statemonitor_9_Igaba_b.open("results/_dynamic_array_statemonitor_9_Igaba_b_1974747030415121271", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_9_Igaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_9_Igaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_9_Igaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_9_Igaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_9_Igaba_b(n, 0)), _dynamic_array_statemonitor_9_Igaba_b.m*sizeof(_dynamic_array_statemonitor_9_Igaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_9_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_9_Igaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_Isoma_mem;
	outfile__dynamic_array_statemonitor_Isoma_mem.open("results/_dynamic_array_statemonitor_Isoma_mem_-7850363021121982058", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_Isoma_mem.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_Isoma_mem.n; n++)
        {
            if (! _dynamic_array_statemonitor_Isoma_mem(n).empty())
            {
                outfile__dynamic_array_statemonitor_Isoma_mem.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_Isoma_mem(n, 0)), _dynamic_array_statemonitor_Isoma_mem.m*sizeof(_dynamic_array_statemonitor_Isoma_mem(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_Isoma_mem." << endl;
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
	if(_static_array__array_statemonitor_1__indices!=0)
	{
		delete [] _static_array__array_statemonitor_1__indices;
		_static_array__array_statemonitor_1__indices = 0;
	}
	if(_static_array__array_statemonitor_2__indices!=0)
	{
		delete [] _static_array__array_statemonitor_2__indices;
		_static_array__array_statemonitor_2__indices = 0;
	}
	if(_static_array__array_statemonitor__indices!=0)
	{
		delete [] _static_array__array_statemonitor__indices;
		_static_array__array_statemonitor__indices = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator__timebins!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator__timebins;
		_static_array__dynamic_array_SpikeGenerator__timebins = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator_neuron_index!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator_neuron_index;
		_static_array__dynamic_array_SpikeGenerator_neuron_index = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator_spike_number!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator_spike_number;
		_static_array__dynamic_array_SpikeGenerator_spike_number = 0;
	}
	if(_static_array__dynamic_array_SpikeGenerator_spike_time!=0)
	{
		delete [] _static_array__dynamic_array_SpikeGenerator_spike_time;
		_static_array__dynamic_array_SpikeGenerator_spike_time = 0;
	}
}

