
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
const int _num__array_Core_1_subgroup__sub_idx = 1;
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

//////////////// dynamic arrays 1d /////////

//////////////// dynamic arrays 2d /////////

/////////////// static arrays /////////////

//////////////// synapses /////////////////

//////////////// clocks ///////////////////
Clock defaultclock;  // attributes will be set in run.cpp

// Profiling information for each code object
}

void _init_arrays()
{
	using namespace brian;

    // Arrays initialized to 0
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

	_array_Core_1_subgroup__sub_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_Core_1_subgroup__sub_idx[i] = 0;

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


	// static arrays

	// Random number generator states
	for (int i=0; i<1; i++)
	    _mersenne_twister_states.push_back(new rk_state());
}

void _load_arrays()
{
	using namespace brian;

}

void _write_arrays()
{
	using namespace brian;

	ofstream outfile__array_Core_0__spikespace;
	outfile__array_Core_0__spikespace.open("results/_array_Core_0__spikespace_-8207384031836491826", ios::binary | ios::out);
	if(outfile__array_Core_0__spikespace.is_open())
	{
		outfile__array_Core_0__spikespace.write(reinterpret_cast<char*>(_array_Core_0__spikespace), 257*sizeof(_array_Core_0__spikespace[0]));
		outfile__array_Core_0__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0__spikespace." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ahp;
	outfile__array_Core_0_alpha_ahp.open("results/_array_Core_0_alpha_ahp_-5477897575741219690", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ahp.is_open())
	{
		outfile__array_Core_0_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_0_alpha_ahp), 256*sizeof(_array_Core_0_alpha_ahp[0]));
		outfile__array_Core_0_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ampa;
	outfile__array_Core_0_alpha_ampa.open("results/_array_Core_0_alpha_ampa_-5336652139303805427", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ampa.is_open())
	{
		outfile__array_Core_0_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_0_alpha_ampa), 256*sizeof(_array_Core_0_alpha_ampa[0]));
		outfile__array_Core_0_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ampa_std;
	outfile__array_Core_0_alpha_ampa_std.open("results/_array_Core_0_alpha_ampa_std_-1468446899930757692", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ampa_std.is_open())
	{
		outfile__array_Core_0_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_0_alpha_ampa_std), 256*sizeof(_array_Core_0_alpha_ampa_std[0]));
		outfile__array_Core_0_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_0_alpha_gaba_a;
	outfile__array_Core_0_alpha_gaba_a.open("results/_array_Core_0_alpha_gaba_a_-3868018438225521317", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_gaba_a.is_open())
	{
		outfile__array_Core_0_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_alpha_gaba_a), 256*sizeof(_array_Core_0_alpha_gaba_a[0]));
		outfile__array_Core_0_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_alpha_gaba_b;
	outfile__array_Core_0_alpha_gaba_b.open("results/_array_Core_0_alpha_gaba_b_-310256472144659696", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_gaba_b.is_open())
	{
		outfile__array_Core_0_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_alpha_gaba_b), 256*sizeof(_array_Core_0_alpha_gaba_b[0]));
		outfile__array_Core_0_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_alpha_nmda;
	outfile__array_Core_0_alpha_nmda.open("results/_array_Core_0_alpha_nmda_-5218739225637329029", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_nmda.is_open())
	{
		outfile__array_Core_0_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_0_alpha_nmda), 256*sizeof(_array_Core_0_alpha_nmda[0]));
		outfile__array_Core_0_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_0_alpha_soma;
	outfile__array_Core_0_alpha_soma.open("results/_array_Core_0_alpha_soma_-464099256153774079", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_soma.is_open())
	{
		outfile__array_Core_0_alpha_soma.write(reinterpret_cast<char*>(_array_Core_0_alpha_soma), 256*sizeof(_array_Core_0_alpha_soma[0]));
		outfile__array_Core_0_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_0_Campa;
	outfile__array_Core_0_Campa.open("results/_array_Core_0_Campa_-1451987431256757143", ios::binary | ios::out);
	if(outfile__array_Core_0_Campa.is_open())
	{
		outfile__array_Core_0_Campa.write(reinterpret_cast<char*>(_array_Core_0_Campa), 256*sizeof(_array_Core_0_Campa[0]));
		outfile__array_Core_0_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Campa." << endl;
	}
	ofstream outfile__array_Core_0_Campa_std;
	outfile__array_Core_0_Campa_std.open("results/_array_Core_0_Campa_std_420845683241373516", ios::binary | ios::out);
	if(outfile__array_Core_0_Campa_std.is_open())
	{
		outfile__array_Core_0_Campa_std.write(reinterpret_cast<char*>(_array_Core_0_Campa_std), 256*sizeof(_array_Core_0_Campa_std[0]));
		outfile__array_Core_0_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Campa_std." << endl;
	}
	ofstream outfile__array_Core_0_Cgaba_a;
	outfile__array_Core_0_Cgaba_a.open("results/_array_Core_0_Cgaba_a_-4124252898780770202", ios::binary | ios::out);
	if(outfile__array_Core_0_Cgaba_a.is_open())
	{
		outfile__array_Core_0_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_0_Cgaba_a), 256*sizeof(_array_Core_0_Cgaba_a[0]));
		outfile__array_Core_0_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_0_Cgaba_b;
	outfile__array_Core_0_Cgaba_b.open("results/_array_Core_0_Cgaba_b_5047343678654501544", ios::binary | ios::out);
	if(outfile__array_Core_0_Cgaba_b.is_open())
	{
		outfile__array_Core_0_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_0_Cgaba_b), 256*sizeof(_array_Core_0_Cgaba_b[0]));
		outfile__array_Core_0_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_0_Cnmda;
	outfile__array_Core_0_Cnmda.open("results/_array_Core_0_Cnmda_4337901698673320145", ios::binary | ios::out);
	if(outfile__array_Core_0_Cnmda.is_open())
	{
		outfile__array_Core_0_Cnmda.write(reinterpret_cast<char*>(_array_Core_0_Cnmda), 256*sizeof(_array_Core_0_Cnmda[0]));
		outfile__array_Core_0_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cnmda." << endl;
	}
	ofstream outfile__array_Core_0_Csoma_ahp;
	outfile__array_Core_0_Csoma_ahp.open("results/_array_Core_0_Csoma_ahp_-559123661280211085", ios::binary | ios::out);
	if(outfile__array_Core_0_Csoma_ahp.is_open())
	{
		outfile__array_Core_0_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_0_Csoma_ahp), 1*sizeof(_array_Core_0_Csoma_ahp[0]));
		outfile__array_Core_0_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_0_Csoma_mem;
	outfile__array_Core_0_Csoma_mem.open("results/_array_Core_0_Csoma_mem_2744468677719916599", ios::binary | ios::out);
	if(outfile__array_Core_0_Csoma_mem.is_open())
	{
		outfile__array_Core_0_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_0_Csoma_mem), 1*sizeof(_array_Core_0_Csoma_mem[0]));
		outfile__array_Core_0_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_0_i;
	outfile__array_Core_0_i.open("results/_array_Core_0_i_-8074664384505472298", ios::binary | ios::out);
	if(outfile__array_Core_0_i.is_open())
	{
		outfile__array_Core_0_i.write(reinterpret_cast<char*>(_array_Core_0_i), 256*sizeof(_array_Core_0_i[0]));
		outfile__array_Core_0_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_i." << endl;
	}
	ofstream outfile__array_Core_0_I0;
	outfile__array_Core_0_I0.open("results/_array_Core_0_I0_6339473214496557144", ios::binary | ios::out);
	if(outfile__array_Core_0_I0.is_open())
	{
		outfile__array_Core_0_I0.write(reinterpret_cast<char*>(_array_Core_0_I0), 1*sizeof(_array_Core_0_I0[0]));
		outfile__array_Core_0_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I0." << endl;
	}
	ofstream outfile__array_Core_0_Iampa;
	outfile__array_Core_0_Iampa.open("results/_array_Core_0_Iampa_-3065620124935100877", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa.is_open())
	{
		outfile__array_Core_0_Iampa.write(reinterpret_cast<char*>(_array_Core_0_Iampa), 256*sizeof(_array_Core_0_Iampa[0]));
		outfile__array_Core_0_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_std;
	outfile__array_Core_0_Iampa_std.open("results/_array_Core_0_Iampa_std_-1607646999314871657", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_std.is_open())
	{
		outfile__array_Core_0_Iampa_std.write(reinterpret_cast<char*>(_array_Core_0_Iampa_std), 256*sizeof(_array_Core_0_Iampa_std[0]));
		outfile__array_Core_0_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_std_tau;
	outfile__array_Core_0_Iampa_std_tau.open("results/_array_Core_0_Iampa_std_tau_-593951499034931087", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_std_tau.is_open())
	{
		outfile__array_Core_0_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_0_Iampa_std_tau), 256*sizeof(_array_Core_0_Iampa_std_tau[0]));
		outfile__array_Core_0_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_tau;
	outfile__array_Core_0_Iampa_tau.open("results/_array_Core_0_Iampa_tau_-3106891939191906153", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_tau.is_open())
	{
		outfile__array_Core_0_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_0_Iampa_tau), 256*sizeof(_array_Core_0_Iampa_tau[0]));
		outfile__array_Core_0_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_w0;
	outfile__array_Core_0_Iampa_w0.open("results/_array_Core_0_Iampa_w0_-4746844657336643688", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_w0.is_open())
	{
		outfile__array_Core_0_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_0_Iampa_w0), 256*sizeof(_array_Core_0_Iampa_w0[0]));
		outfile__array_Core_0_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_0_Idischarge_w;
	outfile__array_Core_0_Idischarge_w.open("results/_array_Core_0_Idischarge_w_-7514234080800584477", ios::binary | ios::out);
	if(outfile__array_Core_0_Idischarge_w.is_open())
	{
		outfile__array_Core_0_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_0_Idischarge_w), 256*sizeof(_array_Core_0_Idischarge_w[0]));
		outfile__array_Core_0_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a;
	outfile__array_Core_0_Igaba_a.open("results/_array_Core_0_Igaba_a_3421942380931956094", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a.is_open())
	{
		outfile__array_Core_0_Igaba_a.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a), 256*sizeof(_array_Core_0_Igaba_a[0]));
		outfile__array_Core_0_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a_tau;
	outfile__array_Core_0_Igaba_a_tau.open("results/_array_Core_0_Igaba_a_tau_-6999562095338763465", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a_tau.is_open())
	{
		outfile__array_Core_0_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a_tau), 256*sizeof(_array_Core_0_Igaba_a_tau[0]));
		outfile__array_Core_0_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a_w0;
	outfile__array_Core_0_Igaba_a_w0.open("results/_array_Core_0_Igaba_a_w0_5312825288830473996", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a_w0.is_open())
	{
		outfile__array_Core_0_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a_w0), 256*sizeof(_array_Core_0_Igaba_a_w0[0]));
		outfile__array_Core_0_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b;
	outfile__array_Core_0_Igaba_b.open("results/_array_Core_0_Igaba_b_9131688870021930421", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b.is_open())
	{
		outfile__array_Core_0_Igaba_b.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b), 256*sizeof(_array_Core_0_Igaba_b[0]));
		outfile__array_Core_0_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b_tau;
	outfile__array_Core_0_Igaba_b_tau.open("results/_array_Core_0_Igaba_b_tau_5971874285231493139", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b_tau.is_open())
	{
		outfile__array_Core_0_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b_tau), 256*sizeof(_array_Core_0_Igaba_b_tau[0]));
		outfile__array_Core_0_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b_w0;
	outfile__array_Core_0_Igaba_b_w0.open("results/_array_Core_0_Igaba_b_w0_-6383615313862208704", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b_w0.is_open())
	{
		outfile__array_Core_0_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b_w0), 256*sizeof(_array_Core_0_Igaba_b_w0[0]));
		outfile__array_Core_0_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_0_Inmda;
	outfile__array_Core_0_Inmda.open("results/_array_Core_0_Inmda_-9121678802439116689", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda.is_open())
	{
		outfile__array_Core_0_Inmda.write(reinterpret_cast<char*>(_array_Core_0_Inmda), 256*sizeof(_array_Core_0_Inmda[0]));
		outfile__array_Core_0_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_tau;
	outfile__array_Core_0_Inmda_tau.open("results/_array_Core_0_Inmda_tau_-7105484217805137418", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_tau.is_open())
	{
		outfile__array_Core_0_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_0_Inmda_tau), 256*sizeof(_array_Core_0_Inmda_tau[0]));
		outfile__array_Core_0_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_thr;
	outfile__array_Core_0_Inmda_thr.open("results/_array_Core_0_Inmda_thr_-8256366381565931173", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_thr.is_open())
	{
		outfile__array_Core_0_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_0_Inmda_thr), 256*sizeof(_array_Core_0_Inmda_thr[0]));
		outfile__array_Core_0_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_w0;
	outfile__array_Core_0_Inmda_w0.open("results/_array_Core_0_Inmda_w0_3974356191406966083", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_w0.is_open())
	{
		outfile__array_Core_0_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_0_Inmda_w0), 256*sizeof(_array_Core_0_Inmda_w0[0]));
		outfile__array_Core_0_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp;
	outfile__array_Core_0_Isoma_ahp.open("results/_array_Core_0_Isoma_ahp_7174439146739761287", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp.is_open())
	{
		outfile__array_Core_0_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp), 256*sizeof(_array_Core_0_Isoma_ahp[0]));
		outfile__array_Core_0_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_g;
	outfile__array_Core_0_Isoma_ahp_g.open("results/_array_Core_0_Isoma_ahp_g_-5341825291318736969", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_g), 1*sizeof(_array_Core_0_Isoma_ahp_g[0]));
		outfile__array_Core_0_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_tau;
	outfile__array_Core_0_Isoma_ahp_tau.open("results/_array_Core_0_Isoma_ahp_tau_5773294785378765814", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_tau), 1*sizeof(_array_Core_0_Isoma_ahp_tau[0]));
		outfile__array_Core_0_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_w;
	outfile__array_Core_0_Isoma_ahp_w.open("results/_array_Core_0_Isoma_ahp_w_-7771084097241178574", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_w), 256*sizeof(_array_Core_0_Isoma_ahp_w[0]));
		outfile__array_Core_0_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_const;
	outfile__array_Core_0_Isoma_const.open("results/_array_Core_0_Isoma_const_-6511612963447207148", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_const.is_open())
	{
		outfile__array_Core_0_Isoma_const.write(reinterpret_cast<char*>(_array_Core_0_Isoma_const), 256*sizeof(_array_Core_0_Isoma_const[0]));
		outfile__array_Core_0_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_dpi_tau;
	outfile__array_Core_0_Isoma_dpi_tau.open("results/_array_Core_0_Isoma_dpi_tau_-1170015551176961709", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_0_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_0_Isoma_dpi_tau), 1*sizeof(_array_Core_0_Isoma_dpi_tau[0]));
		outfile__array_Core_0_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_mem;
	outfile__array_Core_0_Isoma_mem.open("results/_array_Core_0_Isoma_mem_7475604609898130397", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_mem.is_open())
	{
		outfile__array_Core_0_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_0_Isoma_mem), 256*sizeof(_array_Core_0_Isoma_mem[0]));
		outfile__array_Core_0_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_gain;
	outfile__array_Core_0_Isoma_pfb_gain.open("results/_array_Core_0_Isoma_pfb_gain_5295659798587255056", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_gain), 1*sizeof(_array_Core_0_Isoma_pfb_gain[0]));
		outfile__array_Core_0_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_norm;
	outfile__array_Core_0_Isoma_pfb_norm.open("results/_array_Core_0_Isoma_pfb_norm_8947201210907647194", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_norm), 1*sizeof(_array_Core_0_Isoma_pfb_norm[0]));
		outfile__array_Core_0_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_th;
	outfile__array_Core_0_Isoma_pfb_th.open("results/_array_Core_0_Isoma_pfb_th_-4238011013969961680", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_th), 1*sizeof(_array_Core_0_Isoma_pfb_th[0]));
		outfile__array_Core_0_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_reset;
	outfile__array_Core_0_Isoma_reset.open("results/_array_Core_0_Isoma_reset_-9113861890680029514", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_reset.is_open())
	{
		outfile__array_Core_0_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_0_Isoma_reset), 1*sizeof(_array_Core_0_Isoma_reset[0]));
		outfile__array_Core_0_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_th;
	outfile__array_Core_0_Isoma_th.open("results/_array_Core_0_Isoma_th_8422639015285356244", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_th.is_open())
	{
		outfile__array_Core_0_Isoma_th.write(reinterpret_cast<char*>(_array_Core_0_Isoma_th), 1*sizeof(_array_Core_0_Isoma_th[0]));
		outfile__array_Core_0_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_0_kn;
	outfile__array_Core_0_kn.open("results/_array_Core_0_kn_-2479940118345490048", ios::binary | ios::out);
	if(outfile__array_Core_0_kn.is_open())
	{
		outfile__array_Core_0_kn.write(reinterpret_cast<char*>(_array_Core_0_kn), 1*sizeof(_array_Core_0_kn[0]));
		outfile__array_Core_0_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kn." << endl;
	}
	ofstream outfile__array_Core_0_kp;
	outfile__array_Core_0_kp.open("results/_array_Core_0_kp_-8153743071831974774", ios::binary | ios::out);
	if(outfile__array_Core_0_kp.is_open())
	{
		outfile__array_Core_0_kp.write(reinterpret_cast<char*>(_array_Core_0_kp), 1*sizeof(_array_Core_0_kp[0]));
		outfile__array_Core_0_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kp." << endl;
	}
	ofstream outfile__array_Core_0_lastspike;
	outfile__array_Core_0_lastspike.open("results/_array_Core_0_lastspike_-1050309496594507848", ios::binary | ios::out);
	if(outfile__array_Core_0_lastspike.is_open())
	{
		outfile__array_Core_0_lastspike.write(reinterpret_cast<char*>(_array_Core_0_lastspike), 256*sizeof(_array_Core_0_lastspike[0]));
		outfile__array_Core_0_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_lastspike." << endl;
	}
	ofstream outfile__array_Core_0_not_refractory;
	outfile__array_Core_0_not_refractory.open("results/_array_Core_0_not_refractory_-5223007286300063816", ios::binary | ios::out);
	if(outfile__array_Core_0_not_refractory.is_open())
	{
		outfile__array_Core_0_not_refractory.write(reinterpret_cast<char*>(_array_Core_0_not_refractory), 256*sizeof(_array_Core_0_not_refractory[0]));
		outfile__array_Core_0_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_not_refractory." << endl;
	}
	ofstream outfile__array_Core_0_soma_refP;
	outfile__array_Core_0_soma_refP.open("results/_array_Core_0_soma_refP_-3948005508790278197", ios::binary | ios::out);
	if(outfile__array_Core_0_soma_refP.is_open())
	{
		outfile__array_Core_0_soma_refP.write(reinterpret_cast<char*>(_array_Core_0_soma_refP), 1*sizeof(_array_Core_0_soma_refP[0]));
		outfile__array_Core_0_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_soma_refP." << endl;
	}
	ofstream outfile__array_Core_0_std_pulse;
	outfile__array_Core_0_std_pulse.open("results/_array_Core_0_std_pulse_1489218633041841606", ios::binary | ios::out);
	if(outfile__array_Core_0_std_pulse.is_open())
	{
		outfile__array_Core_0_std_pulse.write(reinterpret_cast<char*>(_array_Core_0_std_pulse), 256*sizeof(_array_Core_0_std_pulse[0]));
		outfile__array_Core_0_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_std_pulse." << endl;
	}
	ofstream outfile__array_Core_0_tau_pulse;
	outfile__array_Core_0_tau_pulse.open("results/_array_Core_0_tau_pulse_-8640294448007118204", ios::binary | ios::out);
	if(outfile__array_Core_0_tau_pulse.is_open())
	{
		outfile__array_Core_0_tau_pulse.write(reinterpret_cast<char*>(_array_Core_0_tau_pulse), 256*sizeof(_array_Core_0_tau_pulse[0]));
		outfile__array_Core_0_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_0_Ut;
	outfile__array_Core_0_Ut.open("results/_array_Core_0_Ut_681331090682780423", ios::binary | ios::out);
	if(outfile__array_Core_0_Ut.is_open())
	{
		outfile__array_Core_0_Ut.write(reinterpret_cast<char*>(_array_Core_0_Ut), 1*sizeof(_array_Core_0_Ut[0]));
		outfile__array_Core_0_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ut." << endl;
	}
	ofstream outfile__array_Core_0_Va;
	outfile__array_Core_0_Va.open("results/_array_Core_0_Va_792988751952946841", ios::binary | ios::out);
	if(outfile__array_Core_0_Va.is_open())
	{
		outfile__array_Core_0_Va.write(reinterpret_cast<char*>(_array_Core_0_Va), 256*sizeof(_array_Core_0_Va[0]));
		outfile__array_Core_0_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Va." << endl;
	}
	ofstream outfile__array_Core_0_Vw;
	outfile__array_Core_0_Vw.open("results/_array_Core_0_Vw_-5045037327048155728", ios::binary | ios::out);
	if(outfile__array_Core_0_Vw.is_open())
	{
		outfile__array_Core_0_Vw.write(reinterpret_cast<char*>(_array_Core_0_Vw), 256*sizeof(_array_Core_0_Vw[0]));
		outfile__array_Core_0_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Vw." << endl;
	}
	ofstream outfile__array_Core_1__spikespace;
	outfile__array_Core_1__spikespace.open("results/_array_Core_1__spikespace_6296065925183310272", ios::binary | ios::out);
	if(outfile__array_Core_1__spikespace.is_open())
	{
		outfile__array_Core_1__spikespace.write(reinterpret_cast<char*>(_array_Core_1__spikespace), 257*sizeof(_array_Core_1__spikespace[0]));
		outfile__array_Core_1__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1__spikespace." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ahp;
	outfile__array_Core_1_alpha_ahp.open("results/_array_Core_1_alpha_ahp_-1596405027604063362", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ahp.is_open())
	{
		outfile__array_Core_1_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_1_alpha_ahp), 256*sizeof(_array_Core_1_alpha_ahp[0]));
		outfile__array_Core_1_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ampa;
	outfile__array_Core_1_alpha_ampa.open("results/_array_Core_1_alpha_ampa_-6387844489905705105", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ampa.is_open())
	{
		outfile__array_Core_1_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_1_alpha_ampa), 256*sizeof(_array_Core_1_alpha_ampa[0]));
		outfile__array_Core_1_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ampa_std;
	outfile__array_Core_1_alpha_ampa_std.open("results/_array_Core_1_alpha_ampa_std_3936948593093021580", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ampa_std.is_open())
	{
		outfile__array_Core_1_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_1_alpha_ampa_std), 256*sizeof(_array_Core_1_alpha_ampa_std[0]));
		outfile__array_Core_1_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_1_alpha_gaba_a;
	outfile__array_Core_1_alpha_gaba_a.open("results/_array_Core_1_alpha_gaba_a_2335591690856391462", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_gaba_a.is_open())
	{
		outfile__array_Core_1_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_alpha_gaba_a), 256*sizeof(_array_Core_1_alpha_gaba_a[0]));
		outfile__array_Core_1_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_alpha_gaba_b;
	outfile__array_Core_1_alpha_gaba_b.open("results/_array_Core_1_alpha_gaba_b_-2107188011587884223", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_gaba_b.is_open())
	{
		outfile__array_Core_1_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_alpha_gaba_b), 256*sizeof(_array_Core_1_alpha_gaba_b[0]));
		outfile__array_Core_1_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_alpha_nmda;
	outfile__array_Core_1_alpha_nmda.open("results/_array_Core_1_alpha_nmda_-5307785678523976682", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_nmda.is_open())
	{
		outfile__array_Core_1_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_1_alpha_nmda), 256*sizeof(_array_Core_1_alpha_nmda[0]));
		outfile__array_Core_1_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_1_alpha_soma;
	outfile__array_Core_1_alpha_soma.open("results/_array_Core_1_alpha_soma_-7305115315898907885", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_soma.is_open())
	{
		outfile__array_Core_1_alpha_soma.write(reinterpret_cast<char*>(_array_Core_1_alpha_soma), 256*sizeof(_array_Core_1_alpha_soma[0]));
		outfile__array_Core_1_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_1_Campa;
	outfile__array_Core_1_Campa.open("results/_array_Core_1_Campa_-3019836466145652426", ios::binary | ios::out);
	if(outfile__array_Core_1_Campa.is_open())
	{
		outfile__array_Core_1_Campa.write(reinterpret_cast<char*>(_array_Core_1_Campa), 256*sizeof(_array_Core_1_Campa[0]));
		outfile__array_Core_1_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Campa." << endl;
	}
	ofstream outfile__array_Core_1_Campa_std;
	outfile__array_Core_1_Campa_std.open("results/_array_Core_1_Campa_std_7969531290098505530", ios::binary | ios::out);
	if(outfile__array_Core_1_Campa_std.is_open())
	{
		outfile__array_Core_1_Campa_std.write(reinterpret_cast<char*>(_array_Core_1_Campa_std), 256*sizeof(_array_Core_1_Campa_std[0]));
		outfile__array_Core_1_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Campa_std." << endl;
	}
	ofstream outfile__array_Core_1_Cgaba_a;
	outfile__array_Core_1_Cgaba_a.open("results/_array_Core_1_Cgaba_a_-1744852811876421589", ios::binary | ios::out);
	if(outfile__array_Core_1_Cgaba_a.is_open())
	{
		outfile__array_Core_1_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_1_Cgaba_a), 256*sizeof(_array_Core_1_Cgaba_a[0]));
		outfile__array_Core_1_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_1_Cgaba_b;
	outfile__array_Core_1_Cgaba_b.open("results/_array_Core_1_Cgaba_b_8652496811806799481", ios::binary | ios::out);
	if(outfile__array_Core_1_Cgaba_b.is_open())
	{
		outfile__array_Core_1_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_1_Cgaba_b), 256*sizeof(_array_Core_1_Cgaba_b[0]));
		outfile__array_Core_1_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_1_Cnmda;
	outfile__array_Core_1_Cnmda.open("results/_array_Core_1_Cnmda_-6139598061691548443", ios::binary | ios::out);
	if(outfile__array_Core_1_Cnmda.is_open())
	{
		outfile__array_Core_1_Cnmda.write(reinterpret_cast<char*>(_array_Core_1_Cnmda), 256*sizeof(_array_Core_1_Cnmda[0]));
		outfile__array_Core_1_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cnmda." << endl;
	}
	ofstream outfile__array_Core_1_Csoma_ahp;
	outfile__array_Core_1_Csoma_ahp.open("results/_array_Core_1_Csoma_ahp_-751505367690375776", ios::binary | ios::out);
	if(outfile__array_Core_1_Csoma_ahp.is_open())
	{
		outfile__array_Core_1_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_1_Csoma_ahp), 1*sizeof(_array_Core_1_Csoma_ahp[0]));
		outfile__array_Core_1_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_1_Csoma_mem;
	outfile__array_Core_1_Csoma_mem.open("results/_array_Core_1_Csoma_mem_-8416587362545295868", ios::binary | ios::out);
	if(outfile__array_Core_1_Csoma_mem.is_open())
	{
		outfile__array_Core_1_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_1_Csoma_mem), 1*sizeof(_array_Core_1_Csoma_mem[0]));
		outfile__array_Core_1_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_1_i;
	outfile__array_Core_1_i.open("results/_array_Core_1_i_-1070477951395682096", ios::binary | ios::out);
	if(outfile__array_Core_1_i.is_open())
	{
		outfile__array_Core_1_i.write(reinterpret_cast<char*>(_array_Core_1_i), 256*sizeof(_array_Core_1_i[0]));
		outfile__array_Core_1_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_i." << endl;
	}
	ofstream outfile__array_Core_1_I0;
	outfile__array_Core_1_I0.open("results/_array_Core_1_I0_-8870917796264550907", ios::binary | ios::out);
	if(outfile__array_Core_1_I0.is_open())
	{
		outfile__array_Core_1_I0.write(reinterpret_cast<char*>(_array_Core_1_I0), 1*sizeof(_array_Core_1_I0[0]));
		outfile__array_Core_1_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I0." << endl;
	}
	ofstream outfile__array_Core_1_Iampa;
	outfile__array_Core_1_Iampa.open("results/_array_Core_1_Iampa_-8049702210655892693", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa.is_open())
	{
		outfile__array_Core_1_Iampa.write(reinterpret_cast<char*>(_array_Core_1_Iampa), 256*sizeof(_array_Core_1_Iampa[0]));
		outfile__array_Core_1_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_std;
	outfile__array_Core_1_Iampa_std.open("results/_array_Core_1_Iampa_std_-282663207920528410", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_std.is_open())
	{
		outfile__array_Core_1_Iampa_std.write(reinterpret_cast<char*>(_array_Core_1_Iampa_std), 256*sizeof(_array_Core_1_Iampa_std[0]));
		outfile__array_Core_1_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_std_tau;
	outfile__array_Core_1_Iampa_std_tau.open("results/_array_Core_1_Iampa_std_tau_-4301172566975825640", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_std_tau.is_open())
	{
		outfile__array_Core_1_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_1_Iampa_std_tau), 256*sizeof(_array_Core_1_Iampa_std_tau[0]));
		outfile__array_Core_1_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_tau;
	outfile__array_Core_1_Iampa_tau.open("results/_array_Core_1_Iampa_tau_-443914253689944069", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_tau.is_open())
	{
		outfile__array_Core_1_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_1_Iampa_tau), 256*sizeof(_array_Core_1_Iampa_tau[0]));
		outfile__array_Core_1_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_w0;
	outfile__array_Core_1_Iampa_w0.open("results/_array_Core_1_Iampa_w0_4544297592216651337", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_w0.is_open())
	{
		outfile__array_Core_1_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_1_Iampa_w0), 256*sizeof(_array_Core_1_Iampa_w0[0]));
		outfile__array_Core_1_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_1_Idischarge_w;
	outfile__array_Core_1_Idischarge_w.open("results/_array_Core_1_Idischarge_w_-3413101328696904975", ios::binary | ios::out);
	if(outfile__array_Core_1_Idischarge_w.is_open())
	{
		outfile__array_Core_1_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_1_Idischarge_w), 256*sizeof(_array_Core_1_Idischarge_w[0]));
		outfile__array_Core_1_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a;
	outfile__array_Core_1_Igaba_a.open("results/_array_Core_1_Igaba_a_-4091699161509393380", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a.is_open())
	{
		outfile__array_Core_1_Igaba_a.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a), 256*sizeof(_array_Core_1_Igaba_a[0]));
		outfile__array_Core_1_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a_tau;
	outfile__array_Core_1_Igaba_a_tau.open("results/_array_Core_1_Igaba_a_tau_-540104031368664107", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a_tau.is_open())
	{
		outfile__array_Core_1_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a_tau), 256*sizeof(_array_Core_1_Igaba_a_tau[0]));
		outfile__array_Core_1_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a_w0;
	outfile__array_Core_1_Igaba_a_w0.open("results/_array_Core_1_Igaba_a_w0_-5575134791500159115", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a_w0.is_open())
	{
		outfile__array_Core_1_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a_w0), 256*sizeof(_array_Core_1_Igaba_a_w0[0]));
		outfile__array_Core_1_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b;
	outfile__array_Core_1_Igaba_b.open("results/_array_Core_1_Igaba_b_-5453983231560963897", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b.is_open())
	{
		outfile__array_Core_1_Igaba_b.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b), 256*sizeof(_array_Core_1_Igaba_b[0]));
		outfile__array_Core_1_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b_tau;
	outfile__array_Core_1_Igaba_b_tau.open("results/_array_Core_1_Igaba_b_tau_-3279658599107154363", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b_tau.is_open())
	{
		outfile__array_Core_1_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b_tau), 256*sizeof(_array_Core_1_Igaba_b_tau[0]));
		outfile__array_Core_1_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b_w0;
	outfile__array_Core_1_Igaba_b_w0.open("results/_array_Core_1_Igaba_b_w0_-4466724796375888071", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b_w0.is_open())
	{
		outfile__array_Core_1_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b_w0), 256*sizeof(_array_Core_1_Igaba_b_w0[0]));
		outfile__array_Core_1_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_1_Inmda;
	outfile__array_Core_1_Inmda.open("results/_array_Core_1_Inmda_3853196728094425624", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda.is_open())
	{
		outfile__array_Core_1_Inmda.write(reinterpret_cast<char*>(_array_Core_1_Inmda), 256*sizeof(_array_Core_1_Inmda[0]));
		outfile__array_Core_1_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_tau;
	outfile__array_Core_1_Inmda_tau.open("results/_array_Core_1_Inmda_tau_-4953506823977746129", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_tau.is_open())
	{
		outfile__array_Core_1_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_1_Inmda_tau), 256*sizeof(_array_Core_1_Inmda_tau[0]));
		outfile__array_Core_1_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_thr;
	outfile__array_Core_1_Inmda_thr.open("results/_array_Core_1_Inmda_thr_-2240815336220088853", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_thr.is_open())
	{
		outfile__array_Core_1_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_1_Inmda_thr), 256*sizeof(_array_Core_1_Inmda_thr[0]));
		outfile__array_Core_1_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_w0;
	outfile__array_Core_1_Inmda_w0.open("results/_array_Core_1_Inmda_w0_-8664504635073180175", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_w0.is_open())
	{
		outfile__array_Core_1_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_1_Inmda_w0), 256*sizeof(_array_Core_1_Inmda_w0[0]));
		outfile__array_Core_1_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp;
	outfile__array_Core_1_Isoma_ahp.open("results/_array_Core_1_Isoma_ahp_2449442544960573316", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp.is_open())
	{
		outfile__array_Core_1_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp), 256*sizeof(_array_Core_1_Isoma_ahp[0]));
		outfile__array_Core_1_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_g;
	outfile__array_Core_1_Isoma_ahp_g.open("results/_array_Core_1_Isoma_ahp_g_-3578146092723769553", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_g), 1*sizeof(_array_Core_1_Isoma_ahp_g[0]));
		outfile__array_Core_1_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_tau;
	outfile__array_Core_1_Isoma_ahp_tau.open("results/_array_Core_1_Isoma_ahp_tau_1472816490767656510", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_tau), 1*sizeof(_array_Core_1_Isoma_ahp_tau[0]));
		outfile__array_Core_1_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_w;
	outfile__array_Core_1_Isoma_ahp_w.open("results/_array_Core_1_Isoma_ahp_w_4573891393744619055", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_w), 256*sizeof(_array_Core_1_Isoma_ahp_w[0]));
		outfile__array_Core_1_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_const;
	outfile__array_Core_1_Isoma_const.open("results/_array_Core_1_Isoma_const_2510551499717752154", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_const.is_open())
	{
		outfile__array_Core_1_Isoma_const.write(reinterpret_cast<char*>(_array_Core_1_Isoma_const), 256*sizeof(_array_Core_1_Isoma_const[0]));
		outfile__array_Core_1_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_dpi_tau;
	outfile__array_Core_1_Isoma_dpi_tau.open("results/_array_Core_1_Isoma_dpi_tau_-5954111808953674775", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_1_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_1_Isoma_dpi_tau), 1*sizeof(_array_Core_1_Isoma_dpi_tau[0]));
		outfile__array_Core_1_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_mem;
	outfile__array_Core_1_Isoma_mem.open("results/_array_Core_1_Isoma_mem_-95433174176484856", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_mem.is_open())
	{
		outfile__array_Core_1_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_1_Isoma_mem), 256*sizeof(_array_Core_1_Isoma_mem[0]));
		outfile__array_Core_1_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_gain;
	outfile__array_Core_1_Isoma_pfb_gain.open("results/_array_Core_1_Isoma_pfb_gain_-4134920069348771988", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_gain), 1*sizeof(_array_Core_1_Isoma_pfb_gain[0]));
		outfile__array_Core_1_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_norm;
	outfile__array_Core_1_Isoma_pfb_norm.open("results/_array_Core_1_Isoma_pfb_norm_-6535871107151710174", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_norm), 1*sizeof(_array_Core_1_Isoma_pfb_norm[0]));
		outfile__array_Core_1_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_th;
	outfile__array_Core_1_Isoma_pfb_th.open("results/_array_Core_1_Isoma_pfb_th_6555604366044337315", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_th), 1*sizeof(_array_Core_1_Isoma_pfb_th[0]));
		outfile__array_Core_1_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_reset;
	outfile__array_Core_1_Isoma_reset.open("results/_array_Core_1_Isoma_reset_-8760582721064679980", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_reset.is_open())
	{
		outfile__array_Core_1_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_1_Isoma_reset), 1*sizeof(_array_Core_1_Isoma_reset[0]));
		outfile__array_Core_1_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_th;
	outfile__array_Core_1_Isoma_th.open("results/_array_Core_1_Isoma_th_-6287834606268892155", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_th.is_open())
	{
		outfile__array_Core_1_Isoma_th.write(reinterpret_cast<char*>(_array_Core_1_Isoma_th), 1*sizeof(_array_Core_1_Isoma_th[0]));
		outfile__array_Core_1_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_1_kn;
	outfile__array_Core_1_kn.open("results/_array_Core_1_kn_-6811144730637860856", ios::binary | ios::out);
	if(outfile__array_Core_1_kn.is_open())
	{
		outfile__array_Core_1_kn.write(reinterpret_cast<char*>(_array_Core_1_kn), 1*sizeof(_array_Core_1_kn[0]));
		outfile__array_Core_1_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kn." << endl;
	}
	ofstream outfile__array_Core_1_kp;
	outfile__array_Core_1_kp.open("results/_array_Core_1_kp_3455719206887831299", ios::binary | ios::out);
	if(outfile__array_Core_1_kp.is_open())
	{
		outfile__array_Core_1_kp.write(reinterpret_cast<char*>(_array_Core_1_kp), 1*sizeof(_array_Core_1_kp[0]));
		outfile__array_Core_1_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kp." << endl;
	}
	ofstream outfile__array_Core_1_lastspike;
	outfile__array_Core_1_lastspike.open("results/_array_Core_1_lastspike_3669851523337488809", ios::binary | ios::out);
	if(outfile__array_Core_1_lastspike.is_open())
	{
		outfile__array_Core_1_lastspike.write(reinterpret_cast<char*>(_array_Core_1_lastspike), 256*sizeof(_array_Core_1_lastspike[0]));
		outfile__array_Core_1_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_lastspike." << endl;
	}
	ofstream outfile__array_Core_1_not_refractory;
	outfile__array_Core_1_not_refractory.open("results/_array_Core_1_not_refractory_-6590584131231847512", ios::binary | ios::out);
	if(outfile__array_Core_1_not_refractory.is_open())
	{
		outfile__array_Core_1_not_refractory.write(reinterpret_cast<char*>(_array_Core_1_not_refractory), 256*sizeof(_array_Core_1_not_refractory[0]));
		outfile__array_Core_1_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_not_refractory." << endl;
	}
	ofstream outfile__array_Core_1_soma_refP;
	outfile__array_Core_1_soma_refP.open("results/_array_Core_1_soma_refP_6807308256614802350", ios::binary | ios::out);
	if(outfile__array_Core_1_soma_refP.is_open())
	{
		outfile__array_Core_1_soma_refP.write(reinterpret_cast<char*>(_array_Core_1_soma_refP), 1*sizeof(_array_Core_1_soma_refP[0]));
		outfile__array_Core_1_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_soma_refP." << endl;
	}
	ofstream outfile__array_Core_1_std_pulse;
	outfile__array_Core_1_std_pulse.open("results/_array_Core_1_std_pulse_144581939324502737", ios::binary | ios::out);
	if(outfile__array_Core_1_std_pulse.is_open())
	{
		outfile__array_Core_1_std_pulse.write(reinterpret_cast<char*>(_array_Core_1_std_pulse), 256*sizeof(_array_Core_1_std_pulse[0]));
		outfile__array_Core_1_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_std_pulse." << endl;
	}
	ofstream outfile__array_Core_1_subgroup__sub_idx;
	outfile__array_Core_1_subgroup__sub_idx.open("results/_array_Core_1_subgroup__sub_idx_7248505871248120174", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup__sub_idx), 1*sizeof(_array_Core_1_subgroup__sub_idx[0]));
		outfile__array_Core_1_subgroup__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_tau_pulse;
	outfile__array_Core_1_tau_pulse.open("results/_array_Core_1_tau_pulse_3832372179486791914", ios::binary | ios::out);
	if(outfile__array_Core_1_tau_pulse.is_open())
	{
		outfile__array_Core_1_tau_pulse.write(reinterpret_cast<char*>(_array_Core_1_tau_pulse), 256*sizeof(_array_Core_1_tau_pulse[0]));
		outfile__array_Core_1_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_1_Ut;
	outfile__array_Core_1_Ut.open("results/_array_Core_1_Ut_-8151449164876781285", ios::binary | ios::out);
	if(outfile__array_Core_1_Ut.is_open())
	{
		outfile__array_Core_1_Ut.write(reinterpret_cast<char*>(_array_Core_1_Ut), 1*sizeof(_array_Core_1_Ut[0]));
		outfile__array_Core_1_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ut." << endl;
	}
	ofstream outfile__array_Core_1_Va;
	outfile__array_Core_1_Va.open("results/_array_Core_1_Va_5726060466558632253", ios::binary | ios::out);
	if(outfile__array_Core_1_Va.is_open())
	{
		outfile__array_Core_1_Va.write(reinterpret_cast<char*>(_array_Core_1_Va), 256*sizeof(_array_Core_1_Va[0]));
		outfile__array_Core_1_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Va." << endl;
	}
	ofstream outfile__array_Core_1_Vw;
	outfile__array_Core_1_Vw.open("results/_array_Core_1_Vw_-6708289012423410107", ios::binary | ios::out);
	if(outfile__array_Core_1_Vw.is_open())
	{
		outfile__array_Core_1_Vw.write(reinterpret_cast<char*>(_array_Core_1_Vw), 256*sizeof(_array_Core_1_Vw[0]));
		outfile__array_Core_1_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Vw." << endl;
	}
	ofstream outfile__array_Core_2__spikespace;
	outfile__array_Core_2__spikespace.open("results/_array_Core_2__spikespace_-3924369972947313649", ios::binary | ios::out);
	if(outfile__array_Core_2__spikespace.is_open())
	{
		outfile__array_Core_2__spikespace.write(reinterpret_cast<char*>(_array_Core_2__spikespace), 257*sizeof(_array_Core_2__spikespace[0]));
		outfile__array_Core_2__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2__spikespace." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ahp;
	outfile__array_Core_2_alpha_ahp.open("results/_array_Core_2_alpha_ahp_3230401162412449294", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ahp.is_open())
	{
		outfile__array_Core_2_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_2_alpha_ahp), 256*sizeof(_array_Core_2_alpha_ahp[0]));
		outfile__array_Core_2_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ampa;
	outfile__array_Core_2_alpha_ampa.open("results/_array_Core_2_alpha_ampa_-1691161709867701337", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ampa.is_open())
	{
		outfile__array_Core_2_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_2_alpha_ampa), 256*sizeof(_array_Core_2_alpha_ampa[0]));
		outfile__array_Core_2_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ampa_std;
	outfile__array_Core_2_alpha_ampa_std.open("results/_array_Core_2_alpha_ampa_std_-7231606538879506974", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ampa_std.is_open())
	{
		outfile__array_Core_2_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_2_alpha_ampa_std), 256*sizeof(_array_Core_2_alpha_ampa_std[0]));
		outfile__array_Core_2_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_2_alpha_gaba_a;
	outfile__array_Core_2_alpha_gaba_a.open("results/_array_Core_2_alpha_gaba_a_-5505808309122993107", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_gaba_a.is_open())
	{
		outfile__array_Core_2_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_alpha_gaba_a), 256*sizeof(_array_Core_2_alpha_gaba_a[0]));
		outfile__array_Core_2_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_alpha_gaba_b;
	outfile__array_Core_2_alpha_gaba_b.open("results/_array_Core_2_alpha_gaba_b_4795774193478766083", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_gaba_b.is_open())
	{
		outfile__array_Core_2_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_alpha_gaba_b), 256*sizeof(_array_Core_2_alpha_gaba_b[0]));
		outfile__array_Core_2_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_alpha_nmda;
	outfile__array_Core_2_alpha_nmda.open("results/_array_Core_2_alpha_nmda_-5232003588153688151", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_nmda.is_open())
	{
		outfile__array_Core_2_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_2_alpha_nmda), 256*sizeof(_array_Core_2_alpha_nmda[0]));
		outfile__array_Core_2_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_2_alpha_soma;
	outfile__array_Core_2_alpha_soma.open("results/_array_Core_2_alpha_soma_5383219193688705501", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_soma.is_open())
	{
		outfile__array_Core_2_alpha_soma.write(reinterpret_cast<char*>(_array_Core_2_alpha_soma), 256*sizeof(_array_Core_2_alpha_soma[0]));
		outfile__array_Core_2_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_2_Campa;
	outfile__array_Core_2_Campa.open("results/_array_Core_2_Campa_-8705372675038816583", ios::binary | ios::out);
	if(outfile__array_Core_2_Campa.is_open())
	{
		outfile__array_Core_2_Campa.write(reinterpret_cast<char*>(_array_Core_2_Campa), 256*sizeof(_array_Core_2_Campa[0]));
		outfile__array_Core_2_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Campa." << endl;
	}
	ofstream outfile__array_Core_2_Campa_std;
	outfile__array_Core_2_Campa_std.open("results/_array_Core_2_Campa_std_1248885838345083181", ios::binary | ios::out);
	if(outfile__array_Core_2_Campa_std.is_open())
	{
		outfile__array_Core_2_Campa_std.write(reinterpret_cast<char*>(_array_Core_2_Campa_std), 256*sizeof(_array_Core_2_Campa_std[0]));
		outfile__array_Core_2_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Campa_std." << endl;
	}
	ofstream outfile__array_Core_2_Cgaba_a;
	outfile__array_Core_2_Cgaba_a.open("results/_array_Core_2_Cgaba_a_-3114256889391890710", ios::binary | ios::out);
	if(outfile__array_Core_2_Cgaba_a.is_open())
	{
		outfile__array_Core_2_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_2_Cgaba_a), 256*sizeof(_array_Core_2_Cgaba_a[0]));
		outfile__array_Core_2_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_2_Cgaba_b;
	outfile__array_Core_2_Cgaba_b.open("results/_array_Core_2_Cgaba_b_878037457862091092", ios::binary | ios::out);
	if(outfile__array_Core_2_Cgaba_b.is_open())
	{
		outfile__array_Core_2_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_2_Cgaba_b), 256*sizeof(_array_Core_2_Cgaba_b[0]));
		outfile__array_Core_2_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_2_Cnmda;
	outfile__array_Core_2_Cnmda.open("results/_array_Core_2_Cnmda_-3460987168435078961", ios::binary | ios::out);
	if(outfile__array_Core_2_Cnmda.is_open())
	{
		outfile__array_Core_2_Cnmda.write(reinterpret_cast<char*>(_array_Core_2_Cnmda), 256*sizeof(_array_Core_2_Cnmda[0]));
		outfile__array_Core_2_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cnmda." << endl;
	}
	ofstream outfile__array_Core_2_Csoma_ahp;
	outfile__array_Core_2_Csoma_ahp.open("results/_array_Core_2_Csoma_ahp_-639702669071561364", ios::binary | ios::out);
	if(outfile__array_Core_2_Csoma_ahp.is_open())
	{
		outfile__array_Core_2_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_2_Csoma_ahp), 1*sizeof(_array_Core_2_Csoma_ahp[0]));
		outfile__array_Core_2_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_2_Csoma_mem;
	outfile__array_Core_2_Csoma_mem.open("results/_array_Core_2_Csoma_mem_-7242839853777257081", ios::binary | ios::out);
	if(outfile__array_Core_2_Csoma_mem.is_open())
	{
		outfile__array_Core_2_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_2_Csoma_mem), 1*sizeof(_array_Core_2_Csoma_mem[0]));
		outfile__array_Core_2_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_2_i;
	outfile__array_Core_2_i.open("results/_array_Core_2_i_2922361387182719374", ios::binary | ios::out);
	if(outfile__array_Core_2_i.is_open())
	{
		outfile__array_Core_2_i.write(reinterpret_cast<char*>(_array_Core_2_i), 256*sizeof(_array_Core_2_i[0]));
		outfile__array_Core_2_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_i." << endl;
	}
	ofstream outfile__array_Core_2_I0;
	outfile__array_Core_2_I0.open("results/_array_Core_2_I0_-4540899757471687908", ios::binary | ios::out);
	if(outfile__array_Core_2_I0.is_open())
	{
		outfile__array_Core_2_I0.write(reinterpret_cast<char*>(_array_Core_2_I0), 1*sizeof(_array_Core_2_I0[0]));
		outfile__array_Core_2_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I0." << endl;
	}
	ofstream outfile__array_Core_2_Iampa;
	outfile__array_Core_2_Iampa.open("results/_array_Core_2_Iampa_-7518789577243360444", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa.is_open())
	{
		outfile__array_Core_2_Iampa.write(reinterpret_cast<char*>(_array_Core_2_Iampa), 256*sizeof(_array_Core_2_Iampa[0]));
		outfile__array_Core_2_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_std;
	outfile__array_Core_2_Iampa_std.open("results/_array_Core_2_Iampa_std_4113500006825059000", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_std.is_open())
	{
		outfile__array_Core_2_Iampa_std.write(reinterpret_cast<char*>(_array_Core_2_Iampa_std), 256*sizeof(_array_Core_2_Iampa_std[0]));
		outfile__array_Core_2_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_std_tau;
	outfile__array_Core_2_Iampa_std_tau.open("results/_array_Core_2_Iampa_std_tau_4243473673224147398", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_std_tau.is_open())
	{
		outfile__array_Core_2_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_2_Iampa_std_tau), 256*sizeof(_array_Core_2_Iampa_std_tau[0]));
		outfile__array_Core_2_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_tau;
	outfile__array_Core_2_Iampa_tau.open("results/_array_Core_2_Iampa_tau_-2622312175609347423", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_tau.is_open())
	{
		outfile__array_Core_2_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_2_Iampa_tau), 256*sizeof(_array_Core_2_Iampa_tau[0]));
		outfile__array_Core_2_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_w0;
	outfile__array_Core_2_Iampa_w0.open("results/_array_Core_2_Iampa_w0_3287543625617972145", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_w0.is_open())
	{
		outfile__array_Core_2_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_2_Iampa_w0), 256*sizeof(_array_Core_2_Iampa_w0[0]));
		outfile__array_Core_2_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_2_Idischarge_w;
	outfile__array_Core_2_Idischarge_w.open("results/_array_Core_2_Idischarge_w_7165119609797966656", ios::binary | ios::out);
	if(outfile__array_Core_2_Idischarge_w.is_open())
	{
		outfile__array_Core_2_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_2_Idischarge_w), 256*sizeof(_array_Core_2_Idischarge_w[0]));
		outfile__array_Core_2_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a;
	outfile__array_Core_2_Igaba_a.open("results/_array_Core_2_Igaba_a_-4012356183640881852", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a.is_open())
	{
		outfile__array_Core_2_Igaba_a.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a), 256*sizeof(_array_Core_2_Igaba_a[0]));
		outfile__array_Core_2_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a_tau;
	outfile__array_Core_2_Igaba_a_tau.open("results/_array_Core_2_Igaba_a_tau_2259618301998007226", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a_tau.is_open())
	{
		outfile__array_Core_2_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a_tau), 256*sizeof(_array_Core_2_Igaba_a_tau[0]));
		outfile__array_Core_2_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a_w0;
	outfile__array_Core_2_Igaba_a_w0.open("results/_array_Core_2_Igaba_a_w0_-8121258408727590021", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a_w0.is_open())
	{
		outfile__array_Core_2_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a_w0), 256*sizeof(_array_Core_2_Igaba_a_w0[0]));
		outfile__array_Core_2_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b;
	outfile__array_Core_2_Igaba_b.open("results/_array_Core_2_Igaba_b_1521454132430175569", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b.is_open())
	{
		outfile__array_Core_2_Igaba_b.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b), 256*sizeof(_array_Core_2_Igaba_b[0]));
		outfile__array_Core_2_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b_tau;
	outfile__array_Core_2_Igaba_b_tau.open("results/_array_Core_2_Igaba_b_tau_-3569787514317930121", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b_tau.is_open())
	{
		outfile__array_Core_2_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b_tau), 256*sizeof(_array_Core_2_Igaba_b_tau[0]));
		outfile__array_Core_2_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b_w0;
	outfile__array_Core_2_Igaba_b_w0.open("results/_array_Core_2_Igaba_b_w0_1440420534852013301", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b_w0.is_open())
	{
		outfile__array_Core_2_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b_w0), 256*sizeof(_array_Core_2_Igaba_b_w0[0]));
		outfile__array_Core_2_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_2_Inmda;
	outfile__array_Core_2_Inmda.open("results/_array_Core_2_Inmda_4387857083169163970", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda.is_open())
	{
		outfile__array_Core_2_Inmda.write(reinterpret_cast<char*>(_array_Core_2_Inmda), 256*sizeof(_array_Core_2_Inmda[0]));
		outfile__array_Core_2_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_tau;
	outfile__array_Core_2_Inmda_tau.open("results/_array_Core_2_Inmda_tau_-3916490682590144046", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_tau.is_open())
	{
		outfile__array_Core_2_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_2_Inmda_tau), 256*sizeof(_array_Core_2_Inmda_tau[0]));
		outfile__array_Core_2_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_thr;
	outfile__array_Core_2_Inmda_thr.open("results/_array_Core_2_Inmda_thr_8123388372557764347", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_thr.is_open())
	{
		outfile__array_Core_2_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_2_Inmda_thr), 256*sizeof(_array_Core_2_Inmda_thr[0]));
		outfile__array_Core_2_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_w0;
	outfile__array_Core_2_Inmda_w0.open("results/_array_Core_2_Inmda_w0_2016573103895488058", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_w0.is_open())
	{
		outfile__array_Core_2_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_2_Inmda_w0), 256*sizeof(_array_Core_2_Inmda_w0[0]));
		outfile__array_Core_2_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp;
	outfile__array_Core_2_Isoma_ahp.open("results/_array_Core_2_Isoma_ahp_-5702776725712517228", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp.is_open())
	{
		outfile__array_Core_2_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp), 256*sizeof(_array_Core_2_Isoma_ahp[0]));
		outfile__array_Core_2_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_g;
	outfile__array_Core_2_Isoma_ahp_g.open("results/_array_Core_2_Isoma_ahp_g_4940015047346045696", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_g), 1*sizeof(_array_Core_2_Isoma_ahp_g[0]));
		outfile__array_Core_2_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_tau;
	outfile__array_Core_2_Isoma_ahp_tau.open("results/_array_Core_2_Isoma_ahp_tau_6962883782381491281", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_tau), 1*sizeof(_array_Core_2_Isoma_ahp_tau[0]));
		outfile__array_Core_2_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_w;
	outfile__array_Core_2_Isoma_ahp_w.open("results/_array_Core_2_Isoma_ahp_w_5282616744752184518", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_w), 256*sizeof(_array_Core_2_Isoma_ahp_w[0]));
		outfile__array_Core_2_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_const;
	outfile__array_Core_2_Isoma_const.open("results/_array_Core_2_Isoma_const_-6621847251401290507", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_const.is_open())
	{
		outfile__array_Core_2_Isoma_const.write(reinterpret_cast<char*>(_array_Core_2_Isoma_const), 256*sizeof(_array_Core_2_Isoma_const[0]));
		outfile__array_Core_2_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_dpi_tau;
	outfile__array_Core_2_Isoma_dpi_tau.open("results/_array_Core_2_Isoma_dpi_tau_-1009787477932049776", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_2_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_2_Isoma_dpi_tau), 1*sizeof(_array_Core_2_Isoma_dpi_tau[0]));
		outfile__array_Core_2_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_mem;
	outfile__array_Core_2_Isoma_mem.open("results/_array_Core_2_Isoma_mem_-2508119677079267269", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_mem.is_open())
	{
		outfile__array_Core_2_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_2_Isoma_mem), 256*sizeof(_array_Core_2_Isoma_mem[0]));
		outfile__array_Core_2_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_gain;
	outfile__array_Core_2_Isoma_pfb_gain.open("results/_array_Core_2_Isoma_pfb_gain_97384721732025250", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_gain), 1*sizeof(_array_Core_2_Isoma_pfb_gain[0]));
		outfile__array_Core_2_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_norm;
	outfile__array_Core_2_Isoma_pfb_norm.open("results/_array_Core_2_Isoma_pfb_norm_2197331146268055275", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_norm), 1*sizeof(_array_Core_2_Isoma_pfb_norm[0]));
		outfile__array_Core_2_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_th;
	outfile__array_Core_2_Isoma_pfb_th.open("results/_array_Core_2_Isoma_pfb_th_-5207129634187688186", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_th), 1*sizeof(_array_Core_2_Isoma_pfb_th[0]));
		outfile__array_Core_2_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_reset;
	outfile__array_Core_2_Isoma_reset.open("results/_array_Core_2_Isoma_reset_5188119399807534490", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_reset.is_open())
	{
		outfile__array_Core_2_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_2_Isoma_reset), 1*sizeof(_array_Core_2_Isoma_reset[0]));
		outfile__array_Core_2_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_th;
	outfile__array_Core_2_Isoma_th.open("results/_array_Core_2_Isoma_th_2229859393336377534", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_th.is_open())
	{
		outfile__array_Core_2_Isoma_th.write(reinterpret_cast<char*>(_array_Core_2_Isoma_th), 1*sizeof(_array_Core_2_Isoma_th[0]));
		outfile__array_Core_2_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_2_kn;
	outfile__array_Core_2_kn.open("results/_array_Core_2_kn_6001479148821047002", ios::binary | ios::out);
	if(outfile__array_Core_2_kn.is_open())
	{
		outfile__array_Core_2_kn.write(reinterpret_cast<char*>(_array_Core_2_kn), 1*sizeof(_array_Core_2_kn[0]));
		outfile__array_Core_2_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kn." << endl;
	}
	ofstream outfile__array_Core_2_kp;
	outfile__array_Core_2_kp.open("results/_array_Core_2_kp_6580699655504774692", ios::binary | ios::out);
	if(outfile__array_Core_2_kp.is_open())
	{
		outfile__array_Core_2_kp.write(reinterpret_cast<char*>(_array_Core_2_kp), 1*sizeof(_array_Core_2_kp[0]));
		outfile__array_Core_2_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kp." << endl;
	}
	ofstream outfile__array_Core_2_lastspike;
	outfile__array_Core_2_lastspike.open("results/_array_Core_2_lastspike_7300291394577254209", ios::binary | ios::out);
	if(outfile__array_Core_2_lastspike.is_open())
	{
		outfile__array_Core_2_lastspike.write(reinterpret_cast<char*>(_array_Core_2_lastspike), 256*sizeof(_array_Core_2_lastspike[0]));
		outfile__array_Core_2_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_lastspike." << endl;
	}
	ofstream outfile__array_Core_2_not_refractory;
	outfile__array_Core_2_not_refractory.open("results/_array_Core_2_not_refractory_668587473659195429", ios::binary | ios::out);
	if(outfile__array_Core_2_not_refractory.is_open())
	{
		outfile__array_Core_2_not_refractory.write(reinterpret_cast<char*>(_array_Core_2_not_refractory), 256*sizeof(_array_Core_2_not_refractory[0]));
		outfile__array_Core_2_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_not_refractory." << endl;
	}
	ofstream outfile__array_Core_2_soma_refP;
	outfile__array_Core_2_soma_refP.open("results/_array_Core_2_soma_refP_-4058919212905594747", ios::binary | ios::out);
	if(outfile__array_Core_2_soma_refP.is_open())
	{
		outfile__array_Core_2_soma_refP.write(reinterpret_cast<char*>(_array_Core_2_soma_refP), 1*sizeof(_array_Core_2_soma_refP[0]));
		outfile__array_Core_2_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_soma_refP." << endl;
	}
	ofstream outfile__array_Core_2_std_pulse;
	outfile__array_Core_2_std_pulse.open("results/_array_Core_2_std_pulse_-6920973302949911800", ios::binary | ios::out);
	if(outfile__array_Core_2_std_pulse.is_open())
	{
		outfile__array_Core_2_std_pulse.write(reinterpret_cast<char*>(_array_Core_2_std_pulse), 256*sizeof(_array_Core_2_std_pulse[0]));
		outfile__array_Core_2_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_std_pulse." << endl;
	}
	ofstream outfile__array_Core_2_tau_pulse;
	outfile__array_Core_2_tau_pulse.open("results/_array_Core_2_tau_pulse_-1810861752917333079", ios::binary | ios::out);
	if(outfile__array_Core_2_tau_pulse.is_open())
	{
		outfile__array_Core_2_tau_pulse.write(reinterpret_cast<char*>(_array_Core_2_tau_pulse), 256*sizeof(_array_Core_2_tau_pulse[0]));
		outfile__array_Core_2_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_2_Ut;
	outfile__array_Core_2_Ut.open("results/_array_Core_2_Ut_3907837612035064714", ios::binary | ios::out);
	if(outfile__array_Core_2_Ut.is_open())
	{
		outfile__array_Core_2_Ut.write(reinterpret_cast<char*>(_array_Core_2_Ut), 1*sizeof(_array_Core_2_Ut[0]));
		outfile__array_Core_2_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ut." << endl;
	}
	ofstream outfile__array_Core_2_Va;
	outfile__array_Core_2_Va.open("results/_array_Core_2_Va_836781074127462188", ios::binary | ios::out);
	if(outfile__array_Core_2_Va.is_open())
	{
		outfile__array_Core_2_Va.write(reinterpret_cast<char*>(_array_Core_2_Va), 256*sizeof(_array_Core_2_Va[0]));
		outfile__array_Core_2_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Va." << endl;
	}
	ofstream outfile__array_Core_2_Vw;
	outfile__array_Core_2_Vw.open("results/_array_Core_2_Vw_206626447204882511", ios::binary | ios::out);
	if(outfile__array_Core_2_Vw.is_open())
	{
		outfile__array_Core_2_Vw.write(reinterpret_cast<char*>(_array_Core_2_Vw), 256*sizeof(_array_Core_2_Vw[0]));
		outfile__array_Core_2_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Vw." << endl;
	}
	ofstream outfile__array_Core_3__spikespace;
	outfile__array_Core_3__spikespace.open("results/_array_Core_3__spikespace_-7360765543477763620", ios::binary | ios::out);
	if(outfile__array_Core_3__spikespace.is_open())
	{
		outfile__array_Core_3__spikespace.write(reinterpret_cast<char*>(_array_Core_3__spikespace), 257*sizeof(_array_Core_3__spikespace[0]));
		outfile__array_Core_3__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3__spikespace." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ahp;
	outfile__array_Core_3_alpha_ahp.open("results/_array_Core_3_alpha_ahp_8402751909472362740", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ahp.is_open())
	{
		outfile__array_Core_3_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_3_alpha_ahp), 256*sizeof(_array_Core_3_alpha_ahp[0]));
		outfile__array_Core_3_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ampa;
	outfile__array_Core_3_alpha_ampa.open("results/_array_Core_3_alpha_ampa_-334055426327596958", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ampa.is_open())
	{
		outfile__array_Core_3_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_3_alpha_ampa), 256*sizeof(_array_Core_3_alpha_ampa[0]));
		outfile__array_Core_3_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ampa_std;
	outfile__array_Core_3_alpha_ampa_std.open("results/_array_Core_3_alpha_ampa_std_-4484686052918416486", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ampa_std.is_open())
	{
		outfile__array_Core_3_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_3_alpha_ampa_std), 256*sizeof(_array_Core_3_alpha_ampa_std[0]));
		outfile__array_Core_3_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_3_alpha_gaba_a;
	outfile__array_Core_3_alpha_gaba_a.open("results/_array_Core_3_alpha_gaba_a_-8296880328888151813", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_gaba_a.is_open())
	{
		outfile__array_Core_3_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_alpha_gaba_a), 256*sizeof(_array_Core_3_alpha_gaba_a[0]));
		outfile__array_Core_3_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_alpha_gaba_b;
	outfile__array_Core_3_alpha_gaba_b.open("results/_array_Core_3_alpha_gaba_b_5150230305524514823", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_gaba_b.is_open())
	{
		outfile__array_Core_3_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_alpha_gaba_b), 256*sizeof(_array_Core_3_alpha_gaba_b[0]));
		outfile__array_Core_3_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_alpha_nmda;
	outfile__array_Core_3_alpha_nmda.open("results/_array_Core_3_alpha_nmda_-1318604931549969673", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_nmda.is_open())
	{
		outfile__array_Core_3_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_3_alpha_nmda), 256*sizeof(_array_Core_3_alpha_nmda[0]));
		outfile__array_Core_3_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_3_alpha_soma;
	outfile__array_Core_3_alpha_soma.open("results/_array_Core_3_alpha_soma_1674995285358737540", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_soma.is_open())
	{
		outfile__array_Core_3_alpha_soma.write(reinterpret_cast<char*>(_array_Core_3_alpha_soma), 256*sizeof(_array_Core_3_alpha_soma[0]));
		outfile__array_Core_3_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_3_Campa;
	outfile__array_Core_3_Campa.open("results/_array_Core_3_Campa_2184912256124503442", ios::binary | ios::out);
	if(outfile__array_Core_3_Campa.is_open())
	{
		outfile__array_Core_3_Campa.write(reinterpret_cast<char*>(_array_Core_3_Campa), 256*sizeof(_array_Core_3_Campa[0]));
		outfile__array_Core_3_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Campa." << endl;
	}
	ofstream outfile__array_Core_3_Campa_std;
	outfile__array_Core_3_Campa_std.open("results/_array_Core_3_Campa_std_4235486923764433532", ios::binary | ios::out);
	if(outfile__array_Core_3_Campa_std.is_open())
	{
		outfile__array_Core_3_Campa_std.write(reinterpret_cast<char*>(_array_Core_3_Campa_std), 256*sizeof(_array_Core_3_Campa_std[0]));
		outfile__array_Core_3_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Campa_std." << endl;
	}
	ofstream outfile__array_Core_3_Cgaba_a;
	outfile__array_Core_3_Cgaba_a.open("results/_array_Core_3_Cgaba_a_-1364304509880127750", ios::binary | ios::out);
	if(outfile__array_Core_3_Cgaba_a.is_open())
	{
		outfile__array_Core_3_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_3_Cgaba_a), 256*sizeof(_array_Core_3_Cgaba_a[0]));
		outfile__array_Core_3_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_3_Cgaba_b;
	outfile__array_Core_3_Cgaba_b.open("results/_array_Core_3_Cgaba_b_5877512319787944464", ios::binary | ios::out);
	if(outfile__array_Core_3_Cgaba_b.is_open())
	{
		outfile__array_Core_3_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_3_Cgaba_b), 256*sizeof(_array_Core_3_Cgaba_b[0]));
		outfile__array_Core_3_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_3_Cnmda;
	outfile__array_Core_3_Cnmda.open("results/_array_Core_3_Cnmda_-4688724621668274149", ios::binary | ios::out);
	if(outfile__array_Core_3_Cnmda.is_open())
	{
		outfile__array_Core_3_Cnmda.write(reinterpret_cast<char*>(_array_Core_3_Cnmda), 256*sizeof(_array_Core_3_Cnmda[0]));
		outfile__array_Core_3_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cnmda." << endl;
	}
	ofstream outfile__array_Core_3_Csoma_ahp;
	outfile__array_Core_3_Csoma_ahp.open("results/_array_Core_3_Csoma_ahp_8953788726317979408", ios::binary | ios::out);
	if(outfile__array_Core_3_Csoma_ahp.is_open())
	{
		outfile__array_Core_3_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_3_Csoma_ahp), 1*sizeof(_array_Core_3_Csoma_ahp[0]));
		outfile__array_Core_3_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_3_Csoma_mem;
	outfile__array_Core_3_Csoma_mem.open("results/_array_Core_3_Csoma_mem_8899083910094959610", ios::binary | ios::out);
	if(outfile__array_Core_3_Csoma_mem.is_open())
	{
		outfile__array_Core_3_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_3_Csoma_mem), 1*sizeof(_array_Core_3_Csoma_mem[0]));
		outfile__array_Core_3_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_3_i;
	outfile__array_Core_3_i.open("results/_array_Core_3_i_-2312074702939117017", ios::binary | ios::out);
	if(outfile__array_Core_3_i.is_open())
	{
		outfile__array_Core_3_i.write(reinterpret_cast<char*>(_array_Core_3_i), 256*sizeof(_array_Core_3_i[0]));
		outfile__array_Core_3_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_i." << endl;
	}
	ofstream outfile__array_Core_3_I0;
	outfile__array_Core_3_I0.open("results/_array_Core_3_I0_1681363665449185415", ios::binary | ios::out);
	if(outfile__array_Core_3_I0.is_open())
	{
		outfile__array_Core_3_I0.write(reinterpret_cast<char*>(_array_Core_3_I0), 1*sizeof(_array_Core_3_I0[0]));
		outfile__array_Core_3_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I0." << endl;
	}
	ofstream outfile__array_Core_3_Iampa;
	outfile__array_Core_3_Iampa.open("results/_array_Core_3_Iampa_4563148119510841092", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa.is_open())
	{
		outfile__array_Core_3_Iampa.write(reinterpret_cast<char*>(_array_Core_3_Iampa), 256*sizeof(_array_Core_3_Iampa[0]));
		outfile__array_Core_3_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_std;
	outfile__array_Core_3_Iampa_std.open("results/_array_Core_3_Iampa_std_8844603000318881856", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_std.is_open())
	{
		outfile__array_Core_3_Iampa_std.write(reinterpret_cast<char*>(_array_Core_3_Iampa_std), 256*sizeof(_array_Core_3_Iampa_std[0]));
		outfile__array_Core_3_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_std_tau;
	outfile__array_Core_3_Iampa_std_tau.open("results/_array_Core_3_Iampa_std_tau_3030300362534747266", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_std_tau.is_open())
	{
		outfile__array_Core_3_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_3_Iampa_std_tau), 256*sizeof(_array_Core_3_Iampa_std_tau[0]));
		outfile__array_Core_3_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_tau;
	outfile__array_Core_3_Iampa_tau.open("results/_array_Core_3_Iampa_tau_7585877372393387459", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_tau.is_open())
	{
		outfile__array_Core_3_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_3_Iampa_tau), 256*sizeof(_array_Core_3_Iampa_tau[0]));
		outfile__array_Core_3_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_w0;
	outfile__array_Core_3_Iampa_w0.open("results/_array_Core_3_Iampa_w0_4304593832384197010", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_w0.is_open())
	{
		outfile__array_Core_3_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_3_Iampa_w0), 256*sizeof(_array_Core_3_Iampa_w0[0]));
		outfile__array_Core_3_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_3_Idischarge_w;
	outfile__array_Core_3_Idischarge_w.open("results/_array_Core_3_Idischarge_w_2073008008328744379", ios::binary | ios::out);
	if(outfile__array_Core_3_Idischarge_w.is_open())
	{
		outfile__array_Core_3_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_3_Idischarge_w), 256*sizeof(_array_Core_3_Idischarge_w[0]));
		outfile__array_Core_3_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a;
	outfile__array_Core_3_Igaba_a.open("results/_array_Core_3_Igaba_a_1626036764993019751", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a.is_open())
	{
		outfile__array_Core_3_Igaba_a.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a), 256*sizeof(_array_Core_3_Igaba_a[0]));
		outfile__array_Core_3_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a_tau;
	outfile__array_Core_3_Igaba_a_tau.open("results/_array_Core_3_Igaba_a_tau_4627044484189520898", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a_tau.is_open())
	{
		outfile__array_Core_3_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a_tau), 256*sizeof(_array_Core_3_Igaba_a_tau[0]));
		outfile__array_Core_3_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a_w0;
	outfile__array_Core_3_Igaba_a_w0.open("results/_array_Core_3_Igaba_a_w0_1442453913762794239", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a_w0.is_open())
	{
		outfile__array_Core_3_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a_w0), 256*sizeof(_array_Core_3_Igaba_a_w0[0]));
		outfile__array_Core_3_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b;
	outfile__array_Core_3_Igaba_b.open("results/_array_Core_3_Igaba_b_1306461985367681121", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b.is_open())
	{
		outfile__array_Core_3_Igaba_b.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b), 256*sizeof(_array_Core_3_Igaba_b[0]));
		outfile__array_Core_3_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b_tau;
	outfile__array_Core_3_Igaba_b_tau.open("results/_array_Core_3_Igaba_b_tau_2945318356304098653", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b_tau.is_open())
	{
		outfile__array_Core_3_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b_tau), 256*sizeof(_array_Core_3_Igaba_b_tau[0]));
		outfile__array_Core_3_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b_w0;
	outfile__array_Core_3_Igaba_b_w0.open("results/_array_Core_3_Igaba_b_w0_-7974206944940534095", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b_w0.is_open())
	{
		outfile__array_Core_3_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b_w0), 256*sizeof(_array_Core_3_Igaba_b_w0[0]));
		outfile__array_Core_3_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_3_Inmda;
	outfile__array_Core_3_Inmda.open("results/_array_Core_3_Inmda_-2161244699445174114", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda.is_open())
	{
		outfile__array_Core_3_Inmda.write(reinterpret_cast<char*>(_array_Core_3_Inmda), 256*sizeof(_array_Core_3_Inmda[0]));
		outfile__array_Core_3_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_tau;
	outfile__array_Core_3_Inmda_tau.open("results/_array_Core_3_Inmda_tau_8339367228099022513", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_tau.is_open())
	{
		outfile__array_Core_3_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_3_Inmda_tau), 256*sizeof(_array_Core_3_Inmda_tau[0]));
		outfile__array_Core_3_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_thr;
	outfile__array_Core_3_Inmda_thr.open("results/_array_Core_3_Inmda_thr_6344119555214417524", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_thr.is_open())
	{
		outfile__array_Core_3_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_3_Inmda_thr), 256*sizeof(_array_Core_3_Inmda_thr[0]));
		outfile__array_Core_3_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_w0;
	outfile__array_Core_3_Inmda_w0.open("results/_array_Core_3_Inmda_w0_5836098746561158495", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_w0.is_open())
	{
		outfile__array_Core_3_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_3_Inmda_w0), 256*sizeof(_array_Core_3_Inmda_w0[0]));
		outfile__array_Core_3_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp;
	outfile__array_Core_3_Isoma_ahp.open("results/_array_Core_3_Isoma_ahp_-6196156754042108943", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp.is_open())
	{
		outfile__array_Core_3_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp), 256*sizeof(_array_Core_3_Isoma_ahp[0]));
		outfile__array_Core_3_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_g;
	outfile__array_Core_3_Isoma_ahp_g.open("results/_array_Core_3_Isoma_ahp_g_-95676421465193326", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_g), 1*sizeof(_array_Core_3_Isoma_ahp_g[0]));
		outfile__array_Core_3_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_tau;
	outfile__array_Core_3_Isoma_ahp_tau.open("results/_array_Core_3_Isoma_ahp_tau_718583940277747804", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_tau), 1*sizeof(_array_Core_3_Isoma_ahp_tau[0]));
		outfile__array_Core_3_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_w;
	outfile__array_Core_3_Isoma_ahp_w.open("results/_array_Core_3_Isoma_ahp_w_691335475307414182", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_w), 256*sizeof(_array_Core_3_Isoma_ahp_w[0]));
		outfile__array_Core_3_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_const;
	outfile__array_Core_3_Isoma_const.open("results/_array_Core_3_Isoma_const_8602606063588569987", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_const.is_open())
	{
		outfile__array_Core_3_Isoma_const.write(reinterpret_cast<char*>(_array_Core_3_Isoma_const), 256*sizeof(_array_Core_3_Isoma_const[0]));
		outfile__array_Core_3_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_dpi_tau;
	outfile__array_Core_3_Isoma_dpi_tau.open("results/_array_Core_3_Isoma_dpi_tau_8130809484234393596", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_3_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_3_Isoma_dpi_tau), 1*sizeof(_array_Core_3_Isoma_dpi_tau[0]));
		outfile__array_Core_3_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_mem;
	outfile__array_Core_3_Isoma_mem.open("results/_array_Core_3_Isoma_mem_6277877659887851395", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_mem.is_open())
	{
		outfile__array_Core_3_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_3_Isoma_mem), 256*sizeof(_array_Core_3_Isoma_mem[0]));
		outfile__array_Core_3_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_gain;
	outfile__array_Core_3_Isoma_pfb_gain.open("results/_array_Core_3_Isoma_pfb_gain_8642134556084177691", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_gain), 1*sizeof(_array_Core_3_Isoma_pfb_gain[0]));
		outfile__array_Core_3_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_norm;
	outfile__array_Core_3_Isoma_pfb_norm.open("results/_array_Core_3_Isoma_pfb_norm_1288557818958337304", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_norm), 1*sizeof(_array_Core_3_Isoma_pfb_norm[0]));
		outfile__array_Core_3_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_th;
	outfile__array_Core_3_Isoma_pfb_th.open("results/_array_Core_3_Isoma_pfb_th_8912083863872756082", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_th), 1*sizeof(_array_Core_3_Isoma_pfb_th[0]));
		outfile__array_Core_3_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_reset;
	outfile__array_Core_3_Isoma_reset.open("results/_array_Core_3_Isoma_reset_-851851576093694997", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_reset.is_open())
	{
		outfile__array_Core_3_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_3_Isoma_reset), 1*sizeof(_array_Core_3_Isoma_reset[0]));
		outfile__array_Core_3_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_th;
	outfile__array_Core_3_Isoma_th.open("results/_array_Core_3_Isoma_th_3852184553783613595", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_th.is_open())
	{
		outfile__array_Core_3_Isoma_th.write(reinterpret_cast<char*>(_array_Core_3_Isoma_th), 1*sizeof(_array_Core_3_Isoma_th[0]));
		outfile__array_Core_3_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_3_kn;
	outfile__array_Core_3_kn.open("results/_array_Core_3_kn_-9055046894067910961", ios::binary | ios::out);
	if(outfile__array_Core_3_kn.is_open())
	{
		outfile__array_Core_3_kn.write(reinterpret_cast<char*>(_array_Core_3_kn), 1*sizeof(_array_Core_3_kn[0]));
		outfile__array_Core_3_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kn." << endl;
	}
	ofstream outfile__array_Core_3_kp;
	outfile__array_Core_3_kp.open("results/_array_Core_3_kp_5791241461798548475", ios::binary | ios::out);
	if(outfile__array_Core_3_kp.is_open())
	{
		outfile__array_Core_3_kp.write(reinterpret_cast<char*>(_array_Core_3_kp), 1*sizeof(_array_Core_3_kp[0]));
		outfile__array_Core_3_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kp." << endl;
	}
	ofstream outfile__array_Core_3_lastspike;
	outfile__array_Core_3_lastspike.open("results/_array_Core_3_lastspike_-2089892772855611880", ios::binary | ios::out);
	if(outfile__array_Core_3_lastspike.is_open())
	{
		outfile__array_Core_3_lastspike.write(reinterpret_cast<char*>(_array_Core_3_lastspike), 256*sizeof(_array_Core_3_lastspike[0]));
		outfile__array_Core_3_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_lastspike." << endl;
	}
	ofstream outfile__array_Core_3_not_refractory;
	outfile__array_Core_3_not_refractory.open("results/_array_Core_3_not_refractory_-3784251952386435096", ios::binary | ios::out);
	if(outfile__array_Core_3_not_refractory.is_open())
	{
		outfile__array_Core_3_not_refractory.write(reinterpret_cast<char*>(_array_Core_3_not_refractory), 256*sizeof(_array_Core_3_not_refractory[0]));
		outfile__array_Core_3_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_not_refractory." << endl;
	}
	ofstream outfile__array_Core_3_soma_refP;
	outfile__array_Core_3_soma_refP.open("results/_array_Core_3_soma_refP_-7079580883608525904", ios::binary | ios::out);
	if(outfile__array_Core_3_soma_refP.is_open())
	{
		outfile__array_Core_3_soma_refP.write(reinterpret_cast<char*>(_array_Core_3_soma_refP), 1*sizeof(_array_Core_3_soma_refP[0]));
		outfile__array_Core_3_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_soma_refP." << endl;
	}
	ofstream outfile__array_Core_3_std_pulse;
	outfile__array_Core_3_std_pulse.open("results/_array_Core_3_std_pulse_1901732919068053416", ios::binary | ios::out);
	if(outfile__array_Core_3_std_pulse.is_open())
	{
		outfile__array_Core_3_std_pulse.write(reinterpret_cast<char*>(_array_Core_3_std_pulse), 256*sizeof(_array_Core_3_std_pulse[0]));
		outfile__array_Core_3_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_std_pulse." << endl;
	}
	ofstream outfile__array_Core_3_tau_pulse;
	outfile__array_Core_3_tau_pulse.open("results/_array_Core_3_tau_pulse_3299745671789396235", ios::binary | ios::out);
	if(outfile__array_Core_3_tau_pulse.is_open())
	{
		outfile__array_Core_3_tau_pulse.write(reinterpret_cast<char*>(_array_Core_3_tau_pulse), 256*sizeof(_array_Core_3_tau_pulse[0]));
		outfile__array_Core_3_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_3_Ut;
	outfile__array_Core_3_Ut.open("results/_array_Core_3_Ut_8097306250536411091", ios::binary | ios::out);
	if(outfile__array_Core_3_Ut.is_open())
	{
		outfile__array_Core_3_Ut.write(reinterpret_cast<char*>(_array_Core_3_Ut), 1*sizeof(_array_Core_3_Ut[0]));
		outfile__array_Core_3_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ut." << endl;
	}
	ofstream outfile__array_Core_3_Va;
	outfile__array_Core_3_Va.open("results/_array_Core_3_Va_-7145264271024101260", ios::binary | ios::out);
	if(outfile__array_Core_3_Va.is_open())
	{
		outfile__array_Core_3_Va.write(reinterpret_cast<char*>(_array_Core_3_Va), 256*sizeof(_array_Core_3_Va[0]));
		outfile__array_Core_3_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Va." << endl;
	}
	ofstream outfile__array_Core_3_Vw;
	outfile__array_Core_3_Vw.open("results/_array_Core_3_Vw_-5338276761431481062", ios::binary | ios::out);
	if(outfile__array_Core_3_Vw.is_open())
	{
		outfile__array_Core_3_Vw.write(reinterpret_cast<char*>(_array_Core_3_Vw), 256*sizeof(_array_Core_3_Vw[0]));
		outfile__array_Core_3_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Vw." << endl;
	}
	ofstream outfile__array_defaultclock_dt;
	outfile__array_defaultclock_dt.open("results/_array_defaultclock_dt_-8450494820727410930", ios::binary | ios::out);
	if(outfile__array_defaultclock_dt.is_open())
	{
		outfile__array_defaultclock_dt.write(reinterpret_cast<char*>(_array_defaultclock_dt), 1*sizeof(_array_defaultclock_dt[0]));
		outfile__array_defaultclock_dt.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_dt." << endl;
	}
	ofstream outfile__array_defaultclock_t;
	outfile__array_defaultclock_t.open("results/_array_defaultclock_t_-8309428064259830539", ios::binary | ios::out);
	if(outfile__array_defaultclock_t.is_open())
	{
		outfile__array_defaultclock_t.write(reinterpret_cast<char*>(_array_defaultclock_t), 1*sizeof(_array_defaultclock_t[0]));
		outfile__array_defaultclock_t.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_t." << endl;
	}
	ofstream outfile__array_defaultclock_timestep;
	outfile__array_defaultclock_timestep.open("results/_array_defaultclock_timestep_3889463677558046702", ios::binary | ios::out);
	if(outfile__array_defaultclock_timestep.is_open())
	{
		outfile__array_defaultclock_timestep.write(reinterpret_cast<char*>(_array_defaultclock_timestep), 1*sizeof(_array_defaultclock_timestep[0]));
		outfile__array_defaultclock_timestep.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_timestep." << endl;
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
}

