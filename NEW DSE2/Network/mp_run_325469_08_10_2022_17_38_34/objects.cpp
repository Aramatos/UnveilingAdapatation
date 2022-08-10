
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
int32_t * _array_Core_1_subgroup__sub_idx;
const int _num__array_Core_1_subgroup__sub_idx = 40;
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
int32_t * _array_Core_2_subgroup__sub_idx;
const int _num__array_Core_2_subgroup__sub_idx = 6;
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
int32_t * _array_Core_3_subgroup__sub_idx;
const int _num__array_Core_3_subgroup__sub_idx = 4;
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

	_array_Core_1_subgroup__sub_idx = new int32_t[40];
    
	for(int i=0; i<40; i++) _array_Core_1_subgroup__sub_idx[i] = 0;

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

	_array_Core_2_subgroup__sub_idx = new int32_t[6];
    
	for(int i=0; i<6; i++) _array_Core_2_subgroup__sub_idx[i] = 0;

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

	_array_Core_3_subgroup__sub_idx = new int32_t[4];
    
	for(int i=0; i<4; i++) _array_Core_3_subgroup__sub_idx[i] = 0;

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

	_array_Core_1_subgroup__sub_idx = new int32_t[40];
    
	for(int i=0; i<40; i++) _array_Core_1_subgroup__sub_idx[i] = 0 + i;

	_array_Core_2_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_2_i[i] = 0 + i;

	_array_Core_2_subgroup__sub_idx = new int32_t[6];
    
	for(int i=0; i<6; i++) _array_Core_2_subgroup__sub_idx[i] = 0 + i;

	_array_Core_3_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_3_i[i] = 0 + i;

	_array_Core_3_subgroup__sub_idx = new int32_t[4];
    
	for(int i=0; i<4; i++) _array_Core_3_subgroup__sub_idx[i] = 0 + i;

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
	outfile__array_AMPA0_N.open("results/_array_AMPA0_N_-4769690782763981927", ios::binary | ios::out);
	if(outfile__array_AMPA0_N.is_open())
	{
		outfile__array_AMPA0_N.write(reinterpret_cast<char*>(_array_AMPA0_N), 1*sizeof(_array_AMPA0_N[0]));
		outfile__array_AMPA0_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA0_N." << endl;
	}
	ofstream outfile__array_AMPA2_N;
	outfile__array_AMPA2_N.open("results/_array_AMPA2_N_-853566643796928603", ios::binary | ios::out);
	if(outfile__array_AMPA2_N.is_open())
	{
		outfile__array_AMPA2_N.write(reinterpret_cast<char*>(_array_AMPA2_N), 1*sizeof(_array_AMPA2_N[0]));
		outfile__array_AMPA2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA2_N." << endl;
	}
	ofstream outfile__array_AMPA3_N;
	outfile__array_AMPA3_N.open("results/_array_AMPA3_N_7099980677331889722", ios::binary | ios::out);
	if(outfile__array_AMPA3_N.is_open())
	{
		outfile__array_AMPA3_N.write(reinterpret_cast<char*>(_array_AMPA3_N), 1*sizeof(_array_AMPA3_N[0]));
		outfile__array_AMPA3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA3_N." << endl;
	}
	ofstream outfile__array_AMPA7_N;
	outfile__array_AMPA7_N.open("results/_array_AMPA7_N_8291520698862426314", ios::binary | ios::out);
	if(outfile__array_AMPA7_N.is_open())
	{
		outfile__array_AMPA7_N.write(reinterpret_cast<char*>(_array_AMPA7_N), 1*sizeof(_array_AMPA7_N[0]));
		outfile__array_AMPA7_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA7_N." << endl;
	}
	ofstream outfile__array_AMPA_STD1_N;
	outfile__array_AMPA_STD1_N.open("results/_array_AMPA_STD1_N_5559787648691468082", ios::binary | ios::out);
	if(outfile__array_AMPA_STD1_N.is_open())
	{
		outfile__array_AMPA_STD1_N.write(reinterpret_cast<char*>(_array_AMPA_STD1_N), 1*sizeof(_array_AMPA_STD1_N[0]));
		outfile__array_AMPA_STD1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA_STD1_N." << endl;
	}
	ofstream outfile__array_AMPA_STD8_N;
	outfile__array_AMPA_STD8_N.open("results/_array_AMPA_STD8_N_-4987629266755163224", ios::binary | ios::out);
	if(outfile__array_AMPA_STD8_N.is_open())
	{
		outfile__array_AMPA_STD8_N.write(reinterpret_cast<char*>(_array_AMPA_STD8_N), 1*sizeof(_array_AMPA_STD8_N[0]));
		outfile__array_AMPA_STD8_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA_STD8_N." << endl;
	}
	ofstream outfile__array_Core_0__spikespace;
	outfile__array_Core_0__spikespace.open("results/_array_Core_0__spikespace_-8581659989485770947", ios::binary | ios::out);
	if(outfile__array_Core_0__spikespace.is_open())
	{
		outfile__array_Core_0__spikespace.write(reinterpret_cast<char*>(_array_Core_0__spikespace), 257*sizeof(_array_Core_0__spikespace[0]));
		outfile__array_Core_0__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0__spikespace." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ahp;
	outfile__array_Core_0_alpha_ahp.open("results/_array_Core_0_alpha_ahp_-7068556432191540107", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ahp.is_open())
	{
		outfile__array_Core_0_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_0_alpha_ahp), 256*sizeof(_array_Core_0_alpha_ahp[0]));
		outfile__array_Core_0_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ampa;
	outfile__array_Core_0_alpha_ampa.open("results/_array_Core_0_alpha_ampa_-6027854786707739867", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ampa.is_open())
	{
		outfile__array_Core_0_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_0_alpha_ampa), 256*sizeof(_array_Core_0_alpha_ampa[0]));
		outfile__array_Core_0_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ampa_std;
	outfile__array_Core_0_alpha_ampa_std.open("results/_array_Core_0_alpha_ampa_std_4233190819383862388", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ampa_std.is_open())
	{
		outfile__array_Core_0_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_0_alpha_ampa_std), 256*sizeof(_array_Core_0_alpha_ampa_std[0]));
		outfile__array_Core_0_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_0_alpha_gaba_a;
	outfile__array_Core_0_alpha_gaba_a.open("results/_array_Core_0_alpha_gaba_a_5766720895275133643", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_gaba_a.is_open())
	{
		outfile__array_Core_0_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_alpha_gaba_a), 256*sizeof(_array_Core_0_alpha_gaba_a[0]));
		outfile__array_Core_0_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_alpha_gaba_b;
	outfile__array_Core_0_alpha_gaba_b.open("results/_array_Core_0_alpha_gaba_b_-5630476884420343600", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_gaba_b.is_open())
	{
		outfile__array_Core_0_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_alpha_gaba_b), 256*sizeof(_array_Core_0_alpha_gaba_b[0]));
		outfile__array_Core_0_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_alpha_nmda;
	outfile__array_Core_0_alpha_nmda.open("results/_array_Core_0_alpha_nmda_8070794692285871988", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_nmda.is_open())
	{
		outfile__array_Core_0_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_0_alpha_nmda), 256*sizeof(_array_Core_0_alpha_nmda[0]));
		outfile__array_Core_0_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_0_alpha_soma;
	outfile__array_Core_0_alpha_soma.open("results/_array_Core_0_alpha_soma_-163674518461761340", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_soma.is_open())
	{
		outfile__array_Core_0_alpha_soma.write(reinterpret_cast<char*>(_array_Core_0_alpha_soma), 256*sizeof(_array_Core_0_alpha_soma[0]));
		outfile__array_Core_0_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_0_Campa;
	outfile__array_Core_0_Campa.open("results/_array_Core_0_Campa_2180558827906730825", ios::binary | ios::out);
	if(outfile__array_Core_0_Campa.is_open())
	{
		outfile__array_Core_0_Campa.write(reinterpret_cast<char*>(_array_Core_0_Campa), 256*sizeof(_array_Core_0_Campa[0]));
		outfile__array_Core_0_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Campa." << endl;
	}
	ofstream outfile__array_Core_0_Campa_std;
	outfile__array_Core_0_Campa_std.open("results/_array_Core_0_Campa_std_8944861115995891213", ios::binary | ios::out);
	if(outfile__array_Core_0_Campa_std.is_open())
	{
		outfile__array_Core_0_Campa_std.write(reinterpret_cast<char*>(_array_Core_0_Campa_std), 256*sizeof(_array_Core_0_Campa_std[0]));
		outfile__array_Core_0_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Campa_std." << endl;
	}
	ofstream outfile__array_Core_0_Cgaba_a;
	outfile__array_Core_0_Cgaba_a.open("results/_array_Core_0_Cgaba_a_8327785656606039897", ios::binary | ios::out);
	if(outfile__array_Core_0_Cgaba_a.is_open())
	{
		outfile__array_Core_0_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_0_Cgaba_a), 256*sizeof(_array_Core_0_Cgaba_a[0]));
		outfile__array_Core_0_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_0_Cgaba_b;
	outfile__array_Core_0_Cgaba_b.open("results/_array_Core_0_Cgaba_b_-1078896029096233899", ios::binary | ios::out);
	if(outfile__array_Core_0_Cgaba_b.is_open())
	{
		outfile__array_Core_0_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_0_Cgaba_b), 256*sizeof(_array_Core_0_Cgaba_b[0]));
		outfile__array_Core_0_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_0_Cnmda;
	outfile__array_Core_0_Cnmda.open("results/_array_Core_0_Cnmda_-6771160640248190040", ios::binary | ios::out);
	if(outfile__array_Core_0_Cnmda.is_open())
	{
		outfile__array_Core_0_Cnmda.write(reinterpret_cast<char*>(_array_Core_0_Cnmda), 256*sizeof(_array_Core_0_Cnmda[0]));
		outfile__array_Core_0_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cnmda." << endl;
	}
	ofstream outfile__array_Core_0_Csoma_ahp;
	outfile__array_Core_0_Csoma_ahp.open("results/_array_Core_0_Csoma_ahp_-5762798436842943886", ios::binary | ios::out);
	if(outfile__array_Core_0_Csoma_ahp.is_open())
	{
		outfile__array_Core_0_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_0_Csoma_ahp), 1*sizeof(_array_Core_0_Csoma_ahp[0]));
		outfile__array_Core_0_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_0_Csoma_mem;
	outfile__array_Core_0_Csoma_mem.open("results/_array_Core_0_Csoma_mem_5292869779704191373", ios::binary | ios::out);
	if(outfile__array_Core_0_Csoma_mem.is_open())
	{
		outfile__array_Core_0_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_0_Csoma_mem), 1*sizeof(_array_Core_0_Csoma_mem[0]));
		outfile__array_Core_0_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_0_i;
	outfile__array_Core_0_i.open("results/_array_Core_0_i_1212992688693027673", ios::binary | ios::out);
	if(outfile__array_Core_0_i.is_open())
	{
		outfile__array_Core_0_i.write(reinterpret_cast<char*>(_array_Core_0_i), 256*sizeof(_array_Core_0_i[0]));
		outfile__array_Core_0_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_i." << endl;
	}
	ofstream outfile__array_Core_0_I0;
	outfile__array_Core_0_I0.open("results/_array_Core_0_I0_-3305164670504636055", ios::binary | ios::out);
	if(outfile__array_Core_0_I0.is_open())
	{
		outfile__array_Core_0_I0.write(reinterpret_cast<char*>(_array_Core_0_I0), 1*sizeof(_array_Core_0_I0[0]));
		outfile__array_Core_0_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I0." << endl;
	}
	ofstream outfile__array_Core_0_Iampa;
	outfile__array_Core_0_Iampa.open("results/_array_Core_0_Iampa_-8990241624456762661", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa.is_open())
	{
		outfile__array_Core_0_Iampa.write(reinterpret_cast<char*>(_array_Core_0_Iampa), 256*sizeof(_array_Core_0_Iampa[0]));
		outfile__array_Core_0_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_std;
	outfile__array_Core_0_Iampa_std.open("results/_array_Core_0_Iampa_std_5178369993792941208", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_std.is_open())
	{
		outfile__array_Core_0_Iampa_std.write(reinterpret_cast<char*>(_array_Core_0_Iampa_std), 256*sizeof(_array_Core_0_Iampa_std[0]));
		outfile__array_Core_0_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_std_tau;
	outfile__array_Core_0_Iampa_std_tau.open("results/_array_Core_0_Iampa_std_tau_4225442484071740317", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_std_tau.is_open())
	{
		outfile__array_Core_0_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_0_Iampa_std_tau), 256*sizeof(_array_Core_0_Iampa_std_tau[0]));
		outfile__array_Core_0_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_tau;
	outfile__array_Core_0_Iampa_tau.open("results/_array_Core_0_Iampa_tau_366840849897328401", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_tau.is_open())
	{
		outfile__array_Core_0_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_0_Iampa_tau), 256*sizeof(_array_Core_0_Iampa_tau[0]));
		outfile__array_Core_0_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_w0;
	outfile__array_Core_0_Iampa_w0.open("results/_array_Core_0_Iampa_w0_930669150439016306", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_w0.is_open())
	{
		outfile__array_Core_0_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_0_Iampa_w0), 256*sizeof(_array_Core_0_Iampa_w0[0]));
		outfile__array_Core_0_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_0_Idischarge_w;
	outfile__array_Core_0_Idischarge_w.open("results/_array_Core_0_Idischarge_w_6793253391115841570", ios::binary | ios::out);
	if(outfile__array_Core_0_Idischarge_w.is_open())
	{
		outfile__array_Core_0_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_0_Idischarge_w), 256*sizeof(_array_Core_0_Idischarge_w[0]));
		outfile__array_Core_0_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a;
	outfile__array_Core_0_Igaba_a.open("results/_array_Core_0_Igaba_a_3284411516683120955", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a.is_open())
	{
		outfile__array_Core_0_Igaba_a.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a), 256*sizeof(_array_Core_0_Igaba_a[0]));
		outfile__array_Core_0_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a_tau;
	outfile__array_Core_0_Igaba_a_tau.open("results/_array_Core_0_Igaba_a_tau_-8616388164759026553", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a_tau.is_open())
	{
		outfile__array_Core_0_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a_tau), 256*sizeof(_array_Core_0_Igaba_a_tau[0]));
		outfile__array_Core_0_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a_w0;
	outfile__array_Core_0_Igaba_a_w0.open("results/_array_Core_0_Igaba_a_w0_-2962483863192992233", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a_w0.is_open())
	{
		outfile__array_Core_0_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a_w0), 256*sizeof(_array_Core_0_Igaba_a_w0[0]));
		outfile__array_Core_0_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b;
	outfile__array_Core_0_Igaba_b.open("results/_array_Core_0_Igaba_b_-2227021768835987742", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b.is_open())
	{
		outfile__array_Core_0_Igaba_b.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b), 256*sizeof(_array_Core_0_Igaba_b[0]));
		outfile__array_Core_0_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b_tau;
	outfile__array_Core_0_Igaba_b_tau.open("results/_array_Core_0_Igaba_b_tau_8489367284605786160", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b_tau.is_open())
	{
		outfile__array_Core_0_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b_tau), 256*sizeof(_array_Core_0_Igaba_b_tau[0]));
		outfile__array_Core_0_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b_w0;
	outfile__array_Core_0_Igaba_b_w0.open("results/_array_Core_0_Igaba_b_w0_-6612924495317369863", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b_w0.is_open())
	{
		outfile__array_Core_0_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b_w0), 256*sizeof(_array_Core_0_Igaba_b_w0[0]));
		outfile__array_Core_0_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_0_Inmda;
	outfile__array_Core_0_Inmda.open("results/_array_Core_0_Inmda_-5624410028669303245", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda.is_open())
	{
		outfile__array_Core_0_Inmda.write(reinterpret_cast<char*>(_array_Core_0_Inmda), 256*sizeof(_array_Core_0_Inmda[0]));
		outfile__array_Core_0_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_tau;
	outfile__array_Core_0_Inmda_tau.open("results/_array_Core_0_Inmda_tau_-8473431140981731171", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_tau.is_open())
	{
		outfile__array_Core_0_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_0_Inmda_tau), 256*sizeof(_array_Core_0_Inmda_tau[0]));
		outfile__array_Core_0_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_thr;
	outfile__array_Core_0_Inmda_thr.open("results/_array_Core_0_Inmda_thr_3393644400171433862", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_thr.is_open())
	{
		outfile__array_Core_0_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_0_Inmda_thr), 256*sizeof(_array_Core_0_Inmda_thr[0]));
		outfile__array_Core_0_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_w0;
	outfile__array_Core_0_Inmda_w0.open("results/_array_Core_0_Inmda_w0_5750397150153673125", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_w0.is_open())
	{
		outfile__array_Core_0_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_0_Inmda_w0), 256*sizeof(_array_Core_0_Inmda_w0[0]));
		outfile__array_Core_0_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp;
	outfile__array_Core_0_Isoma_ahp.open("results/_array_Core_0_Isoma_ahp_-2478631040292547260", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp.is_open())
	{
		outfile__array_Core_0_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp), 256*sizeof(_array_Core_0_Isoma_ahp[0]));
		outfile__array_Core_0_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_g;
	outfile__array_Core_0_Isoma_ahp_g.open("results/_array_Core_0_Isoma_ahp_g_9167098604050296056", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_g), 1*sizeof(_array_Core_0_Isoma_ahp_g[0]));
		outfile__array_Core_0_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_tau;
	outfile__array_Core_0_Isoma_ahp_tau.open("results/_array_Core_0_Isoma_ahp_tau_-6484358065927399154", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_tau), 1*sizeof(_array_Core_0_Isoma_ahp_tau[0]));
		outfile__array_Core_0_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_w;
	outfile__array_Core_0_Isoma_ahp_w.open("results/_array_Core_0_Isoma_ahp_w_7234583825719332813", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_w), 256*sizeof(_array_Core_0_Isoma_ahp_w[0]));
		outfile__array_Core_0_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_const;
	outfile__array_Core_0_Isoma_const.open("results/_array_Core_0_Isoma_const_-3349072422656280658", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_const.is_open())
	{
		outfile__array_Core_0_Isoma_const.write(reinterpret_cast<char*>(_array_Core_0_Isoma_const), 256*sizeof(_array_Core_0_Isoma_const[0]));
		outfile__array_Core_0_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_dpi_tau;
	outfile__array_Core_0_Isoma_dpi_tau.open("results/_array_Core_0_Isoma_dpi_tau_-5631823677636246463", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_0_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_0_Isoma_dpi_tau), 1*sizeof(_array_Core_0_Isoma_dpi_tau[0]));
		outfile__array_Core_0_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_mem;
	outfile__array_Core_0_Isoma_mem.open("results/_array_Core_0_Isoma_mem_8707949719132276618", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_mem.is_open())
	{
		outfile__array_Core_0_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_0_Isoma_mem), 256*sizeof(_array_Core_0_Isoma_mem[0]));
		outfile__array_Core_0_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_gain;
	outfile__array_Core_0_Isoma_pfb_gain.open("results/_array_Core_0_Isoma_pfb_gain_7044230745477760290", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_gain), 1*sizeof(_array_Core_0_Isoma_pfb_gain[0]));
		outfile__array_Core_0_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_norm;
	outfile__array_Core_0_Isoma_pfb_norm.open("results/_array_Core_0_Isoma_pfb_norm_-1833309360912279273", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_norm), 1*sizeof(_array_Core_0_Isoma_pfb_norm[0]));
		outfile__array_Core_0_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_th;
	outfile__array_Core_0_Isoma_pfb_th.open("results/_array_Core_0_Isoma_pfb_th_-8245133362375759230", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_th), 1*sizeof(_array_Core_0_Isoma_pfb_th[0]));
		outfile__array_Core_0_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_reset;
	outfile__array_Core_0_Isoma_reset.open("results/_array_Core_0_Isoma_reset_-7248893396498222126", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_reset.is_open())
	{
		outfile__array_Core_0_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_0_Isoma_reset), 1*sizeof(_array_Core_0_Isoma_reset[0]));
		outfile__array_Core_0_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_th;
	outfile__array_Core_0_Isoma_th.open("results/_array_Core_0_Isoma_th_3500854713961772154", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_th.is_open())
	{
		outfile__array_Core_0_Isoma_th.write(reinterpret_cast<char*>(_array_Core_0_Isoma_th), 1*sizeof(_array_Core_0_Isoma_th[0]));
		outfile__array_Core_0_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_0_kn;
	outfile__array_Core_0_kn.open("results/_array_Core_0_kn_5579653048641249887", ios::binary | ios::out);
	if(outfile__array_Core_0_kn.is_open())
	{
		outfile__array_Core_0_kn.write(reinterpret_cast<char*>(_array_Core_0_kn), 1*sizeof(_array_Core_0_kn[0]));
		outfile__array_Core_0_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kn." << endl;
	}
	ofstream outfile__array_Core_0_kp;
	outfile__array_Core_0_kp.open("results/_array_Core_0_kp_6372661118486415836", ios::binary | ios::out);
	if(outfile__array_Core_0_kp.is_open())
	{
		outfile__array_Core_0_kp.write(reinterpret_cast<char*>(_array_Core_0_kp), 1*sizeof(_array_Core_0_kp[0]));
		outfile__array_Core_0_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kp." << endl;
	}
	ofstream outfile__array_Core_0_lastspike;
	outfile__array_Core_0_lastspike.open("results/_array_Core_0_lastspike_8408059967803927120", ios::binary | ios::out);
	if(outfile__array_Core_0_lastspike.is_open())
	{
		outfile__array_Core_0_lastspike.write(reinterpret_cast<char*>(_array_Core_0_lastspike), 256*sizeof(_array_Core_0_lastspike[0]));
		outfile__array_Core_0_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_lastspike." << endl;
	}
	ofstream outfile__array_Core_0_not_refractory;
	outfile__array_Core_0_not_refractory.open("results/_array_Core_0_not_refractory_1300921843238259066", ios::binary | ios::out);
	if(outfile__array_Core_0_not_refractory.is_open())
	{
		outfile__array_Core_0_not_refractory.write(reinterpret_cast<char*>(_array_Core_0_not_refractory), 256*sizeof(_array_Core_0_not_refractory[0]));
		outfile__array_Core_0_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_not_refractory." << endl;
	}
	ofstream outfile__array_Core_0_soma_refP;
	outfile__array_Core_0_soma_refP.open("results/_array_Core_0_soma_refP_5934165462374138481", ios::binary | ios::out);
	if(outfile__array_Core_0_soma_refP.is_open())
	{
		outfile__array_Core_0_soma_refP.write(reinterpret_cast<char*>(_array_Core_0_soma_refP), 1*sizeof(_array_Core_0_soma_refP[0]));
		outfile__array_Core_0_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_soma_refP." << endl;
	}
	ofstream outfile__array_Core_0_std_pulse;
	outfile__array_Core_0_std_pulse.open("results/_array_Core_0_std_pulse_-905651105028610854", ios::binary | ios::out);
	if(outfile__array_Core_0_std_pulse.is_open())
	{
		outfile__array_Core_0_std_pulse.write(reinterpret_cast<char*>(_array_Core_0_std_pulse), 256*sizeof(_array_Core_0_std_pulse[0]));
		outfile__array_Core_0_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_std_pulse." << endl;
	}
	ofstream outfile__array_Core_0_tau_pulse;
	outfile__array_Core_0_tau_pulse.open("results/_array_Core_0_tau_pulse_4952397718602071393", ios::binary | ios::out);
	if(outfile__array_Core_0_tau_pulse.is_open())
	{
		outfile__array_Core_0_tau_pulse.write(reinterpret_cast<char*>(_array_Core_0_tau_pulse), 256*sizeof(_array_Core_0_tau_pulse[0]));
		outfile__array_Core_0_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_0_Ut;
	outfile__array_Core_0_Ut.open("results/_array_Core_0_Ut_-7233672332298301543", ios::binary | ios::out);
	if(outfile__array_Core_0_Ut.is_open())
	{
		outfile__array_Core_0_Ut.write(reinterpret_cast<char*>(_array_Core_0_Ut), 1*sizeof(_array_Core_0_Ut[0]));
		outfile__array_Core_0_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ut." << endl;
	}
	ofstream outfile__array_Core_0_Va;
	outfile__array_Core_0_Va.open("results/_array_Core_0_Va_3174786993511153589", ios::binary | ios::out);
	if(outfile__array_Core_0_Va.is_open())
	{
		outfile__array_Core_0_Va.write(reinterpret_cast<char*>(_array_Core_0_Va), 256*sizeof(_array_Core_0_Va[0]));
		outfile__array_Core_0_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Va." << endl;
	}
	ofstream outfile__array_Core_0_Vw;
	outfile__array_Core_0_Vw.open("results/_array_Core_0_Vw_-2345617805530910310", ios::binary | ios::out);
	if(outfile__array_Core_0_Vw.is_open())
	{
		outfile__array_Core_0_Vw.write(reinterpret_cast<char*>(_array_Core_0_Vw), 256*sizeof(_array_Core_0_Vw[0]));
		outfile__array_Core_0_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Vw." << endl;
	}
	ofstream outfile__array_Core_1__spikespace;
	outfile__array_Core_1__spikespace.open("results/_array_Core_1__spikespace_1336613985787829554", ios::binary | ios::out);
	if(outfile__array_Core_1__spikespace.is_open())
	{
		outfile__array_Core_1__spikespace.write(reinterpret_cast<char*>(_array_Core_1__spikespace), 257*sizeof(_array_Core_1__spikespace[0]));
		outfile__array_Core_1__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1__spikespace." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ahp;
	outfile__array_Core_1_alpha_ahp.open("results/_array_Core_1_alpha_ahp_-2390500715775650123", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ahp.is_open())
	{
		outfile__array_Core_1_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_1_alpha_ahp), 256*sizeof(_array_Core_1_alpha_ahp[0]));
		outfile__array_Core_1_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ampa;
	outfile__array_Core_1_alpha_ampa.open("results/_array_Core_1_alpha_ampa_7601045454188791799", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ampa.is_open())
	{
		outfile__array_Core_1_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_1_alpha_ampa), 256*sizeof(_array_Core_1_alpha_ampa[0]));
		outfile__array_Core_1_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ampa_std;
	outfile__array_Core_1_alpha_ampa_std.open("results/_array_Core_1_alpha_ampa_std_5533361295252902640", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ampa_std.is_open())
	{
		outfile__array_Core_1_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_1_alpha_ampa_std), 256*sizeof(_array_Core_1_alpha_ampa_std[0]));
		outfile__array_Core_1_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_1_alpha_gaba_a;
	outfile__array_Core_1_alpha_gaba_a.open("results/_array_Core_1_alpha_gaba_a_693257167452000381", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_gaba_a.is_open())
	{
		outfile__array_Core_1_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_alpha_gaba_a), 256*sizeof(_array_Core_1_alpha_gaba_a[0]));
		outfile__array_Core_1_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_alpha_gaba_b;
	outfile__array_Core_1_alpha_gaba_b.open("results/_array_Core_1_alpha_gaba_b_-7237023198122030794", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_gaba_b.is_open())
	{
		outfile__array_Core_1_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_alpha_gaba_b), 256*sizeof(_array_Core_1_alpha_gaba_b[0]));
		outfile__array_Core_1_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_alpha_nmda;
	outfile__array_Core_1_alpha_nmda.open("results/_array_Core_1_alpha_nmda_-3238660085392083993", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_nmda.is_open())
	{
		outfile__array_Core_1_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_1_alpha_nmda), 256*sizeof(_array_Core_1_alpha_nmda[0]));
		outfile__array_Core_1_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_1_alpha_soma;
	outfile__array_Core_1_alpha_soma.open("results/_array_Core_1_alpha_soma_-1984931214919815361", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_soma.is_open())
	{
		outfile__array_Core_1_alpha_soma.write(reinterpret_cast<char*>(_array_Core_1_alpha_soma), 256*sizeof(_array_Core_1_alpha_soma[0]));
		outfile__array_Core_1_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_1_Campa;
	outfile__array_Core_1_Campa.open("results/_array_Core_1_Campa_-6097217209617118668", ios::binary | ios::out);
	if(outfile__array_Core_1_Campa.is_open())
	{
		outfile__array_Core_1_Campa.write(reinterpret_cast<char*>(_array_Core_1_Campa), 256*sizeof(_array_Core_1_Campa[0]));
		outfile__array_Core_1_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Campa." << endl;
	}
	ofstream outfile__array_Core_1_Campa_std;
	outfile__array_Core_1_Campa_std.open("results/_array_Core_1_Campa_std_2881442916478638449", ios::binary | ios::out);
	if(outfile__array_Core_1_Campa_std.is_open())
	{
		outfile__array_Core_1_Campa_std.write(reinterpret_cast<char*>(_array_Core_1_Campa_std), 256*sizeof(_array_Core_1_Campa_std[0]));
		outfile__array_Core_1_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Campa_std." << endl;
	}
	ofstream outfile__array_Core_1_Cgaba_a;
	outfile__array_Core_1_Cgaba_a.open("results/_array_Core_1_Cgaba_a_8619157853643138462", ios::binary | ios::out);
	if(outfile__array_Core_1_Cgaba_a.is_open())
	{
		outfile__array_Core_1_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_1_Cgaba_a), 256*sizeof(_array_Core_1_Cgaba_a[0]));
		outfile__array_Core_1_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_1_Cgaba_b;
	outfile__array_Core_1_Cgaba_b.open("results/_array_Core_1_Cgaba_b_7001696384352757759", ios::binary | ios::out);
	if(outfile__array_Core_1_Cgaba_b.is_open())
	{
		outfile__array_Core_1_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_1_Cgaba_b), 256*sizeof(_array_Core_1_Cgaba_b[0]));
		outfile__array_Core_1_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_1_Cnmda;
	outfile__array_Core_1_Cnmda.open("results/_array_Core_1_Cnmda_4914474510951485866", ios::binary | ios::out);
	if(outfile__array_Core_1_Cnmda.is_open())
	{
		outfile__array_Core_1_Cnmda.write(reinterpret_cast<char*>(_array_Core_1_Cnmda), 256*sizeof(_array_Core_1_Cnmda[0]));
		outfile__array_Core_1_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cnmda." << endl;
	}
	ofstream outfile__array_Core_1_Csoma_ahp;
	outfile__array_Core_1_Csoma_ahp.open("results/_array_Core_1_Csoma_ahp_-2713220422088001768", ios::binary | ios::out);
	if(outfile__array_Core_1_Csoma_ahp.is_open())
	{
		outfile__array_Core_1_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_1_Csoma_ahp), 1*sizeof(_array_Core_1_Csoma_ahp[0]));
		outfile__array_Core_1_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_1_Csoma_mem;
	outfile__array_Core_1_Csoma_mem.open("results/_array_Core_1_Csoma_mem_-4863211340865951189", ios::binary | ios::out);
	if(outfile__array_Core_1_Csoma_mem.is_open())
	{
		outfile__array_Core_1_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_1_Csoma_mem), 1*sizeof(_array_Core_1_Csoma_mem[0]));
		outfile__array_Core_1_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_1_i;
	outfile__array_Core_1_i.open("results/_array_Core_1_i_-8850483912844946017", ios::binary | ios::out);
	if(outfile__array_Core_1_i.is_open())
	{
		outfile__array_Core_1_i.write(reinterpret_cast<char*>(_array_Core_1_i), 256*sizeof(_array_Core_1_i[0]));
		outfile__array_Core_1_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_i." << endl;
	}
	ofstream outfile__array_Core_1_I0;
	outfile__array_Core_1_I0.open("results/_array_Core_1_I0_1725584481479606851", ios::binary | ios::out);
	if(outfile__array_Core_1_I0.is_open())
	{
		outfile__array_Core_1_I0.write(reinterpret_cast<char*>(_array_Core_1_I0), 1*sizeof(_array_Core_1_I0[0]));
		outfile__array_Core_1_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I0." << endl;
	}
	ofstream outfile__array_Core_1_Iampa;
	outfile__array_Core_1_Iampa.open("results/_array_Core_1_Iampa_-6853645363643411516", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa.is_open())
	{
		outfile__array_Core_1_Iampa.write(reinterpret_cast<char*>(_array_Core_1_Iampa), 256*sizeof(_array_Core_1_Iampa[0]));
		outfile__array_Core_1_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_std;
	outfile__array_Core_1_Iampa_std.open("results/_array_Core_1_Iampa_std_-6925853023298653393", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_std.is_open())
	{
		outfile__array_Core_1_Iampa_std.write(reinterpret_cast<char*>(_array_Core_1_Iampa_std), 256*sizeof(_array_Core_1_Iampa_std[0]));
		outfile__array_Core_1_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_std_tau;
	outfile__array_Core_1_Iampa_std_tau.open("results/_array_Core_1_Iampa_std_tau_5550776133761923618", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_std_tau.is_open())
	{
		outfile__array_Core_1_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_1_Iampa_std_tau), 256*sizeof(_array_Core_1_Iampa_std_tau[0]));
		outfile__array_Core_1_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_tau;
	outfile__array_Core_1_Iampa_tau.open("results/_array_Core_1_Iampa_tau_5324714601979975084", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_tau.is_open())
	{
		outfile__array_Core_1_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_1_Iampa_tau), 256*sizeof(_array_Core_1_Iampa_tau[0]));
		outfile__array_Core_1_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_w0;
	outfile__array_Core_1_Iampa_w0.open("results/_array_Core_1_Iampa_w0_6497259991610346849", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_w0.is_open())
	{
		outfile__array_Core_1_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_1_Iampa_w0), 256*sizeof(_array_Core_1_Iampa_w0[0]));
		outfile__array_Core_1_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_1_Idischarge_w;
	outfile__array_Core_1_Idischarge_w.open("results/_array_Core_1_Idischarge_w_3425989073725184723", ios::binary | ios::out);
	if(outfile__array_Core_1_Idischarge_w.is_open())
	{
		outfile__array_Core_1_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_1_Idischarge_w), 256*sizeof(_array_Core_1_Idischarge_w[0]));
		outfile__array_Core_1_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a;
	outfile__array_Core_1_Igaba_a.open("results/_array_Core_1_Igaba_a_-5728557595697947691", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a.is_open())
	{
		outfile__array_Core_1_Igaba_a.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a), 256*sizeof(_array_Core_1_Igaba_a[0]));
		outfile__array_Core_1_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a_tau;
	outfile__array_Core_1_Igaba_a_tau.open("results/_array_Core_1_Igaba_a_tau_1799855148860807387", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a_tau.is_open())
	{
		outfile__array_Core_1_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a_tau), 256*sizeof(_array_Core_1_Igaba_a_tau[0]));
		outfile__array_Core_1_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a_w0;
	outfile__array_Core_1_Igaba_a_w0.open("results/_array_Core_1_Igaba_a_w0_-5871873528562096940", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a_w0.is_open())
	{
		outfile__array_Core_1_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a_w0), 256*sizeof(_array_Core_1_Igaba_a_w0[0]));
		outfile__array_Core_1_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b;
	outfile__array_Core_1_Igaba_b.open("results/_array_Core_1_Igaba_b_2530234342314876647", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b.is_open())
	{
		outfile__array_Core_1_Igaba_b.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b), 256*sizeof(_array_Core_1_Igaba_b[0]));
		outfile__array_Core_1_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b_tau;
	outfile__array_Core_1_Igaba_b_tau.open("results/_array_Core_1_Igaba_b_tau_-5814846610940993679", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b_tau.is_open())
	{
		outfile__array_Core_1_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b_tau), 256*sizeof(_array_Core_1_Igaba_b_tau[0]));
		outfile__array_Core_1_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b_w0;
	outfile__array_Core_1_Igaba_b_w0.open("results/_array_Core_1_Igaba_b_w0_-6330212341759019654", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b_w0.is_open())
	{
		outfile__array_Core_1_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b_w0), 256*sizeof(_array_Core_1_Igaba_b_w0[0]));
		outfile__array_Core_1_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_1_Inmda;
	outfile__array_Core_1_Inmda.open("results/_array_Core_1_Inmda_5812435960218782729", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda.is_open())
	{
		outfile__array_Core_1_Inmda.write(reinterpret_cast<char*>(_array_Core_1_Inmda), 256*sizeof(_array_Core_1_Inmda[0]));
		outfile__array_Core_1_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_tau;
	outfile__array_Core_1_Inmda_tau.open("results/_array_Core_1_Inmda_tau_-8453747567031379860", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_tau.is_open())
	{
		outfile__array_Core_1_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_1_Inmda_tau), 256*sizeof(_array_Core_1_Inmda_tau[0]));
		outfile__array_Core_1_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_thr;
	outfile__array_Core_1_Inmda_thr.open("results/_array_Core_1_Inmda_thr_-2177427264195510986", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_thr.is_open())
	{
		outfile__array_Core_1_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_1_Inmda_thr), 256*sizeof(_array_Core_1_Inmda_thr[0]));
		outfile__array_Core_1_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_w0;
	outfile__array_Core_1_Inmda_w0.open("results/_array_Core_1_Inmda_w0_-40335961554498807", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_w0.is_open())
	{
		outfile__array_Core_1_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_1_Inmda_w0), 256*sizeof(_array_Core_1_Inmda_w0[0]));
		outfile__array_Core_1_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp;
	outfile__array_Core_1_Isoma_ahp.open("results/_array_Core_1_Isoma_ahp_-876393121754191166", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp.is_open())
	{
		outfile__array_Core_1_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp), 256*sizeof(_array_Core_1_Isoma_ahp[0]));
		outfile__array_Core_1_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_g;
	outfile__array_Core_1_Isoma_ahp_g.open("results/_array_Core_1_Isoma_ahp_g_9031171948986791716", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_g), 1*sizeof(_array_Core_1_Isoma_ahp_g[0]));
		outfile__array_Core_1_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_tau;
	outfile__array_Core_1_Isoma_ahp_tau.open("results/_array_Core_1_Isoma_ahp_tau_4179552789741061929", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_tau), 1*sizeof(_array_Core_1_Isoma_ahp_tau[0]));
		outfile__array_Core_1_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_w;
	outfile__array_Core_1_Isoma_ahp_w.open("results/_array_Core_1_Isoma_ahp_w_-6202458269041694471", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_w), 256*sizeof(_array_Core_1_Isoma_ahp_w[0]));
		outfile__array_Core_1_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_const;
	outfile__array_Core_1_Isoma_const.open("results/_array_Core_1_Isoma_const_-6496541291686452173", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_const.is_open())
	{
		outfile__array_Core_1_Isoma_const.write(reinterpret_cast<char*>(_array_Core_1_Isoma_const), 256*sizeof(_array_Core_1_Isoma_const[0]));
		outfile__array_Core_1_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_dpi_tau;
	outfile__array_Core_1_Isoma_dpi_tau.open("results/_array_Core_1_Isoma_dpi_tau_4196082864525042894", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_1_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_1_Isoma_dpi_tau), 1*sizeof(_array_Core_1_Isoma_dpi_tau[0]));
		outfile__array_Core_1_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_mem;
	outfile__array_Core_1_Isoma_mem.open("results/_array_Core_1_Isoma_mem_3968853453458222888", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_mem.is_open())
	{
		outfile__array_Core_1_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_1_Isoma_mem), 256*sizeof(_array_Core_1_Isoma_mem[0]));
		outfile__array_Core_1_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_gain;
	outfile__array_Core_1_Isoma_pfb_gain.open("results/_array_Core_1_Isoma_pfb_gain_246919844814295236", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_gain), 1*sizeof(_array_Core_1_Isoma_pfb_gain[0]));
		outfile__array_Core_1_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_norm;
	outfile__array_Core_1_Isoma_pfb_norm.open("results/_array_Core_1_Isoma_pfb_norm_7977535406303541406", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_norm), 1*sizeof(_array_Core_1_Isoma_pfb_norm[0]));
		outfile__array_Core_1_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_th;
	outfile__array_Core_1_Isoma_pfb_th.open("results/_array_Core_1_Isoma_pfb_th_6537009271479017650", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_th), 1*sizeof(_array_Core_1_Isoma_pfb_th[0]));
		outfile__array_Core_1_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_reset;
	outfile__array_Core_1_Isoma_reset.open("results/_array_Core_1_Isoma_reset_-8113849285305468592", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_reset.is_open())
	{
		outfile__array_Core_1_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_1_Isoma_reset), 1*sizeof(_array_Core_1_Isoma_reset[0]));
		outfile__array_Core_1_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_th;
	outfile__array_Core_1_Isoma_th.open("results/_array_Core_1_Isoma_th_5491072121957458249", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_th.is_open())
	{
		outfile__array_Core_1_Isoma_th.write(reinterpret_cast<char*>(_array_Core_1_Isoma_th), 1*sizeof(_array_Core_1_Isoma_th[0]));
		outfile__array_Core_1_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_1_kn;
	outfile__array_Core_1_kn.open("results/_array_Core_1_kn_-1186270888976032274", ios::binary | ios::out);
	if(outfile__array_Core_1_kn.is_open())
	{
		outfile__array_Core_1_kn.write(reinterpret_cast<char*>(_array_Core_1_kn), 1*sizeof(_array_Core_1_kn[0]));
		outfile__array_Core_1_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kn." << endl;
	}
	ofstream outfile__array_Core_1_kp;
	outfile__array_Core_1_kp.open("results/_array_Core_1_kp_-7413114462585044073", ios::binary | ios::out);
	if(outfile__array_Core_1_kp.is_open())
	{
		outfile__array_Core_1_kp.write(reinterpret_cast<char*>(_array_Core_1_kp), 1*sizeof(_array_Core_1_kp[0]));
		outfile__array_Core_1_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kp." << endl;
	}
	ofstream outfile__array_Core_1_lastspike;
	outfile__array_Core_1_lastspike.open("results/_array_Core_1_lastspike_5065603176116106633", ios::binary | ios::out);
	if(outfile__array_Core_1_lastspike.is_open())
	{
		outfile__array_Core_1_lastspike.write(reinterpret_cast<char*>(_array_Core_1_lastspike), 256*sizeof(_array_Core_1_lastspike[0]));
		outfile__array_Core_1_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_lastspike." << endl;
	}
	ofstream outfile__array_Core_1_not_refractory;
	outfile__array_Core_1_not_refractory.open("results/_array_Core_1_not_refractory_-2877285194750366316", ios::binary | ios::out);
	if(outfile__array_Core_1_not_refractory.is_open())
	{
		outfile__array_Core_1_not_refractory.write(reinterpret_cast<char*>(_array_Core_1_not_refractory), 256*sizeof(_array_Core_1_not_refractory[0]));
		outfile__array_Core_1_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_not_refractory." << endl;
	}
	ofstream outfile__array_Core_1_soma_refP;
	outfile__array_Core_1_soma_refP.open("results/_array_Core_1_soma_refP_2147993445261016214", ios::binary | ios::out);
	if(outfile__array_Core_1_soma_refP.is_open())
	{
		outfile__array_Core_1_soma_refP.write(reinterpret_cast<char*>(_array_Core_1_soma_refP), 1*sizeof(_array_Core_1_soma_refP[0]));
		outfile__array_Core_1_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_soma_refP." << endl;
	}
	ofstream outfile__array_Core_1_std_pulse;
	outfile__array_Core_1_std_pulse.open("results/_array_Core_1_std_pulse_8605656259728077214", ios::binary | ios::out);
	if(outfile__array_Core_1_std_pulse.is_open())
	{
		outfile__array_Core_1_std_pulse.write(reinterpret_cast<char*>(_array_Core_1_std_pulse), 256*sizeof(_array_Core_1_std_pulse[0]));
		outfile__array_Core_1_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_std_pulse." << endl;
	}
	ofstream outfile__array_Core_1_subgroup__sub_idx;
	outfile__array_Core_1_subgroup__sub_idx.open("results/_array_Core_1_subgroup__sub_idx_7066049510174097785", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup__sub_idx), 40*sizeof(_array_Core_1_subgroup__sub_idx[0]));
		outfile__array_Core_1_subgroup__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_tau_pulse;
	outfile__array_Core_1_tau_pulse.open("results/_array_Core_1_tau_pulse_4791294055365817195", ios::binary | ios::out);
	if(outfile__array_Core_1_tau_pulse.is_open())
	{
		outfile__array_Core_1_tau_pulse.write(reinterpret_cast<char*>(_array_Core_1_tau_pulse), 256*sizeof(_array_Core_1_tau_pulse[0]));
		outfile__array_Core_1_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_1_Ut;
	outfile__array_Core_1_Ut.open("results/_array_Core_1_Ut_-437421461423815809", ios::binary | ios::out);
	if(outfile__array_Core_1_Ut.is_open())
	{
		outfile__array_Core_1_Ut.write(reinterpret_cast<char*>(_array_Core_1_Ut), 1*sizeof(_array_Core_1_Ut[0]));
		outfile__array_Core_1_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ut." << endl;
	}
	ofstream outfile__array_Core_1_Va;
	outfile__array_Core_1_Va.open("results/_array_Core_1_Va_7485414231101877309", ios::binary | ios::out);
	if(outfile__array_Core_1_Va.is_open())
	{
		outfile__array_Core_1_Va.write(reinterpret_cast<char*>(_array_Core_1_Va), 256*sizeof(_array_Core_1_Va[0]));
		outfile__array_Core_1_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Va." << endl;
	}
	ofstream outfile__array_Core_1_Vw;
	outfile__array_Core_1_Vw.open("results/_array_Core_1_Vw_3214945306484487859", ios::binary | ios::out);
	if(outfile__array_Core_1_Vw.is_open())
	{
		outfile__array_Core_1_Vw.write(reinterpret_cast<char*>(_array_Core_1_Vw), 256*sizeof(_array_Core_1_Vw[0]));
		outfile__array_Core_1_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Vw." << endl;
	}
	ofstream outfile__array_Core_2__spikespace;
	outfile__array_Core_2__spikespace.open("results/_array_Core_2__spikespace_2399442882668601608", ios::binary | ios::out);
	if(outfile__array_Core_2__spikespace.is_open())
	{
		outfile__array_Core_2__spikespace.write(reinterpret_cast<char*>(_array_Core_2__spikespace), 257*sizeof(_array_Core_2__spikespace[0]));
		outfile__array_Core_2__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2__spikespace." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ahp;
	outfile__array_Core_2_alpha_ahp.open("results/_array_Core_2_alpha_ahp_-1301964104334586456", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ahp.is_open())
	{
		outfile__array_Core_2_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_2_alpha_ahp), 256*sizeof(_array_Core_2_alpha_ahp[0]));
		outfile__array_Core_2_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ampa;
	outfile__array_Core_2_alpha_ampa.open("results/_array_Core_2_alpha_ampa_8011242495931627927", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ampa.is_open())
	{
		outfile__array_Core_2_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_2_alpha_ampa), 256*sizeof(_array_Core_2_alpha_ampa[0]));
		outfile__array_Core_2_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ampa_std;
	outfile__array_Core_2_alpha_ampa_std.open("results/_array_Core_2_alpha_ampa_std_4142800875945828407", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ampa_std.is_open())
	{
		outfile__array_Core_2_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_2_alpha_ampa_std), 256*sizeof(_array_Core_2_alpha_ampa_std[0]));
		outfile__array_Core_2_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_2_alpha_gaba_a;
	outfile__array_Core_2_alpha_gaba_a.open("results/_array_Core_2_alpha_gaba_a_6013112904972970421", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_gaba_a.is_open())
	{
		outfile__array_Core_2_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_alpha_gaba_a), 256*sizeof(_array_Core_2_alpha_gaba_a[0]));
		outfile__array_Core_2_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_alpha_gaba_b;
	outfile__array_Core_2_alpha_gaba_b.open("results/_array_Core_2_alpha_gaba_b_-2290636442927698993", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_gaba_b.is_open())
	{
		outfile__array_Core_2_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_alpha_gaba_b), 256*sizeof(_array_Core_2_alpha_gaba_b[0]));
		outfile__array_Core_2_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_alpha_nmda;
	outfile__array_Core_2_alpha_nmda.open("results/_array_Core_2_alpha_nmda_-7766040442831156971", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_nmda.is_open())
	{
		outfile__array_Core_2_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_2_alpha_nmda), 256*sizeof(_array_Core_2_alpha_nmda[0]));
		outfile__array_Core_2_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_2_alpha_soma;
	outfile__array_Core_2_alpha_soma.open("results/_array_Core_2_alpha_soma_5600280628918168970", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_soma.is_open())
	{
		outfile__array_Core_2_alpha_soma.write(reinterpret_cast<char*>(_array_Core_2_alpha_soma), 256*sizeof(_array_Core_2_alpha_soma[0]));
		outfile__array_Core_2_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_2_Campa;
	outfile__array_Core_2_Campa.open("results/_array_Core_2_Campa_361658018746983467", ios::binary | ios::out);
	if(outfile__array_Core_2_Campa.is_open())
	{
		outfile__array_Core_2_Campa.write(reinterpret_cast<char*>(_array_Core_2_Campa), 256*sizeof(_array_Core_2_Campa[0]));
		outfile__array_Core_2_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Campa." << endl;
	}
	ofstream outfile__array_Core_2_Campa_std;
	outfile__array_Core_2_Campa_std.open("results/_array_Core_2_Campa_std_1525110791753825946", ios::binary | ios::out);
	if(outfile__array_Core_2_Campa_std.is_open())
	{
		outfile__array_Core_2_Campa_std.write(reinterpret_cast<char*>(_array_Core_2_Campa_std), 256*sizeof(_array_Core_2_Campa_std[0]));
		outfile__array_Core_2_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Campa_std." << endl;
	}
	ofstream outfile__array_Core_2_Cgaba_a;
	outfile__array_Core_2_Cgaba_a.open("results/_array_Core_2_Cgaba_a_-993532736804163557", ios::binary | ios::out);
	if(outfile__array_Core_2_Cgaba_a.is_open())
	{
		outfile__array_Core_2_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_2_Cgaba_a), 256*sizeof(_array_Core_2_Cgaba_a[0]));
		outfile__array_Core_2_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_2_Cgaba_b;
	outfile__array_Core_2_Cgaba_b.open("results/_array_Core_2_Cgaba_b_-1204147690493377579", ios::binary | ios::out);
	if(outfile__array_Core_2_Cgaba_b.is_open())
	{
		outfile__array_Core_2_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_2_Cgaba_b), 256*sizeof(_array_Core_2_Cgaba_b[0]));
		outfile__array_Core_2_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_2_Cnmda;
	outfile__array_Core_2_Cnmda.open("results/_array_Core_2_Cnmda_4985701926238202533", ios::binary | ios::out);
	if(outfile__array_Core_2_Cnmda.is_open())
	{
		outfile__array_Core_2_Cnmda.write(reinterpret_cast<char*>(_array_Core_2_Cnmda), 256*sizeof(_array_Core_2_Cnmda[0]));
		outfile__array_Core_2_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cnmda." << endl;
	}
	ofstream outfile__array_Core_2_Csoma_ahp;
	outfile__array_Core_2_Csoma_ahp.open("results/_array_Core_2_Csoma_ahp_709440788582475217", ios::binary | ios::out);
	if(outfile__array_Core_2_Csoma_ahp.is_open())
	{
		outfile__array_Core_2_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_2_Csoma_ahp), 1*sizeof(_array_Core_2_Csoma_ahp[0]));
		outfile__array_Core_2_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_2_Csoma_mem;
	outfile__array_Core_2_Csoma_mem.open("results/_array_Core_2_Csoma_mem_307688550239285987", ios::binary | ios::out);
	if(outfile__array_Core_2_Csoma_mem.is_open())
	{
		outfile__array_Core_2_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_2_Csoma_mem), 1*sizeof(_array_Core_2_Csoma_mem[0]));
		outfile__array_Core_2_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_2_i;
	outfile__array_Core_2_i.open("results/_array_Core_2_i_-5490308200700173934", ios::binary | ios::out);
	if(outfile__array_Core_2_i.is_open())
	{
		outfile__array_Core_2_i.write(reinterpret_cast<char*>(_array_Core_2_i), 256*sizeof(_array_Core_2_i[0]));
		outfile__array_Core_2_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_i." << endl;
	}
	ofstream outfile__array_Core_2_I0;
	outfile__array_Core_2_I0.open("results/_array_Core_2_I0_45270561860437680", ios::binary | ios::out);
	if(outfile__array_Core_2_I0.is_open())
	{
		outfile__array_Core_2_I0.write(reinterpret_cast<char*>(_array_Core_2_I0), 1*sizeof(_array_Core_2_I0[0]));
		outfile__array_Core_2_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I0." << endl;
	}
	ofstream outfile__array_Core_2_Iampa;
	outfile__array_Core_2_Iampa.open("results/_array_Core_2_Iampa_-2579307660463382751", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa.is_open())
	{
		outfile__array_Core_2_Iampa.write(reinterpret_cast<char*>(_array_Core_2_Iampa), 256*sizeof(_array_Core_2_Iampa[0]));
		outfile__array_Core_2_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_std;
	outfile__array_Core_2_Iampa_std.open("results/_array_Core_2_Iampa_std_5822191366846911223", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_std.is_open())
	{
		outfile__array_Core_2_Iampa_std.write(reinterpret_cast<char*>(_array_Core_2_Iampa_std), 256*sizeof(_array_Core_2_Iampa_std[0]));
		outfile__array_Core_2_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_std_tau;
	outfile__array_Core_2_Iampa_std_tau.open("results/_array_Core_2_Iampa_std_tau_-3485814733472794913", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_std_tau.is_open())
	{
		outfile__array_Core_2_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_2_Iampa_std_tau), 256*sizeof(_array_Core_2_Iampa_std_tau[0]));
		outfile__array_Core_2_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_tau;
	outfile__array_Core_2_Iampa_tau.open("results/_array_Core_2_Iampa_tau_891923408023638320", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_tau.is_open())
	{
		outfile__array_Core_2_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_2_Iampa_tau), 256*sizeof(_array_Core_2_Iampa_tau[0]));
		outfile__array_Core_2_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_w0;
	outfile__array_Core_2_Iampa_w0.open("results/_array_Core_2_Iampa_w0_2949492847627473096", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_w0.is_open())
	{
		outfile__array_Core_2_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_2_Iampa_w0), 256*sizeof(_array_Core_2_Iampa_w0[0]));
		outfile__array_Core_2_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_2_Idischarge_w;
	outfile__array_Core_2_Idischarge_w.open("results/_array_Core_2_Idischarge_w_7074624257089098448", ios::binary | ios::out);
	if(outfile__array_Core_2_Idischarge_w.is_open())
	{
		outfile__array_Core_2_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_2_Idischarge_w), 256*sizeof(_array_Core_2_Idischarge_w[0]));
		outfile__array_Core_2_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a;
	outfile__array_Core_2_Igaba_a.open("results/_array_Core_2_Igaba_a_-8455221483912032336", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a.is_open())
	{
		outfile__array_Core_2_Igaba_a.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a), 256*sizeof(_array_Core_2_Igaba_a[0]));
		outfile__array_Core_2_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a_tau;
	outfile__array_Core_2_Igaba_a_tau.open("results/_array_Core_2_Igaba_a_tau_-2522025925699000431", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a_tau.is_open())
	{
		outfile__array_Core_2_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a_tau), 256*sizeof(_array_Core_2_Igaba_a_tau[0]));
		outfile__array_Core_2_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a_w0;
	outfile__array_Core_2_Igaba_a_w0.open("results/_array_Core_2_Igaba_a_w0_-5528795662160223530", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a_w0.is_open())
	{
		outfile__array_Core_2_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a_w0), 256*sizeof(_array_Core_2_Igaba_a_w0[0]));
		outfile__array_Core_2_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b;
	outfile__array_Core_2_Igaba_b.open("results/_array_Core_2_Igaba_b_7041491744407956584", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b.is_open())
	{
		outfile__array_Core_2_Igaba_b.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b), 256*sizeof(_array_Core_2_Igaba_b[0]));
		outfile__array_Core_2_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b_tau;
	outfile__array_Core_2_Igaba_b_tau.open("results/_array_Core_2_Igaba_b_tau_8131382391491183945", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b_tau.is_open())
	{
		outfile__array_Core_2_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b_tau), 256*sizeof(_array_Core_2_Igaba_b_tau[0]));
		outfile__array_Core_2_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b_w0;
	outfile__array_Core_2_Igaba_b_w0.open("results/_array_Core_2_Igaba_b_w0_-8987842863985324149", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b_w0.is_open())
	{
		outfile__array_Core_2_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b_w0), 256*sizeof(_array_Core_2_Igaba_b_w0[0]));
		outfile__array_Core_2_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_2_Inmda;
	outfile__array_Core_2_Inmda.open("results/_array_Core_2_Inmda_-7929830746069322172", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda.is_open())
	{
		outfile__array_Core_2_Inmda.write(reinterpret_cast<char*>(_array_Core_2_Inmda), 256*sizeof(_array_Core_2_Inmda[0]));
		outfile__array_Core_2_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_tau;
	outfile__array_Core_2_Inmda_tau.open("results/_array_Core_2_Inmda_tau_7729324450044430413", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_tau.is_open())
	{
		outfile__array_Core_2_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_2_Inmda_tau), 256*sizeof(_array_Core_2_Inmda_tau[0]));
		outfile__array_Core_2_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_thr;
	outfile__array_Core_2_Inmda_thr.open("results/_array_Core_2_Inmda_thr_-5526649459579346214", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_thr.is_open())
	{
		outfile__array_Core_2_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_2_Inmda_thr), 256*sizeof(_array_Core_2_Inmda_thr[0]));
		outfile__array_Core_2_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_w0;
	outfile__array_Core_2_Inmda_w0.open("results/_array_Core_2_Inmda_w0_2147219097575958051", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_w0.is_open())
	{
		outfile__array_Core_2_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_2_Inmda_w0), 256*sizeof(_array_Core_2_Inmda_w0[0]));
		outfile__array_Core_2_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp;
	outfile__array_Core_2_Isoma_ahp.open("results/_array_Core_2_Isoma_ahp_8003737735355872259", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp.is_open())
	{
		outfile__array_Core_2_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp), 256*sizeof(_array_Core_2_Isoma_ahp[0]));
		outfile__array_Core_2_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_g;
	outfile__array_Core_2_Isoma_ahp_g.open("results/_array_Core_2_Isoma_ahp_g_6507074513860271421", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_g), 1*sizeof(_array_Core_2_Isoma_ahp_g[0]));
		outfile__array_Core_2_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_tau;
	outfile__array_Core_2_Isoma_ahp_tau.open("results/_array_Core_2_Isoma_ahp_tau_7455770617277820886", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_tau), 1*sizeof(_array_Core_2_Isoma_ahp_tau[0]));
		outfile__array_Core_2_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_w;
	outfile__array_Core_2_Isoma_ahp_w.open("results/_array_Core_2_Isoma_ahp_w_9194560995714662037", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_w), 256*sizeof(_array_Core_2_Isoma_ahp_w[0]));
		outfile__array_Core_2_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_const;
	outfile__array_Core_2_Isoma_const.open("results/_array_Core_2_Isoma_const_1155719178471540126", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_const.is_open())
	{
		outfile__array_Core_2_Isoma_const.write(reinterpret_cast<char*>(_array_Core_2_Isoma_const), 256*sizeof(_array_Core_2_Isoma_const[0]));
		outfile__array_Core_2_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_dpi_tau;
	outfile__array_Core_2_Isoma_dpi_tau.open("results/_array_Core_2_Isoma_dpi_tau_7381918665116973027", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_2_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_2_Isoma_dpi_tau), 1*sizeof(_array_Core_2_Isoma_dpi_tau[0]));
		outfile__array_Core_2_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_mem;
	outfile__array_Core_2_Isoma_mem.open("results/_array_Core_2_Isoma_mem_-3622819674717239140", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_mem.is_open())
	{
		outfile__array_Core_2_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_2_Isoma_mem), 256*sizeof(_array_Core_2_Isoma_mem[0]));
		outfile__array_Core_2_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_gain;
	outfile__array_Core_2_Isoma_pfb_gain.open("results/_array_Core_2_Isoma_pfb_gain_7792535579716712479", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_gain), 1*sizeof(_array_Core_2_Isoma_pfb_gain[0]));
		outfile__array_Core_2_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_norm;
	outfile__array_Core_2_Isoma_pfb_norm.open("results/_array_Core_2_Isoma_pfb_norm_-2228993529119642290", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_norm), 1*sizeof(_array_Core_2_Isoma_pfb_norm[0]));
		outfile__array_Core_2_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_th;
	outfile__array_Core_2_Isoma_pfb_th.open("results/_array_Core_2_Isoma_pfb_th_-6359690355921209443", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_th), 1*sizeof(_array_Core_2_Isoma_pfb_th[0]));
		outfile__array_Core_2_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_reset;
	outfile__array_Core_2_Isoma_reset.open("results/_array_Core_2_Isoma_reset_4390692042133555380", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_reset.is_open())
	{
		outfile__array_Core_2_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_2_Isoma_reset), 1*sizeof(_array_Core_2_Isoma_reset[0]));
		outfile__array_Core_2_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_th;
	outfile__array_Core_2_Isoma_th.open("results/_array_Core_2_Isoma_th_-3119482352393960904", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_th.is_open())
	{
		outfile__array_Core_2_Isoma_th.write(reinterpret_cast<char*>(_array_Core_2_Isoma_th), 1*sizeof(_array_Core_2_Isoma_th[0]));
		outfile__array_Core_2_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_2_kn;
	outfile__array_Core_2_kn.open("results/_array_Core_2_kn_-7018323791953287924", ios::binary | ios::out);
	if(outfile__array_Core_2_kn.is_open())
	{
		outfile__array_Core_2_kn.write(reinterpret_cast<char*>(_array_Core_2_kn), 1*sizeof(_array_Core_2_kn[0]));
		outfile__array_Core_2_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kn." << endl;
	}
	ofstream outfile__array_Core_2_kp;
	outfile__array_Core_2_kp.open("results/_array_Core_2_kp_-1166075665834970356", ios::binary | ios::out);
	if(outfile__array_Core_2_kp.is_open())
	{
		outfile__array_Core_2_kp.write(reinterpret_cast<char*>(_array_Core_2_kp), 1*sizeof(_array_Core_2_kp[0]));
		outfile__array_Core_2_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kp." << endl;
	}
	ofstream outfile__array_Core_2_lastspike;
	outfile__array_Core_2_lastspike.open("results/_array_Core_2_lastspike_1838905217878463457", ios::binary | ios::out);
	if(outfile__array_Core_2_lastspike.is_open())
	{
		outfile__array_Core_2_lastspike.write(reinterpret_cast<char*>(_array_Core_2_lastspike), 256*sizeof(_array_Core_2_lastspike[0]));
		outfile__array_Core_2_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_lastspike." << endl;
	}
	ofstream outfile__array_Core_2_not_refractory;
	outfile__array_Core_2_not_refractory.open("results/_array_Core_2_not_refractory_-4318214657786883413", ios::binary | ios::out);
	if(outfile__array_Core_2_not_refractory.is_open())
	{
		outfile__array_Core_2_not_refractory.write(reinterpret_cast<char*>(_array_Core_2_not_refractory), 256*sizeof(_array_Core_2_not_refractory[0]));
		outfile__array_Core_2_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_not_refractory." << endl;
	}
	ofstream outfile__array_Core_2_soma_refP;
	outfile__array_Core_2_soma_refP.open("results/_array_Core_2_soma_refP_2096829400346980520", ios::binary | ios::out);
	if(outfile__array_Core_2_soma_refP.is_open())
	{
		outfile__array_Core_2_soma_refP.write(reinterpret_cast<char*>(_array_Core_2_soma_refP), 1*sizeof(_array_Core_2_soma_refP[0]));
		outfile__array_Core_2_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_soma_refP." << endl;
	}
	ofstream outfile__array_Core_2_std_pulse;
	outfile__array_Core_2_std_pulse.open("results/_array_Core_2_std_pulse_-3260893395105805296", ios::binary | ios::out);
	if(outfile__array_Core_2_std_pulse.is_open())
	{
		outfile__array_Core_2_std_pulse.write(reinterpret_cast<char*>(_array_Core_2_std_pulse), 256*sizeof(_array_Core_2_std_pulse[0]));
		outfile__array_Core_2_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_std_pulse." << endl;
	}
	ofstream outfile__array_Core_2_subgroup__sub_idx;
	outfile__array_Core_2_subgroup__sub_idx.open("results/_array_Core_2_subgroup__sub_idx_-4432504605827051529", ios::binary | ios::out);
	if(outfile__array_Core_2_subgroup__sub_idx.is_open())
	{
		outfile__array_Core_2_subgroup__sub_idx.write(reinterpret_cast<char*>(_array_Core_2_subgroup__sub_idx), 6*sizeof(_array_Core_2_subgroup__sub_idx[0]));
		outfile__array_Core_2_subgroup__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_subgroup__sub_idx." << endl;
	}
	ofstream outfile__array_Core_2_tau_pulse;
	outfile__array_Core_2_tau_pulse.open("results/_array_Core_2_tau_pulse_-2774080567326404795", ios::binary | ios::out);
	if(outfile__array_Core_2_tau_pulse.is_open())
	{
		outfile__array_Core_2_tau_pulse.write(reinterpret_cast<char*>(_array_Core_2_tau_pulse), 256*sizeof(_array_Core_2_tau_pulse[0]));
		outfile__array_Core_2_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_2_Ut;
	outfile__array_Core_2_Ut.open("results/_array_Core_2_Ut_5457723664666287015", ios::binary | ios::out);
	if(outfile__array_Core_2_Ut.is_open())
	{
		outfile__array_Core_2_Ut.write(reinterpret_cast<char*>(_array_Core_2_Ut), 1*sizeof(_array_Core_2_Ut[0]));
		outfile__array_Core_2_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ut." << endl;
	}
	ofstream outfile__array_Core_2_Va;
	outfile__array_Core_2_Va.open("results/_array_Core_2_Va_-8144644940270858133", ios::binary | ios::out);
	if(outfile__array_Core_2_Va.is_open())
	{
		outfile__array_Core_2_Va.write(reinterpret_cast<char*>(_array_Core_2_Va), 256*sizeof(_array_Core_2_Va[0]));
		outfile__array_Core_2_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Va." << endl;
	}
	ofstream outfile__array_Core_2_Vw;
	outfile__array_Core_2_Vw.open("results/_array_Core_2_Vw_-521075680810817012", ios::binary | ios::out);
	if(outfile__array_Core_2_Vw.is_open())
	{
		outfile__array_Core_2_Vw.write(reinterpret_cast<char*>(_array_Core_2_Vw), 256*sizeof(_array_Core_2_Vw[0]));
		outfile__array_Core_2_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Vw." << endl;
	}
	ofstream outfile__array_Core_3__spikespace;
	outfile__array_Core_3__spikespace.open("results/_array_Core_3__spikespace_1081993502011618862", ios::binary | ios::out);
	if(outfile__array_Core_3__spikespace.is_open())
	{
		outfile__array_Core_3__spikespace.write(reinterpret_cast<char*>(_array_Core_3__spikespace), 257*sizeof(_array_Core_3__spikespace[0]));
		outfile__array_Core_3__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3__spikespace." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ahp;
	outfile__array_Core_3_alpha_ahp.open("results/_array_Core_3_alpha_ahp_1132243563471962550", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ahp.is_open())
	{
		outfile__array_Core_3_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_3_alpha_ahp), 256*sizeof(_array_Core_3_alpha_ahp[0]));
		outfile__array_Core_3_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ampa;
	outfile__array_Core_3_alpha_ampa.open("results/_array_Core_3_alpha_ampa_6078501933139085796", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ampa.is_open())
	{
		outfile__array_Core_3_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_3_alpha_ampa), 256*sizeof(_array_Core_3_alpha_ampa[0]));
		outfile__array_Core_3_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ampa_std;
	outfile__array_Core_3_alpha_ampa_std.open("results/_array_Core_3_alpha_ampa_std_3850799971260046335", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ampa_std.is_open())
	{
		outfile__array_Core_3_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_3_alpha_ampa_std), 256*sizeof(_array_Core_3_alpha_ampa_std[0]));
		outfile__array_Core_3_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_3_alpha_gaba_a;
	outfile__array_Core_3_alpha_gaba_a.open("results/_array_Core_3_alpha_gaba_a_-7079039289694288132", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_gaba_a.is_open())
	{
		outfile__array_Core_3_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_alpha_gaba_a), 256*sizeof(_array_Core_3_alpha_gaba_a[0]));
		outfile__array_Core_3_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_alpha_gaba_b;
	outfile__array_Core_3_alpha_gaba_b.open("results/_array_Core_3_alpha_gaba_b_3287338245830101066", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_gaba_b.is_open())
	{
		outfile__array_Core_3_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_alpha_gaba_b), 256*sizeof(_array_Core_3_alpha_gaba_b[0]));
		outfile__array_Core_3_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_alpha_nmda;
	outfile__array_Core_3_alpha_nmda.open("results/_array_Core_3_alpha_nmda_-562951185877706075", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_nmda.is_open())
	{
		outfile__array_Core_3_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_3_alpha_nmda), 256*sizeof(_array_Core_3_alpha_nmda[0]));
		outfile__array_Core_3_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_3_alpha_soma;
	outfile__array_Core_3_alpha_soma.open("results/_array_Core_3_alpha_soma_-2854188059284856500", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_soma.is_open())
	{
		outfile__array_Core_3_alpha_soma.write(reinterpret_cast<char*>(_array_Core_3_alpha_soma), 256*sizeof(_array_Core_3_alpha_soma[0]));
		outfile__array_Core_3_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_3_Campa;
	outfile__array_Core_3_Campa.open("results/_array_Core_3_Campa_441947152157546843", ios::binary | ios::out);
	if(outfile__array_Core_3_Campa.is_open())
	{
		outfile__array_Core_3_Campa.write(reinterpret_cast<char*>(_array_Core_3_Campa), 256*sizeof(_array_Core_3_Campa[0]));
		outfile__array_Core_3_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Campa." << endl;
	}
	ofstream outfile__array_Core_3_Campa_std;
	outfile__array_Core_3_Campa_std.open("results/_array_Core_3_Campa_std_8928374849252512960", ios::binary | ios::out);
	if(outfile__array_Core_3_Campa_std.is_open())
	{
		outfile__array_Core_3_Campa_std.write(reinterpret_cast<char*>(_array_Core_3_Campa_std), 256*sizeof(_array_Core_3_Campa_std[0]));
		outfile__array_Core_3_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Campa_std." << endl;
	}
	ofstream outfile__array_Core_3_Cgaba_a;
	outfile__array_Core_3_Cgaba_a.open("results/_array_Core_3_Cgaba_a_-2287197787262717625", ios::binary | ios::out);
	if(outfile__array_Core_3_Cgaba_a.is_open())
	{
		outfile__array_Core_3_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_3_Cgaba_a), 256*sizeof(_array_Core_3_Cgaba_a[0]));
		outfile__array_Core_3_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_3_Cgaba_b;
	outfile__array_Core_3_Cgaba_b.open("results/_array_Core_3_Cgaba_b_5453354337409780523", ios::binary | ios::out);
	if(outfile__array_Core_3_Cgaba_b.is_open())
	{
		outfile__array_Core_3_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_3_Cgaba_b), 256*sizeof(_array_Core_3_Cgaba_b[0]));
		outfile__array_Core_3_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_3_Cnmda;
	outfile__array_Core_3_Cnmda.open("results/_array_Core_3_Cnmda_-6459054155504540865", ios::binary | ios::out);
	if(outfile__array_Core_3_Cnmda.is_open())
	{
		outfile__array_Core_3_Cnmda.write(reinterpret_cast<char*>(_array_Core_3_Cnmda), 256*sizeof(_array_Core_3_Cnmda[0]));
		outfile__array_Core_3_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cnmda." << endl;
	}
	ofstream outfile__array_Core_3_Csoma_ahp;
	outfile__array_Core_3_Csoma_ahp.open("results/_array_Core_3_Csoma_ahp_4296873163018753103", ios::binary | ios::out);
	if(outfile__array_Core_3_Csoma_ahp.is_open())
	{
		outfile__array_Core_3_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_3_Csoma_ahp), 1*sizeof(_array_Core_3_Csoma_ahp[0]));
		outfile__array_Core_3_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_3_Csoma_mem;
	outfile__array_Core_3_Csoma_mem.open("results/_array_Core_3_Csoma_mem_-4305528797087178364", ios::binary | ios::out);
	if(outfile__array_Core_3_Csoma_mem.is_open())
	{
		outfile__array_Core_3_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_3_Csoma_mem), 1*sizeof(_array_Core_3_Csoma_mem[0]));
		outfile__array_Core_3_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_3_i;
	outfile__array_Core_3_i.open("results/_array_Core_3_i_-3610763320569174427", ios::binary | ios::out);
	if(outfile__array_Core_3_i.is_open())
	{
		outfile__array_Core_3_i.write(reinterpret_cast<char*>(_array_Core_3_i), 256*sizeof(_array_Core_3_i[0]));
		outfile__array_Core_3_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_i." << endl;
	}
	ofstream outfile__array_Core_3_I0;
	outfile__array_Core_3_I0.open("results/_array_Core_3_I0_-187618174951466000", ios::binary | ios::out);
	if(outfile__array_Core_3_I0.is_open())
	{
		outfile__array_Core_3_I0.write(reinterpret_cast<char*>(_array_Core_3_I0), 1*sizeof(_array_Core_3_I0[0]));
		outfile__array_Core_3_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I0." << endl;
	}
	ofstream outfile__array_Core_3_Iampa;
	outfile__array_Core_3_Iampa.open("results/_array_Core_3_Iampa_-7218555551734204927", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa.is_open())
	{
		outfile__array_Core_3_Iampa.write(reinterpret_cast<char*>(_array_Core_3_Iampa), 256*sizeof(_array_Core_3_Iampa[0]));
		outfile__array_Core_3_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_std;
	outfile__array_Core_3_Iampa_std.open("results/_array_Core_3_Iampa_std_2133225094691766827", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_std.is_open())
	{
		outfile__array_Core_3_Iampa_std.write(reinterpret_cast<char*>(_array_Core_3_Iampa_std), 256*sizeof(_array_Core_3_Iampa_std[0]));
		outfile__array_Core_3_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_std_tau;
	outfile__array_Core_3_Iampa_std_tau.open("results/_array_Core_3_Iampa_std_tau_869272368717703084", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_std_tau.is_open())
	{
		outfile__array_Core_3_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_3_Iampa_std_tau), 256*sizeof(_array_Core_3_Iampa_std_tau[0]));
		outfile__array_Core_3_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_tau;
	outfile__array_Core_3_Iampa_tau.open("results/_array_Core_3_Iampa_tau_4010992528541300012", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_tau.is_open())
	{
		outfile__array_Core_3_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_3_Iampa_tau), 256*sizeof(_array_Core_3_Iampa_tau[0]));
		outfile__array_Core_3_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_w0;
	outfile__array_Core_3_Iampa_w0.open("results/_array_Core_3_Iampa_w0_-3763879873546578661", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_w0.is_open())
	{
		outfile__array_Core_3_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_3_Iampa_w0), 256*sizeof(_array_Core_3_Iampa_w0[0]));
		outfile__array_Core_3_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_3_Idischarge_w;
	outfile__array_Core_3_Idischarge_w.open("results/_array_Core_3_Idischarge_w_-6297723301228520475", ios::binary | ios::out);
	if(outfile__array_Core_3_Idischarge_w.is_open())
	{
		outfile__array_Core_3_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_3_Idischarge_w), 256*sizeof(_array_Core_3_Idischarge_w[0]));
		outfile__array_Core_3_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a;
	outfile__array_Core_3_Igaba_a.open("results/_array_Core_3_Igaba_a_537606391693186911", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a.is_open())
	{
		outfile__array_Core_3_Igaba_a.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a), 256*sizeof(_array_Core_3_Igaba_a[0]));
		outfile__array_Core_3_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a_tau;
	outfile__array_Core_3_Igaba_a_tau.open("results/_array_Core_3_Igaba_a_tau_-5316740749365847082", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a_tau.is_open())
	{
		outfile__array_Core_3_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a_tau), 256*sizeof(_array_Core_3_Igaba_a_tau[0]));
		outfile__array_Core_3_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a_w0;
	outfile__array_Core_3_Igaba_a_w0.open("results/_array_Core_3_Igaba_a_w0_-2242475160378783852", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a_w0.is_open())
	{
		outfile__array_Core_3_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a_w0), 256*sizeof(_array_Core_3_Igaba_a_w0[0]));
		outfile__array_Core_3_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b;
	outfile__array_Core_3_Igaba_b.open("results/_array_Core_3_Igaba_b_-1285015623978401165", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b.is_open())
	{
		outfile__array_Core_3_Igaba_b.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b), 256*sizeof(_array_Core_3_Igaba_b[0]));
		outfile__array_Core_3_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b_tau;
	outfile__array_Core_3_Igaba_b_tau.open("results/_array_Core_3_Igaba_b_tau_-6477085438840645328", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b_tau.is_open())
	{
		outfile__array_Core_3_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b_tau), 256*sizeof(_array_Core_3_Igaba_b_tau[0]));
		outfile__array_Core_3_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b_w0;
	outfile__array_Core_3_Igaba_b_w0.open("results/_array_Core_3_Igaba_b_w0_-9125538207789113535", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b_w0.is_open())
	{
		outfile__array_Core_3_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b_w0), 256*sizeof(_array_Core_3_Igaba_b_w0[0]));
		outfile__array_Core_3_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_3_Inmda;
	outfile__array_Core_3_Inmda.open("results/_array_Core_3_Inmda_-113389475577020992", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda.is_open())
	{
		outfile__array_Core_3_Inmda.write(reinterpret_cast<char*>(_array_Core_3_Inmda), 256*sizeof(_array_Core_3_Inmda[0]));
		outfile__array_Core_3_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_tau;
	outfile__array_Core_3_Inmda_tau.open("results/_array_Core_3_Inmda_tau_-8596638369760419008", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_tau.is_open())
	{
		outfile__array_Core_3_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_3_Inmda_tau), 256*sizeof(_array_Core_3_Inmda_tau[0]));
		outfile__array_Core_3_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_thr;
	outfile__array_Core_3_Inmda_thr.open("results/_array_Core_3_Inmda_thr_4656123900743425126", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_thr.is_open())
	{
		outfile__array_Core_3_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_3_Inmda_thr), 256*sizeof(_array_Core_3_Inmda_thr[0]));
		outfile__array_Core_3_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_w0;
	outfile__array_Core_3_Inmda_w0.open("results/_array_Core_3_Inmda_w0_5181891991821153778", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_w0.is_open())
	{
		outfile__array_Core_3_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_3_Inmda_w0), 256*sizeof(_array_Core_3_Inmda_w0[0]));
		outfile__array_Core_3_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp;
	outfile__array_Core_3_Isoma_ahp.open("results/_array_Core_3_Isoma_ahp_-3294339250726680399", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp.is_open())
	{
		outfile__array_Core_3_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp), 256*sizeof(_array_Core_3_Isoma_ahp[0]));
		outfile__array_Core_3_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_g;
	outfile__array_Core_3_Isoma_ahp_g.open("results/_array_Core_3_Isoma_ahp_g_-3669998575590214956", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_g), 1*sizeof(_array_Core_3_Isoma_ahp_g[0]));
		outfile__array_Core_3_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_tau;
	outfile__array_Core_3_Isoma_ahp_tau.open("results/_array_Core_3_Isoma_ahp_tau_4869507012278542177", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_tau), 1*sizeof(_array_Core_3_Isoma_ahp_tau[0]));
		outfile__array_Core_3_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_w;
	outfile__array_Core_3_Isoma_ahp_w.open("results/_array_Core_3_Isoma_ahp_w_-7433638423875794205", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_w), 256*sizeof(_array_Core_3_Isoma_ahp_w[0]));
		outfile__array_Core_3_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_const;
	outfile__array_Core_3_Isoma_const.open("results/_array_Core_3_Isoma_const_-7326580891486141358", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_const.is_open())
	{
		outfile__array_Core_3_Isoma_const.write(reinterpret_cast<char*>(_array_Core_3_Isoma_const), 256*sizeof(_array_Core_3_Isoma_const[0]));
		outfile__array_Core_3_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_dpi_tau;
	outfile__array_Core_3_Isoma_dpi_tau.open("results/_array_Core_3_Isoma_dpi_tau_7165050867151401849", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_3_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_3_Isoma_dpi_tau), 1*sizeof(_array_Core_3_Isoma_dpi_tau[0]));
		outfile__array_Core_3_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_mem;
	outfile__array_Core_3_Isoma_mem.open("results/_array_Core_3_Isoma_mem_-8137307542742112564", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_mem.is_open())
	{
		outfile__array_Core_3_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_3_Isoma_mem), 256*sizeof(_array_Core_3_Isoma_mem[0]));
		outfile__array_Core_3_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_gain;
	outfile__array_Core_3_Isoma_pfb_gain.open("results/_array_Core_3_Isoma_pfb_gain_-2878629215787733930", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_gain), 1*sizeof(_array_Core_3_Isoma_pfb_gain[0]));
		outfile__array_Core_3_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_norm;
	outfile__array_Core_3_Isoma_pfb_norm.open("results/_array_Core_3_Isoma_pfb_norm_-2768487376906175351", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_norm), 1*sizeof(_array_Core_3_Isoma_pfb_norm[0]));
		outfile__array_Core_3_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_th;
	outfile__array_Core_3_Isoma_pfb_th.open("results/_array_Core_3_Isoma_pfb_th_-6165344904744282474", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_th), 1*sizeof(_array_Core_3_Isoma_pfb_th[0]));
		outfile__array_Core_3_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_reset;
	outfile__array_Core_3_Isoma_reset.open("results/_array_Core_3_Isoma_reset_7137414259934805839", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_reset.is_open())
	{
		outfile__array_Core_3_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_3_Isoma_reset), 1*sizeof(_array_Core_3_Isoma_reset[0]));
		outfile__array_Core_3_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_th;
	outfile__array_Core_3_Isoma_th.open("results/_array_Core_3_Isoma_th_-4565310234260567916", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_th.is_open())
	{
		outfile__array_Core_3_Isoma_th.write(reinterpret_cast<char*>(_array_Core_3_Isoma_th), 1*sizeof(_array_Core_3_Isoma_th[0]));
		outfile__array_Core_3_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_3_kn;
	outfile__array_Core_3_kn.open("results/_array_Core_3_kn_-5147364675296971833", ios::binary | ios::out);
	if(outfile__array_Core_3_kn.is_open())
	{
		outfile__array_Core_3_kn.write(reinterpret_cast<char*>(_array_Core_3_kn), 1*sizeof(_array_Core_3_kn[0]));
		outfile__array_Core_3_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kn." << endl;
	}
	ofstream outfile__array_Core_3_kp;
	outfile__array_Core_3_kp.open("results/_array_Core_3_kp_4116891428012717070", ios::binary | ios::out);
	if(outfile__array_Core_3_kp.is_open())
	{
		outfile__array_Core_3_kp.write(reinterpret_cast<char*>(_array_Core_3_kp), 1*sizeof(_array_Core_3_kp[0]));
		outfile__array_Core_3_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kp." << endl;
	}
	ofstream outfile__array_Core_3_lastspike;
	outfile__array_Core_3_lastspike.open("results/_array_Core_3_lastspike_-412769178676685636", ios::binary | ios::out);
	if(outfile__array_Core_3_lastspike.is_open())
	{
		outfile__array_Core_3_lastspike.write(reinterpret_cast<char*>(_array_Core_3_lastspike), 256*sizeof(_array_Core_3_lastspike[0]));
		outfile__array_Core_3_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_lastspike." << endl;
	}
	ofstream outfile__array_Core_3_not_refractory;
	outfile__array_Core_3_not_refractory.open("results/_array_Core_3_not_refractory_-8084152078193999051", ios::binary | ios::out);
	if(outfile__array_Core_3_not_refractory.is_open())
	{
		outfile__array_Core_3_not_refractory.write(reinterpret_cast<char*>(_array_Core_3_not_refractory), 256*sizeof(_array_Core_3_not_refractory[0]));
		outfile__array_Core_3_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_not_refractory." << endl;
	}
	ofstream outfile__array_Core_3_soma_refP;
	outfile__array_Core_3_soma_refP.open("results/_array_Core_3_soma_refP_-2739157030925036980", ios::binary | ios::out);
	if(outfile__array_Core_3_soma_refP.is_open())
	{
		outfile__array_Core_3_soma_refP.write(reinterpret_cast<char*>(_array_Core_3_soma_refP), 1*sizeof(_array_Core_3_soma_refP[0]));
		outfile__array_Core_3_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_soma_refP." << endl;
	}
	ofstream outfile__array_Core_3_std_pulse;
	outfile__array_Core_3_std_pulse.open("results/_array_Core_3_std_pulse_-7556422507662427154", ios::binary | ios::out);
	if(outfile__array_Core_3_std_pulse.is_open())
	{
		outfile__array_Core_3_std_pulse.write(reinterpret_cast<char*>(_array_Core_3_std_pulse), 256*sizeof(_array_Core_3_std_pulse[0]));
		outfile__array_Core_3_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_std_pulse." << endl;
	}
	ofstream outfile__array_Core_3_subgroup__sub_idx;
	outfile__array_Core_3_subgroup__sub_idx.open("results/_array_Core_3_subgroup__sub_idx_6564648839479305769", ios::binary | ios::out);
	if(outfile__array_Core_3_subgroup__sub_idx.is_open())
	{
		outfile__array_Core_3_subgroup__sub_idx.write(reinterpret_cast<char*>(_array_Core_3_subgroup__sub_idx), 4*sizeof(_array_Core_3_subgroup__sub_idx[0]));
		outfile__array_Core_3_subgroup__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_subgroup__sub_idx." << endl;
	}
	ofstream outfile__array_Core_3_tau_pulse;
	outfile__array_Core_3_tau_pulse.open("results/_array_Core_3_tau_pulse_1317559661685829050", ios::binary | ios::out);
	if(outfile__array_Core_3_tau_pulse.is_open())
	{
		outfile__array_Core_3_tau_pulse.write(reinterpret_cast<char*>(_array_Core_3_tau_pulse), 256*sizeof(_array_Core_3_tau_pulse[0]));
		outfile__array_Core_3_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_3_Ut;
	outfile__array_Core_3_Ut.open("results/_array_Core_3_Ut_1244597730053637891", ios::binary | ios::out);
	if(outfile__array_Core_3_Ut.is_open())
	{
		outfile__array_Core_3_Ut.write(reinterpret_cast<char*>(_array_Core_3_Ut), 1*sizeof(_array_Core_3_Ut[0]));
		outfile__array_Core_3_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ut." << endl;
	}
	ofstream outfile__array_Core_3_Va;
	outfile__array_Core_3_Va.open("results/_array_Core_3_Va_-2801592340027986485", ios::binary | ios::out);
	if(outfile__array_Core_3_Va.is_open())
	{
		outfile__array_Core_3_Va.write(reinterpret_cast<char*>(_array_Core_3_Va), 256*sizeof(_array_Core_3_Va[0]));
		outfile__array_Core_3_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Va." << endl;
	}
	ofstream outfile__array_Core_3_Vw;
	outfile__array_Core_3_Vw.open("results/_array_Core_3_Vw_2024087927186546120", ios::binary | ios::out);
	if(outfile__array_Core_3_Vw.is_open())
	{
		outfile__array_Core_3_Vw.write(reinterpret_cast<char*>(_array_Core_3_Vw), 256*sizeof(_array_Core_3_Vw[0]));
		outfile__array_Core_3_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Vw." << endl;
	}
	ofstream outfile__array_defaultclock_dt;
	outfile__array_defaultclock_dt.open("results/_array_defaultclock_dt_-3167113147187163108", ios::binary | ios::out);
	if(outfile__array_defaultclock_dt.is_open())
	{
		outfile__array_defaultclock_dt.write(reinterpret_cast<char*>(_array_defaultclock_dt), 1*sizeof(_array_defaultclock_dt[0]));
		outfile__array_defaultclock_dt.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_dt." << endl;
	}
	ofstream outfile__array_defaultclock_t;
	outfile__array_defaultclock_t.open("results/_array_defaultclock_t_-2802930849922658996", ios::binary | ios::out);
	if(outfile__array_defaultclock_t.is_open())
	{
		outfile__array_defaultclock_t.write(reinterpret_cast<char*>(_array_defaultclock_t), 1*sizeof(_array_defaultclock_t[0]));
		outfile__array_defaultclock_t.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_t." << endl;
	}
	ofstream outfile__array_defaultclock_timestep;
	outfile__array_defaultclock_timestep.open("results/_array_defaultclock_timestep_7552066152086881841", ios::binary | ios::out);
	if(outfile__array_defaultclock_timestep.is_open())
	{
		outfile__array_defaultclock_timestep.write(reinterpret_cast<char*>(_array_defaultclock_timestep), 1*sizeof(_array_defaultclock_timestep[0]));
		outfile__array_defaultclock_timestep.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_timestep." << endl;
	}
	ofstream outfile__array_GABA_B10_N;
	outfile__array_GABA_B10_N.open("results/_array_GABA_B10_N_-226843671102766703", ios::binary | ios::out);
	if(outfile__array_GABA_B10_N.is_open())
	{
		outfile__array_GABA_B10_N.write(reinterpret_cast<char*>(_array_GABA_B10_N), 1*sizeof(_array_GABA_B10_N[0]));
		outfile__array_GABA_B10_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B10_N." << endl;
	}
	ofstream outfile__array_GABA_B4_N;
	outfile__array_GABA_B4_N.open("results/_array_GABA_B4_N_3358889361117285869", ios::binary | ios::out);
	if(outfile__array_GABA_B4_N.is_open())
	{
		outfile__array_GABA_B4_N.write(reinterpret_cast<char*>(_array_GABA_B4_N), 1*sizeof(_array_GABA_B4_N[0]));
		outfile__array_GABA_B4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B4_N." << endl;
	}
	ofstream outfile__array_GABA_B5_N;
	outfile__array_GABA_B5_N.open("results/_array_GABA_B5_N_-784709375610038547", ios::binary | ios::out);
	if(outfile__array_GABA_B5_N.is_open())
	{
		outfile__array_GABA_B5_N.write(reinterpret_cast<char*>(_array_GABA_B5_N), 1*sizeof(_array_GABA_B5_N[0]));
		outfile__array_GABA_B5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B5_N." << endl;
	}
	ofstream outfile__array_GABA_B6_N;
	outfile__array_GABA_B6_N.open("results/_array_GABA_B6_N_-5306458922248014446", ios::binary | ios::out);
	if(outfile__array_GABA_B6_N.is_open())
	{
		outfile__array_GABA_B6_N.write(reinterpret_cast<char*>(_array_GABA_B6_N), 1*sizeof(_array_GABA_B6_N[0]));
		outfile__array_GABA_B6_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B6_N." << endl;
	}
	ofstream outfile__array_GABA_B9_N;
	outfile__array_GABA_B9_N.open("results/_array_GABA_B9_N_8440537566930643985", ios::binary | ios::out);
	if(outfile__array_GABA_B9_N.is_open())
	{
		outfile__array_GABA_B9_N.write(reinterpret_cast<char*>(_array_GABA_B9_N), 1*sizeof(_array_GABA_B9_N[0]));
		outfile__array_GABA_B9_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B9_N." << endl;
	}
	ofstream outfile__array_mon_neuron_input__source_idx;
	outfile__array_mon_neuron_input__source_idx.open("results/_array_mon_neuron_input__source_idx_-8201415120013333466", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input__source_idx.is_open())
	{
		outfile__array_mon_neuron_input__source_idx.write(reinterpret_cast<char*>(_array_mon_neuron_input__source_idx), 1*sizeof(_array_mon_neuron_input__source_idx[0]));
		outfile__array_mon_neuron_input__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input__source_idx." << endl;
	}
	ofstream outfile__array_mon_neuron_input_count;
	outfile__array_mon_neuron_input_count.open("results/_array_mon_neuron_input_count_325043454387007765", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_count.is_open())
	{
		outfile__array_mon_neuron_input_count.write(reinterpret_cast<char*>(_array_mon_neuron_input_count), 1*sizeof(_array_mon_neuron_input_count[0]));
		outfile__array_mon_neuron_input_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_count." << endl;
	}
	ofstream outfile__array_mon_neuron_input_N;
	outfile__array_mon_neuron_input_N.open("results/_array_mon_neuron_input_N_-3416880114316329742", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_N.is_open())
	{
		outfile__array_mon_neuron_input_N.write(reinterpret_cast<char*>(_array_mon_neuron_input_N), 1*sizeof(_array_mon_neuron_input_N[0]));
		outfile__array_mon_neuron_input_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_N." << endl;
	}
	ofstream outfile__array_PC_output__source_idx;
	outfile__array_PC_output__source_idx.open("results/_array_PC_output__source_idx_-1595562492651067717", ios::binary | ios::out);
	if(outfile__array_PC_output__source_idx.is_open())
	{
		outfile__array_PC_output__source_idx.write(reinterpret_cast<char*>(_array_PC_output__source_idx), 40*sizeof(_array_PC_output__source_idx[0]));
		outfile__array_PC_output__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_PC_output__source_idx." << endl;
	}
	ofstream outfile__array_PC_output_count;
	outfile__array_PC_output_count.open("results/_array_PC_output_count_4060952766379381554", ios::binary | ios::out);
	if(outfile__array_PC_output_count.is_open())
	{
		outfile__array_PC_output_count.write(reinterpret_cast<char*>(_array_PC_output_count), 40*sizeof(_array_PC_output_count[0]));
		outfile__array_PC_output_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_PC_output_count." << endl;
	}
	ofstream outfile__array_PC_output_N;
	outfile__array_PC_output_N.open("results/_array_PC_output_N_8883228460869551240", ios::binary | ios::out);
	if(outfile__array_PC_output_N.is_open())
	{
		outfile__array_PC_output_N.write(reinterpret_cast<char*>(_array_PC_output_N), 1*sizeof(_array_PC_output_N[0]));
		outfile__array_PC_output_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_PC_output_N." << endl;
	}
	ofstream outfile__array_PV_output__source_idx;
	outfile__array_PV_output__source_idx.open("results/_array_PV_output__source_idx_5828274333727297802", ios::binary | ios::out);
	if(outfile__array_PV_output__source_idx.is_open())
	{
		outfile__array_PV_output__source_idx.write(reinterpret_cast<char*>(_array_PV_output__source_idx), 6*sizeof(_array_PV_output__source_idx[0]));
		outfile__array_PV_output__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_PV_output__source_idx." << endl;
	}
	ofstream outfile__array_PV_output_count;
	outfile__array_PV_output_count.open("results/_array_PV_output_count_-568145349238065685", ios::binary | ios::out);
	if(outfile__array_PV_output_count.is_open())
	{
		outfile__array_PV_output_count.write(reinterpret_cast<char*>(_array_PV_output_count), 6*sizeof(_array_PV_output_count[0]));
		outfile__array_PV_output_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_PV_output_count." << endl;
	}
	ofstream outfile__array_PV_output_N;
	outfile__array_PV_output_N.open("results/_array_PV_output_N_6650662890801511980", ios::binary | ios::out);
	if(outfile__array_PV_output_N.is_open())
	{
		outfile__array_PV_output_N.write(reinterpret_cast<char*>(_array_PV_output_N), 1*sizeof(_array_PV_output_N[0]));
		outfile__array_PV_output_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_PV_output_N." << endl;
	}
	ofstream outfile__array_SpikeGenerator__lastindex;
	outfile__array_SpikeGenerator__lastindex.open("results/_array_SpikeGenerator__lastindex_-4367495112509377854", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator__lastindex.is_open())
	{
		outfile__array_SpikeGenerator__lastindex.write(reinterpret_cast<char*>(_array_SpikeGenerator__lastindex), 1*sizeof(_array_SpikeGenerator__lastindex[0]));
		outfile__array_SpikeGenerator__lastindex.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator__lastindex." << endl;
	}
	ofstream outfile__array_SpikeGenerator__period_bins;
	outfile__array_SpikeGenerator__period_bins.open("results/_array_SpikeGenerator__period_bins_591338681647232992", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator__period_bins.is_open())
	{
		outfile__array_SpikeGenerator__period_bins.write(reinterpret_cast<char*>(_array_SpikeGenerator__period_bins), 1*sizeof(_array_SpikeGenerator__period_bins[0]));
		outfile__array_SpikeGenerator__period_bins.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator__period_bins." << endl;
	}
	ofstream outfile__array_SpikeGenerator__spikespace;
	outfile__array_SpikeGenerator__spikespace.open("results/_array_SpikeGenerator__spikespace_-5622187976373253244", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator__spikespace.is_open())
	{
		outfile__array_SpikeGenerator__spikespace.write(reinterpret_cast<char*>(_array_SpikeGenerator__spikespace), 2*sizeof(_array_SpikeGenerator__spikespace[0]));
		outfile__array_SpikeGenerator__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator__spikespace." << endl;
	}
	ofstream outfile__array_SpikeGenerator_i;
	outfile__array_SpikeGenerator_i.open("results/_array_SpikeGenerator_i_4840469922650565547", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator_i.is_open())
	{
		outfile__array_SpikeGenerator_i.write(reinterpret_cast<char*>(_array_SpikeGenerator_i), 1*sizeof(_array_SpikeGenerator_i[0]));
		outfile__array_SpikeGenerator_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator_i." << endl;
	}
	ofstream outfile__array_SpikeGenerator_period;
	outfile__array_SpikeGenerator_period.open("results/_array_SpikeGenerator_period_-414068583441289122", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator_period.is_open())
	{
		outfile__array_SpikeGenerator_period.write(reinterpret_cast<char*>(_array_SpikeGenerator_period), 1*sizeof(_array_SpikeGenerator_period[0]));
		outfile__array_SpikeGenerator_period.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator_period." << endl;
	}
	ofstream outfile__array_SST_output__source_idx;
	outfile__array_SST_output__source_idx.open("results/_array_SST_output__source_idx_676766226599722141", ios::binary | ios::out);
	if(outfile__array_SST_output__source_idx.is_open())
	{
		outfile__array_SST_output__source_idx.write(reinterpret_cast<char*>(_array_SST_output__source_idx), 4*sizeof(_array_SST_output__source_idx[0]));
		outfile__array_SST_output__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_SST_output__source_idx." << endl;
	}
	ofstream outfile__array_SST_output_count;
	outfile__array_SST_output_count.open("results/_array_SST_output_count_7553675868576292037", ios::binary | ios::out);
	if(outfile__array_SST_output_count.is_open())
	{
		outfile__array_SST_output_count.write(reinterpret_cast<char*>(_array_SST_output_count), 4*sizeof(_array_SST_output_count[0]));
		outfile__array_SST_output_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_SST_output_count." << endl;
	}
	ofstream outfile__array_SST_output_N;
	outfile__array_SST_output_N.open("results/_array_SST_output_N_-2430052981254830327", ios::binary | ios::out);
	if(outfile__array_SST_output_N.is_open())
	{
		outfile__array_SST_output_N.write(reinterpret_cast<char*>(_array_SST_output_N), 1*sizeof(_array_SST_output_N[0]));
		outfile__array_SST_output_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_SST_output_N." << endl;
	}
	ofstream outfile__array_statemonitor_10__indices;
	outfile__array_statemonitor_10__indices.open("results/_array_statemonitor_10__indices_-9199326899444201933", ios::binary | ios::out);
	if(outfile__array_statemonitor_10__indices.is_open())
	{
		outfile__array_statemonitor_10__indices.write(reinterpret_cast<char*>(_array_statemonitor_10__indices), 1*sizeof(_array_statemonitor_10__indices[0]));
		outfile__array_statemonitor_10__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_10__indices." << endl;
	}
	ofstream outfile__array_statemonitor_10_N;
	outfile__array_statemonitor_10_N.open("results/_array_statemonitor_10_N_9180761537843966276", ios::binary | ios::out);
	if(outfile__array_statemonitor_10_N.is_open())
	{
		outfile__array_statemonitor_10_N.write(reinterpret_cast<char*>(_array_statemonitor_10_N), 1*sizeof(_array_statemonitor_10_N[0]));
		outfile__array_statemonitor_10_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_10_N." << endl;
	}
	ofstream outfile__array_statemonitor_11__indices;
	outfile__array_statemonitor_11__indices.open("results/_array_statemonitor_11__indices_4518801095146717520", ios::binary | ios::out);
	if(outfile__array_statemonitor_11__indices.is_open())
	{
		outfile__array_statemonitor_11__indices.write(reinterpret_cast<char*>(_array_statemonitor_11__indices), 1*sizeof(_array_statemonitor_11__indices[0]));
		outfile__array_statemonitor_11__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_11__indices." << endl;
	}
	ofstream outfile__array_statemonitor_11_N;
	outfile__array_statemonitor_11_N.open("results/_array_statemonitor_11_N_-7802977185305927849", ios::binary | ios::out);
	if(outfile__array_statemonitor_11_N.is_open())
	{
		outfile__array_statemonitor_11_N.write(reinterpret_cast<char*>(_array_statemonitor_11_N), 1*sizeof(_array_statemonitor_11_N[0]));
		outfile__array_statemonitor_11_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_11_N." << endl;
	}
	ofstream outfile__array_statemonitor_12__indices;
	outfile__array_statemonitor_12__indices.open("results/_array_statemonitor_12__indices_3308222445053697345", ios::binary | ios::out);
	if(outfile__array_statemonitor_12__indices.is_open())
	{
		outfile__array_statemonitor_12__indices.write(reinterpret_cast<char*>(_array_statemonitor_12__indices), 1*sizeof(_array_statemonitor_12__indices[0]));
		outfile__array_statemonitor_12__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_12__indices." << endl;
	}
	ofstream outfile__array_statemonitor_12_N;
	outfile__array_statemonitor_12_N.open("results/_array_statemonitor_12_N_1250027156615076609", ios::binary | ios::out);
	if(outfile__array_statemonitor_12_N.is_open())
	{
		outfile__array_statemonitor_12_N.write(reinterpret_cast<char*>(_array_statemonitor_12_N), 1*sizeof(_array_statemonitor_12_N[0]));
		outfile__array_statemonitor_12_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_12_N." << endl;
	}
	ofstream outfile__array_statemonitor_13__indices;
	outfile__array_statemonitor_13__indices.open("results/_array_statemonitor_13__indices_-2442529943217528141", ios::binary | ios::out);
	if(outfile__array_statemonitor_13__indices.is_open())
	{
		outfile__array_statemonitor_13__indices.write(reinterpret_cast<char*>(_array_statemonitor_13__indices), 1*sizeof(_array_statemonitor_13__indices[0]));
		outfile__array_statemonitor_13__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_13__indices." << endl;
	}
	ofstream outfile__array_statemonitor_13_N;
	outfile__array_statemonitor_13_N.open("results/_array_statemonitor_13_N_320099074201778114", ios::binary | ios::out);
	if(outfile__array_statemonitor_13_N.is_open())
	{
		outfile__array_statemonitor_13_N.write(reinterpret_cast<char*>(_array_statemonitor_13_N), 1*sizeof(_array_statemonitor_13_N[0]));
		outfile__array_statemonitor_13_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_13_N." << endl;
	}
	ofstream outfile__array_statemonitor_1__indices;
	outfile__array_statemonitor_1__indices.open("results/_array_statemonitor_1__indices_3527182382935870331", ios::binary | ios::out);
	if(outfile__array_statemonitor_1__indices.is_open())
	{
		outfile__array_statemonitor_1__indices.write(reinterpret_cast<char*>(_array_statemonitor_1__indices), 6*sizeof(_array_statemonitor_1__indices[0]));
		outfile__array_statemonitor_1__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1__indices." << endl;
	}
	ofstream outfile__array_statemonitor_1_N;
	outfile__array_statemonitor_1_N.open("results/_array_statemonitor_1_N_5827684633310262160", ios::binary | ios::out);
	if(outfile__array_statemonitor_1_N.is_open())
	{
		outfile__array_statemonitor_1_N.write(reinterpret_cast<char*>(_array_statemonitor_1_N), 1*sizeof(_array_statemonitor_1_N[0]));
		outfile__array_statemonitor_1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1_N." << endl;
	}
	ofstream outfile__array_statemonitor_2__indices;
	outfile__array_statemonitor_2__indices.open("results/_array_statemonitor_2__indices_6220856907209855759", ios::binary | ios::out);
	if(outfile__array_statemonitor_2__indices.is_open())
	{
		outfile__array_statemonitor_2__indices.write(reinterpret_cast<char*>(_array_statemonitor_2__indices), 40*sizeof(_array_statemonitor_2__indices[0]));
		outfile__array_statemonitor_2__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2__indices." << endl;
	}
	ofstream outfile__array_statemonitor_2_N;
	outfile__array_statemonitor_2_N.open("results/_array_statemonitor_2_N_4611008809906953091", ios::binary | ios::out);
	if(outfile__array_statemonitor_2_N.is_open())
	{
		outfile__array_statemonitor_2_N.write(reinterpret_cast<char*>(_array_statemonitor_2_N), 1*sizeof(_array_statemonitor_2_N[0]));
		outfile__array_statemonitor_2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2_N." << endl;
	}
	ofstream outfile__array_statemonitor_3__indices;
	outfile__array_statemonitor_3__indices.open("results/_array_statemonitor_3__indices_7936401572427531007", ios::binary | ios::out);
	if(outfile__array_statemonitor_3__indices.is_open())
	{
		outfile__array_statemonitor_3__indices.write(reinterpret_cast<char*>(_array_statemonitor_3__indices), 1*sizeof(_array_statemonitor_3__indices[0]));
		outfile__array_statemonitor_3__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_3__indices." << endl;
	}
	ofstream outfile__array_statemonitor_3_N;
	outfile__array_statemonitor_3_N.open("results/_array_statemonitor_3_N_-6925474663722749228", ios::binary | ios::out);
	if(outfile__array_statemonitor_3_N.is_open())
	{
		outfile__array_statemonitor_3_N.write(reinterpret_cast<char*>(_array_statemonitor_3_N), 1*sizeof(_array_statemonitor_3_N[0]));
		outfile__array_statemonitor_3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_3_N." << endl;
	}
	ofstream outfile__array_statemonitor_4__indices;
	outfile__array_statemonitor_4__indices.open("results/_array_statemonitor_4__indices_8374117371244209460", ios::binary | ios::out);
	if(outfile__array_statemonitor_4__indices.is_open())
	{
		outfile__array_statemonitor_4__indices.write(reinterpret_cast<char*>(_array_statemonitor_4__indices), 1*sizeof(_array_statemonitor_4__indices[0]));
		outfile__array_statemonitor_4__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4__indices." << endl;
	}
	ofstream outfile__array_statemonitor_4_N;
	outfile__array_statemonitor_4_N.open("results/_array_statemonitor_4_N_385499391954841134", ios::binary | ios::out);
	if(outfile__array_statemonitor_4_N.is_open())
	{
		outfile__array_statemonitor_4_N.write(reinterpret_cast<char*>(_array_statemonitor_4_N), 1*sizeof(_array_statemonitor_4_N[0]));
		outfile__array_statemonitor_4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4_N." << endl;
	}
	ofstream outfile__array_statemonitor_5__indices;
	outfile__array_statemonitor_5__indices.open("results/_array_statemonitor_5__indices_-5293958284716373653", ios::binary | ios::out);
	if(outfile__array_statemonitor_5__indices.is_open())
	{
		outfile__array_statemonitor_5__indices.write(reinterpret_cast<char*>(_array_statemonitor_5__indices), 1*sizeof(_array_statemonitor_5__indices[0]));
		outfile__array_statemonitor_5__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_5__indices." << endl;
	}
	ofstream outfile__array_statemonitor_5_N;
	outfile__array_statemonitor_5_N.open("results/_array_statemonitor_5_N_-5963394447777750388", ios::binary | ios::out);
	if(outfile__array_statemonitor_5_N.is_open())
	{
		outfile__array_statemonitor_5_N.write(reinterpret_cast<char*>(_array_statemonitor_5_N), 1*sizeof(_array_statemonitor_5_N[0]));
		outfile__array_statemonitor_5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_5_N." << endl;
	}
	ofstream outfile__array_statemonitor_6__indices;
	outfile__array_statemonitor_6__indices.open("results/_array_statemonitor_6__indices_7635873468259826837", ios::binary | ios::out);
	if(outfile__array_statemonitor_6__indices.is_open())
	{
		outfile__array_statemonitor_6__indices.write(reinterpret_cast<char*>(_array_statemonitor_6__indices), 1*sizeof(_array_statemonitor_6__indices[0]));
		outfile__array_statemonitor_6__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_6__indices." << endl;
	}
	ofstream outfile__array_statemonitor_6_N;
	outfile__array_statemonitor_6_N.open("results/_array_statemonitor_6_N_5504893931092493932", ios::binary | ios::out);
	if(outfile__array_statemonitor_6_N.is_open())
	{
		outfile__array_statemonitor_6_N.write(reinterpret_cast<char*>(_array_statemonitor_6_N), 1*sizeof(_array_statemonitor_6_N[0]));
		outfile__array_statemonitor_6_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_6_N." << endl;
	}
	ofstream outfile__array_statemonitor_7__indices;
	outfile__array_statemonitor_7__indices.open("results/_array_statemonitor_7__indices_3967074379666409155", ios::binary | ios::out);
	if(outfile__array_statemonitor_7__indices.is_open())
	{
		outfile__array_statemonitor_7__indices.write(reinterpret_cast<char*>(_array_statemonitor_7__indices), 1*sizeof(_array_statemonitor_7__indices[0]));
		outfile__array_statemonitor_7__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_7__indices." << endl;
	}
	ofstream outfile__array_statemonitor_7_N;
	outfile__array_statemonitor_7_N.open("results/_array_statemonitor_7_N_-7527859688022652182", ios::binary | ios::out);
	if(outfile__array_statemonitor_7_N.is_open())
	{
		outfile__array_statemonitor_7_N.write(reinterpret_cast<char*>(_array_statemonitor_7_N), 1*sizeof(_array_statemonitor_7_N[0]));
		outfile__array_statemonitor_7_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_7_N." << endl;
	}
	ofstream outfile__array_statemonitor_8__indices;
	outfile__array_statemonitor_8__indices.open("results/_array_statemonitor_8__indices_8794445909042873956", ios::binary | ios::out);
	if(outfile__array_statemonitor_8__indices.is_open())
	{
		outfile__array_statemonitor_8__indices.write(reinterpret_cast<char*>(_array_statemonitor_8__indices), 1*sizeof(_array_statemonitor_8__indices[0]));
		outfile__array_statemonitor_8__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_8__indices." << endl;
	}
	ofstream outfile__array_statemonitor_8_N;
	outfile__array_statemonitor_8_N.open("results/_array_statemonitor_8_N_4781969643619361139", ios::binary | ios::out);
	if(outfile__array_statemonitor_8_N.is_open())
	{
		outfile__array_statemonitor_8_N.write(reinterpret_cast<char*>(_array_statemonitor_8_N), 1*sizeof(_array_statemonitor_8_N[0]));
		outfile__array_statemonitor_8_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_8_N." << endl;
	}
	ofstream outfile__array_statemonitor_9__indices;
	outfile__array_statemonitor_9__indices.open("results/_array_statemonitor_9__indices_-695221374835620904", ios::binary | ios::out);
	if(outfile__array_statemonitor_9__indices.is_open())
	{
		outfile__array_statemonitor_9__indices.write(reinterpret_cast<char*>(_array_statemonitor_9__indices), 1*sizeof(_array_statemonitor_9__indices[0]));
		outfile__array_statemonitor_9__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_9__indices." << endl;
	}
	ofstream outfile__array_statemonitor_9_N;
	outfile__array_statemonitor_9_N.open("results/_array_statemonitor_9_N_5510160084614712712", ios::binary | ios::out);
	if(outfile__array_statemonitor_9_N.is_open())
	{
		outfile__array_statemonitor_9_N.write(reinterpret_cast<char*>(_array_statemonitor_9_N), 1*sizeof(_array_statemonitor_9_N[0]));
		outfile__array_statemonitor_9_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_9_N." << endl;
	}
	ofstream outfile__array_statemonitor__indices;
	outfile__array_statemonitor__indices.open("results/_array_statemonitor__indices_-3151430655679760042", ios::binary | ios::out);
	if(outfile__array_statemonitor__indices.is_open())
	{
		outfile__array_statemonitor__indices.write(reinterpret_cast<char*>(_array_statemonitor__indices), 4*sizeof(_array_statemonitor__indices[0]));
		outfile__array_statemonitor__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor__indices." << endl;
	}
	ofstream outfile__array_statemonitor_N;
	outfile__array_statemonitor_N.open("results/_array_statemonitor_N_6620983320537837714", ios::binary | ios::out);
	if(outfile__array_statemonitor_N.is_open())
	{
		outfile__array_statemonitor_N.write(reinterpret_cast<char*>(_array_statemonitor_N), 1*sizeof(_array_statemonitor_N[0]));
		outfile__array_statemonitor_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_N." << endl;
	}

	ofstream outfile__dynamic_array_AMPA0__synaptic_post;
	outfile__dynamic_array_AMPA0__synaptic_post.open("results/_dynamic_array_AMPA0__synaptic_post_-290863484856496376", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0__synaptic_pre.open("results/_dynamic_array_AMPA0__synaptic_pre_2344826100928684713", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_delay.open("results/_dynamic_array_AMPA0_delay_-369451233691781094", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_delay_1.open("results/_dynamic_array_AMPA0_delay_1_4746377576132791643", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_N_incoming.open("results/_dynamic_array_AMPA0_N_incoming_-1934474696600353284", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_N_outgoing.open("results/_dynamic_array_AMPA0_N_outgoing_-4006077705953086576", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_weight.open("results/_dynamic_array_AMPA0_weight_-4252917930632904630", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA2__synaptic_post.open("results/_dynamic_array_AMPA2__synaptic_post_-8359372711217271507", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA2__synaptic_pre.open("results/_dynamic_array_AMPA2__synaptic_pre_-4052498991682234002", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA2_delay.open("results/_dynamic_array_AMPA2_delay_6837599040004740999", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA2_delay_1.open("results/_dynamic_array_AMPA2_delay_1_7238455223658062770", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA2_N_incoming.open("results/_dynamic_array_AMPA2_N_incoming_-7136377293831375969", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA2_N_outgoing.open("results/_dynamic_array_AMPA2_N_outgoing_6772601560887998424", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA2_weight.open("results/_dynamic_array_AMPA2_weight_227079586039173243", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA3__synaptic_post.open("results/_dynamic_array_AMPA3__synaptic_post_-6016537425595898807", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA3__synaptic_pre.open("results/_dynamic_array_AMPA3__synaptic_pre_-5520211784615800204", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA3_delay.open("results/_dynamic_array_AMPA3_delay_-3176042867643198400", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA3_delay_1.open("results/_dynamic_array_AMPA3_delay_1_2431646113499934318", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA3_N_incoming.open("results/_dynamic_array_AMPA3_N_incoming_-4171360984276997381", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA3_N_outgoing.open("results/_dynamic_array_AMPA3_N_outgoing_-298407467036125791", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA3_weight.open("results/_dynamic_array_AMPA3_weight_6510085784708895950", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA7__synaptic_post.open("results/_dynamic_array_AMPA7__synaptic_post_-6921085490257539710", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA7__synaptic_pre.open("results/_dynamic_array_AMPA7__synaptic_pre_4197140273787447189", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA7_delay.open("results/_dynamic_array_AMPA7_delay_-4428666725857198389", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA7_delay_1.open("results/_dynamic_array_AMPA7_delay_1_-7659389715024070326", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA7_N_incoming.open("results/_dynamic_array_AMPA7_N_incoming_-138372984804148078", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA7_N_outgoing.open("results/_dynamic_array_AMPA7_N_outgoing_4377217682429567756", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA7_weight.open("results/_dynamic_array_AMPA7_weight_5150478075118382965", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD1__synaptic_post.open("results/_dynamic_array_AMPA_STD1__synaptic_post_-4734083999321746350", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD1__synaptic_pre.open("results/_dynamic_array_AMPA_STD1__synaptic_pre_348306045766976846", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD1_delay.open("results/_dynamic_array_AMPA_STD1_delay_-2065037446683547750", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD1_delay_1.open("results/_dynamic_array_AMPA_STD1_delay_1_6123614967560541816", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD1_N_incoming.open("results/_dynamic_array_AMPA_STD1_N_incoming_-3119033631026649709", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD1_N_outgoing.open("results/_dynamic_array_AMPA_STD1_N_outgoing_5057039251077601292", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD1_weight.open("results/_dynamic_array_AMPA_STD1_weight_-6253807999395557581", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD8__synaptic_post.open("results/_dynamic_array_AMPA_STD8__synaptic_post_-3815350268983174087", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD8__synaptic_pre.open("results/_dynamic_array_AMPA_STD8__synaptic_pre_899686913067052957", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD8_delay.open("results/_dynamic_array_AMPA_STD8_delay_4061008891581799482", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD8_delay_1.open("results/_dynamic_array_AMPA_STD8_delay_1_8552169890503307235", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD8_N_incoming.open("results/_dynamic_array_AMPA_STD8_N_incoming_-6195504270837645094", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD8_N_outgoing.open("results/_dynamic_array_AMPA_STD8_N_outgoing_-6856362722663761807", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA_STD8_weight.open("results/_dynamic_array_AMPA_STD8_weight_7144374625669826281", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B10__synaptic_post.open("results/_dynamic_array_GABA_B10__synaptic_post_-4129102630807894140", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B10__synaptic_pre.open("results/_dynamic_array_GABA_B10__synaptic_pre_1848909176535933762", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B10_delay.open("results/_dynamic_array_GABA_B10_delay_4430415179970019570", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B10_delay_1.open("results/_dynamic_array_GABA_B10_delay_1_2870284348350508165", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B10_N_incoming.open("results/_dynamic_array_GABA_B10_N_incoming_5864931570704651003", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B10_N_outgoing.open("results/_dynamic_array_GABA_B10_N_outgoing_-6119132372200416877", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B10_weight.open("results/_dynamic_array_GABA_B10_weight_-4134175234465951874", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4__synaptic_post.open("results/_dynamic_array_GABA_B4__synaptic_post_-3845867015632181186", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4__synaptic_pre.open("results/_dynamic_array_GABA_B4__synaptic_pre_-4866020759317691530", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_delay.open("results/_dynamic_array_GABA_B4_delay_-1925026789017083228", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_delay_1.open("results/_dynamic_array_GABA_B4_delay_1_-5897026989367989938", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_N_incoming.open("results/_dynamic_array_GABA_B4_N_incoming_4874912293534274348", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_N_outgoing.open("results/_dynamic_array_GABA_B4_N_outgoing_3982185335379818727", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_weight.open("results/_dynamic_array_GABA_B4_weight_-5704913912653701042", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5__synaptic_post.open("results/_dynamic_array_GABA_B5__synaptic_post_-1608577187591808240", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5__synaptic_pre.open("results/_dynamic_array_GABA_B5__synaptic_pre_6359391829993248320", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_delay.open("results/_dynamic_array_GABA_B5_delay_6051979204750980125", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_delay_1.open("results/_dynamic_array_GABA_B5_delay_1_5706745195436964384", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_N_incoming.open("results/_dynamic_array_GABA_B5_N_incoming_4033268618977353616", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_N_outgoing.open("results/_dynamic_array_GABA_B5_N_outgoing_-8975493993132875714", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_weight.open("results/_dynamic_array_GABA_B5_weight_6799415375562880179", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6__synaptic_post.open("results/_dynamic_array_GABA_B6__synaptic_post_2637047530682550147", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6__synaptic_pre.open("results/_dynamic_array_GABA_B6__synaptic_pre_2980814738730797813", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_delay.open("results/_dynamic_array_GABA_B6_delay_5496793035814319552", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_delay_1.open("results/_dynamic_array_GABA_B6_delay_1_7948193196362606755", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_N_incoming.open("results/_dynamic_array_GABA_B6_N_incoming_2531266588356646944", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_N_outgoing.open("results/_dynamic_array_GABA_B6_N_outgoing_-4685885559155574743", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_weight.open("results/_dynamic_array_GABA_B6_weight_-156955595088995502", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9__synaptic_post.open("results/_dynamic_array_GABA_B9__synaptic_post_2017031710642012038", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9__synaptic_pre.open("results/_dynamic_array_GABA_B9__synaptic_pre_2626137096109490089", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_delay.open("results/_dynamic_array_GABA_B9_delay_7362775169934141373", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_delay_1.open("results/_dynamic_array_GABA_B9_delay_1_4262366840880998954", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_N_incoming.open("results/_dynamic_array_GABA_B9_N_incoming_930474786461863878", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_N_outgoing.open("results/_dynamic_array_GABA_B9_N_outgoing_4547793039326208708", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_weight.open("results/_dynamic_array_GABA_B9_weight_5652253135416101561", ios::binary | ios::out);
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
	outfile__dynamic_array_mon_neuron_input_i.open("results/_dynamic_array_mon_neuron_input_i_3633091859818353009", ios::binary | ios::out);
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
	outfile__dynamic_array_mon_neuron_input_t.open("results/_dynamic_array_mon_neuron_input_t_8941449840510425488", ios::binary | ios::out);
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
	outfile__dynamic_array_PC_output_i.open("results/_dynamic_array_PC_output_i_-3321104207638489859", ios::binary | ios::out);
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
	outfile__dynamic_array_PC_output_t.open("results/_dynamic_array_PC_output_t_8393842808242138573", ios::binary | ios::out);
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
	outfile__dynamic_array_PV_output_i.open("results/_dynamic_array_PV_output_i_1377945288945143294", ios::binary | ios::out);
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
	outfile__dynamic_array_PV_output_t.open("results/_dynamic_array_PV_output_t_1600426231739590070", ios::binary | ios::out);
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
	outfile__dynamic_array_SpikeGenerator__timebins.open("results/_dynamic_array_SpikeGenerator__timebins_8043204547278038536", ios::binary | ios::out);
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
	outfile__dynamic_array_SpikeGenerator_neuron_index.open("results/_dynamic_array_SpikeGenerator_neuron_index_2883161232869592043", ios::binary | ios::out);
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
	outfile__dynamic_array_SpikeGenerator_spike_number.open("results/_dynamic_array_SpikeGenerator_spike_number_-8512446888279765528", ios::binary | ios::out);
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
	outfile__dynamic_array_SpikeGenerator_spike_time.open("results/_dynamic_array_SpikeGenerator_spike_time_6437938238402592746", ios::binary | ios::out);
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
	outfile__dynamic_array_SST_output_i.open("results/_dynamic_array_SST_output_i_153627363122640690", ios::binary | ios::out);
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
	outfile__dynamic_array_SST_output_t.open("results/_dynamic_array_SST_output_t_-9155925899786394029", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_10_t.open("results/_dynamic_array_statemonitor_10_t_6166667455178740732", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_11_t.open("results/_dynamic_array_statemonitor_11_t_-2873561153149872765", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_12_t.open("results/_dynamic_array_statemonitor_12_t_351203730984138440", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_13_t.open("results/_dynamic_array_statemonitor_13_t_-3375219956889347465", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_1_t.open("results/_dynamic_array_statemonitor_1_t_7983819658055481201", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_2_t.open("results/_dynamic_array_statemonitor_2_t_8056516737053287520", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_3_t.open("results/_dynamic_array_statemonitor_3_t_2025723930022399764", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_4_t.open("results/_dynamic_array_statemonitor_4_t_5368792854015393721", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_5_t.open("results/_dynamic_array_statemonitor_5_t_514732030655700260", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_6_t.open("results/_dynamic_array_statemonitor_6_t_-1265822090879842722", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_7_t.open("results/_dynamic_array_statemonitor_7_t_-574961182685211968", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_8_t.open("results/_dynamic_array_statemonitor_8_t_1716717037997451633", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_9_t.open("results/_dynamic_array_statemonitor_9_t_4521876982301224901", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_t.open("results/_dynamic_array_statemonitor_t_8879677706576597839", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_10_Iampa.open("results/_dynamic_array_statemonitor_10_Iampa_8984124772094756939", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_11_Iampa_std.open("results/_dynamic_array_statemonitor_11_Iampa_std_-7874053396325696331", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_12_Igaba_b.open("results/_dynamic_array_statemonitor_12_Igaba_b_5748489055238724407", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_13_Igaba_b.open("results/_dynamic_array_statemonitor_13_Igaba_b_3508715708549852085", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_1_Isoma_mem.open("results/_dynamic_array_statemonitor_1_Isoma_mem_2114997619994471219", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_2_Isoma_mem.open("results/_dynamic_array_statemonitor_2_Isoma_mem_8531456786409701435", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_3_Iampa.open("results/_dynamic_array_statemonitor_3_Iampa_-7399572357046080815", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_4_Iampa_std.open("results/_dynamic_array_statemonitor_4_Iampa_std_-5146973119111535371", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_5_Iampa.open("results/_dynamic_array_statemonitor_5_Iampa_7170206703866069397", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_6_Iampa.open("results/_dynamic_array_statemonitor_6_Iampa_-6426999521823483400", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_7_Igaba_b.open("results/_dynamic_array_statemonitor_7_Igaba_b_-8872155430434247148", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_8_Igaba_b.open("results/_dynamic_array_statemonitor_8_Igaba_b_-2314589555263538786", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_9_Igaba_b.open("results/_dynamic_array_statemonitor_9_Igaba_b_-2090076837141292328", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_Isoma_mem.open("results/_dynamic_array_statemonitor_Isoma_mem_-2768349677279108371", ios::binary | ios::out);
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

