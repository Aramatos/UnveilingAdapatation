
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
int32_t * _array_AMPA1_N;
const int _num__array_AMPA1_N = 1;
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
int32_t * _array_Core_1_subgroup_3__sub_idx;
const int _num__array_Core_1_subgroup_3__sub_idx = 1;
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
int32_t * _array_NMDA0_N;
const int _num__array_NMDA0_N = 1;
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
int32_t * _array_statemonitor_4__indices;
const int _num__array_statemonitor_4__indices = 1;
double * _array_statemonitor_4_Iampa;
const int _num__array_statemonitor_4_Iampa = (0, 1);
int32_t * _array_statemonitor_4_N;
const int _num__array_statemonitor_4_N = 1;
int32_t * _array_statemonitor_5__indices;
const int _num__array_statemonitor_5__indices = 1;
double * _array_statemonitor_5_Isoma_mem;
const int _num__array_statemonitor_5_Isoma_mem = (0, 1);
int32_t * _array_statemonitor_5_N;
const int _num__array_statemonitor_5_N = 1;
int32_t * _array_statemonitor__indices;
const int _num__array_statemonitor__indices = 1;
double * _array_statemonitor_Inmda;
const int _num__array_statemonitor_Inmda = (0, 1);
int32_t * _array_statemonitor_N;
const int _num__array_statemonitor_N = 1;

//////////////// dynamic arrays 1d /////////
std::vector<int32_t> _dynamic_array_AMPA1__synaptic_post;
std::vector<int32_t> _dynamic_array_AMPA1__synaptic_pre;
std::vector<double> _dynamic_array_AMPA1_delay;
std::vector<double> _dynamic_array_AMPA1_delay_1;
std::vector<int32_t> _dynamic_array_AMPA1_N_incoming;
std::vector<int32_t> _dynamic_array_AMPA1_N_outgoing;
std::vector<double> _dynamic_array_AMPA1_weight;
std::vector<int32_t> _dynamic_array_mon_neuron_input_i;
std::vector<double> _dynamic_array_mon_neuron_input_t;
std::vector<int32_t> _dynamic_array_mon_neuron_output_i;
std::vector<double> _dynamic_array_mon_neuron_output_t;
std::vector<int32_t> _dynamic_array_NMDA0__synaptic_post;
std::vector<int32_t> _dynamic_array_NMDA0__synaptic_pre;
std::vector<double> _dynamic_array_NMDA0_delay;
std::vector<double> _dynamic_array_NMDA0_delay_1;
std::vector<int32_t> _dynamic_array_NMDA0_N_incoming;
std::vector<int32_t> _dynamic_array_NMDA0_N_outgoing;
std::vector<double> _dynamic_array_NMDA0_weight;
std::vector<int32_t> _dynamic_array_SpikeGenerator__timebins;
std::vector<int32_t> _dynamic_array_SpikeGenerator_neuron_index;
std::vector<int32_t> _dynamic_array_SpikeGenerator_spike_number;
std::vector<double> _dynamic_array_SpikeGenerator_spike_time;
std::vector<double> _dynamic_array_statemonitor_4_t;
std::vector<double> _dynamic_array_statemonitor_5_t;
std::vector<double> _dynamic_array_statemonitor_t;

//////////////// dynamic arrays 2d /////////
DynamicArray2D<double> _dynamic_array_statemonitor_4_Iampa;
DynamicArray2D<double> _dynamic_array_statemonitor_5_Isoma_mem;
DynamicArray2D<double> _dynamic_array_statemonitor_Inmda;

/////////////// static arrays /////////////
int32_t * _static_array__dynamic_array_SpikeGenerator__timebins;
const int _num__static_array__dynamic_array_SpikeGenerator__timebins = 15;
double * _static_array__dynamic_array_SpikeGenerator_neuron_index;
const int _num__static_array__dynamic_array_SpikeGenerator_neuron_index = 15;
int64_t * _static_array__dynamic_array_SpikeGenerator_spike_number;
const int _num__static_array__dynamic_array_SpikeGenerator_spike_number = 15;
double * _static_array__dynamic_array_SpikeGenerator_spike_time;
const int _num__static_array__dynamic_array_SpikeGenerator_spike_time = 15;

//////////////// synapses /////////////////
// AMPA1
SynapticPathway AMPA1_post(
		_dynamic_array_AMPA1__synaptic_post,
		0, 1);
SynapticPathway AMPA1_pre(
		_dynamic_array_AMPA1__synaptic_pre,
		0, 1);
// NMDA0
SynapticPathway NMDA0_post(
		_dynamic_array_NMDA0__synaptic_post,
		0, 1);
SynapticPathway NMDA0_pre(
		_dynamic_array_NMDA0__synaptic_pre,
		0, 1);

//////////////// clocks ///////////////////
Clock defaultclock;  // attributes will be set in run.cpp

// Profiling information for each code object
}

void _init_arrays()
{
	using namespace brian;

    // Arrays initialized to 0
	_array_AMPA1_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_AMPA1_N[i] = 0;

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

	_array_Core_1_subgroup_3__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_3__sub_idx[i] = 0;

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

	_array_NMDA0_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_NMDA0_N[i] = 0;

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

	_array_statemonitor_4__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_4__indices[i] = 0;

	_array_statemonitor_4_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_4_N[i] = 0;

	_array_statemonitor_5__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_5__indices[i] = 0;

	_array_statemonitor_5_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_5_N[i] = 0;

	_array_statemonitor__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor__indices[i] = 0;

	_array_statemonitor_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_N[i] = 0;

	_dynamic_array_SpikeGenerator__timebins.resize(15);
    
	for(int i=0; i<15; i++) _dynamic_array_SpikeGenerator__timebins[i] = 0;


	// Arrays initialized to an "arange"
	_array_Core_0_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_0_i[i] = 0 + i;

	_array_Core_1_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_1_i[i] = 0 + i;

	_array_Core_1_subgroup_3__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup_3__sub_idx[i] = 0 + i;

	_array_Core_2_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_2_i[i] = 0 + i;

	_array_Core_3_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_3_i[i] = 0 + i;

	_array_mon_neuron_input__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_input__source_idx[i] = 0 + i;

	_array_mon_neuron_output__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_output__source_idx[i] = 0 + i;

	_array_SpikeGenerator_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_SpikeGenerator_i[i] = 0 + i;


	// static arrays
	_static_array__dynamic_array_SpikeGenerator__timebins = new int32_t[15];
	_static_array__dynamic_array_SpikeGenerator_neuron_index = new double[15];
	_static_array__dynamic_array_SpikeGenerator_spike_number = new int64_t[15];
	_static_array__dynamic_array_SpikeGenerator_spike_time = new double[15];

	// Random number generator states
	for (int i=0; i<1; i++)
	    _mersenne_twister_states.push_back(new rk_state());
}

void _load_arrays()
{
	using namespace brian;

	ifstream f_static_array__dynamic_array_SpikeGenerator__timebins;
	f_static_array__dynamic_array_SpikeGenerator__timebins.open("static_arrays/_static_array__dynamic_array_SpikeGenerator__timebins", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator__timebins.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator__timebins.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator__timebins), 15*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator__timebins." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator_neuron_index;
	f_static_array__dynamic_array_SpikeGenerator_neuron_index.open("static_arrays/_static_array__dynamic_array_SpikeGenerator_neuron_index", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator_neuron_index.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator_neuron_index.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator_neuron_index), 15*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator_neuron_index." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator_spike_number;
	f_static_array__dynamic_array_SpikeGenerator_spike_number.open("static_arrays/_static_array__dynamic_array_SpikeGenerator_spike_number", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator_spike_number.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator_spike_number.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator_spike_number), 15*sizeof(int64_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator_spike_number." << endl;
	}
	ifstream f_static_array__dynamic_array_SpikeGenerator_spike_time;
	f_static_array__dynamic_array_SpikeGenerator_spike_time.open("static_arrays/_static_array__dynamic_array_SpikeGenerator_spike_time", ios::in | ios::binary);
	if(f_static_array__dynamic_array_SpikeGenerator_spike_time.is_open())
	{
		f_static_array__dynamic_array_SpikeGenerator_spike_time.read(reinterpret_cast<char*>(_static_array__dynamic_array_SpikeGenerator_spike_time), 15*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_SpikeGenerator_spike_time." << endl;
	}
}

void _write_arrays()
{
	using namespace brian;

	ofstream outfile__array_AMPA1_N;
	outfile__array_AMPA1_N.open("results/_array_AMPA1_N_5272791388874019871", ios::binary | ios::out);
	if(outfile__array_AMPA1_N.is_open())
	{
		outfile__array_AMPA1_N.write(reinterpret_cast<char*>(_array_AMPA1_N), 1*sizeof(_array_AMPA1_N[0]));
		outfile__array_AMPA1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA1_N." << endl;
	}
	ofstream outfile__array_Core_0__spikespace;
	outfile__array_Core_0__spikespace.open("results/_array_Core_0__spikespace_7118881915611545540", ios::binary | ios::out);
	if(outfile__array_Core_0__spikespace.is_open())
	{
		outfile__array_Core_0__spikespace.write(reinterpret_cast<char*>(_array_Core_0__spikespace), 257*sizeof(_array_Core_0__spikespace[0]));
		outfile__array_Core_0__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0__spikespace." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ahp;
	outfile__array_Core_0_alpha_ahp.open("results/_array_Core_0_alpha_ahp_4284363239701600506", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ahp.is_open())
	{
		outfile__array_Core_0_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_0_alpha_ahp), 256*sizeof(_array_Core_0_alpha_ahp[0]));
		outfile__array_Core_0_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ampa;
	outfile__array_Core_0_alpha_ampa.open("results/_array_Core_0_alpha_ampa_5378263387426094395", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ampa.is_open())
	{
		outfile__array_Core_0_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_0_alpha_ampa), 256*sizeof(_array_Core_0_alpha_ampa[0]));
		outfile__array_Core_0_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ampa_std;
	outfile__array_Core_0_alpha_ampa_std.open("results/_array_Core_0_alpha_ampa_std_-8612207693736829242", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ampa_std.is_open())
	{
		outfile__array_Core_0_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_0_alpha_ampa_std), 256*sizeof(_array_Core_0_alpha_ampa_std[0]));
		outfile__array_Core_0_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_0_alpha_gaba_a;
	outfile__array_Core_0_alpha_gaba_a.open("results/_array_Core_0_alpha_gaba_a_-9092057114254952834", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_gaba_a.is_open())
	{
		outfile__array_Core_0_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_alpha_gaba_a), 256*sizeof(_array_Core_0_alpha_gaba_a[0]));
		outfile__array_Core_0_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_alpha_gaba_b;
	outfile__array_Core_0_alpha_gaba_b.open("results/_array_Core_0_alpha_gaba_b_-2959362144098865520", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_gaba_b.is_open())
	{
		outfile__array_Core_0_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_alpha_gaba_b), 256*sizeof(_array_Core_0_alpha_gaba_b[0]));
		outfile__array_Core_0_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_alpha_nmda;
	outfile__array_Core_0_alpha_nmda.open("results/_array_Core_0_alpha_nmda_3995597601504170598", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_nmda.is_open())
	{
		outfile__array_Core_0_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_0_alpha_nmda), 256*sizeof(_array_Core_0_alpha_nmda[0]));
		outfile__array_Core_0_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_0_alpha_soma;
	outfile__array_Core_0_alpha_soma.open("results/_array_Core_0_alpha_soma_704039793657523435", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_soma.is_open())
	{
		outfile__array_Core_0_alpha_soma.write(reinterpret_cast<char*>(_array_Core_0_alpha_soma), 256*sizeof(_array_Core_0_alpha_soma[0]));
		outfile__array_Core_0_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_0_Campa;
	outfile__array_Core_0_Campa.open("results/_array_Core_0_Campa_-8949465536242726209", ios::binary | ios::out);
	if(outfile__array_Core_0_Campa.is_open())
	{
		outfile__array_Core_0_Campa.write(reinterpret_cast<char*>(_array_Core_0_Campa), 256*sizeof(_array_Core_0_Campa[0]));
		outfile__array_Core_0_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Campa." << endl;
	}
	ofstream outfile__array_Core_0_Campa_std;
	outfile__array_Core_0_Campa_std.open("results/_array_Core_0_Campa_std_-8777754966966743327", ios::binary | ios::out);
	if(outfile__array_Core_0_Campa_std.is_open())
	{
		outfile__array_Core_0_Campa_std.write(reinterpret_cast<char*>(_array_Core_0_Campa_std), 256*sizeof(_array_Core_0_Campa_std[0]));
		outfile__array_Core_0_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Campa_std." << endl;
	}
	ofstream outfile__array_Core_0_Cgaba_a;
	outfile__array_Core_0_Cgaba_a.open("results/_array_Core_0_Cgaba_a_7690220176499232207", ios::binary | ios::out);
	if(outfile__array_Core_0_Cgaba_a.is_open())
	{
		outfile__array_Core_0_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_0_Cgaba_a), 256*sizeof(_array_Core_0_Cgaba_a[0]));
		outfile__array_Core_0_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_0_Cgaba_b;
	outfile__array_Core_0_Cgaba_b.open("results/_array_Core_0_Cgaba_b_2217583068465485965", ios::binary | ios::out);
	if(outfile__array_Core_0_Cgaba_b.is_open())
	{
		outfile__array_Core_0_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_0_Cgaba_b), 256*sizeof(_array_Core_0_Cgaba_b[0]));
		outfile__array_Core_0_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_0_Cnmda;
	outfile__array_Core_0_Cnmda.open("results/_array_Core_0_Cnmda_-1752864779190961277", ios::binary | ios::out);
	if(outfile__array_Core_0_Cnmda.is_open())
	{
		outfile__array_Core_0_Cnmda.write(reinterpret_cast<char*>(_array_Core_0_Cnmda), 256*sizeof(_array_Core_0_Cnmda[0]));
		outfile__array_Core_0_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cnmda." << endl;
	}
	ofstream outfile__array_Core_0_Csoma_ahp;
	outfile__array_Core_0_Csoma_ahp.open("results/_array_Core_0_Csoma_ahp_5494973797835586512", ios::binary | ios::out);
	if(outfile__array_Core_0_Csoma_ahp.is_open())
	{
		outfile__array_Core_0_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_0_Csoma_ahp), 1*sizeof(_array_Core_0_Csoma_ahp[0]));
		outfile__array_Core_0_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_0_Csoma_mem;
	outfile__array_Core_0_Csoma_mem.open("results/_array_Core_0_Csoma_mem_3842883367905323755", ios::binary | ios::out);
	if(outfile__array_Core_0_Csoma_mem.is_open())
	{
		outfile__array_Core_0_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_0_Csoma_mem), 1*sizeof(_array_Core_0_Csoma_mem[0]));
		outfile__array_Core_0_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_0_i;
	outfile__array_Core_0_i.open("results/_array_Core_0_i_-1371623733803185107", ios::binary | ios::out);
	if(outfile__array_Core_0_i.is_open())
	{
		outfile__array_Core_0_i.write(reinterpret_cast<char*>(_array_Core_0_i), 256*sizeof(_array_Core_0_i[0]));
		outfile__array_Core_0_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_i." << endl;
	}
	ofstream outfile__array_Core_0_I0;
	outfile__array_Core_0_I0.open("results/_array_Core_0_I0_7049526810013195665", ios::binary | ios::out);
	if(outfile__array_Core_0_I0.is_open())
	{
		outfile__array_Core_0_I0.write(reinterpret_cast<char*>(_array_Core_0_I0), 1*sizeof(_array_Core_0_I0[0]));
		outfile__array_Core_0_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I0." << endl;
	}
	ofstream outfile__array_Core_0_Iampa;
	outfile__array_Core_0_Iampa.open("results/_array_Core_0_Iampa_-269647382744926883", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa.is_open())
	{
		outfile__array_Core_0_Iampa.write(reinterpret_cast<char*>(_array_Core_0_Iampa), 256*sizeof(_array_Core_0_Iampa[0]));
		outfile__array_Core_0_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_std;
	outfile__array_Core_0_Iampa_std.open("results/_array_Core_0_Iampa_std_6207186573929062741", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_std.is_open())
	{
		outfile__array_Core_0_Iampa_std.write(reinterpret_cast<char*>(_array_Core_0_Iampa_std), 256*sizeof(_array_Core_0_Iampa_std[0]));
		outfile__array_Core_0_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_std_tau;
	outfile__array_Core_0_Iampa_std_tau.open("results/_array_Core_0_Iampa_std_tau_3434812868919116629", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_std_tau.is_open())
	{
		outfile__array_Core_0_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_0_Iampa_std_tau), 256*sizeof(_array_Core_0_Iampa_std_tau[0]));
		outfile__array_Core_0_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_tau;
	outfile__array_Core_0_Iampa_tau.open("results/_array_Core_0_Iampa_tau_7438063140250142015", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_tau.is_open())
	{
		outfile__array_Core_0_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_0_Iampa_tau), 256*sizeof(_array_Core_0_Iampa_tau[0]));
		outfile__array_Core_0_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_w0;
	outfile__array_Core_0_Iampa_w0.open("results/_array_Core_0_Iampa_w0_7738764252434637127", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_w0.is_open())
	{
		outfile__array_Core_0_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_0_Iampa_w0), 256*sizeof(_array_Core_0_Iampa_w0[0]));
		outfile__array_Core_0_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_0_Idischarge_w;
	outfile__array_Core_0_Idischarge_w.open("results/_array_Core_0_Idischarge_w_-7259741892300200687", ios::binary | ios::out);
	if(outfile__array_Core_0_Idischarge_w.is_open())
	{
		outfile__array_Core_0_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_0_Idischarge_w), 256*sizeof(_array_Core_0_Idischarge_w[0]));
		outfile__array_Core_0_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a;
	outfile__array_Core_0_Igaba_a.open("results/_array_Core_0_Igaba_a_-8059087882121577045", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a.is_open())
	{
		outfile__array_Core_0_Igaba_a.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a), 256*sizeof(_array_Core_0_Igaba_a[0]));
		outfile__array_Core_0_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a_tau;
	outfile__array_Core_0_Igaba_a_tau.open("results/_array_Core_0_Igaba_a_tau_8690588942846177826", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a_tau.is_open())
	{
		outfile__array_Core_0_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a_tau), 256*sizeof(_array_Core_0_Igaba_a_tau[0]));
		outfile__array_Core_0_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a_w0;
	outfile__array_Core_0_Igaba_a_w0.open("results/_array_Core_0_Igaba_a_w0_-5305266686499110361", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a_w0.is_open())
	{
		outfile__array_Core_0_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a_w0), 256*sizeof(_array_Core_0_Igaba_a_w0[0]));
		outfile__array_Core_0_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b;
	outfile__array_Core_0_Igaba_b.open("results/_array_Core_0_Igaba_b_8955467284382429198", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b.is_open())
	{
		outfile__array_Core_0_Igaba_b.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b), 256*sizeof(_array_Core_0_Igaba_b[0]));
		outfile__array_Core_0_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b_tau;
	outfile__array_Core_0_Igaba_b_tau.open("results/_array_Core_0_Igaba_b_tau_2257388098244681887", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b_tau.is_open())
	{
		outfile__array_Core_0_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b_tau), 256*sizeof(_array_Core_0_Igaba_b_tau[0]));
		outfile__array_Core_0_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b_w0;
	outfile__array_Core_0_Igaba_b_w0.open("results/_array_Core_0_Igaba_b_w0_-7089499549364120982", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b_w0.is_open())
	{
		outfile__array_Core_0_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b_w0), 256*sizeof(_array_Core_0_Igaba_b_w0[0]));
		outfile__array_Core_0_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_0_Inmda;
	outfile__array_Core_0_Inmda.open("results/_array_Core_0_Inmda_-3809229076374662426", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda.is_open())
	{
		outfile__array_Core_0_Inmda.write(reinterpret_cast<char*>(_array_Core_0_Inmda), 256*sizeof(_array_Core_0_Inmda[0]));
		outfile__array_Core_0_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_tau;
	outfile__array_Core_0_Inmda_tau.open("results/_array_Core_0_Inmda_tau_-3745680445146158474", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_tau.is_open())
	{
		outfile__array_Core_0_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_0_Inmda_tau), 256*sizeof(_array_Core_0_Inmda_tau[0]));
		outfile__array_Core_0_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_thr;
	outfile__array_Core_0_Inmda_thr.open("results/_array_Core_0_Inmda_thr_4448768838734952042", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_thr.is_open())
	{
		outfile__array_Core_0_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_0_Inmda_thr), 256*sizeof(_array_Core_0_Inmda_thr[0]));
		outfile__array_Core_0_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_w0;
	outfile__array_Core_0_Inmda_w0.open("results/_array_Core_0_Inmda_w0_7630568462599274607", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_w0.is_open())
	{
		outfile__array_Core_0_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_0_Inmda_w0), 256*sizeof(_array_Core_0_Inmda_w0[0]));
		outfile__array_Core_0_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp;
	outfile__array_Core_0_Isoma_ahp.open("results/_array_Core_0_Isoma_ahp_2036921143187927753", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp.is_open())
	{
		outfile__array_Core_0_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp), 256*sizeof(_array_Core_0_Isoma_ahp[0]));
		outfile__array_Core_0_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_g;
	outfile__array_Core_0_Isoma_ahp_g.open("results/_array_Core_0_Isoma_ahp_g_3633348949449505977", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_g), 1*sizeof(_array_Core_0_Isoma_ahp_g[0]));
		outfile__array_Core_0_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_tau;
	outfile__array_Core_0_Isoma_ahp_tau.open("results/_array_Core_0_Isoma_ahp_tau_-4124775234267573976", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_tau), 1*sizeof(_array_Core_0_Isoma_ahp_tau[0]));
		outfile__array_Core_0_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_w;
	outfile__array_Core_0_Isoma_ahp_w.open("results/_array_Core_0_Isoma_ahp_w_8563646298024027350", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_w), 256*sizeof(_array_Core_0_Isoma_ahp_w[0]));
		outfile__array_Core_0_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_const;
	outfile__array_Core_0_Isoma_const.open("results/_array_Core_0_Isoma_const_-5337068026291490090", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_const.is_open())
	{
		outfile__array_Core_0_Isoma_const.write(reinterpret_cast<char*>(_array_Core_0_Isoma_const), 256*sizeof(_array_Core_0_Isoma_const[0]));
		outfile__array_Core_0_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_dpi_tau;
	outfile__array_Core_0_Isoma_dpi_tau.open("results/_array_Core_0_Isoma_dpi_tau_4778981412958186835", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_0_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_0_Isoma_dpi_tau), 1*sizeof(_array_Core_0_Isoma_dpi_tau[0]));
		outfile__array_Core_0_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_mem;
	outfile__array_Core_0_Isoma_mem.open("results/_array_Core_0_Isoma_mem_-7045881043035510653", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_mem.is_open())
	{
		outfile__array_Core_0_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_0_Isoma_mem), 256*sizeof(_array_Core_0_Isoma_mem[0]));
		outfile__array_Core_0_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_gain;
	outfile__array_Core_0_Isoma_pfb_gain.open("results/_array_Core_0_Isoma_pfb_gain_-4320093848580378724", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_gain), 1*sizeof(_array_Core_0_Isoma_pfb_gain[0]));
		outfile__array_Core_0_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_norm;
	outfile__array_Core_0_Isoma_pfb_norm.open("results/_array_Core_0_Isoma_pfb_norm_4294174287630737007", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_norm), 1*sizeof(_array_Core_0_Isoma_pfb_norm[0]));
		outfile__array_Core_0_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_th;
	outfile__array_Core_0_Isoma_pfb_th.open("results/_array_Core_0_Isoma_pfb_th_-4470583353668779299", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_th), 1*sizeof(_array_Core_0_Isoma_pfb_th[0]));
		outfile__array_Core_0_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_reset;
	outfile__array_Core_0_Isoma_reset.open("results/_array_Core_0_Isoma_reset_-3113880950826112905", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_reset.is_open())
	{
		outfile__array_Core_0_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_0_Isoma_reset), 1*sizeof(_array_Core_0_Isoma_reset[0]));
		outfile__array_Core_0_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_th;
	outfile__array_Core_0_Isoma_th.open("results/_array_Core_0_Isoma_th_-7330622582542319259", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_th.is_open())
	{
		outfile__array_Core_0_Isoma_th.write(reinterpret_cast<char*>(_array_Core_0_Isoma_th), 1*sizeof(_array_Core_0_Isoma_th[0]));
		outfile__array_Core_0_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_0_kn;
	outfile__array_Core_0_kn.open("results/_array_Core_0_kn_-6768270773870419732", ios::binary | ios::out);
	if(outfile__array_Core_0_kn.is_open())
	{
		outfile__array_Core_0_kn.write(reinterpret_cast<char*>(_array_Core_0_kn), 1*sizeof(_array_Core_0_kn[0]));
		outfile__array_Core_0_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kn." << endl;
	}
	ofstream outfile__array_Core_0_kp;
	outfile__array_Core_0_kp.open("results/_array_Core_0_kp_5306365594104046081", ios::binary | ios::out);
	if(outfile__array_Core_0_kp.is_open())
	{
		outfile__array_Core_0_kp.write(reinterpret_cast<char*>(_array_Core_0_kp), 1*sizeof(_array_Core_0_kp[0]));
		outfile__array_Core_0_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kp." << endl;
	}
	ofstream outfile__array_Core_0_lastspike;
	outfile__array_Core_0_lastspike.open("results/_array_Core_0_lastspike_4678314146928097438", ios::binary | ios::out);
	if(outfile__array_Core_0_lastspike.is_open())
	{
		outfile__array_Core_0_lastspike.write(reinterpret_cast<char*>(_array_Core_0_lastspike), 256*sizeof(_array_Core_0_lastspike[0]));
		outfile__array_Core_0_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_lastspike." << endl;
	}
	ofstream outfile__array_Core_0_not_refractory;
	outfile__array_Core_0_not_refractory.open("results/_array_Core_0_not_refractory_-4124036056425448402", ios::binary | ios::out);
	if(outfile__array_Core_0_not_refractory.is_open())
	{
		outfile__array_Core_0_not_refractory.write(reinterpret_cast<char*>(_array_Core_0_not_refractory), 256*sizeof(_array_Core_0_not_refractory[0]));
		outfile__array_Core_0_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_not_refractory." << endl;
	}
	ofstream outfile__array_Core_0_soma_refP;
	outfile__array_Core_0_soma_refP.open("results/_array_Core_0_soma_refP_-6305508745593154414", ios::binary | ios::out);
	if(outfile__array_Core_0_soma_refP.is_open())
	{
		outfile__array_Core_0_soma_refP.write(reinterpret_cast<char*>(_array_Core_0_soma_refP), 1*sizeof(_array_Core_0_soma_refP[0]));
		outfile__array_Core_0_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_soma_refP." << endl;
	}
	ofstream outfile__array_Core_0_std_pulse;
	outfile__array_Core_0_std_pulse.open("results/_array_Core_0_std_pulse_-7696731144494514884", ios::binary | ios::out);
	if(outfile__array_Core_0_std_pulse.is_open())
	{
		outfile__array_Core_0_std_pulse.write(reinterpret_cast<char*>(_array_Core_0_std_pulse), 256*sizeof(_array_Core_0_std_pulse[0]));
		outfile__array_Core_0_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_std_pulse." << endl;
	}
	ofstream outfile__array_Core_0_tau_pulse;
	outfile__array_Core_0_tau_pulse.open("results/_array_Core_0_tau_pulse_3517270723211288522", ios::binary | ios::out);
	if(outfile__array_Core_0_tau_pulse.is_open())
	{
		outfile__array_Core_0_tau_pulse.write(reinterpret_cast<char*>(_array_Core_0_tau_pulse), 256*sizeof(_array_Core_0_tau_pulse[0]));
		outfile__array_Core_0_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_0_Ut;
	outfile__array_Core_0_Ut.open("results/_array_Core_0_Ut_-5057909100450898587", ios::binary | ios::out);
	if(outfile__array_Core_0_Ut.is_open())
	{
		outfile__array_Core_0_Ut.write(reinterpret_cast<char*>(_array_Core_0_Ut), 1*sizeof(_array_Core_0_Ut[0]));
		outfile__array_Core_0_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ut." << endl;
	}
	ofstream outfile__array_Core_0_Va;
	outfile__array_Core_0_Va.open("results/_array_Core_0_Va_-5483297766233997398", ios::binary | ios::out);
	if(outfile__array_Core_0_Va.is_open())
	{
		outfile__array_Core_0_Va.write(reinterpret_cast<char*>(_array_Core_0_Va), 256*sizeof(_array_Core_0_Va[0]));
		outfile__array_Core_0_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Va." << endl;
	}
	ofstream outfile__array_Core_0_Vw;
	outfile__array_Core_0_Vw.open("results/_array_Core_0_Vw_8242466725197896190", ios::binary | ios::out);
	if(outfile__array_Core_0_Vw.is_open())
	{
		outfile__array_Core_0_Vw.write(reinterpret_cast<char*>(_array_Core_0_Vw), 256*sizeof(_array_Core_0_Vw[0]));
		outfile__array_Core_0_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Vw." << endl;
	}
	ofstream outfile__array_Core_1__spikespace;
	outfile__array_Core_1__spikespace.open("results/_array_Core_1__spikespace_963105486287218809", ios::binary | ios::out);
	if(outfile__array_Core_1__spikespace.is_open())
	{
		outfile__array_Core_1__spikespace.write(reinterpret_cast<char*>(_array_Core_1__spikespace), 257*sizeof(_array_Core_1__spikespace[0]));
		outfile__array_Core_1__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1__spikespace." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ahp;
	outfile__array_Core_1_alpha_ahp.open("results/_array_Core_1_alpha_ahp_4440375487354383449", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ahp.is_open())
	{
		outfile__array_Core_1_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_1_alpha_ahp), 256*sizeof(_array_Core_1_alpha_ahp[0]));
		outfile__array_Core_1_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ampa;
	outfile__array_Core_1_alpha_ampa.open("results/_array_Core_1_alpha_ampa_-6722887049499121426", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ampa.is_open())
	{
		outfile__array_Core_1_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_1_alpha_ampa), 256*sizeof(_array_Core_1_alpha_ampa[0]));
		outfile__array_Core_1_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ampa_std;
	outfile__array_Core_1_alpha_ampa_std.open("results/_array_Core_1_alpha_ampa_std_1481189870412631920", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ampa_std.is_open())
	{
		outfile__array_Core_1_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_1_alpha_ampa_std), 256*sizeof(_array_Core_1_alpha_ampa_std[0]));
		outfile__array_Core_1_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_1_alpha_gaba_a;
	outfile__array_Core_1_alpha_gaba_a.open("results/_array_Core_1_alpha_gaba_a_5649961422608335874", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_gaba_a.is_open())
	{
		outfile__array_Core_1_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_alpha_gaba_a), 256*sizeof(_array_Core_1_alpha_gaba_a[0]));
		outfile__array_Core_1_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_alpha_gaba_b;
	outfile__array_Core_1_alpha_gaba_b.open("results/_array_Core_1_alpha_gaba_b_-7497179246399591797", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_gaba_b.is_open())
	{
		outfile__array_Core_1_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_alpha_gaba_b), 256*sizeof(_array_Core_1_alpha_gaba_b[0]));
		outfile__array_Core_1_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_alpha_nmda;
	outfile__array_Core_1_alpha_nmda.open("results/_array_Core_1_alpha_nmda_-4293192421204204284", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_nmda.is_open())
	{
		outfile__array_Core_1_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_1_alpha_nmda), 256*sizeof(_array_Core_1_alpha_nmda[0]));
		outfile__array_Core_1_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_1_alpha_soma;
	outfile__array_Core_1_alpha_soma.open("results/_array_Core_1_alpha_soma_959323957028427637", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_soma.is_open())
	{
		outfile__array_Core_1_alpha_soma.write(reinterpret_cast<char*>(_array_Core_1_alpha_soma), 256*sizeof(_array_Core_1_alpha_soma[0]));
		outfile__array_Core_1_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_1_Campa;
	outfile__array_Core_1_Campa.open("results/_array_Core_1_Campa_-8009260277112504516", ios::binary | ios::out);
	if(outfile__array_Core_1_Campa.is_open())
	{
		outfile__array_Core_1_Campa.write(reinterpret_cast<char*>(_array_Core_1_Campa), 256*sizeof(_array_Core_1_Campa[0]));
		outfile__array_Core_1_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Campa." << endl;
	}
	ofstream outfile__array_Core_1_Campa_std;
	outfile__array_Core_1_Campa_std.open("results/_array_Core_1_Campa_std_65390544948872634", ios::binary | ios::out);
	if(outfile__array_Core_1_Campa_std.is_open())
	{
		outfile__array_Core_1_Campa_std.write(reinterpret_cast<char*>(_array_Core_1_Campa_std), 256*sizeof(_array_Core_1_Campa_std[0]));
		outfile__array_Core_1_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Campa_std." << endl;
	}
	ofstream outfile__array_Core_1_Cgaba_a;
	outfile__array_Core_1_Cgaba_a.open("results/_array_Core_1_Cgaba_a_3498736502924561049", ios::binary | ios::out);
	if(outfile__array_Core_1_Cgaba_a.is_open())
	{
		outfile__array_Core_1_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_1_Cgaba_a), 256*sizeof(_array_Core_1_Cgaba_a[0]));
		outfile__array_Core_1_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_1_Cgaba_b;
	outfile__array_Core_1_Cgaba_b.open("results/_array_Core_1_Cgaba_b_6989048795841175659", ios::binary | ios::out);
	if(outfile__array_Core_1_Cgaba_b.is_open())
	{
		outfile__array_Core_1_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_1_Cgaba_b), 256*sizeof(_array_Core_1_Cgaba_b[0]));
		outfile__array_Core_1_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_1_Cnmda;
	outfile__array_Core_1_Cnmda.open("results/_array_Core_1_Cnmda_5352998533317762783", ios::binary | ios::out);
	if(outfile__array_Core_1_Cnmda.is_open())
	{
		outfile__array_Core_1_Cnmda.write(reinterpret_cast<char*>(_array_Core_1_Cnmda), 256*sizeof(_array_Core_1_Cnmda[0]));
		outfile__array_Core_1_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cnmda." << endl;
	}
	ofstream outfile__array_Core_1_Csoma_ahp;
	outfile__array_Core_1_Csoma_ahp.open("results/_array_Core_1_Csoma_ahp_-7922308246201053753", ios::binary | ios::out);
	if(outfile__array_Core_1_Csoma_ahp.is_open())
	{
		outfile__array_Core_1_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_1_Csoma_ahp), 1*sizeof(_array_Core_1_Csoma_ahp[0]));
		outfile__array_Core_1_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_1_Csoma_mem;
	outfile__array_Core_1_Csoma_mem.open("results/_array_Core_1_Csoma_mem_855932503133372145", ios::binary | ios::out);
	if(outfile__array_Core_1_Csoma_mem.is_open())
	{
		outfile__array_Core_1_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_1_Csoma_mem), 1*sizeof(_array_Core_1_Csoma_mem[0]));
		outfile__array_Core_1_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_1_i;
	outfile__array_Core_1_i.open("results/_array_Core_1_i_-218570630143841426", ios::binary | ios::out);
	if(outfile__array_Core_1_i.is_open())
	{
		outfile__array_Core_1_i.write(reinterpret_cast<char*>(_array_Core_1_i), 256*sizeof(_array_Core_1_i[0]));
		outfile__array_Core_1_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_i." << endl;
	}
	ofstream outfile__array_Core_1_I0;
	outfile__array_Core_1_I0.open("results/_array_Core_1_I0_7010332896084987585", ios::binary | ios::out);
	if(outfile__array_Core_1_I0.is_open())
	{
		outfile__array_Core_1_I0.write(reinterpret_cast<char*>(_array_Core_1_I0), 1*sizeof(_array_Core_1_I0[0]));
		outfile__array_Core_1_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I0." << endl;
	}
	ofstream outfile__array_Core_1_Iampa;
	outfile__array_Core_1_Iampa.open("results/_array_Core_1_Iampa_-2082194295955244023", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa.is_open())
	{
		outfile__array_Core_1_Iampa.write(reinterpret_cast<char*>(_array_Core_1_Iampa), 256*sizeof(_array_Core_1_Iampa[0]));
		outfile__array_Core_1_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_std;
	outfile__array_Core_1_Iampa_std.open("results/_array_Core_1_Iampa_std_7569241169102990701", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_std.is_open())
	{
		outfile__array_Core_1_Iampa_std.write(reinterpret_cast<char*>(_array_Core_1_Iampa_std), 256*sizeof(_array_Core_1_Iampa_std[0]));
		outfile__array_Core_1_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_std_tau;
	outfile__array_Core_1_Iampa_std_tau.open("results/_array_Core_1_Iampa_std_tau_-8323730715117560955", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_std_tau.is_open())
	{
		outfile__array_Core_1_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_1_Iampa_std_tau), 256*sizeof(_array_Core_1_Iampa_std_tau[0]));
		outfile__array_Core_1_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_tau;
	outfile__array_Core_1_Iampa_tau.open("results/_array_Core_1_Iampa_tau_-5546232179122822469", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_tau.is_open())
	{
		outfile__array_Core_1_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_1_Iampa_tau), 256*sizeof(_array_Core_1_Iampa_tau[0]));
		outfile__array_Core_1_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_w0;
	outfile__array_Core_1_Iampa_w0.open("results/_array_Core_1_Iampa_w0_-1455839730530080552", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_w0.is_open())
	{
		outfile__array_Core_1_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_1_Iampa_w0), 256*sizeof(_array_Core_1_Iampa_w0[0]));
		outfile__array_Core_1_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_1_Idischarge_w;
	outfile__array_Core_1_Idischarge_w.open("results/_array_Core_1_Idischarge_w_830059393334653180", ios::binary | ios::out);
	if(outfile__array_Core_1_Idischarge_w.is_open())
	{
		outfile__array_Core_1_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_1_Idischarge_w), 256*sizeof(_array_Core_1_Idischarge_w[0]));
		outfile__array_Core_1_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a;
	outfile__array_Core_1_Igaba_a.open("results/_array_Core_1_Igaba_a_-5770479164978080365", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a.is_open())
	{
		outfile__array_Core_1_Igaba_a.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a), 256*sizeof(_array_Core_1_Igaba_a[0]));
		outfile__array_Core_1_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a_tau;
	outfile__array_Core_1_Igaba_a_tau.open("results/_array_Core_1_Igaba_a_tau_5361737230944483077", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a_tau.is_open())
	{
		outfile__array_Core_1_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a_tau), 256*sizeof(_array_Core_1_Igaba_a_tau[0]));
		outfile__array_Core_1_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a_w0;
	outfile__array_Core_1_Igaba_a_w0.open("results/_array_Core_1_Igaba_a_w0_-8404608609272304026", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a_w0.is_open())
	{
		outfile__array_Core_1_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a_w0), 256*sizeof(_array_Core_1_Igaba_a_w0[0]));
		outfile__array_Core_1_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b;
	outfile__array_Core_1_Igaba_b.open("results/_array_Core_1_Igaba_b_6473848827785336156", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b.is_open())
	{
		outfile__array_Core_1_Igaba_b.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b), 256*sizeof(_array_Core_1_Igaba_b[0]));
		outfile__array_Core_1_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b_tau;
	outfile__array_Core_1_Igaba_b_tau.open("results/_array_Core_1_Igaba_b_tau_1084825724142213931", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b_tau.is_open())
	{
		outfile__array_Core_1_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b_tau), 256*sizeof(_array_Core_1_Igaba_b_tau[0]));
		outfile__array_Core_1_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b_w0;
	outfile__array_Core_1_Igaba_b_w0.open("results/_array_Core_1_Igaba_b_w0_-8110071652816278246", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b_w0.is_open())
	{
		outfile__array_Core_1_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b_w0), 256*sizeof(_array_Core_1_Igaba_b_w0[0]));
		outfile__array_Core_1_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_1_Inmda;
	outfile__array_Core_1_Inmda.open("results/_array_Core_1_Inmda_6506160709246417380", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda.is_open())
	{
		outfile__array_Core_1_Inmda.write(reinterpret_cast<char*>(_array_Core_1_Inmda), 256*sizeof(_array_Core_1_Inmda[0]));
		outfile__array_Core_1_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_tau;
	outfile__array_Core_1_Inmda_tau.open("results/_array_Core_1_Inmda_tau_3598429399157826184", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_tau.is_open())
	{
		outfile__array_Core_1_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_1_Inmda_tau), 256*sizeof(_array_Core_1_Inmda_tau[0]));
		outfile__array_Core_1_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_thr;
	outfile__array_Core_1_Inmda_thr.open("results/_array_Core_1_Inmda_thr_-6383953737170861005", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_thr.is_open())
	{
		outfile__array_Core_1_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_1_Inmda_thr), 256*sizeof(_array_Core_1_Inmda_thr[0]));
		outfile__array_Core_1_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_w0;
	outfile__array_Core_1_Inmda_w0.open("results/_array_Core_1_Inmda_w0_2578331327250698089", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_w0.is_open())
	{
		outfile__array_Core_1_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_1_Inmda_w0), 256*sizeof(_array_Core_1_Inmda_w0[0]));
		outfile__array_Core_1_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp;
	outfile__array_Core_1_Isoma_ahp.open("results/_array_Core_1_Isoma_ahp_-7850242988240483088", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp.is_open())
	{
		outfile__array_Core_1_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp), 256*sizeof(_array_Core_1_Isoma_ahp[0]));
		outfile__array_Core_1_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_g;
	outfile__array_Core_1_Isoma_ahp_g.open("results/_array_Core_1_Isoma_ahp_g_-7299635290943326042", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_g), 1*sizeof(_array_Core_1_Isoma_ahp_g[0]));
		outfile__array_Core_1_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_tau;
	outfile__array_Core_1_Isoma_ahp_tau.open("results/_array_Core_1_Isoma_ahp_tau_-7672466252443126420", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_tau), 1*sizeof(_array_Core_1_Isoma_ahp_tau[0]));
		outfile__array_Core_1_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_w;
	outfile__array_Core_1_Isoma_ahp_w.open("results/_array_Core_1_Isoma_ahp_w_-5248020499752400171", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_w), 256*sizeof(_array_Core_1_Isoma_ahp_w[0]));
		outfile__array_Core_1_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_const;
	outfile__array_Core_1_Isoma_const.open("results/_array_Core_1_Isoma_const_5067919414243309254", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_const.is_open())
	{
		outfile__array_Core_1_Isoma_const.write(reinterpret_cast<char*>(_array_Core_1_Isoma_const), 256*sizeof(_array_Core_1_Isoma_const[0]));
		outfile__array_Core_1_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_dpi_tau;
	outfile__array_Core_1_Isoma_dpi_tau.open("results/_array_Core_1_Isoma_dpi_tau_9148214994094173066", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_1_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_1_Isoma_dpi_tau), 1*sizeof(_array_Core_1_Isoma_dpi_tau[0]));
		outfile__array_Core_1_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_mem;
	outfile__array_Core_1_Isoma_mem.open("results/_array_Core_1_Isoma_mem_85304726370052898", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_mem.is_open())
	{
		outfile__array_Core_1_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_1_Isoma_mem), 256*sizeof(_array_Core_1_Isoma_mem[0]));
		outfile__array_Core_1_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_gain;
	outfile__array_Core_1_Isoma_pfb_gain.open("results/_array_Core_1_Isoma_pfb_gain_4337708753507114907", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_gain), 1*sizeof(_array_Core_1_Isoma_pfb_gain[0]));
		outfile__array_Core_1_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_norm;
	outfile__array_Core_1_Isoma_pfb_norm.open("results/_array_Core_1_Isoma_pfb_norm_-8923072168623068528", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_norm), 1*sizeof(_array_Core_1_Isoma_pfb_norm[0]));
		outfile__array_Core_1_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_th;
	outfile__array_Core_1_Isoma_pfb_th.open("results/_array_Core_1_Isoma_pfb_th_-2494129002797975231", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_th), 1*sizeof(_array_Core_1_Isoma_pfb_th[0]));
		outfile__array_Core_1_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_reset;
	outfile__array_Core_1_Isoma_reset.open("results/_array_Core_1_Isoma_reset_-7530213999517779618", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_reset.is_open())
	{
		outfile__array_Core_1_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_1_Isoma_reset), 1*sizeof(_array_Core_1_Isoma_reset[0]));
		outfile__array_Core_1_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_th;
	outfile__array_Core_1_Isoma_th.open("results/_array_Core_1_Isoma_th_-4550119347409772428", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_th.is_open())
	{
		outfile__array_Core_1_Isoma_th.write(reinterpret_cast<char*>(_array_Core_1_Isoma_th), 1*sizeof(_array_Core_1_Isoma_th[0]));
		outfile__array_Core_1_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_1_kn;
	outfile__array_Core_1_kn.open("results/_array_Core_1_kn_2986542827352347425", ios::binary | ios::out);
	if(outfile__array_Core_1_kn.is_open())
	{
		outfile__array_Core_1_kn.write(reinterpret_cast<char*>(_array_Core_1_kn), 1*sizeof(_array_Core_1_kn[0]));
		outfile__array_Core_1_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kn." << endl;
	}
	ofstream outfile__array_Core_1_kp;
	outfile__array_Core_1_kp.open("results/_array_Core_1_kp_-6853757502283764396", ios::binary | ios::out);
	if(outfile__array_Core_1_kp.is_open())
	{
		outfile__array_Core_1_kp.write(reinterpret_cast<char*>(_array_Core_1_kp), 1*sizeof(_array_Core_1_kp[0]));
		outfile__array_Core_1_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kp." << endl;
	}
	ofstream outfile__array_Core_1_lastspike;
	outfile__array_Core_1_lastspike.open("results/_array_Core_1_lastspike_-9016787105851240046", ios::binary | ios::out);
	if(outfile__array_Core_1_lastspike.is_open())
	{
		outfile__array_Core_1_lastspike.write(reinterpret_cast<char*>(_array_Core_1_lastspike), 256*sizeof(_array_Core_1_lastspike[0]));
		outfile__array_Core_1_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_lastspike." << endl;
	}
	ofstream outfile__array_Core_1_not_refractory;
	outfile__array_Core_1_not_refractory.open("results/_array_Core_1_not_refractory_3550889722076245787", ios::binary | ios::out);
	if(outfile__array_Core_1_not_refractory.is_open())
	{
		outfile__array_Core_1_not_refractory.write(reinterpret_cast<char*>(_array_Core_1_not_refractory), 256*sizeof(_array_Core_1_not_refractory[0]));
		outfile__array_Core_1_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_not_refractory." << endl;
	}
	ofstream outfile__array_Core_1_soma_refP;
	outfile__array_Core_1_soma_refP.open("results/_array_Core_1_soma_refP_6271907163872982280", ios::binary | ios::out);
	if(outfile__array_Core_1_soma_refP.is_open())
	{
		outfile__array_Core_1_soma_refP.write(reinterpret_cast<char*>(_array_Core_1_soma_refP), 1*sizeof(_array_Core_1_soma_refP[0]));
		outfile__array_Core_1_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_soma_refP." << endl;
	}
	ofstream outfile__array_Core_1_std_pulse;
	outfile__array_Core_1_std_pulse.open("results/_array_Core_1_std_pulse_666030950141839220", ios::binary | ios::out);
	if(outfile__array_Core_1_std_pulse.is_open())
	{
		outfile__array_Core_1_std_pulse.write(reinterpret_cast<char*>(_array_Core_1_std_pulse), 256*sizeof(_array_Core_1_std_pulse[0]));
		outfile__array_Core_1_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_std_pulse." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_3__sub_idx;
	outfile__array_Core_1_subgroup_3__sub_idx.open("results/_array_Core_1_subgroup_3__sub_idx_-935452651292048171", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_3__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_3__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_3__sub_idx), 1*sizeof(_array_Core_1_subgroup_3__sub_idx[0]));
		outfile__array_Core_1_subgroup_3__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_3__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_tau_pulse;
	outfile__array_Core_1_tau_pulse.open("results/_array_Core_1_tau_pulse_-8257038538851597583", ios::binary | ios::out);
	if(outfile__array_Core_1_tau_pulse.is_open())
	{
		outfile__array_Core_1_tau_pulse.write(reinterpret_cast<char*>(_array_Core_1_tau_pulse), 256*sizeof(_array_Core_1_tau_pulse[0]));
		outfile__array_Core_1_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_1_Ut;
	outfile__array_Core_1_Ut.open("results/_array_Core_1_Ut_-5105740035804653580", ios::binary | ios::out);
	if(outfile__array_Core_1_Ut.is_open())
	{
		outfile__array_Core_1_Ut.write(reinterpret_cast<char*>(_array_Core_1_Ut), 1*sizeof(_array_Core_1_Ut[0]));
		outfile__array_Core_1_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ut." << endl;
	}
	ofstream outfile__array_Core_1_Va;
	outfile__array_Core_1_Va.open("results/_array_Core_1_Va_-4158731773091224747", ios::binary | ios::out);
	if(outfile__array_Core_1_Va.is_open())
	{
		outfile__array_Core_1_Va.write(reinterpret_cast<char*>(_array_Core_1_Va), 256*sizeof(_array_Core_1_Va[0]));
		outfile__array_Core_1_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Va." << endl;
	}
	ofstream outfile__array_Core_1_Vw;
	outfile__array_Core_1_Vw.open("results/_array_Core_1_Vw_6890368954871957676", ios::binary | ios::out);
	if(outfile__array_Core_1_Vw.is_open())
	{
		outfile__array_Core_1_Vw.write(reinterpret_cast<char*>(_array_Core_1_Vw), 256*sizeof(_array_Core_1_Vw[0]));
		outfile__array_Core_1_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Vw." << endl;
	}
	ofstream outfile__array_Core_2__spikespace;
	outfile__array_Core_2__spikespace.open("results/_array_Core_2__spikespace_6674516544481211078", ios::binary | ios::out);
	if(outfile__array_Core_2__spikespace.is_open())
	{
		outfile__array_Core_2__spikespace.write(reinterpret_cast<char*>(_array_Core_2__spikespace), 257*sizeof(_array_Core_2__spikespace[0]));
		outfile__array_Core_2__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2__spikespace." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ahp;
	outfile__array_Core_2_alpha_ahp.open("results/_array_Core_2_alpha_ahp_-3505914429719066702", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ahp.is_open())
	{
		outfile__array_Core_2_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_2_alpha_ahp), 256*sizeof(_array_Core_2_alpha_ahp[0]));
		outfile__array_Core_2_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ampa;
	outfile__array_Core_2_alpha_ampa.open("results/_array_Core_2_alpha_ampa_-6128085032208333743", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ampa.is_open())
	{
		outfile__array_Core_2_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_2_alpha_ampa), 256*sizeof(_array_Core_2_alpha_ampa[0]));
		outfile__array_Core_2_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ampa_std;
	outfile__array_Core_2_alpha_ampa_std.open("results/_array_Core_2_alpha_ampa_std_4095275947735088976", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ampa_std.is_open())
	{
		outfile__array_Core_2_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_2_alpha_ampa_std), 256*sizeof(_array_Core_2_alpha_ampa_std[0]));
		outfile__array_Core_2_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_2_alpha_gaba_a;
	outfile__array_Core_2_alpha_gaba_a.open("results/_array_Core_2_alpha_gaba_a_-2470016517506719020", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_gaba_a.is_open())
	{
		outfile__array_Core_2_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_alpha_gaba_a), 256*sizeof(_array_Core_2_alpha_gaba_a[0]));
		outfile__array_Core_2_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_alpha_gaba_b;
	outfile__array_Core_2_alpha_gaba_b.open("results/_array_Core_2_alpha_gaba_b_725787064243716707", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_gaba_b.is_open())
	{
		outfile__array_Core_2_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_alpha_gaba_b), 256*sizeof(_array_Core_2_alpha_gaba_b[0]));
		outfile__array_Core_2_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_alpha_nmda;
	outfile__array_Core_2_alpha_nmda.open("results/_array_Core_2_alpha_nmda_549002566286011218", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_nmda.is_open())
	{
		outfile__array_Core_2_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_2_alpha_nmda), 256*sizeof(_array_Core_2_alpha_nmda[0]));
		outfile__array_Core_2_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_2_alpha_soma;
	outfile__array_Core_2_alpha_soma.open("results/_array_Core_2_alpha_soma_-1810518834353338098", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_soma.is_open())
	{
		outfile__array_Core_2_alpha_soma.write(reinterpret_cast<char*>(_array_Core_2_alpha_soma), 256*sizeof(_array_Core_2_alpha_soma[0]));
		outfile__array_Core_2_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_2_Campa;
	outfile__array_Core_2_Campa.open("results/_array_Core_2_Campa_-3984794426523204686", ios::binary | ios::out);
	if(outfile__array_Core_2_Campa.is_open())
	{
		outfile__array_Core_2_Campa.write(reinterpret_cast<char*>(_array_Core_2_Campa), 256*sizeof(_array_Core_2_Campa[0]));
		outfile__array_Core_2_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Campa." << endl;
	}
	ofstream outfile__array_Core_2_Campa_std;
	outfile__array_Core_2_Campa_std.open("results/_array_Core_2_Campa_std_1094536515156749724", ios::binary | ios::out);
	if(outfile__array_Core_2_Campa_std.is_open())
	{
		outfile__array_Core_2_Campa_std.write(reinterpret_cast<char*>(_array_Core_2_Campa_std), 256*sizeof(_array_Core_2_Campa_std[0]));
		outfile__array_Core_2_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Campa_std." << endl;
	}
	ofstream outfile__array_Core_2_Cgaba_a;
	outfile__array_Core_2_Cgaba_a.open("results/_array_Core_2_Cgaba_a_-3345156735061042947", ios::binary | ios::out);
	if(outfile__array_Core_2_Cgaba_a.is_open())
	{
		outfile__array_Core_2_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_2_Cgaba_a), 256*sizeof(_array_Core_2_Cgaba_a[0]));
		outfile__array_Core_2_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_2_Cgaba_b;
	outfile__array_Core_2_Cgaba_b.open("results/_array_Core_2_Cgaba_b_-685623181193626653", ios::binary | ios::out);
	if(outfile__array_Core_2_Cgaba_b.is_open())
	{
		outfile__array_Core_2_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_2_Cgaba_b), 256*sizeof(_array_Core_2_Cgaba_b[0]));
		outfile__array_Core_2_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_2_Cnmda;
	outfile__array_Core_2_Cnmda.open("results/_array_Core_2_Cnmda_106678513324685567", ios::binary | ios::out);
	if(outfile__array_Core_2_Cnmda.is_open())
	{
		outfile__array_Core_2_Cnmda.write(reinterpret_cast<char*>(_array_Core_2_Cnmda), 256*sizeof(_array_Core_2_Cnmda[0]));
		outfile__array_Core_2_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cnmda." << endl;
	}
	ofstream outfile__array_Core_2_Csoma_ahp;
	outfile__array_Core_2_Csoma_ahp.open("results/_array_Core_2_Csoma_ahp_5108612929875011811", ios::binary | ios::out);
	if(outfile__array_Core_2_Csoma_ahp.is_open())
	{
		outfile__array_Core_2_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_2_Csoma_ahp), 1*sizeof(_array_Core_2_Csoma_ahp[0]));
		outfile__array_Core_2_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_2_Csoma_mem;
	outfile__array_Core_2_Csoma_mem.open("results/_array_Core_2_Csoma_mem_1098613300704440439", ios::binary | ios::out);
	if(outfile__array_Core_2_Csoma_mem.is_open())
	{
		outfile__array_Core_2_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_2_Csoma_mem), 1*sizeof(_array_Core_2_Csoma_mem[0]));
		outfile__array_Core_2_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_2_i;
	outfile__array_Core_2_i.open("results/_array_Core_2_i_7693041439242461883", ios::binary | ios::out);
	if(outfile__array_Core_2_i.is_open())
	{
		outfile__array_Core_2_i.write(reinterpret_cast<char*>(_array_Core_2_i), 256*sizeof(_array_Core_2_i[0]));
		outfile__array_Core_2_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_i." << endl;
	}
	ofstream outfile__array_Core_2_I0;
	outfile__array_Core_2_I0.open("results/_array_Core_2_I0_7777431033754190843", ios::binary | ios::out);
	if(outfile__array_Core_2_I0.is_open())
	{
		outfile__array_Core_2_I0.write(reinterpret_cast<char*>(_array_Core_2_I0), 1*sizeof(_array_Core_2_I0[0]));
		outfile__array_Core_2_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I0." << endl;
	}
	ofstream outfile__array_Core_2_Iampa;
	outfile__array_Core_2_Iampa.open("results/_array_Core_2_Iampa_1784159190942631477", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa.is_open())
	{
		outfile__array_Core_2_Iampa.write(reinterpret_cast<char*>(_array_Core_2_Iampa), 256*sizeof(_array_Core_2_Iampa[0]));
		outfile__array_Core_2_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_std;
	outfile__array_Core_2_Iampa_std.open("results/_array_Core_2_Iampa_std_4809922114828561887", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_std.is_open())
	{
		outfile__array_Core_2_Iampa_std.write(reinterpret_cast<char*>(_array_Core_2_Iampa_std), 256*sizeof(_array_Core_2_Iampa_std[0]));
		outfile__array_Core_2_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_std_tau;
	outfile__array_Core_2_Iampa_std_tau.open("results/_array_Core_2_Iampa_std_tau_-9215617134685326595", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_std_tau.is_open())
	{
		outfile__array_Core_2_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_2_Iampa_std_tau), 256*sizeof(_array_Core_2_Iampa_std_tau[0]));
		outfile__array_Core_2_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_tau;
	outfile__array_Core_2_Iampa_tau.open("results/_array_Core_2_Iampa_tau_5697913979879801220", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_tau.is_open())
	{
		outfile__array_Core_2_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_2_Iampa_tau), 256*sizeof(_array_Core_2_Iampa_tau[0]));
		outfile__array_Core_2_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_w0;
	outfile__array_Core_2_Iampa_w0.open("results/_array_Core_2_Iampa_w0_-5791154837429282457", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_w0.is_open())
	{
		outfile__array_Core_2_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_2_Iampa_w0), 256*sizeof(_array_Core_2_Iampa_w0[0]));
		outfile__array_Core_2_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_2_Idischarge_w;
	outfile__array_Core_2_Idischarge_w.open("results/_array_Core_2_Idischarge_w_-1105809497182285651", ios::binary | ios::out);
	if(outfile__array_Core_2_Idischarge_w.is_open())
	{
		outfile__array_Core_2_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_2_Idischarge_w), 256*sizeof(_array_Core_2_Idischarge_w[0]));
		outfile__array_Core_2_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a;
	outfile__array_Core_2_Igaba_a.open("results/_array_Core_2_Igaba_a_-8814372239450235423", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a.is_open())
	{
		outfile__array_Core_2_Igaba_a.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a), 256*sizeof(_array_Core_2_Igaba_a[0]));
		outfile__array_Core_2_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a_tau;
	outfile__array_Core_2_Igaba_a_tau.open("results/_array_Core_2_Igaba_a_tau_-1232131876473992868", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a_tau.is_open())
	{
		outfile__array_Core_2_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a_tau), 256*sizeof(_array_Core_2_Igaba_a_tau[0]));
		outfile__array_Core_2_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a_w0;
	outfile__array_Core_2_Igaba_a_w0.open("results/_array_Core_2_Igaba_a_w0_-3884988762763113417", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a_w0.is_open())
	{
		outfile__array_Core_2_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a_w0), 256*sizeof(_array_Core_2_Igaba_a_w0[0]));
		outfile__array_Core_2_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b;
	outfile__array_Core_2_Igaba_b.open("results/_array_Core_2_Igaba_b_2591300218776596775", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b.is_open())
	{
		outfile__array_Core_2_Igaba_b.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b), 256*sizeof(_array_Core_2_Igaba_b[0]));
		outfile__array_Core_2_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b_tau;
	outfile__array_Core_2_Igaba_b_tau.open("results/_array_Core_2_Igaba_b_tau_-7119727925779082396", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b_tau.is_open())
	{
		outfile__array_Core_2_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b_tau), 256*sizeof(_array_Core_2_Igaba_b_tau[0]));
		outfile__array_Core_2_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b_w0;
	outfile__array_Core_2_Igaba_b_w0.open("results/_array_Core_2_Igaba_b_w0_-7972487759570166086", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b_w0.is_open())
	{
		outfile__array_Core_2_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b_w0), 256*sizeof(_array_Core_2_Igaba_b_w0[0]));
		outfile__array_Core_2_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_2_Inmda;
	outfile__array_Core_2_Inmda.open("results/_array_Core_2_Inmda_-7323785089127814481", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda.is_open())
	{
		outfile__array_Core_2_Inmda.write(reinterpret_cast<char*>(_array_Core_2_Inmda), 256*sizeof(_array_Core_2_Inmda[0]));
		outfile__array_Core_2_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_tau;
	outfile__array_Core_2_Inmda_tau.open("results/_array_Core_2_Inmda_tau_7295387851585057729", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_tau.is_open())
	{
		outfile__array_Core_2_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_2_Inmda_tau), 256*sizeof(_array_Core_2_Inmda_tau[0]));
		outfile__array_Core_2_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_thr;
	outfile__array_Core_2_Inmda_thr.open("results/_array_Core_2_Inmda_thr_2353788862352883921", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_thr.is_open())
	{
		outfile__array_Core_2_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_2_Inmda_thr), 256*sizeof(_array_Core_2_Inmda_thr[0]));
		outfile__array_Core_2_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_w0;
	outfile__array_Core_2_Inmda_w0.open("results/_array_Core_2_Inmda_w0_-4230908609292047484", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_w0.is_open())
	{
		outfile__array_Core_2_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_2_Inmda_w0), 256*sizeof(_array_Core_2_Inmda_w0[0]));
		outfile__array_Core_2_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp;
	outfile__array_Core_2_Isoma_ahp.open("results/_array_Core_2_Isoma_ahp_6545367738620272667", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp.is_open())
	{
		outfile__array_Core_2_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp), 256*sizeof(_array_Core_2_Isoma_ahp[0]));
		outfile__array_Core_2_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_g;
	outfile__array_Core_2_Isoma_ahp_g.open("results/_array_Core_2_Isoma_ahp_g_-6105524004987419104", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_g), 1*sizeof(_array_Core_2_Isoma_ahp_g[0]));
		outfile__array_Core_2_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_tau;
	outfile__array_Core_2_Isoma_ahp_tau.open("results/_array_Core_2_Isoma_ahp_tau_6740452347659304866", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_tau), 1*sizeof(_array_Core_2_Isoma_ahp_tau[0]));
		outfile__array_Core_2_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_w;
	outfile__array_Core_2_Isoma_ahp_w.open("results/_array_Core_2_Isoma_ahp_w_-8461164465304158037", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_w), 256*sizeof(_array_Core_2_Isoma_ahp_w[0]));
		outfile__array_Core_2_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_const;
	outfile__array_Core_2_Isoma_const.open("results/_array_Core_2_Isoma_const_2837349018998999172", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_const.is_open())
	{
		outfile__array_Core_2_Isoma_const.write(reinterpret_cast<char*>(_array_Core_2_Isoma_const), 256*sizeof(_array_Core_2_Isoma_const[0]));
		outfile__array_Core_2_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_dpi_tau;
	outfile__array_Core_2_Isoma_dpi_tau.open("results/_array_Core_2_Isoma_dpi_tau_-8094116912625295472", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_2_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_2_Isoma_dpi_tau), 1*sizeof(_array_Core_2_Isoma_dpi_tau[0]));
		outfile__array_Core_2_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_mem;
	outfile__array_Core_2_Isoma_mem.open("results/_array_Core_2_Isoma_mem_-83367755295804606", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_mem.is_open())
	{
		outfile__array_Core_2_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_2_Isoma_mem), 256*sizeof(_array_Core_2_Isoma_mem[0]));
		outfile__array_Core_2_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_gain;
	outfile__array_Core_2_Isoma_pfb_gain.open("results/_array_Core_2_Isoma_pfb_gain_-2492925460129937060", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_gain), 1*sizeof(_array_Core_2_Isoma_pfb_gain[0]));
		outfile__array_Core_2_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_norm;
	outfile__array_Core_2_Isoma_pfb_norm.open("results/_array_Core_2_Isoma_pfb_norm_3271308624209313127", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_norm), 1*sizeof(_array_Core_2_Isoma_pfb_norm[0]));
		outfile__array_Core_2_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_th;
	outfile__array_Core_2_Isoma_pfb_th.open("results/_array_Core_2_Isoma_pfb_th_3284073067032177037", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_th), 1*sizeof(_array_Core_2_Isoma_pfb_th[0]));
		outfile__array_Core_2_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_reset;
	outfile__array_Core_2_Isoma_reset.open("results/_array_Core_2_Isoma_reset_-1454727481934566155", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_reset.is_open())
	{
		outfile__array_Core_2_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_2_Isoma_reset), 1*sizeof(_array_Core_2_Isoma_reset[0]));
		outfile__array_Core_2_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_th;
	outfile__array_Core_2_Isoma_th.open("results/_array_Core_2_Isoma_th_126412391902563858", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_th.is_open())
	{
		outfile__array_Core_2_Isoma_th.write(reinterpret_cast<char*>(_array_Core_2_Isoma_th), 1*sizeof(_array_Core_2_Isoma_th[0]));
		outfile__array_Core_2_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_2_kn;
	outfile__array_Core_2_kn.open("results/_array_Core_2_kn_4435903784875606692", ios::binary | ios::out);
	if(outfile__array_Core_2_kn.is_open())
	{
		outfile__array_Core_2_kn.write(reinterpret_cast<char*>(_array_Core_2_kn), 1*sizeof(_array_Core_2_kn[0]));
		outfile__array_Core_2_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kn." << endl;
	}
	ofstream outfile__array_Core_2_kp;
	outfile__array_Core_2_kp.open("results/_array_Core_2_kp_5935250372300403876", ios::binary | ios::out);
	if(outfile__array_Core_2_kp.is_open())
	{
		outfile__array_Core_2_kp.write(reinterpret_cast<char*>(_array_Core_2_kp), 1*sizeof(_array_Core_2_kp[0]));
		outfile__array_Core_2_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kp." << endl;
	}
	ofstream outfile__array_Core_2_lastspike;
	outfile__array_Core_2_lastspike.open("results/_array_Core_2_lastspike_-4905255244852924729", ios::binary | ios::out);
	if(outfile__array_Core_2_lastspike.is_open())
	{
		outfile__array_Core_2_lastspike.write(reinterpret_cast<char*>(_array_Core_2_lastspike), 256*sizeof(_array_Core_2_lastspike[0]));
		outfile__array_Core_2_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_lastspike." << endl;
	}
	ofstream outfile__array_Core_2_not_refractory;
	outfile__array_Core_2_not_refractory.open("results/_array_Core_2_not_refractory_-6569512639760341346", ios::binary | ios::out);
	if(outfile__array_Core_2_not_refractory.is_open())
	{
		outfile__array_Core_2_not_refractory.write(reinterpret_cast<char*>(_array_Core_2_not_refractory), 256*sizeof(_array_Core_2_not_refractory[0]));
		outfile__array_Core_2_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_not_refractory." << endl;
	}
	ofstream outfile__array_Core_2_soma_refP;
	outfile__array_Core_2_soma_refP.open("results/_array_Core_2_soma_refP_-831647578579849761", ios::binary | ios::out);
	if(outfile__array_Core_2_soma_refP.is_open())
	{
		outfile__array_Core_2_soma_refP.write(reinterpret_cast<char*>(_array_Core_2_soma_refP), 1*sizeof(_array_Core_2_soma_refP[0]));
		outfile__array_Core_2_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_soma_refP." << endl;
	}
	ofstream outfile__array_Core_2_std_pulse;
	outfile__array_Core_2_std_pulse.open("results/_array_Core_2_std_pulse_1833208819922425865", ios::binary | ios::out);
	if(outfile__array_Core_2_std_pulse.is_open())
	{
		outfile__array_Core_2_std_pulse.write(reinterpret_cast<char*>(_array_Core_2_std_pulse), 256*sizeof(_array_Core_2_std_pulse[0]));
		outfile__array_Core_2_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_std_pulse." << endl;
	}
	ofstream outfile__array_Core_2_tau_pulse;
	outfile__array_Core_2_tau_pulse.open("results/_array_Core_2_tau_pulse_-5487083023296049349", ios::binary | ios::out);
	if(outfile__array_Core_2_tau_pulse.is_open())
	{
		outfile__array_Core_2_tau_pulse.write(reinterpret_cast<char*>(_array_Core_2_tau_pulse), 256*sizeof(_array_Core_2_tau_pulse[0]));
		outfile__array_Core_2_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_2_Ut;
	outfile__array_Core_2_Ut.open("results/_array_Core_2_Ut_-2203749161271382347", ios::binary | ios::out);
	if(outfile__array_Core_2_Ut.is_open())
	{
		outfile__array_Core_2_Ut.write(reinterpret_cast<char*>(_array_Core_2_Ut), 1*sizeof(_array_Core_2_Ut[0]));
		outfile__array_Core_2_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ut." << endl;
	}
	ofstream outfile__array_Core_2_Va;
	outfile__array_Core_2_Va.open("results/_array_Core_2_Va_822148626539791695", ios::binary | ios::out);
	if(outfile__array_Core_2_Va.is_open())
	{
		outfile__array_Core_2_Va.write(reinterpret_cast<char*>(_array_Core_2_Va), 256*sizeof(_array_Core_2_Va[0]));
		outfile__array_Core_2_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Va." << endl;
	}
	ofstream outfile__array_Core_2_Vw;
	outfile__array_Core_2_Vw.open("results/_array_Core_2_Vw_506991162794243325", ios::binary | ios::out);
	if(outfile__array_Core_2_Vw.is_open())
	{
		outfile__array_Core_2_Vw.write(reinterpret_cast<char*>(_array_Core_2_Vw), 256*sizeof(_array_Core_2_Vw[0]));
		outfile__array_Core_2_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Vw." << endl;
	}
	ofstream outfile__array_Core_3__spikespace;
	outfile__array_Core_3__spikespace.open("results/_array_Core_3__spikespace_12078036422767519", ios::binary | ios::out);
	if(outfile__array_Core_3__spikespace.is_open())
	{
		outfile__array_Core_3__spikespace.write(reinterpret_cast<char*>(_array_Core_3__spikespace), 257*sizeof(_array_Core_3__spikespace[0]));
		outfile__array_Core_3__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3__spikespace." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ahp;
	outfile__array_Core_3_alpha_ahp.open("results/_array_Core_3_alpha_ahp_5322775777054651358", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ahp.is_open())
	{
		outfile__array_Core_3_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_3_alpha_ahp), 256*sizeof(_array_Core_3_alpha_ahp[0]));
		outfile__array_Core_3_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ampa;
	outfile__array_Core_3_alpha_ampa.open("results/_array_Core_3_alpha_ampa_6943117597731233242", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ampa.is_open())
	{
		outfile__array_Core_3_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_3_alpha_ampa), 256*sizeof(_array_Core_3_alpha_ampa[0]));
		outfile__array_Core_3_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ampa_std;
	outfile__array_Core_3_alpha_ampa_std.open("results/_array_Core_3_alpha_ampa_std_-175766420713938427", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ampa_std.is_open())
	{
		outfile__array_Core_3_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_3_alpha_ampa_std), 256*sizeof(_array_Core_3_alpha_ampa_std[0]));
		outfile__array_Core_3_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_3_alpha_gaba_a;
	outfile__array_Core_3_alpha_gaba_a.open("results/_array_Core_3_alpha_gaba_a_1929472649291660525", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_gaba_a.is_open())
	{
		outfile__array_Core_3_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_alpha_gaba_a), 256*sizeof(_array_Core_3_alpha_gaba_a[0]));
		outfile__array_Core_3_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_alpha_gaba_b;
	outfile__array_Core_3_alpha_gaba_b.open("results/_array_Core_3_alpha_gaba_b_826155559230483346", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_gaba_b.is_open())
	{
		outfile__array_Core_3_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_alpha_gaba_b), 256*sizeof(_array_Core_3_alpha_gaba_b[0]));
		outfile__array_Core_3_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_alpha_nmda;
	outfile__array_Core_3_alpha_nmda.open("results/_array_Core_3_alpha_nmda_-8854078723112672363", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_nmda.is_open())
	{
		outfile__array_Core_3_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_3_alpha_nmda), 256*sizeof(_array_Core_3_alpha_nmda[0]));
		outfile__array_Core_3_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_3_alpha_soma;
	outfile__array_Core_3_alpha_soma.open("results/_array_Core_3_alpha_soma_-8072787651480662191", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_soma.is_open())
	{
		outfile__array_Core_3_alpha_soma.write(reinterpret_cast<char*>(_array_Core_3_alpha_soma), 256*sizeof(_array_Core_3_alpha_soma[0]));
		outfile__array_Core_3_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_3_Campa;
	outfile__array_Core_3_Campa.open("results/_array_Core_3_Campa_730433851845351633", ios::binary | ios::out);
	if(outfile__array_Core_3_Campa.is_open())
	{
		outfile__array_Core_3_Campa.write(reinterpret_cast<char*>(_array_Core_3_Campa), 256*sizeof(_array_Core_3_Campa[0]));
		outfile__array_Core_3_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Campa." << endl;
	}
	ofstream outfile__array_Core_3_Campa_std;
	outfile__array_Core_3_Campa_std.open("results/_array_Core_3_Campa_std_433622560143007153", ios::binary | ios::out);
	if(outfile__array_Core_3_Campa_std.is_open())
	{
		outfile__array_Core_3_Campa_std.write(reinterpret_cast<char*>(_array_Core_3_Campa_std), 256*sizeof(_array_Core_3_Campa_std[0]));
		outfile__array_Core_3_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Campa_std." << endl;
	}
	ofstream outfile__array_Core_3_Cgaba_a;
	outfile__array_Core_3_Cgaba_a.open("results/_array_Core_3_Cgaba_a_4949745135980678152", ios::binary | ios::out);
	if(outfile__array_Core_3_Cgaba_a.is_open())
	{
		outfile__array_Core_3_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_3_Cgaba_a), 256*sizeof(_array_Core_3_Cgaba_a[0]));
		outfile__array_Core_3_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_3_Cgaba_b;
	outfile__array_Core_3_Cgaba_b.open("results/_array_Core_3_Cgaba_b_6346613836559966831", ios::binary | ios::out);
	if(outfile__array_Core_3_Cgaba_b.is_open())
	{
		outfile__array_Core_3_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_3_Cgaba_b), 256*sizeof(_array_Core_3_Cgaba_b[0]));
		outfile__array_Core_3_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_3_Cnmda;
	outfile__array_Core_3_Cnmda.open("results/_array_Core_3_Cnmda_-4436665210788264444", ios::binary | ios::out);
	if(outfile__array_Core_3_Cnmda.is_open())
	{
		outfile__array_Core_3_Cnmda.write(reinterpret_cast<char*>(_array_Core_3_Cnmda), 256*sizeof(_array_Core_3_Cnmda[0]));
		outfile__array_Core_3_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cnmda." << endl;
	}
	ofstream outfile__array_Core_3_Csoma_ahp;
	outfile__array_Core_3_Csoma_ahp.open("results/_array_Core_3_Csoma_ahp_-1176331567992445463", ios::binary | ios::out);
	if(outfile__array_Core_3_Csoma_ahp.is_open())
	{
		outfile__array_Core_3_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_3_Csoma_ahp), 1*sizeof(_array_Core_3_Csoma_ahp[0]));
		outfile__array_Core_3_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_3_Csoma_mem;
	outfile__array_Core_3_Csoma_mem.open("results/_array_Core_3_Csoma_mem_-803811163838565556", ios::binary | ios::out);
	if(outfile__array_Core_3_Csoma_mem.is_open())
	{
		outfile__array_Core_3_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_3_Csoma_mem), 1*sizeof(_array_Core_3_Csoma_mem[0]));
		outfile__array_Core_3_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_3_i;
	outfile__array_Core_3_i.open("results/_array_Core_3_i_5883771827470273049", ios::binary | ios::out);
	if(outfile__array_Core_3_i.is_open())
	{
		outfile__array_Core_3_i.write(reinterpret_cast<char*>(_array_Core_3_i), 256*sizeof(_array_Core_3_i[0]));
		outfile__array_Core_3_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_i." << endl;
	}
	ofstream outfile__array_Core_3_I0;
	outfile__array_Core_3_I0.open("results/_array_Core_3_I0_-192821267585022597", ios::binary | ios::out);
	if(outfile__array_Core_3_I0.is_open())
	{
		outfile__array_Core_3_I0.write(reinterpret_cast<char*>(_array_Core_3_I0), 1*sizeof(_array_Core_3_I0[0]));
		outfile__array_Core_3_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I0." << endl;
	}
	ofstream outfile__array_Core_3_Iampa;
	outfile__array_Core_3_Iampa.open("results/_array_Core_3_Iampa_5437501435668035890", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa.is_open())
	{
		outfile__array_Core_3_Iampa.write(reinterpret_cast<char*>(_array_Core_3_Iampa), 256*sizeof(_array_Core_3_Iampa[0]));
		outfile__array_Core_3_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_std;
	outfile__array_Core_3_Iampa_std.open("results/_array_Core_3_Iampa_std_-3319899354882011629", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_std.is_open())
	{
		outfile__array_Core_3_Iampa_std.write(reinterpret_cast<char*>(_array_Core_3_Iampa_std), 256*sizeof(_array_Core_3_Iampa_std[0]));
		outfile__array_Core_3_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_std_tau;
	outfile__array_Core_3_Iampa_std_tau.open("results/_array_Core_3_Iampa_std_tau_6147197829783503453", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_std_tau.is_open())
	{
		outfile__array_Core_3_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_3_Iampa_std_tau), 256*sizeof(_array_Core_3_Iampa_std_tau[0]));
		outfile__array_Core_3_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_tau;
	outfile__array_Core_3_Iampa_tau.open("results/_array_Core_3_Iampa_tau_-507325618404983795", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_tau.is_open())
	{
		outfile__array_Core_3_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_3_Iampa_tau), 256*sizeof(_array_Core_3_Iampa_tau[0]));
		outfile__array_Core_3_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_w0;
	outfile__array_Core_3_Iampa_w0.open("results/_array_Core_3_Iampa_w0_-6014181455591582112", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_w0.is_open())
	{
		outfile__array_Core_3_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_3_Iampa_w0), 256*sizeof(_array_Core_3_Iampa_w0[0]));
		outfile__array_Core_3_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_3_Idischarge_w;
	outfile__array_Core_3_Idischarge_w.open("results/_array_Core_3_Idischarge_w_-579314641972108318", ios::binary | ios::out);
	if(outfile__array_Core_3_Idischarge_w.is_open())
	{
		outfile__array_Core_3_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_3_Idischarge_w), 256*sizeof(_array_Core_3_Idischarge_w[0]));
		outfile__array_Core_3_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a;
	outfile__array_Core_3_Igaba_a.open("results/_array_Core_3_Igaba_a_-1807811984708392449", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a.is_open())
	{
		outfile__array_Core_3_Igaba_a.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a), 256*sizeof(_array_Core_3_Igaba_a[0]));
		outfile__array_Core_3_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a_tau;
	outfile__array_Core_3_Igaba_a_tau.open("results/_array_Core_3_Igaba_a_tau_-4289121987186417427", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a_tau.is_open())
	{
		outfile__array_Core_3_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a_tau), 256*sizeof(_array_Core_3_Igaba_a_tau[0]));
		outfile__array_Core_3_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a_w0;
	outfile__array_Core_3_Igaba_a_w0.open("results/_array_Core_3_Igaba_a_w0_4178630465374556261", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a_w0.is_open())
	{
		outfile__array_Core_3_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a_w0), 256*sizeof(_array_Core_3_Igaba_a_w0[0]));
		outfile__array_Core_3_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b;
	outfile__array_Core_3_Igaba_b.open("results/_array_Core_3_Igaba_b_-3707544840250356381", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b.is_open())
	{
		outfile__array_Core_3_Igaba_b.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b), 256*sizeof(_array_Core_3_Igaba_b[0]));
		outfile__array_Core_3_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b_tau;
	outfile__array_Core_3_Igaba_b_tau.open("results/_array_Core_3_Igaba_b_tau_8755615676109159306", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b_tau.is_open())
	{
		outfile__array_Core_3_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b_tau), 256*sizeof(_array_Core_3_Igaba_b_tau[0]));
		outfile__array_Core_3_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b_w0;
	outfile__array_Core_3_Igaba_b_w0.open("results/_array_Core_3_Igaba_b_w0_-9220002707998174407", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b_w0.is_open())
	{
		outfile__array_Core_3_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b_w0), 256*sizeof(_array_Core_3_Igaba_b_w0[0]));
		outfile__array_Core_3_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_3_Inmda;
	outfile__array_Core_3_Inmda.open("results/_array_Core_3_Inmda_-7274363491196568590", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda.is_open())
	{
		outfile__array_Core_3_Inmda.write(reinterpret_cast<char*>(_array_Core_3_Inmda), 256*sizeof(_array_Core_3_Inmda[0]));
		outfile__array_Core_3_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_tau;
	outfile__array_Core_3_Inmda_tau.open("results/_array_Core_3_Inmda_tau_4196595666883175672", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_tau.is_open())
	{
		outfile__array_Core_3_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_3_Inmda_tau), 256*sizeof(_array_Core_3_Inmda_tau[0]));
		outfile__array_Core_3_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_thr;
	outfile__array_Core_3_Inmda_thr.open("results/_array_Core_3_Inmda_thr_-8311262672896032922", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_thr.is_open())
	{
		outfile__array_Core_3_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_3_Inmda_thr), 256*sizeof(_array_Core_3_Inmda_thr[0]));
		outfile__array_Core_3_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_w0;
	outfile__array_Core_3_Inmda_w0.open("results/_array_Core_3_Inmda_w0_-6625616630497271085", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_w0.is_open())
	{
		outfile__array_Core_3_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_3_Inmda_w0), 256*sizeof(_array_Core_3_Inmda_w0[0]));
		outfile__array_Core_3_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp;
	outfile__array_Core_3_Isoma_ahp.open("results/_array_Core_3_Isoma_ahp_7462171204705163249", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp.is_open())
	{
		outfile__array_Core_3_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp), 256*sizeof(_array_Core_3_Isoma_ahp[0]));
		outfile__array_Core_3_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_g;
	outfile__array_Core_3_Isoma_ahp_g.open("results/_array_Core_3_Isoma_ahp_g_-3951700484258222003", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_g), 1*sizeof(_array_Core_3_Isoma_ahp_g[0]));
		outfile__array_Core_3_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_tau;
	outfile__array_Core_3_Isoma_ahp_tau.open("results/_array_Core_3_Isoma_ahp_tau_5208999991419355916", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_tau), 1*sizeof(_array_Core_3_Isoma_ahp_tau[0]));
		outfile__array_Core_3_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_w;
	outfile__array_Core_3_Isoma_ahp_w.open("results/_array_Core_3_Isoma_ahp_w_8139591114361562420", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_w), 256*sizeof(_array_Core_3_Isoma_ahp_w[0]));
		outfile__array_Core_3_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_const;
	outfile__array_Core_3_Isoma_const.open("results/_array_Core_3_Isoma_const_6623947984530017076", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_const.is_open())
	{
		outfile__array_Core_3_Isoma_const.write(reinterpret_cast<char*>(_array_Core_3_Isoma_const), 256*sizeof(_array_Core_3_Isoma_const[0]));
		outfile__array_Core_3_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_dpi_tau;
	outfile__array_Core_3_Isoma_dpi_tau.open("results/_array_Core_3_Isoma_dpi_tau_2369700679164153294", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_3_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_3_Isoma_dpi_tau), 1*sizeof(_array_Core_3_Isoma_dpi_tau[0]));
		outfile__array_Core_3_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_mem;
	outfile__array_Core_3_Isoma_mem.open("results/_array_Core_3_Isoma_mem_3803979328877746214", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_mem.is_open())
	{
		outfile__array_Core_3_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_3_Isoma_mem), 256*sizeof(_array_Core_3_Isoma_mem[0]));
		outfile__array_Core_3_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_gain;
	outfile__array_Core_3_Isoma_pfb_gain.open("results/_array_Core_3_Isoma_pfb_gain_209561378899104213", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_gain), 1*sizeof(_array_Core_3_Isoma_pfb_gain[0]));
		outfile__array_Core_3_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_norm;
	outfile__array_Core_3_Isoma_pfb_norm.open("results/_array_Core_3_Isoma_pfb_norm_9215207012614522503", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_norm), 1*sizeof(_array_Core_3_Isoma_pfb_norm[0]));
		outfile__array_Core_3_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_th;
	outfile__array_Core_3_Isoma_pfb_th.open("results/_array_Core_3_Isoma_pfb_th_-6548412799192490171", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_th), 1*sizeof(_array_Core_3_Isoma_pfb_th[0]));
		outfile__array_Core_3_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_reset;
	outfile__array_Core_3_Isoma_reset.open("results/_array_Core_3_Isoma_reset_2314550656468889240", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_reset.is_open())
	{
		outfile__array_Core_3_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_3_Isoma_reset), 1*sizeof(_array_Core_3_Isoma_reset[0]));
		outfile__array_Core_3_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_th;
	outfile__array_Core_3_Isoma_th.open("results/_array_Core_3_Isoma_th_-1554288535967348271", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_th.is_open())
	{
		outfile__array_Core_3_Isoma_th.write(reinterpret_cast<char*>(_array_Core_3_Isoma_th), 1*sizeof(_array_Core_3_Isoma_th[0]));
		outfile__array_Core_3_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_3_kn;
	outfile__array_Core_3_kn.open("results/_array_Core_3_kn_7412864184341024406", ios::binary | ios::out);
	if(outfile__array_Core_3_kn.is_open())
	{
		outfile__array_Core_3_kn.write(reinterpret_cast<char*>(_array_Core_3_kn), 1*sizeof(_array_Core_3_kn[0]));
		outfile__array_Core_3_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kn." << endl;
	}
	ofstream outfile__array_Core_3_kp;
	outfile__array_Core_3_kp.open("results/_array_Core_3_kp_-6207347744560494644", ios::binary | ios::out);
	if(outfile__array_Core_3_kp.is_open())
	{
		outfile__array_Core_3_kp.write(reinterpret_cast<char*>(_array_Core_3_kp), 1*sizeof(_array_Core_3_kp[0]));
		outfile__array_Core_3_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kp." << endl;
	}
	ofstream outfile__array_Core_3_lastspike;
	outfile__array_Core_3_lastspike.open("results/_array_Core_3_lastspike_7864805929306461279", ios::binary | ios::out);
	if(outfile__array_Core_3_lastspike.is_open())
	{
		outfile__array_Core_3_lastspike.write(reinterpret_cast<char*>(_array_Core_3_lastspike), 256*sizeof(_array_Core_3_lastspike[0]));
		outfile__array_Core_3_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_lastspike." << endl;
	}
	ofstream outfile__array_Core_3_not_refractory;
	outfile__array_Core_3_not_refractory.open("results/_array_Core_3_not_refractory_4721540018765273903", ios::binary | ios::out);
	if(outfile__array_Core_3_not_refractory.is_open())
	{
		outfile__array_Core_3_not_refractory.write(reinterpret_cast<char*>(_array_Core_3_not_refractory), 256*sizeof(_array_Core_3_not_refractory[0]));
		outfile__array_Core_3_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_not_refractory." << endl;
	}
	ofstream outfile__array_Core_3_soma_refP;
	outfile__array_Core_3_soma_refP.open("results/_array_Core_3_soma_refP_3726123814456779726", ios::binary | ios::out);
	if(outfile__array_Core_3_soma_refP.is_open())
	{
		outfile__array_Core_3_soma_refP.write(reinterpret_cast<char*>(_array_Core_3_soma_refP), 1*sizeof(_array_Core_3_soma_refP[0]));
		outfile__array_Core_3_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_soma_refP." << endl;
	}
	ofstream outfile__array_Core_3_std_pulse;
	outfile__array_Core_3_std_pulse.open("results/_array_Core_3_std_pulse_3082657665764135756", ios::binary | ios::out);
	if(outfile__array_Core_3_std_pulse.is_open())
	{
		outfile__array_Core_3_std_pulse.write(reinterpret_cast<char*>(_array_Core_3_std_pulse), 256*sizeof(_array_Core_3_std_pulse[0]));
		outfile__array_Core_3_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_std_pulse." << endl;
	}
	ofstream outfile__array_Core_3_tau_pulse;
	outfile__array_Core_3_tau_pulse.open("results/_array_Core_3_tau_pulse_3421582663856389435", ios::binary | ios::out);
	if(outfile__array_Core_3_tau_pulse.is_open())
	{
		outfile__array_Core_3_tau_pulse.write(reinterpret_cast<char*>(_array_Core_3_tau_pulse), 256*sizeof(_array_Core_3_tau_pulse[0]));
		outfile__array_Core_3_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_3_Ut;
	outfile__array_Core_3_Ut.open("results/_array_Core_3_Ut_7960553325911626637", ios::binary | ios::out);
	if(outfile__array_Core_3_Ut.is_open())
	{
		outfile__array_Core_3_Ut.write(reinterpret_cast<char*>(_array_Core_3_Ut), 1*sizeof(_array_Core_3_Ut[0]));
		outfile__array_Core_3_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ut." << endl;
	}
	ofstream outfile__array_Core_3_Va;
	outfile__array_Core_3_Va.open("results/_array_Core_3_Va_6121298236488630315", ios::binary | ios::out);
	if(outfile__array_Core_3_Va.is_open())
	{
		outfile__array_Core_3_Va.write(reinterpret_cast<char*>(_array_Core_3_Va), 256*sizeof(_array_Core_3_Va[0]));
		outfile__array_Core_3_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Va." << endl;
	}
	ofstream outfile__array_Core_3_Vw;
	outfile__array_Core_3_Vw.open("results/_array_Core_3_Vw_104451086863311385", ios::binary | ios::out);
	if(outfile__array_Core_3_Vw.is_open())
	{
		outfile__array_Core_3_Vw.write(reinterpret_cast<char*>(_array_Core_3_Vw), 256*sizeof(_array_Core_3_Vw[0]));
		outfile__array_Core_3_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Vw." << endl;
	}
	ofstream outfile__array_defaultclock_dt;
	outfile__array_defaultclock_dt.open("results/_array_defaultclock_dt_940983459467051940", ios::binary | ios::out);
	if(outfile__array_defaultclock_dt.is_open())
	{
		outfile__array_defaultclock_dt.write(reinterpret_cast<char*>(_array_defaultclock_dt), 1*sizeof(_array_defaultclock_dt[0]));
		outfile__array_defaultclock_dt.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_dt." << endl;
	}
	ofstream outfile__array_defaultclock_t;
	outfile__array_defaultclock_t.open("results/_array_defaultclock_t_3137640293923083238", ios::binary | ios::out);
	if(outfile__array_defaultclock_t.is_open())
	{
		outfile__array_defaultclock_t.write(reinterpret_cast<char*>(_array_defaultclock_t), 1*sizeof(_array_defaultclock_t[0]));
		outfile__array_defaultclock_t.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_t." << endl;
	}
	ofstream outfile__array_defaultclock_timestep;
	outfile__array_defaultclock_timestep.open("results/_array_defaultclock_timestep_-6047035932937508755", ios::binary | ios::out);
	if(outfile__array_defaultclock_timestep.is_open())
	{
		outfile__array_defaultclock_timestep.write(reinterpret_cast<char*>(_array_defaultclock_timestep), 1*sizeof(_array_defaultclock_timestep[0]));
		outfile__array_defaultclock_timestep.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_timestep." << endl;
	}
	ofstream outfile__array_mon_neuron_input__source_idx;
	outfile__array_mon_neuron_input__source_idx.open("results/_array_mon_neuron_input__source_idx_-7702893678739148103", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input__source_idx.is_open())
	{
		outfile__array_mon_neuron_input__source_idx.write(reinterpret_cast<char*>(_array_mon_neuron_input__source_idx), 1*sizeof(_array_mon_neuron_input__source_idx[0]));
		outfile__array_mon_neuron_input__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input__source_idx." << endl;
	}
	ofstream outfile__array_mon_neuron_input_count;
	outfile__array_mon_neuron_input_count.open("results/_array_mon_neuron_input_count_-7264621725146677726", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_count.is_open())
	{
		outfile__array_mon_neuron_input_count.write(reinterpret_cast<char*>(_array_mon_neuron_input_count), 1*sizeof(_array_mon_neuron_input_count[0]));
		outfile__array_mon_neuron_input_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_count." << endl;
	}
	ofstream outfile__array_mon_neuron_input_N;
	outfile__array_mon_neuron_input_N.open("results/_array_mon_neuron_input_N_-5412930544531899751", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_N.is_open())
	{
		outfile__array_mon_neuron_input_N.write(reinterpret_cast<char*>(_array_mon_neuron_input_N), 1*sizeof(_array_mon_neuron_input_N[0]));
		outfile__array_mon_neuron_input_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_N." << endl;
	}
	ofstream outfile__array_mon_neuron_output__source_idx;
	outfile__array_mon_neuron_output__source_idx.open("results/_array_mon_neuron_output__source_idx_-5269735631911733355", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output__source_idx.is_open())
	{
		outfile__array_mon_neuron_output__source_idx.write(reinterpret_cast<char*>(_array_mon_neuron_output__source_idx), 1*sizeof(_array_mon_neuron_output__source_idx[0]));
		outfile__array_mon_neuron_output__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output__source_idx." << endl;
	}
	ofstream outfile__array_mon_neuron_output_count;
	outfile__array_mon_neuron_output_count.open("results/_array_mon_neuron_output_count_8811874653628923508", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_count.is_open())
	{
		outfile__array_mon_neuron_output_count.write(reinterpret_cast<char*>(_array_mon_neuron_output_count), 1*sizeof(_array_mon_neuron_output_count[0]));
		outfile__array_mon_neuron_output_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_count." << endl;
	}
	ofstream outfile__array_mon_neuron_output_N;
	outfile__array_mon_neuron_output_N.open("results/_array_mon_neuron_output_N_8465143205162160671", ios::binary | ios::out);
	if(outfile__array_mon_neuron_output_N.is_open())
	{
		outfile__array_mon_neuron_output_N.write(reinterpret_cast<char*>(_array_mon_neuron_output_N), 1*sizeof(_array_mon_neuron_output_N[0]));
		outfile__array_mon_neuron_output_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_output_N." << endl;
	}
	ofstream outfile__array_NMDA0_N;
	outfile__array_NMDA0_N.open("results/_array_NMDA0_N_500225461094868474", ios::binary | ios::out);
	if(outfile__array_NMDA0_N.is_open())
	{
		outfile__array_NMDA0_N.write(reinterpret_cast<char*>(_array_NMDA0_N), 1*sizeof(_array_NMDA0_N[0]));
		outfile__array_NMDA0_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_NMDA0_N." << endl;
	}
	ofstream outfile__array_SpikeGenerator__lastindex;
	outfile__array_SpikeGenerator__lastindex.open("results/_array_SpikeGenerator__lastindex_-4798770219796852373", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator__lastindex.is_open())
	{
		outfile__array_SpikeGenerator__lastindex.write(reinterpret_cast<char*>(_array_SpikeGenerator__lastindex), 1*sizeof(_array_SpikeGenerator__lastindex[0]));
		outfile__array_SpikeGenerator__lastindex.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator__lastindex." << endl;
	}
	ofstream outfile__array_SpikeGenerator__period_bins;
	outfile__array_SpikeGenerator__period_bins.open("results/_array_SpikeGenerator__period_bins_-5714964172075069096", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator__period_bins.is_open())
	{
		outfile__array_SpikeGenerator__period_bins.write(reinterpret_cast<char*>(_array_SpikeGenerator__period_bins), 1*sizeof(_array_SpikeGenerator__period_bins[0]));
		outfile__array_SpikeGenerator__period_bins.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator__period_bins." << endl;
	}
	ofstream outfile__array_SpikeGenerator__spikespace;
	outfile__array_SpikeGenerator__spikespace.open("results/_array_SpikeGenerator__spikespace_-5435411427710572096", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator__spikespace.is_open())
	{
		outfile__array_SpikeGenerator__spikespace.write(reinterpret_cast<char*>(_array_SpikeGenerator__spikespace), 2*sizeof(_array_SpikeGenerator__spikespace[0]));
		outfile__array_SpikeGenerator__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator__spikespace." << endl;
	}
	ofstream outfile__array_SpikeGenerator_i;
	outfile__array_SpikeGenerator_i.open("results/_array_SpikeGenerator_i_-8088400050248283603", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator_i.is_open())
	{
		outfile__array_SpikeGenerator_i.write(reinterpret_cast<char*>(_array_SpikeGenerator_i), 1*sizeof(_array_SpikeGenerator_i[0]));
		outfile__array_SpikeGenerator_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator_i." << endl;
	}
	ofstream outfile__array_SpikeGenerator_period;
	outfile__array_SpikeGenerator_period.open("results/_array_SpikeGenerator_period_-2632822442185821301", ios::binary | ios::out);
	if(outfile__array_SpikeGenerator_period.is_open())
	{
		outfile__array_SpikeGenerator_period.write(reinterpret_cast<char*>(_array_SpikeGenerator_period), 1*sizeof(_array_SpikeGenerator_period[0]));
		outfile__array_SpikeGenerator_period.close();
	} else
	{
		std::cout << "Error writing output file for _array_SpikeGenerator_period." << endl;
	}
	ofstream outfile__array_statemonitor_4__indices;
	outfile__array_statemonitor_4__indices.open("results/_array_statemonitor_4__indices_-7755750896943653658", ios::binary | ios::out);
	if(outfile__array_statemonitor_4__indices.is_open())
	{
		outfile__array_statemonitor_4__indices.write(reinterpret_cast<char*>(_array_statemonitor_4__indices), 1*sizeof(_array_statemonitor_4__indices[0]));
		outfile__array_statemonitor_4__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4__indices." << endl;
	}
	ofstream outfile__array_statemonitor_4_N;
	outfile__array_statemonitor_4_N.open("results/_array_statemonitor_4_N_-2161103779390165537", ios::binary | ios::out);
	if(outfile__array_statemonitor_4_N.is_open())
	{
		outfile__array_statemonitor_4_N.write(reinterpret_cast<char*>(_array_statemonitor_4_N), 1*sizeof(_array_statemonitor_4_N[0]));
		outfile__array_statemonitor_4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4_N." << endl;
	}
	ofstream outfile__array_statemonitor_5__indices;
	outfile__array_statemonitor_5__indices.open("results/_array_statemonitor_5__indices_8876483762868876256", ios::binary | ios::out);
	if(outfile__array_statemonitor_5__indices.is_open())
	{
		outfile__array_statemonitor_5__indices.write(reinterpret_cast<char*>(_array_statemonitor_5__indices), 1*sizeof(_array_statemonitor_5__indices[0]));
		outfile__array_statemonitor_5__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_5__indices." << endl;
	}
	ofstream outfile__array_statemonitor_5_N;
	outfile__array_statemonitor_5_N.open("results/_array_statemonitor_5_N_-2650050981998594132", ios::binary | ios::out);
	if(outfile__array_statemonitor_5_N.is_open())
	{
		outfile__array_statemonitor_5_N.write(reinterpret_cast<char*>(_array_statemonitor_5_N), 1*sizeof(_array_statemonitor_5_N[0]));
		outfile__array_statemonitor_5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_5_N." << endl;
	}
	ofstream outfile__array_statemonitor__indices;
	outfile__array_statemonitor__indices.open("results/_array_statemonitor__indices_-4889116396351600316", ios::binary | ios::out);
	if(outfile__array_statemonitor__indices.is_open())
	{
		outfile__array_statemonitor__indices.write(reinterpret_cast<char*>(_array_statemonitor__indices), 1*sizeof(_array_statemonitor__indices[0]));
		outfile__array_statemonitor__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor__indices." << endl;
	}
	ofstream outfile__array_statemonitor_N;
	outfile__array_statemonitor_N.open("results/_array_statemonitor_N_-4314153561264245241", ios::binary | ios::out);
	if(outfile__array_statemonitor_N.is_open())
	{
		outfile__array_statemonitor_N.write(reinterpret_cast<char*>(_array_statemonitor_N), 1*sizeof(_array_statemonitor_N[0]));
		outfile__array_statemonitor_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_N." << endl;
	}

	ofstream outfile__dynamic_array_AMPA1__synaptic_post;
	outfile__dynamic_array_AMPA1__synaptic_post.open("results/_dynamic_array_AMPA1__synaptic_post_-8073070599730882173", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA1__synaptic_pre.open("results/_dynamic_array_AMPA1__synaptic_pre_5909332419730740428", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_AMPA1_delay;
	outfile__dynamic_array_AMPA1_delay.open("results/_dynamic_array_AMPA1_delay_6493253195349635669", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA1_delay_1.open("results/_dynamic_array_AMPA1_delay_1_2903081632242963639", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA1_N_incoming.open("results/_dynamic_array_AMPA1_N_incoming_3787834995316222817", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA1_N_outgoing.open("results/_dynamic_array_AMPA1_N_outgoing_7549091338757960526", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA1_weight.open("results/_dynamic_array_AMPA1_weight_6236035390859357562", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_mon_neuron_input_i;
	outfile__dynamic_array_mon_neuron_input_i.open("results/_dynamic_array_mon_neuron_input_i_-3991664179272177077", ios::binary | ios::out);
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
	outfile__dynamic_array_mon_neuron_input_t.open("results/_dynamic_array_mon_neuron_input_t_3867536047071768159", ios::binary | ios::out);
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
	outfile__dynamic_array_mon_neuron_output_i.open("results/_dynamic_array_mon_neuron_output_i_5535092629356387105", ios::binary | ios::out);
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
	outfile__dynamic_array_mon_neuron_output_t.open("results/_dynamic_array_mon_neuron_output_t_3958258752251131421", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_NMDA0__synaptic_post;
	outfile__dynamic_array_NMDA0__synaptic_post.open("results/_dynamic_array_NMDA0__synaptic_post_8704282605623763066", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA0__synaptic_post.is_open())
	{
        if (! _dynamic_array_NMDA0__synaptic_post.empty() )
        {
			outfile__dynamic_array_NMDA0__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_NMDA0__synaptic_post[0]), _dynamic_array_NMDA0__synaptic_post.size()*sizeof(_dynamic_array_NMDA0__synaptic_post[0]));
		    outfile__dynamic_array_NMDA0__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA0__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_NMDA0__synaptic_pre;
	outfile__dynamic_array_NMDA0__synaptic_pre.open("results/_dynamic_array_NMDA0__synaptic_pre_-8356448202502791708", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA0__synaptic_pre.is_open())
	{
        if (! _dynamic_array_NMDA0__synaptic_pre.empty() )
        {
			outfile__dynamic_array_NMDA0__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_NMDA0__synaptic_pre[0]), _dynamic_array_NMDA0__synaptic_pre.size()*sizeof(_dynamic_array_NMDA0__synaptic_pre[0]));
		    outfile__dynamic_array_NMDA0__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA0__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_NMDA0_delay;
	outfile__dynamic_array_NMDA0_delay.open("results/_dynamic_array_NMDA0_delay_-410921093534805746", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA0_delay.is_open())
	{
        if (! _dynamic_array_NMDA0_delay.empty() )
        {
			outfile__dynamic_array_NMDA0_delay.write(reinterpret_cast<char*>(&_dynamic_array_NMDA0_delay[0]), _dynamic_array_NMDA0_delay.size()*sizeof(_dynamic_array_NMDA0_delay[0]));
		    outfile__dynamic_array_NMDA0_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA0_delay." << endl;
	}
	ofstream outfile__dynamic_array_NMDA0_delay_1;
	outfile__dynamic_array_NMDA0_delay_1.open("results/_dynamic_array_NMDA0_delay_1_3481823105043856733", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA0_delay_1.is_open())
	{
        if (! _dynamic_array_NMDA0_delay_1.empty() )
        {
			outfile__dynamic_array_NMDA0_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_NMDA0_delay_1[0]), _dynamic_array_NMDA0_delay_1.size()*sizeof(_dynamic_array_NMDA0_delay_1[0]));
		    outfile__dynamic_array_NMDA0_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA0_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_NMDA0_N_incoming;
	outfile__dynamic_array_NMDA0_N_incoming.open("results/_dynamic_array_NMDA0_N_incoming_8937370016102055793", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA0_N_incoming.is_open())
	{
        if (! _dynamic_array_NMDA0_N_incoming.empty() )
        {
			outfile__dynamic_array_NMDA0_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_NMDA0_N_incoming[0]), _dynamic_array_NMDA0_N_incoming.size()*sizeof(_dynamic_array_NMDA0_N_incoming[0]));
		    outfile__dynamic_array_NMDA0_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA0_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_NMDA0_N_outgoing;
	outfile__dynamic_array_NMDA0_N_outgoing.open("results/_dynamic_array_NMDA0_N_outgoing_-8625440682375933804", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA0_N_outgoing.is_open())
	{
        if (! _dynamic_array_NMDA0_N_outgoing.empty() )
        {
			outfile__dynamic_array_NMDA0_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_NMDA0_N_outgoing[0]), _dynamic_array_NMDA0_N_outgoing.size()*sizeof(_dynamic_array_NMDA0_N_outgoing[0]));
		    outfile__dynamic_array_NMDA0_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA0_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_NMDA0_weight;
	outfile__dynamic_array_NMDA0_weight.open("results/_dynamic_array_NMDA0_weight_1987571691382034567", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA0_weight.is_open())
	{
        if (! _dynamic_array_NMDA0_weight.empty() )
        {
			outfile__dynamic_array_NMDA0_weight.write(reinterpret_cast<char*>(&_dynamic_array_NMDA0_weight[0]), _dynamic_array_NMDA0_weight.size()*sizeof(_dynamic_array_NMDA0_weight[0]));
		    outfile__dynamic_array_NMDA0_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA0_weight." << endl;
	}
	ofstream outfile__dynamic_array_SpikeGenerator__timebins;
	outfile__dynamic_array_SpikeGenerator__timebins.open("results/_dynamic_array_SpikeGenerator__timebins_-3557415582976703541", ios::binary | ios::out);
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
	outfile__dynamic_array_SpikeGenerator_neuron_index.open("results/_dynamic_array_SpikeGenerator_neuron_index_7941250921610184588", ios::binary | ios::out);
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
	outfile__dynamic_array_SpikeGenerator_spike_number.open("results/_dynamic_array_SpikeGenerator_spike_number_-8577215966957306660", ios::binary | ios::out);
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
	outfile__dynamic_array_SpikeGenerator_spike_time.open("results/_dynamic_array_SpikeGenerator_spike_time_7148350924950147154", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_statemonitor_4_t;
	outfile__dynamic_array_statemonitor_4_t.open("results/_dynamic_array_statemonitor_4_t_-8769512217334676912", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_5_t.open("results/_dynamic_array_statemonitor_5_t_2231412565727960929", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_statemonitor_t;
	outfile__dynamic_array_statemonitor_t.open("results/_dynamic_array_statemonitor_t_7522231273780769069", ios::binary | ios::out);
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

	ofstream outfile__dynamic_array_statemonitor_4_Iampa;
	outfile__dynamic_array_statemonitor_4_Iampa.open("results/_dynamic_array_statemonitor_4_Iampa_-8150502620922293670", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_4_Iampa.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_4_Iampa.n; n++)
        {
            if (! _dynamic_array_statemonitor_4_Iampa(n).empty())
            {
                outfile__dynamic_array_statemonitor_4_Iampa.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_4_Iampa(n, 0)), _dynamic_array_statemonitor_4_Iampa.m*sizeof(_dynamic_array_statemonitor_4_Iampa(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_4_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_4_Iampa." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_5_Isoma_mem;
	outfile__dynamic_array_statemonitor_5_Isoma_mem.open("results/_dynamic_array_statemonitor_5_Isoma_mem_4229955897807167572", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_5_Isoma_mem.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_5_Isoma_mem.n; n++)
        {
            if (! _dynamic_array_statemonitor_5_Isoma_mem(n).empty())
            {
                outfile__dynamic_array_statemonitor_5_Isoma_mem.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_5_Isoma_mem(n, 0)), _dynamic_array_statemonitor_5_Isoma_mem.m*sizeof(_dynamic_array_statemonitor_5_Isoma_mem(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_5_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_5_Isoma_mem." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_Inmda;
	outfile__dynamic_array_statemonitor_Inmda.open("results/_dynamic_array_statemonitor_Inmda_-5835094550714142748", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_Inmda.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_Inmda.n; n++)
        {
            if (! _dynamic_array_statemonitor_Inmda(n).empty())
            {
                outfile__dynamic_array_statemonitor_Inmda.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_Inmda(n, 0)), _dynamic_array_statemonitor_Inmda.m*sizeof(_dynamic_array_statemonitor_Inmda(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_Inmda." << endl;
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

