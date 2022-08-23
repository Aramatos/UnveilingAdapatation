
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
	outfile__array_Core_0__spikespace.open("results/_array_Core_0__spikespace_1550779751584229714", ios::binary | ios::out);
	if(outfile__array_Core_0__spikespace.is_open())
	{
		outfile__array_Core_0__spikespace.write(reinterpret_cast<char*>(_array_Core_0__spikespace), 257*sizeof(_array_Core_0__spikespace[0]));
		outfile__array_Core_0__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0__spikespace." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ahp;
	outfile__array_Core_0_alpha_ahp.open("results/_array_Core_0_alpha_ahp_401111804253407499", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ahp.is_open())
	{
		outfile__array_Core_0_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_0_alpha_ahp), 256*sizeof(_array_Core_0_alpha_ahp[0]));
		outfile__array_Core_0_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ampa;
	outfile__array_Core_0_alpha_ampa.open("results/_array_Core_0_alpha_ampa_5599248865364054346", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ampa.is_open())
	{
		outfile__array_Core_0_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_0_alpha_ampa), 256*sizeof(_array_Core_0_alpha_ampa[0]));
		outfile__array_Core_0_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_0_alpha_ampa_std;
	outfile__array_Core_0_alpha_ampa_std.open("results/_array_Core_0_alpha_ampa_std_-7431540842094964950", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_ampa_std.is_open())
	{
		outfile__array_Core_0_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_0_alpha_ampa_std), 256*sizeof(_array_Core_0_alpha_ampa_std[0]));
		outfile__array_Core_0_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_0_alpha_gaba_a;
	outfile__array_Core_0_alpha_gaba_a.open("results/_array_Core_0_alpha_gaba_a_-628526905817195297", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_gaba_a.is_open())
	{
		outfile__array_Core_0_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_alpha_gaba_a), 256*sizeof(_array_Core_0_alpha_gaba_a[0]));
		outfile__array_Core_0_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_alpha_gaba_b;
	outfile__array_Core_0_alpha_gaba_b.open("results/_array_Core_0_alpha_gaba_b_5697906425423290092", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_gaba_b.is_open())
	{
		outfile__array_Core_0_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_alpha_gaba_b), 256*sizeof(_array_Core_0_alpha_gaba_b[0]));
		outfile__array_Core_0_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_alpha_nmda;
	outfile__array_Core_0_alpha_nmda.open("results/_array_Core_0_alpha_nmda_-1601445042048072557", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_nmda.is_open())
	{
		outfile__array_Core_0_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_0_alpha_nmda), 256*sizeof(_array_Core_0_alpha_nmda[0]));
		outfile__array_Core_0_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_0_alpha_soma;
	outfile__array_Core_0_alpha_soma.open("results/_array_Core_0_alpha_soma_3419260607484561528", ios::binary | ios::out);
	if(outfile__array_Core_0_alpha_soma.is_open())
	{
		outfile__array_Core_0_alpha_soma.write(reinterpret_cast<char*>(_array_Core_0_alpha_soma), 256*sizeof(_array_Core_0_alpha_soma[0]));
		outfile__array_Core_0_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_0_Campa;
	outfile__array_Core_0_Campa.open("results/_array_Core_0_Campa_-5244294745896381778", ios::binary | ios::out);
	if(outfile__array_Core_0_Campa.is_open())
	{
		outfile__array_Core_0_Campa.write(reinterpret_cast<char*>(_array_Core_0_Campa), 256*sizeof(_array_Core_0_Campa[0]));
		outfile__array_Core_0_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Campa." << endl;
	}
	ofstream outfile__array_Core_0_Campa_std;
	outfile__array_Core_0_Campa_std.open("results/_array_Core_0_Campa_std_6756664816559401009", ios::binary | ios::out);
	if(outfile__array_Core_0_Campa_std.is_open())
	{
		outfile__array_Core_0_Campa_std.write(reinterpret_cast<char*>(_array_Core_0_Campa_std), 256*sizeof(_array_Core_0_Campa_std[0]));
		outfile__array_Core_0_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Campa_std." << endl;
	}
	ofstream outfile__array_Core_0_Cgaba_a;
	outfile__array_Core_0_Cgaba_a.open("results/_array_Core_0_Cgaba_a_5289121779626663787", ios::binary | ios::out);
	if(outfile__array_Core_0_Cgaba_a.is_open())
	{
		outfile__array_Core_0_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_0_Cgaba_a), 256*sizeof(_array_Core_0_Cgaba_a[0]));
		outfile__array_Core_0_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_0_Cgaba_b;
	outfile__array_Core_0_Cgaba_b.open("results/_array_Core_0_Cgaba_b_-565453497205356630", ios::binary | ios::out);
	if(outfile__array_Core_0_Cgaba_b.is_open())
	{
		outfile__array_Core_0_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_0_Cgaba_b), 256*sizeof(_array_Core_0_Cgaba_b[0]));
		outfile__array_Core_0_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_0_Cnmda;
	outfile__array_Core_0_Cnmda.open("results/_array_Core_0_Cnmda_-6958340302602395380", ios::binary | ios::out);
	if(outfile__array_Core_0_Cnmda.is_open())
	{
		outfile__array_Core_0_Cnmda.write(reinterpret_cast<char*>(_array_Core_0_Cnmda), 256*sizeof(_array_Core_0_Cnmda[0]));
		outfile__array_Core_0_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cnmda." << endl;
	}
	ofstream outfile__array_Core_0_Csoma_ahp;
	outfile__array_Core_0_Csoma_ahp.open("results/_array_Core_0_Csoma_ahp_3373901295214669168", ios::binary | ios::out);
	if(outfile__array_Core_0_Csoma_ahp.is_open())
	{
		outfile__array_Core_0_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_0_Csoma_ahp), 1*sizeof(_array_Core_0_Csoma_ahp[0]));
		outfile__array_Core_0_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_0_Csoma_mem;
	outfile__array_Core_0_Csoma_mem.open("results/_array_Core_0_Csoma_mem_224869024101242776", ios::binary | ios::out);
	if(outfile__array_Core_0_Csoma_mem.is_open())
	{
		outfile__array_Core_0_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_0_Csoma_mem), 1*sizeof(_array_Core_0_Csoma_mem[0]));
		outfile__array_Core_0_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_0_i;
	outfile__array_Core_0_i.open("results/_array_Core_0_i_2676353831829946166", ios::binary | ios::out);
	if(outfile__array_Core_0_i.is_open())
	{
		outfile__array_Core_0_i.write(reinterpret_cast<char*>(_array_Core_0_i), 256*sizeof(_array_Core_0_i[0]));
		outfile__array_Core_0_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_i." << endl;
	}
	ofstream outfile__array_Core_0_I0;
	outfile__array_Core_0_I0.open("results/_array_Core_0_I0_4242538912840630275", ios::binary | ios::out);
	if(outfile__array_Core_0_I0.is_open())
	{
		outfile__array_Core_0_I0.write(reinterpret_cast<char*>(_array_Core_0_I0), 1*sizeof(_array_Core_0_I0[0]));
		outfile__array_Core_0_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I0." << endl;
	}
	ofstream outfile__array_Core_0_Iampa;
	outfile__array_Core_0_Iampa.open("results/_array_Core_0_Iampa_-3885074213713859756", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa.is_open())
	{
		outfile__array_Core_0_Iampa.write(reinterpret_cast<char*>(_array_Core_0_Iampa), 256*sizeof(_array_Core_0_Iampa[0]));
		outfile__array_Core_0_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_std;
	outfile__array_Core_0_Iampa_std.open("results/_array_Core_0_Iampa_std_7169750630556852257", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_std.is_open())
	{
		outfile__array_Core_0_Iampa_std.write(reinterpret_cast<char*>(_array_Core_0_Iampa_std), 256*sizeof(_array_Core_0_Iampa_std[0]));
		outfile__array_Core_0_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_std_tau;
	outfile__array_Core_0_Iampa_std_tau.open("results/_array_Core_0_Iampa_std_tau_-6400814675285748864", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_std_tau.is_open())
	{
		outfile__array_Core_0_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_0_Iampa_std_tau), 256*sizeof(_array_Core_0_Iampa_std_tau[0]));
		outfile__array_Core_0_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_tau;
	outfile__array_Core_0_Iampa_tau.open("results/_array_Core_0_Iampa_tau_-2940700078892377936", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_tau.is_open())
	{
		outfile__array_Core_0_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_0_Iampa_tau), 256*sizeof(_array_Core_0_Iampa_tau[0]));
		outfile__array_Core_0_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_0_Iampa_w0;
	outfile__array_Core_0_Iampa_w0.open("results/_array_Core_0_Iampa_w0_-3248476939479244135", ios::binary | ios::out);
	if(outfile__array_Core_0_Iampa_w0.is_open())
	{
		outfile__array_Core_0_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_0_Iampa_w0), 256*sizeof(_array_Core_0_Iampa_w0[0]));
		outfile__array_Core_0_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_0_Idischarge_w;
	outfile__array_Core_0_Idischarge_w.open("results/_array_Core_0_Idischarge_w_-1816390357279999866", ios::binary | ios::out);
	if(outfile__array_Core_0_Idischarge_w.is_open())
	{
		outfile__array_Core_0_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_0_Idischarge_w), 256*sizeof(_array_Core_0_Idischarge_w[0]));
		outfile__array_Core_0_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a;
	outfile__array_Core_0_Igaba_a.open("results/_array_Core_0_Igaba_a_676163604801171596", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a.is_open())
	{
		outfile__array_Core_0_Igaba_a.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a), 256*sizeof(_array_Core_0_Igaba_a[0]));
		outfile__array_Core_0_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a_tau;
	outfile__array_Core_0_Igaba_a_tau.open("results/_array_Core_0_Igaba_a_tau_6208854496555729785", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a_tau.is_open())
	{
		outfile__array_Core_0_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a_tau), 256*sizeof(_array_Core_0_Igaba_a_tau[0]));
		outfile__array_Core_0_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_a_w0;
	outfile__array_Core_0_Igaba_a_w0.open("results/_array_Core_0_Igaba_a_w0_3799568842124042147", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_a_w0.is_open())
	{
		outfile__array_Core_0_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_0_Igaba_a_w0), 256*sizeof(_array_Core_0_Igaba_a_w0[0]));
		outfile__array_Core_0_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b;
	outfile__array_Core_0_Igaba_b.open("results/_array_Core_0_Igaba_b_1178937671547668516", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b.is_open())
	{
		outfile__array_Core_0_Igaba_b.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b), 256*sizeof(_array_Core_0_Igaba_b[0]));
		outfile__array_Core_0_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b_tau;
	outfile__array_Core_0_Igaba_b_tau.open("results/_array_Core_0_Igaba_b_tau_-901343010817555901", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b_tau.is_open())
	{
		outfile__array_Core_0_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b_tau), 256*sizeof(_array_Core_0_Igaba_b_tau[0]));
		outfile__array_Core_0_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_0_Igaba_b_w0;
	outfile__array_Core_0_Igaba_b_w0.open("results/_array_Core_0_Igaba_b_w0_-1705130737746521040", ios::binary | ios::out);
	if(outfile__array_Core_0_Igaba_b_w0.is_open())
	{
		outfile__array_Core_0_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_0_Igaba_b_w0), 256*sizeof(_array_Core_0_Igaba_b_w0[0]));
		outfile__array_Core_0_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_0_Inmda;
	outfile__array_Core_0_Inmda.open("results/_array_Core_0_Inmda_-6561139386014462531", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda.is_open())
	{
		outfile__array_Core_0_Inmda.write(reinterpret_cast<char*>(_array_Core_0_Inmda), 256*sizeof(_array_Core_0_Inmda[0]));
		outfile__array_Core_0_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_tau;
	outfile__array_Core_0_Inmda_tau.open("results/_array_Core_0_Inmda_tau_-1769519981606586461", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_tau.is_open())
	{
		outfile__array_Core_0_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_0_Inmda_tau), 256*sizeof(_array_Core_0_Inmda_tau[0]));
		outfile__array_Core_0_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_thr;
	outfile__array_Core_0_Inmda_thr.open("results/_array_Core_0_Inmda_thr_-8290943951439448521", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_thr.is_open())
	{
		outfile__array_Core_0_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_0_Inmda_thr), 256*sizeof(_array_Core_0_Inmda_thr[0]));
		outfile__array_Core_0_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_0_Inmda_w0;
	outfile__array_Core_0_Inmda_w0.open("results/_array_Core_0_Inmda_w0_3655128392387542830", ios::binary | ios::out);
	if(outfile__array_Core_0_Inmda_w0.is_open())
	{
		outfile__array_Core_0_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_0_Inmda_w0), 256*sizeof(_array_Core_0_Inmda_w0[0]));
		outfile__array_Core_0_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp;
	outfile__array_Core_0_Isoma_ahp.open("results/_array_Core_0_Isoma_ahp_-2092375776771357485", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp.is_open())
	{
		outfile__array_Core_0_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp), 256*sizeof(_array_Core_0_Isoma_ahp[0]));
		outfile__array_Core_0_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_g;
	outfile__array_Core_0_Isoma_ahp_g.open("results/_array_Core_0_Isoma_ahp_g_3273989171676904613", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_g), 1*sizeof(_array_Core_0_Isoma_ahp_g[0]));
		outfile__array_Core_0_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_tau;
	outfile__array_Core_0_Isoma_ahp_tau.open("results/_array_Core_0_Isoma_ahp_tau_2369435835531000556", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_tau), 1*sizeof(_array_Core_0_Isoma_ahp_tau[0]));
		outfile__array_Core_0_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_ahp_w;
	outfile__array_Core_0_Isoma_ahp_w.open("results/_array_Core_0_Isoma_ahp_w_4873979466181852271", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_0_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_0_Isoma_ahp_w), 256*sizeof(_array_Core_0_Isoma_ahp_w[0]));
		outfile__array_Core_0_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_const;
	outfile__array_Core_0_Isoma_const.open("results/_array_Core_0_Isoma_const_587987691719850741", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_const.is_open())
	{
		outfile__array_Core_0_Isoma_const.write(reinterpret_cast<char*>(_array_Core_0_Isoma_const), 256*sizeof(_array_Core_0_Isoma_const[0]));
		outfile__array_Core_0_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_dpi_tau;
	outfile__array_Core_0_Isoma_dpi_tau.open("results/_array_Core_0_Isoma_dpi_tau_3757298161254516930", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_0_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_0_Isoma_dpi_tau), 1*sizeof(_array_Core_0_Isoma_dpi_tau[0]));
		outfile__array_Core_0_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_mem;
	outfile__array_Core_0_Isoma_mem.open("results/_array_Core_0_Isoma_mem_7093568217339452353", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_mem.is_open())
	{
		outfile__array_Core_0_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_0_Isoma_mem), 256*sizeof(_array_Core_0_Isoma_mem[0]));
		outfile__array_Core_0_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_gain;
	outfile__array_Core_0_Isoma_pfb_gain.open("results/_array_Core_0_Isoma_pfb_gain_-7738130068203543519", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_gain), 1*sizeof(_array_Core_0_Isoma_pfb_gain[0]));
		outfile__array_Core_0_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_norm;
	outfile__array_Core_0_Isoma_pfb_norm.open("results/_array_Core_0_Isoma_pfb_norm_8413190329779027932", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_norm), 1*sizeof(_array_Core_0_Isoma_pfb_norm[0]));
		outfile__array_Core_0_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_pfb_th;
	outfile__array_Core_0_Isoma_pfb_th.open("results/_array_Core_0_Isoma_pfb_th_8710409854259110862", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_0_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_0_Isoma_pfb_th), 1*sizeof(_array_Core_0_Isoma_pfb_th[0]));
		outfile__array_Core_0_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_reset;
	outfile__array_Core_0_Isoma_reset.open("results/_array_Core_0_Isoma_reset_-7270029768309669740", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_reset.is_open())
	{
		outfile__array_Core_0_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_0_Isoma_reset), 1*sizeof(_array_Core_0_Isoma_reset[0]));
		outfile__array_Core_0_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_0_Isoma_th;
	outfile__array_Core_0_Isoma_th.open("results/_array_Core_0_Isoma_th_-6113098469713017780", ios::binary | ios::out);
	if(outfile__array_Core_0_Isoma_th.is_open())
	{
		outfile__array_Core_0_Isoma_th.write(reinterpret_cast<char*>(_array_Core_0_Isoma_th), 1*sizeof(_array_Core_0_Isoma_th[0]));
		outfile__array_Core_0_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_0_kn;
	outfile__array_Core_0_kn.open("results/_array_Core_0_kn_7570775491016694316", ios::binary | ios::out);
	if(outfile__array_Core_0_kn.is_open())
	{
		outfile__array_Core_0_kn.write(reinterpret_cast<char*>(_array_Core_0_kn), 1*sizeof(_array_Core_0_kn[0]));
		outfile__array_Core_0_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kn." << endl;
	}
	ofstream outfile__array_Core_0_kp;
	outfile__array_Core_0_kp.open("results/_array_Core_0_kp_-5813778472463301133", ios::binary | ios::out);
	if(outfile__array_Core_0_kp.is_open())
	{
		outfile__array_Core_0_kp.write(reinterpret_cast<char*>(_array_Core_0_kp), 1*sizeof(_array_Core_0_kp[0]));
		outfile__array_Core_0_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kp." << endl;
	}
	ofstream outfile__array_Core_0_lastspike;
	outfile__array_Core_0_lastspike.open("results/_array_Core_0_lastspike_8895862269270151551", ios::binary | ios::out);
	if(outfile__array_Core_0_lastspike.is_open())
	{
		outfile__array_Core_0_lastspike.write(reinterpret_cast<char*>(_array_Core_0_lastspike), 256*sizeof(_array_Core_0_lastspike[0]));
		outfile__array_Core_0_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_lastspike." << endl;
	}
	ofstream outfile__array_Core_0_not_refractory;
	outfile__array_Core_0_not_refractory.open("results/_array_Core_0_not_refractory_7617392804145374782", ios::binary | ios::out);
	if(outfile__array_Core_0_not_refractory.is_open())
	{
		outfile__array_Core_0_not_refractory.write(reinterpret_cast<char*>(_array_Core_0_not_refractory), 256*sizeof(_array_Core_0_not_refractory[0]));
		outfile__array_Core_0_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_not_refractory." << endl;
	}
	ofstream outfile__array_Core_0_soma_refP;
	outfile__array_Core_0_soma_refP.open("results/_array_Core_0_soma_refP_5567600360760143621", ios::binary | ios::out);
	if(outfile__array_Core_0_soma_refP.is_open())
	{
		outfile__array_Core_0_soma_refP.write(reinterpret_cast<char*>(_array_Core_0_soma_refP), 1*sizeof(_array_Core_0_soma_refP[0]));
		outfile__array_Core_0_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_soma_refP." << endl;
	}
	ofstream outfile__array_Core_0_std_pulse;
	outfile__array_Core_0_std_pulse.open("results/_array_Core_0_std_pulse_8506346231748049347", ios::binary | ios::out);
	if(outfile__array_Core_0_std_pulse.is_open())
	{
		outfile__array_Core_0_std_pulse.write(reinterpret_cast<char*>(_array_Core_0_std_pulse), 256*sizeof(_array_Core_0_std_pulse[0]));
		outfile__array_Core_0_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_std_pulse." << endl;
	}
	ofstream outfile__array_Core_0_tau_pulse;
	outfile__array_Core_0_tau_pulse.open("results/_array_Core_0_tau_pulse_-2837669377206575245", ios::binary | ios::out);
	if(outfile__array_Core_0_tau_pulse.is_open())
	{
		outfile__array_Core_0_tau_pulse.write(reinterpret_cast<char*>(_array_Core_0_tau_pulse), 256*sizeof(_array_Core_0_tau_pulse[0]));
		outfile__array_Core_0_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_0_Ut;
	outfile__array_Core_0_Ut.open("results/_array_Core_0_Ut_-2354408531287402642", ios::binary | ios::out);
	if(outfile__array_Core_0_Ut.is_open())
	{
		outfile__array_Core_0_Ut.write(reinterpret_cast<char*>(_array_Core_0_Ut), 1*sizeof(_array_Core_0_Ut[0]));
		outfile__array_Core_0_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ut." << endl;
	}
	ofstream outfile__array_Core_0_Va;
	outfile__array_Core_0_Va.open("results/_array_Core_0_Va_3794692975467361197", ios::binary | ios::out);
	if(outfile__array_Core_0_Va.is_open())
	{
		outfile__array_Core_0_Va.write(reinterpret_cast<char*>(_array_Core_0_Va), 256*sizeof(_array_Core_0_Va[0]));
		outfile__array_Core_0_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Va." << endl;
	}
	ofstream outfile__array_Core_0_Vw;
	outfile__array_Core_0_Vw.open("results/_array_Core_0_Vw_5064294311865755780", ios::binary | ios::out);
	if(outfile__array_Core_0_Vw.is_open())
	{
		outfile__array_Core_0_Vw.write(reinterpret_cast<char*>(_array_Core_0_Vw), 256*sizeof(_array_Core_0_Vw[0]));
		outfile__array_Core_0_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Vw." << endl;
	}
	ofstream outfile__array_Core_1__spikespace;
	outfile__array_Core_1__spikespace.open("results/_array_Core_1__spikespace_7231858416327759020", ios::binary | ios::out);
	if(outfile__array_Core_1__spikespace.is_open())
	{
		outfile__array_Core_1__spikespace.write(reinterpret_cast<char*>(_array_Core_1__spikespace), 257*sizeof(_array_Core_1__spikespace[0]));
		outfile__array_Core_1__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1__spikespace." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ahp;
	outfile__array_Core_1_alpha_ahp.open("results/_array_Core_1_alpha_ahp_-3462760824296391185", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ahp.is_open())
	{
		outfile__array_Core_1_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_1_alpha_ahp), 256*sizeof(_array_Core_1_alpha_ahp[0]));
		outfile__array_Core_1_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ampa;
	outfile__array_Core_1_alpha_ampa.open("results/_array_Core_1_alpha_ampa_5318325612102256737", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ampa.is_open())
	{
		outfile__array_Core_1_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_1_alpha_ampa), 256*sizeof(_array_Core_1_alpha_ampa[0]));
		outfile__array_Core_1_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_1_alpha_ampa_std;
	outfile__array_Core_1_alpha_ampa_std.open("results/_array_Core_1_alpha_ampa_std_-7701490854378707143", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_ampa_std.is_open())
	{
		outfile__array_Core_1_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_1_alpha_ampa_std), 256*sizeof(_array_Core_1_alpha_ampa_std[0]));
		outfile__array_Core_1_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_1_alpha_gaba_a;
	outfile__array_Core_1_alpha_gaba_a.open("results/_array_Core_1_alpha_gaba_a_7837637361440503940", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_gaba_a.is_open())
	{
		outfile__array_Core_1_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_alpha_gaba_a), 256*sizeof(_array_Core_1_alpha_gaba_a[0]));
		outfile__array_Core_1_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_alpha_gaba_b;
	outfile__array_Core_1_alpha_gaba_b.open("results/_array_Core_1_alpha_gaba_b_8083903552907457103", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_gaba_b.is_open())
	{
		outfile__array_Core_1_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_alpha_gaba_b), 256*sizeof(_array_Core_1_alpha_gaba_b[0]));
		outfile__array_Core_1_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_alpha_nmda;
	outfile__array_Core_1_alpha_nmda.open("results/_array_Core_1_alpha_nmda_2062347477364857731", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_nmda.is_open())
	{
		outfile__array_Core_1_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_1_alpha_nmda), 256*sizeof(_array_Core_1_alpha_nmda[0]));
		outfile__array_Core_1_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_1_alpha_soma;
	outfile__array_Core_1_alpha_soma.open("results/_array_Core_1_alpha_soma_-2958443899678953558", ios::binary | ios::out);
	if(outfile__array_Core_1_alpha_soma.is_open())
	{
		outfile__array_Core_1_alpha_soma.write(reinterpret_cast<char*>(_array_Core_1_alpha_soma), 256*sizeof(_array_Core_1_alpha_soma[0]));
		outfile__array_Core_1_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_1_Campa;
	outfile__array_Core_1_Campa.open("results/_array_Core_1_Campa_7128854752569421812", ios::binary | ios::out);
	if(outfile__array_Core_1_Campa.is_open())
	{
		outfile__array_Core_1_Campa.write(reinterpret_cast<char*>(_array_Core_1_Campa), 256*sizeof(_array_Core_1_Campa[0]));
		outfile__array_Core_1_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Campa." << endl;
	}
	ofstream outfile__array_Core_1_Campa_std;
	outfile__array_Core_1_Campa_std.open("results/_array_Core_1_Campa_std_-1237105153807820243", ios::binary | ios::out);
	if(outfile__array_Core_1_Campa_std.is_open())
	{
		outfile__array_Core_1_Campa_std.write(reinterpret_cast<char*>(_array_Core_1_Campa_std), 256*sizeof(_array_Core_1_Campa_std[0]));
		outfile__array_Core_1_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Campa_std." << endl;
	}
	ofstream outfile__array_Core_1_Cgaba_a;
	outfile__array_Core_1_Cgaba_a.open("results/_array_Core_1_Cgaba_a_-8348046298325274499", ios::binary | ios::out);
	if(outfile__array_Core_1_Cgaba_a.is_open())
	{
		outfile__array_Core_1_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_1_Cgaba_a), 256*sizeof(_array_Core_1_Cgaba_a[0]));
		outfile__array_Core_1_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_1_Cgaba_b;
	outfile__array_Core_1_Cgaba_b.open("results/_array_Core_1_Cgaba_b_-4904153658158702827", ios::binary | ios::out);
	if(outfile__array_Core_1_Cgaba_b.is_open())
	{
		outfile__array_Core_1_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_1_Cgaba_b), 256*sizeof(_array_Core_1_Cgaba_b[0]));
		outfile__array_Core_1_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_1_Cnmda;
	outfile__array_Core_1_Cnmda.open("results/_array_Core_1_Cnmda_-1591100197377392915", ios::binary | ios::out);
	if(outfile__array_Core_1_Cnmda.is_open())
	{
		outfile__array_Core_1_Cnmda.write(reinterpret_cast<char*>(_array_Core_1_Cnmda), 256*sizeof(_array_Core_1_Cnmda[0]));
		outfile__array_Core_1_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cnmda." << endl;
	}
	ofstream outfile__array_Core_1_Csoma_ahp;
	outfile__array_Core_1_Csoma_ahp.open("results/_array_Core_1_Csoma_ahp_1544305576718756543", ios::binary | ios::out);
	if(outfile__array_Core_1_Csoma_ahp.is_open())
	{
		outfile__array_Core_1_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_1_Csoma_ahp), 1*sizeof(_array_Core_1_Csoma_ahp[0]));
		outfile__array_Core_1_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_1_Csoma_mem;
	outfile__array_Core_1_Csoma_mem.open("results/_array_Core_1_Csoma_mem_-5604431715424450494", ios::binary | ios::out);
	if(outfile__array_Core_1_Csoma_mem.is_open())
	{
		outfile__array_Core_1_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_1_Csoma_mem), 1*sizeof(_array_Core_1_Csoma_mem[0]));
		outfile__array_Core_1_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_1_i;
	outfile__array_Core_1_i.open("results/_array_Core_1_i_-4265878393327377546", ios::binary | ios::out);
	if(outfile__array_Core_1_i.is_open())
	{
		outfile__array_Core_1_i.write(reinterpret_cast<char*>(_array_Core_1_i), 256*sizeof(_array_Core_1_i[0]));
		outfile__array_Core_1_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_i." << endl;
	}
	ofstream outfile__array_Core_1_I0;
	outfile__array_Core_1_I0.open("results/_array_Core_1_I0_-1088183808863754580", ios::binary | ios::out);
	if(outfile__array_Core_1_I0.is_open())
	{
		outfile__array_Core_1_I0.write(reinterpret_cast<char*>(_array_Core_1_I0), 1*sizeof(_array_Core_1_I0[0]));
		outfile__array_Core_1_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I0." << endl;
	}
	ofstream outfile__array_Core_1_Iampa;
	outfile__array_Core_1_Iampa.open("results/_array_Core_1_Iampa_-667651067363017649", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa.is_open())
	{
		outfile__array_Core_1_Iampa.write(reinterpret_cast<char*>(_array_Core_1_Iampa), 256*sizeof(_array_Core_1_Iampa[0]));
		outfile__array_Core_1_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_std;
	outfile__array_Core_1_Iampa_std.open("results/_array_Core_1_Iampa_std_92002930457825692", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_std.is_open())
	{
		outfile__array_Core_1_Iampa_std.write(reinterpret_cast<char*>(_array_Core_1_Iampa_std), 256*sizeof(_array_Core_1_Iampa_std[0]));
		outfile__array_Core_1_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_std_tau;
	outfile__array_Core_1_Iampa_std_tau.open("results/_array_Core_1_Iampa_std_tau_1223459692496456572", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_std_tau.is_open())
	{
		outfile__array_Core_1_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_1_Iampa_std_tau), 256*sizeof(_array_Core_1_Iampa_std_tau[0]));
		outfile__array_Core_1_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_tau;
	outfile__array_Core_1_Iampa_tau.open("results/_array_Core_1_Iampa_tau_-6483468592632640257", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_tau.is_open())
	{
		outfile__array_Core_1_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_1_Iampa_tau), 256*sizeof(_array_Core_1_Iampa_tau[0]));
		outfile__array_Core_1_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_1_Iampa_w0;
	outfile__array_Core_1_Iampa_w0.open("results/_array_Core_1_Iampa_w0_6680517081735590435", ios::binary | ios::out);
	if(outfile__array_Core_1_Iampa_w0.is_open())
	{
		outfile__array_Core_1_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_1_Iampa_w0), 256*sizeof(_array_Core_1_Iampa_w0[0]));
		outfile__array_Core_1_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_1_Idischarge_w;
	outfile__array_Core_1_Idischarge_w.open("results/_array_Core_1_Idischarge_w_-508661708377387489", ios::binary | ios::out);
	if(outfile__array_Core_1_Idischarge_w.is_open())
	{
		outfile__array_Core_1_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_1_Idischarge_w), 256*sizeof(_array_Core_1_Idischarge_w[0]));
		outfile__array_Core_1_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a;
	outfile__array_Core_1_Igaba_a.open("results/_array_Core_1_Igaba_a_-994754506218906930", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a.is_open())
	{
		outfile__array_Core_1_Igaba_a.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a), 256*sizeof(_array_Core_1_Igaba_a[0]));
		outfile__array_Core_1_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a_tau;
	outfile__array_Core_1_Igaba_a_tau.open("results/_array_Core_1_Igaba_a_tau_-8672422662362915632", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a_tau.is_open())
	{
		outfile__array_Core_1_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a_tau), 256*sizeof(_array_Core_1_Igaba_a_tau[0]));
		outfile__array_Core_1_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_a_w0;
	outfile__array_Core_1_Igaba_a_w0.open("results/_array_Core_1_Igaba_a_w0_-6004347731745220262", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_a_w0.is_open())
	{
		outfile__array_Core_1_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_1_Igaba_a_w0), 256*sizeof(_array_Core_1_Igaba_a_w0[0]));
		outfile__array_Core_1_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b;
	outfile__array_Core_1_Igaba_b.open("results/_array_Core_1_Igaba_b_-2891788728076792473", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b.is_open())
	{
		outfile__array_Core_1_Igaba_b.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b), 256*sizeof(_array_Core_1_Igaba_b[0]));
		outfile__array_Core_1_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b_tau;
	outfile__array_Core_1_Igaba_b_tau.open("results/_array_Core_1_Igaba_b_tau_3748629239138832665", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b_tau.is_open())
	{
		outfile__array_Core_1_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b_tau), 256*sizeof(_array_Core_1_Igaba_b_tau[0]));
		outfile__array_Core_1_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_1_Igaba_b_w0;
	outfile__array_Core_1_Igaba_b_w0.open("results/_array_Core_1_Igaba_b_w0_8186123112682826464", ios::binary | ios::out);
	if(outfile__array_Core_1_Igaba_b_w0.is_open())
	{
		outfile__array_Core_1_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_1_Igaba_b_w0), 256*sizeof(_array_Core_1_Igaba_b_w0[0]));
		outfile__array_Core_1_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_1_Inmda;
	outfile__array_Core_1_Inmda.open("results/_array_Core_1_Inmda_946160983325089440", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda.is_open())
	{
		outfile__array_Core_1_Inmda.write(reinterpret_cast<char*>(_array_Core_1_Inmda), 256*sizeof(_array_Core_1_Inmda[0]));
		outfile__array_Core_1_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_tau;
	outfile__array_Core_1_Inmda_tau.open("results/_array_Core_1_Inmda_tau_7493911399098298887", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_tau.is_open())
	{
		outfile__array_Core_1_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_1_Inmda_tau), 256*sizeof(_array_Core_1_Inmda_tau[0]));
		outfile__array_Core_1_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_thr;
	outfile__array_Core_1_Inmda_thr.open("results/_array_Core_1_Inmda_thr_-8856497071017232226", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_thr.is_open())
	{
		outfile__array_Core_1_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_1_Inmda_thr), 256*sizeof(_array_Core_1_Inmda_thr[0]));
		outfile__array_Core_1_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_1_Inmda_w0;
	outfile__array_Core_1_Inmda_w0.open("results/_array_Core_1_Inmda_w0_-8289696634442009647", ios::binary | ios::out);
	if(outfile__array_Core_1_Inmda_w0.is_open())
	{
		outfile__array_Core_1_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_1_Inmda_w0), 256*sizeof(_array_Core_1_Inmda_w0[0]));
		outfile__array_Core_1_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp;
	outfile__array_Core_1_Isoma_ahp.open("results/_array_Core_1_Isoma_ahp_-3388991869631960728", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp.is_open())
	{
		outfile__array_Core_1_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp), 256*sizeof(_array_Core_1_Isoma_ahp[0]));
		outfile__array_Core_1_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_g;
	outfile__array_Core_1_Isoma_ahp_g.open("results/_array_Core_1_Isoma_ahp_g_8944449024575191130", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_g), 1*sizeof(_array_Core_1_Isoma_ahp_g[0]));
		outfile__array_Core_1_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_tau;
	outfile__array_Core_1_Isoma_ahp_tau.open("results/_array_Core_1_Isoma_ahp_tau_-6352978874315720840", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_tau), 1*sizeof(_array_Core_1_Isoma_ahp_tau[0]));
		outfile__array_Core_1_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_ahp_w;
	outfile__array_Core_1_Isoma_ahp_w.open("results/_array_Core_1_Isoma_ahp_w_-8162776811266869223", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_1_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_1_Isoma_ahp_w), 256*sizeof(_array_Core_1_Isoma_ahp_w[0]));
		outfile__array_Core_1_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_const;
	outfile__array_Core_1_Isoma_const.open("results/_array_Core_1_Isoma_const_-8855561138420996118", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_const.is_open())
	{
		outfile__array_Core_1_Isoma_const.write(reinterpret_cast<char*>(_array_Core_1_Isoma_const), 256*sizeof(_array_Core_1_Isoma_const[0]));
		outfile__array_Core_1_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_dpi_tau;
	outfile__array_Core_1_Isoma_dpi_tau.open("results/_array_Core_1_Isoma_dpi_tau_2992412622091257705", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_1_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_1_Isoma_dpi_tau), 1*sizeof(_array_Core_1_Isoma_dpi_tau[0]));
		outfile__array_Core_1_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_mem;
	outfile__array_Core_1_Isoma_mem.open("results/_array_Core_1_Isoma_mem_9024689173210696335", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_mem.is_open())
	{
		outfile__array_Core_1_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_1_Isoma_mem), 256*sizeof(_array_Core_1_Isoma_mem[0]));
		outfile__array_Core_1_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_gain;
	outfile__array_Core_1_Isoma_pfb_gain.open("results/_array_Core_1_Isoma_pfb_gain_-6535216209997450224", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_gain), 1*sizeof(_array_Core_1_Isoma_pfb_gain[0]));
		outfile__array_Core_1_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_norm;
	outfile__array_Core_1_Isoma_pfb_norm.open("results/_array_Core_1_Isoma_pfb_norm_-5130873833021995030", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_norm), 1*sizeof(_array_Core_1_Isoma_pfb_norm[0]));
		outfile__array_Core_1_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_pfb_th;
	outfile__array_Core_1_Isoma_pfb_th.open("results/_array_Core_1_Isoma_pfb_th_-3747911663332082328", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_1_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_1_Isoma_pfb_th), 1*sizeof(_array_Core_1_Isoma_pfb_th[0]));
		outfile__array_Core_1_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_reset;
	outfile__array_Core_1_Isoma_reset.open("results/_array_Core_1_Isoma_reset_-2678049769309509278", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_reset.is_open())
	{
		outfile__array_Core_1_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_1_Isoma_reset), 1*sizeof(_array_Core_1_Isoma_reset[0]));
		outfile__array_Core_1_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_1_Isoma_th;
	outfile__array_Core_1_Isoma_th.open("results/_array_Core_1_Isoma_th_2764567595707967919", ios::binary | ios::out);
	if(outfile__array_Core_1_Isoma_th.is_open())
	{
		outfile__array_Core_1_Isoma_th.write(reinterpret_cast<char*>(_array_Core_1_Isoma_th), 1*sizeof(_array_Core_1_Isoma_th[0]));
		outfile__array_Core_1_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_1_kn;
	outfile__array_Core_1_kn.open("results/_array_Core_1_kn_127570102143368409", ios::binary | ios::out);
	if(outfile__array_Core_1_kn.is_open())
	{
		outfile__array_Core_1_kn.write(reinterpret_cast<char*>(_array_Core_1_kn), 1*sizeof(_array_Core_1_kn[0]));
		outfile__array_Core_1_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kn." << endl;
	}
	ofstream outfile__array_Core_1_kp;
	outfile__array_Core_1_kp.open("results/_array_Core_1_kp_-5133038925008572891", ios::binary | ios::out);
	if(outfile__array_Core_1_kp.is_open())
	{
		outfile__array_Core_1_kp.write(reinterpret_cast<char*>(_array_Core_1_kp), 1*sizeof(_array_Core_1_kp[0]));
		outfile__array_Core_1_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kp." << endl;
	}
	ofstream outfile__array_Core_1_lastspike;
	outfile__array_Core_1_lastspike.open("results/_array_Core_1_lastspike_-2090393635334770026", ios::binary | ios::out);
	if(outfile__array_Core_1_lastspike.is_open())
	{
		outfile__array_Core_1_lastspike.write(reinterpret_cast<char*>(_array_Core_1_lastspike), 256*sizeof(_array_Core_1_lastspike[0]));
		outfile__array_Core_1_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_lastspike." << endl;
	}
	ofstream outfile__array_Core_1_not_refractory;
	outfile__array_Core_1_not_refractory.open("results/_array_Core_1_not_refractory_7864944652809801060", ios::binary | ios::out);
	if(outfile__array_Core_1_not_refractory.is_open())
	{
		outfile__array_Core_1_not_refractory.write(reinterpret_cast<char*>(_array_Core_1_not_refractory), 256*sizeof(_array_Core_1_not_refractory[0]));
		outfile__array_Core_1_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_not_refractory." << endl;
	}
	ofstream outfile__array_Core_1_soma_refP;
	outfile__array_Core_1_soma_refP.open("results/_array_Core_1_soma_refP_-8154523381025385631", ios::binary | ios::out);
	if(outfile__array_Core_1_soma_refP.is_open())
	{
		outfile__array_Core_1_soma_refP.write(reinterpret_cast<char*>(_array_Core_1_soma_refP), 1*sizeof(_array_Core_1_soma_refP[0]));
		outfile__array_Core_1_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_soma_refP." << endl;
	}
	ofstream outfile__array_Core_1_std_pulse;
	outfile__array_Core_1_std_pulse.open("results/_array_Core_1_std_pulse_645440634073967362", ios::binary | ios::out);
	if(outfile__array_Core_1_std_pulse.is_open())
	{
		outfile__array_Core_1_std_pulse.write(reinterpret_cast<char*>(_array_Core_1_std_pulse), 256*sizeof(_array_Core_1_std_pulse[0]));
		outfile__array_Core_1_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_std_pulse." << endl;
	}
	ofstream outfile__array_Core_1_subgroup__sub_idx;
	outfile__array_Core_1_subgroup__sub_idx.open("results/_array_Core_1_subgroup__sub_idx_7849381794609565140", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup__sub_idx), 1*sizeof(_array_Core_1_subgroup__sub_idx[0]));
		outfile__array_Core_1_subgroup__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_tau_pulse;
	outfile__array_Core_1_tau_pulse.open("results/_array_Core_1_tau_pulse_-786551314659876620", ios::binary | ios::out);
	if(outfile__array_Core_1_tau_pulse.is_open())
	{
		outfile__array_Core_1_tau_pulse.write(reinterpret_cast<char*>(_array_Core_1_tau_pulse), 256*sizeof(_array_Core_1_tau_pulse[0]));
		outfile__array_Core_1_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_1_Ut;
	outfile__array_Core_1_Ut.open("results/_array_Core_1_Ut_-9046683991118944280", ios::binary | ios::out);
	if(outfile__array_Core_1_Ut.is_open())
	{
		outfile__array_Core_1_Ut.write(reinterpret_cast<char*>(_array_Core_1_Ut), 1*sizeof(_array_Core_1_Ut[0]));
		outfile__array_Core_1_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ut." << endl;
	}
	ofstream outfile__array_Core_1_Va;
	outfile__array_Core_1_Va.open("results/_array_Core_1_Va_6739133183205449573", ios::binary | ios::out);
	if(outfile__array_Core_1_Va.is_open())
	{
		outfile__array_Core_1_Va.write(reinterpret_cast<char*>(_array_Core_1_Va), 256*sizeof(_array_Core_1_Va[0]));
		outfile__array_Core_1_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Va." << endl;
	}
	ofstream outfile__array_Core_1_Vw;
	outfile__array_Core_1_Vw.open("results/_array_Core_1_Vw_2701972776728404024", ios::binary | ios::out);
	if(outfile__array_Core_1_Vw.is_open())
	{
		outfile__array_Core_1_Vw.write(reinterpret_cast<char*>(_array_Core_1_Vw), 256*sizeof(_array_Core_1_Vw[0]));
		outfile__array_Core_1_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Vw." << endl;
	}
	ofstream outfile__array_Core_2__spikespace;
	outfile__array_Core_2__spikespace.open("results/_array_Core_2__spikespace_-9110170277447302007", ios::binary | ios::out);
	if(outfile__array_Core_2__spikespace.is_open())
	{
		outfile__array_Core_2__spikespace.write(reinterpret_cast<char*>(_array_Core_2__spikespace), 257*sizeof(_array_Core_2__spikespace[0]));
		outfile__array_Core_2__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2__spikespace." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ahp;
	outfile__array_Core_2_alpha_ahp.open("results/_array_Core_2_alpha_ahp_-6545564846432973863", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ahp.is_open())
	{
		outfile__array_Core_2_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_2_alpha_ahp), 256*sizeof(_array_Core_2_alpha_ahp[0]));
		outfile__array_Core_2_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ampa;
	outfile__array_Core_2_alpha_ampa.open("results/_array_Core_2_alpha_ampa_-5090417003011371059", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ampa.is_open())
	{
		outfile__array_Core_2_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_2_alpha_ampa), 256*sizeof(_array_Core_2_alpha_ampa[0]));
		outfile__array_Core_2_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_2_alpha_ampa_std;
	outfile__array_Core_2_alpha_ampa_std.open("results/_array_Core_2_alpha_ampa_std_-2088712015577899081", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_ampa_std.is_open())
	{
		outfile__array_Core_2_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_2_alpha_ampa_std), 256*sizeof(_array_Core_2_alpha_ampa_std[0]));
		outfile__array_Core_2_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_2_alpha_gaba_a;
	outfile__array_Core_2_alpha_gaba_a.open("results/_array_Core_2_alpha_gaba_a_4837766455207471280", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_gaba_a.is_open())
	{
		outfile__array_Core_2_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_alpha_gaba_a), 256*sizeof(_array_Core_2_alpha_gaba_a[0]));
		outfile__array_Core_2_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_alpha_gaba_b;
	outfile__array_Core_2_alpha_gaba_b.open("results/_array_Core_2_alpha_gaba_b_1440824303427549709", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_gaba_b.is_open())
	{
		outfile__array_Core_2_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_alpha_gaba_b), 256*sizeof(_array_Core_2_alpha_gaba_b[0]));
		outfile__array_Core_2_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_alpha_nmda;
	outfile__array_Core_2_alpha_nmda.open("results/_array_Core_2_alpha_nmda_7172255212761645898", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_nmda.is_open())
	{
		outfile__array_Core_2_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_2_alpha_nmda), 256*sizeof(_array_Core_2_alpha_nmda[0]));
		outfile__array_Core_2_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_2_alpha_soma;
	outfile__array_Core_2_alpha_soma.open("results/_array_Core_2_alpha_soma_-8218108348596395854", ios::binary | ios::out);
	if(outfile__array_Core_2_alpha_soma.is_open())
	{
		outfile__array_Core_2_alpha_soma.write(reinterpret_cast<char*>(_array_Core_2_alpha_soma), 256*sizeof(_array_Core_2_alpha_soma[0]));
		outfile__array_Core_2_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_2_Campa;
	outfile__array_Core_2_Campa.open("results/_array_Core_2_Campa_-9121256333475471456", ios::binary | ios::out);
	if(outfile__array_Core_2_Campa.is_open())
	{
		outfile__array_Core_2_Campa.write(reinterpret_cast<char*>(_array_Core_2_Campa), 256*sizeof(_array_Core_2_Campa[0]));
		outfile__array_Core_2_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Campa." << endl;
	}
	ofstream outfile__array_Core_2_Campa_std;
	outfile__array_Core_2_Campa_std.open("results/_array_Core_2_Campa_std_-7596804186184401797", ios::binary | ios::out);
	if(outfile__array_Core_2_Campa_std.is_open())
	{
		outfile__array_Core_2_Campa_std.write(reinterpret_cast<char*>(_array_Core_2_Campa_std), 256*sizeof(_array_Core_2_Campa_std[0]));
		outfile__array_Core_2_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Campa_std." << endl;
	}
	ofstream outfile__array_Core_2_Cgaba_a;
	outfile__array_Core_2_Cgaba_a.open("results/_array_Core_2_Cgaba_a_2005469071360384779", ios::binary | ios::out);
	if(outfile__array_Core_2_Cgaba_a.is_open())
	{
		outfile__array_Core_2_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_2_Cgaba_a), 256*sizeof(_array_Core_2_Cgaba_a[0]));
		outfile__array_Core_2_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_2_Cgaba_b;
	outfile__array_Core_2_Cgaba_b.open("results/_array_Core_2_Cgaba_b_269894969950520783", ios::binary | ios::out);
	if(outfile__array_Core_2_Cgaba_b.is_open())
	{
		outfile__array_Core_2_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_2_Cgaba_b), 256*sizeof(_array_Core_2_Cgaba_b[0]));
		outfile__array_Core_2_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_2_Cnmda;
	outfile__array_Core_2_Cnmda.open("results/_array_Core_2_Cnmda_-7799646420031356828", ios::binary | ios::out);
	if(outfile__array_Core_2_Cnmda.is_open())
	{
		outfile__array_Core_2_Cnmda.write(reinterpret_cast<char*>(_array_Core_2_Cnmda), 256*sizeof(_array_Core_2_Cnmda[0]));
		outfile__array_Core_2_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cnmda." << endl;
	}
	ofstream outfile__array_Core_2_Csoma_ahp;
	outfile__array_Core_2_Csoma_ahp.open("results/_array_Core_2_Csoma_ahp_-215312673428713447", ios::binary | ios::out);
	if(outfile__array_Core_2_Csoma_ahp.is_open())
	{
		outfile__array_Core_2_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_2_Csoma_ahp), 1*sizeof(_array_Core_2_Csoma_ahp[0]));
		outfile__array_Core_2_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_2_Csoma_mem;
	outfile__array_Core_2_Csoma_mem.open("results/_array_Core_2_Csoma_mem_9060443440256664325", ios::binary | ios::out);
	if(outfile__array_Core_2_Csoma_mem.is_open())
	{
		outfile__array_Core_2_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_2_Csoma_mem), 1*sizeof(_array_Core_2_Csoma_mem[0]));
		outfile__array_Core_2_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_2_i;
	outfile__array_Core_2_i.open("results/_array_Core_2_i_-1193609003147241280", ios::binary | ios::out);
	if(outfile__array_Core_2_i.is_open())
	{
		outfile__array_Core_2_i.write(reinterpret_cast<char*>(_array_Core_2_i), 256*sizeof(_array_Core_2_i[0]));
		outfile__array_Core_2_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_i." << endl;
	}
	ofstream outfile__array_Core_2_I0;
	outfile__array_Core_2_I0.open("results/_array_Core_2_I0_-2852847095651246048", ios::binary | ios::out);
	if(outfile__array_Core_2_I0.is_open())
	{
		outfile__array_Core_2_I0.write(reinterpret_cast<char*>(_array_Core_2_I0), 1*sizeof(_array_Core_2_I0[0]));
		outfile__array_Core_2_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I0." << endl;
	}
	ofstream outfile__array_Core_2_Iampa;
	outfile__array_Core_2_Iampa.open("results/_array_Core_2_Iampa_7953791123487777029", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa.is_open())
	{
		outfile__array_Core_2_Iampa.write(reinterpret_cast<char*>(_array_Core_2_Iampa), 256*sizeof(_array_Core_2_Iampa[0]));
		outfile__array_Core_2_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_std;
	outfile__array_Core_2_Iampa_std.open("results/_array_Core_2_Iampa_std_6896951600547498202", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_std.is_open())
	{
		outfile__array_Core_2_Iampa_std.write(reinterpret_cast<char*>(_array_Core_2_Iampa_std), 256*sizeof(_array_Core_2_Iampa_std[0]));
		outfile__array_Core_2_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_std_tau;
	outfile__array_Core_2_Iampa_std_tau.open("results/_array_Core_2_Iampa_std_tau_5999226363285439468", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_std_tau.is_open())
	{
		outfile__array_Core_2_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_2_Iampa_std_tau), 256*sizeof(_array_Core_2_Iampa_std_tau[0]));
		outfile__array_Core_2_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_tau;
	outfile__array_Core_2_Iampa_tau.open("results/_array_Core_2_Iampa_tau_-5606897843438050252", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_tau.is_open())
	{
		outfile__array_Core_2_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_2_Iampa_tau), 256*sizeof(_array_Core_2_Iampa_tau[0]));
		outfile__array_Core_2_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_2_Iampa_w0;
	outfile__array_Core_2_Iampa_w0.open("results/_array_Core_2_Iampa_w0_-6526195209939173353", ios::binary | ios::out);
	if(outfile__array_Core_2_Iampa_w0.is_open())
	{
		outfile__array_Core_2_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_2_Iampa_w0), 256*sizeof(_array_Core_2_Iampa_w0[0]));
		outfile__array_Core_2_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_2_Idischarge_w;
	outfile__array_Core_2_Idischarge_w.open("results/_array_Core_2_Idischarge_w_2555406316494982785", ios::binary | ios::out);
	if(outfile__array_Core_2_Idischarge_w.is_open())
	{
		outfile__array_Core_2_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_2_Idischarge_w), 256*sizeof(_array_Core_2_Idischarge_w[0]));
		outfile__array_Core_2_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a;
	outfile__array_Core_2_Igaba_a.open("results/_array_Core_2_Igaba_a_-7644984638649474732", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a.is_open())
	{
		outfile__array_Core_2_Igaba_a.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a), 256*sizeof(_array_Core_2_Igaba_a[0]));
		outfile__array_Core_2_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a_tau;
	outfile__array_Core_2_Igaba_a_tau.open("results/_array_Core_2_Igaba_a_tau_3351230145332171726", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a_tau.is_open())
	{
		outfile__array_Core_2_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a_tau), 256*sizeof(_array_Core_2_Igaba_a_tau[0]));
		outfile__array_Core_2_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_a_w0;
	outfile__array_Core_2_Igaba_a_w0.open("results/_array_Core_2_Igaba_a_w0_1472702928258078902", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_a_w0.is_open())
	{
		outfile__array_Core_2_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_2_Igaba_a_w0), 256*sizeof(_array_Core_2_Igaba_a_w0[0]));
		outfile__array_Core_2_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b;
	outfile__array_Core_2_Igaba_b.open("results/_array_Core_2_Igaba_b_-4785977217932111413", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b.is_open())
	{
		outfile__array_Core_2_Igaba_b.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b), 256*sizeof(_array_Core_2_Igaba_b[0]));
		outfile__array_Core_2_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b_tau;
	outfile__array_Core_2_Igaba_b_tau.open("results/_array_Core_2_Igaba_b_tau_-9194755615856983462", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b_tau.is_open())
	{
		outfile__array_Core_2_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b_tau), 256*sizeof(_array_Core_2_Igaba_b_tau[0]));
		outfile__array_Core_2_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_2_Igaba_b_w0;
	outfile__array_Core_2_Igaba_b_w0.open("results/_array_Core_2_Igaba_b_w0_4731952858653778542", ios::binary | ios::out);
	if(outfile__array_Core_2_Igaba_b_w0.is_open())
	{
		outfile__array_Core_2_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_2_Igaba_b_w0), 256*sizeof(_array_Core_2_Igaba_b_w0[0]));
		outfile__array_Core_2_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_2_Inmda;
	outfile__array_Core_2_Inmda.open("results/_array_Core_2_Inmda_-102257718579596092", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda.is_open())
	{
		outfile__array_Core_2_Inmda.write(reinterpret_cast<char*>(_array_Core_2_Inmda), 256*sizeof(_array_Core_2_Inmda[0]));
		outfile__array_Core_2_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_tau;
	outfile__array_Core_2_Inmda_tau.open("results/_array_Core_2_Inmda_tau_4481198927193467533", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_tau.is_open())
	{
		outfile__array_Core_2_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_2_Inmda_tau), 256*sizeof(_array_Core_2_Inmda_tau[0]));
		outfile__array_Core_2_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_thr;
	outfile__array_Core_2_Inmda_thr.open("results/_array_Core_2_Inmda_thr_5518410766452293460", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_thr.is_open())
	{
		outfile__array_Core_2_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_2_Inmda_thr), 256*sizeof(_array_Core_2_Inmda_thr[0]));
		outfile__array_Core_2_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_2_Inmda_w0;
	outfile__array_Core_2_Inmda_w0.open("results/_array_Core_2_Inmda_w0_1841972459158766441", ios::binary | ios::out);
	if(outfile__array_Core_2_Inmda_w0.is_open())
	{
		outfile__array_Core_2_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_2_Inmda_w0), 256*sizeof(_array_Core_2_Inmda_w0[0]));
		outfile__array_Core_2_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp;
	outfile__array_Core_2_Isoma_ahp.open("results/_array_Core_2_Isoma_ahp_1517105889303731591", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp.is_open())
	{
		outfile__array_Core_2_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp), 256*sizeof(_array_Core_2_Isoma_ahp[0]));
		outfile__array_Core_2_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_g;
	outfile__array_Core_2_Isoma_ahp_g.open("results/_array_Core_2_Isoma_ahp_g_3501833307539616692", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_g), 1*sizeof(_array_Core_2_Isoma_ahp_g[0]));
		outfile__array_Core_2_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_tau;
	outfile__array_Core_2_Isoma_ahp_tau.open("results/_array_Core_2_Isoma_ahp_tau_-3332261004511737358", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_tau), 1*sizeof(_array_Core_2_Isoma_ahp_tau[0]));
		outfile__array_Core_2_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_ahp_w;
	outfile__array_Core_2_Isoma_ahp_w.open("results/_array_Core_2_Isoma_ahp_w_-471647926599981026", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_2_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_2_Isoma_ahp_w), 256*sizeof(_array_Core_2_Isoma_ahp_w[0]));
		outfile__array_Core_2_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_const;
	outfile__array_Core_2_Isoma_const.open("results/_array_Core_2_Isoma_const_2060470723578476421", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_const.is_open())
	{
		outfile__array_Core_2_Isoma_const.write(reinterpret_cast<char*>(_array_Core_2_Isoma_const), 256*sizeof(_array_Core_2_Isoma_const[0]));
		outfile__array_Core_2_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_dpi_tau;
	outfile__array_Core_2_Isoma_dpi_tau.open("results/_array_Core_2_Isoma_dpi_tau_7046209042915767021", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_2_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_2_Isoma_dpi_tau), 1*sizeof(_array_Core_2_Isoma_dpi_tau[0]));
		outfile__array_Core_2_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_mem;
	outfile__array_Core_2_Isoma_mem.open("results/_array_Core_2_Isoma_mem_-1499704758487920856", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_mem.is_open())
	{
		outfile__array_Core_2_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_2_Isoma_mem), 256*sizeof(_array_Core_2_Isoma_mem[0]));
		outfile__array_Core_2_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_gain;
	outfile__array_Core_2_Isoma_pfb_gain.open("results/_array_Core_2_Isoma_pfb_gain_4339379413746750960", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_gain), 1*sizeof(_array_Core_2_Isoma_pfb_gain[0]));
		outfile__array_Core_2_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_norm;
	outfile__array_Core_2_Isoma_pfb_norm.open("results/_array_Core_2_Isoma_pfb_norm_-499438715983518088", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_norm), 1*sizeof(_array_Core_2_Isoma_pfb_norm[0]));
		outfile__array_Core_2_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_pfb_th;
	outfile__array_Core_2_Isoma_pfb_th.open("results/_array_Core_2_Isoma_pfb_th_2080109645186655822", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_2_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_2_Isoma_pfb_th), 1*sizeof(_array_Core_2_Isoma_pfb_th[0]));
		outfile__array_Core_2_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_reset;
	outfile__array_Core_2_Isoma_reset.open("results/_array_Core_2_Isoma_reset_-1382386821532126669", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_reset.is_open())
	{
		outfile__array_Core_2_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_2_Isoma_reset), 1*sizeof(_array_Core_2_Isoma_reset[0]));
		outfile__array_Core_2_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_2_Isoma_th;
	outfile__array_Core_2_Isoma_th.open("results/_array_Core_2_Isoma_th_-6572655597352693745", ios::binary | ios::out);
	if(outfile__array_Core_2_Isoma_th.is_open())
	{
		outfile__array_Core_2_Isoma_th.write(reinterpret_cast<char*>(_array_Core_2_Isoma_th), 1*sizeof(_array_Core_2_Isoma_th[0]));
		outfile__array_Core_2_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_2_kn;
	outfile__array_Core_2_kn.open("results/_array_Core_2_kn_-2669036085858186604", ios::binary | ios::out);
	if(outfile__array_Core_2_kn.is_open())
	{
		outfile__array_Core_2_kn.write(reinterpret_cast<char*>(_array_Core_2_kn), 1*sizeof(_array_Core_2_kn[0]));
		outfile__array_Core_2_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kn." << endl;
	}
	ofstream outfile__array_Core_2_kp;
	outfile__array_Core_2_kp.open("results/_array_Core_2_kp_4619184727271116013", ios::binary | ios::out);
	if(outfile__array_Core_2_kp.is_open())
	{
		outfile__array_Core_2_kp.write(reinterpret_cast<char*>(_array_Core_2_kp), 1*sizeof(_array_Core_2_kp[0]));
		outfile__array_Core_2_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kp." << endl;
	}
	ofstream outfile__array_Core_2_lastspike;
	outfile__array_Core_2_lastspike.open("results/_array_Core_2_lastspike_-6297112847199396636", ios::binary | ios::out);
	if(outfile__array_Core_2_lastspike.is_open())
	{
		outfile__array_Core_2_lastspike.write(reinterpret_cast<char*>(_array_Core_2_lastspike), 256*sizeof(_array_Core_2_lastspike[0]));
		outfile__array_Core_2_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_lastspike." << endl;
	}
	ofstream outfile__array_Core_2_not_refractory;
	outfile__array_Core_2_not_refractory.open("results/_array_Core_2_not_refractory_-7422853982156305758", ios::binary | ios::out);
	if(outfile__array_Core_2_not_refractory.is_open())
	{
		outfile__array_Core_2_not_refractory.write(reinterpret_cast<char*>(_array_Core_2_not_refractory), 256*sizeof(_array_Core_2_not_refractory[0]));
		outfile__array_Core_2_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_not_refractory." << endl;
	}
	ofstream outfile__array_Core_2_soma_refP;
	outfile__array_Core_2_soma_refP.open("results/_array_Core_2_soma_refP_3706974835573409801", ios::binary | ios::out);
	if(outfile__array_Core_2_soma_refP.is_open())
	{
		outfile__array_Core_2_soma_refP.write(reinterpret_cast<char*>(_array_Core_2_soma_refP), 1*sizeof(_array_Core_2_soma_refP[0]));
		outfile__array_Core_2_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_soma_refP." << endl;
	}
	ofstream outfile__array_Core_2_std_pulse;
	outfile__array_Core_2_std_pulse.open("results/_array_Core_2_std_pulse_1748337213956067665", ios::binary | ios::out);
	if(outfile__array_Core_2_std_pulse.is_open())
	{
		outfile__array_Core_2_std_pulse.write(reinterpret_cast<char*>(_array_Core_2_std_pulse), 256*sizeof(_array_Core_2_std_pulse[0]));
		outfile__array_Core_2_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_std_pulse." << endl;
	}
	ofstream outfile__array_Core_2_tau_pulse;
	outfile__array_Core_2_tau_pulse.open("results/_array_Core_2_tau_pulse_-1638607835868881186", ios::binary | ios::out);
	if(outfile__array_Core_2_tau_pulse.is_open())
	{
		outfile__array_Core_2_tau_pulse.write(reinterpret_cast<char*>(_array_Core_2_tau_pulse), 256*sizeof(_array_Core_2_tau_pulse[0]));
		outfile__array_Core_2_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_2_Ut;
	outfile__array_Core_2_Ut.open("results/_array_Core_2_Ut_4882397584188227795", ios::binary | ios::out);
	if(outfile__array_Core_2_Ut.is_open())
	{
		outfile__array_Core_2_Ut.write(reinterpret_cast<char*>(_array_Core_2_Ut), 1*sizeof(_array_Core_2_Ut[0]));
		outfile__array_Core_2_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ut." << endl;
	}
	ofstream outfile__array_Core_2_Va;
	outfile__array_Core_2_Va.open("results/_array_Core_2_Va_-8555388258988331874", ios::binary | ios::out);
	if(outfile__array_Core_2_Va.is_open())
	{
		outfile__array_Core_2_Va.write(reinterpret_cast<char*>(_array_Core_2_Va), 256*sizeof(_array_Core_2_Va[0]));
		outfile__array_Core_2_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Va." << endl;
	}
	ofstream outfile__array_Core_2_Vw;
	outfile__array_Core_2_Vw.open("results/_array_Core_2_Vw_-262693835234854298", ios::binary | ios::out);
	if(outfile__array_Core_2_Vw.is_open())
	{
		outfile__array_Core_2_Vw.write(reinterpret_cast<char*>(_array_Core_2_Vw), 256*sizeof(_array_Core_2_Vw[0]));
		outfile__array_Core_2_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Vw." << endl;
	}
	ofstream outfile__array_Core_3__spikespace;
	outfile__array_Core_3__spikespace.open("results/_array_Core_3__spikespace_3355500590528850356", ios::binary | ios::out);
	if(outfile__array_Core_3__spikespace.is_open())
	{
		outfile__array_Core_3__spikespace.write(reinterpret_cast<char*>(_array_Core_3__spikespace), 257*sizeof(_array_Core_3__spikespace[0]));
		outfile__array_Core_3__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3__spikespace." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ahp;
	outfile__array_Core_3_alpha_ahp.open("results/_array_Core_3_alpha_ahp_-3582286442669687841", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ahp.is_open())
	{
		outfile__array_Core_3_alpha_ahp.write(reinterpret_cast<char*>(_array_Core_3_alpha_ahp), 256*sizeof(_array_Core_3_alpha_ahp[0]));
		outfile__array_Core_3_alpha_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ahp." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ampa;
	outfile__array_Core_3_alpha_ampa.open("results/_array_Core_3_alpha_ampa_-9020275428870185851", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ampa.is_open())
	{
		outfile__array_Core_3_alpha_ampa.write(reinterpret_cast<char*>(_array_Core_3_alpha_ampa), 256*sizeof(_array_Core_3_alpha_ampa[0]));
		outfile__array_Core_3_alpha_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ampa." << endl;
	}
	ofstream outfile__array_Core_3_alpha_ampa_std;
	outfile__array_Core_3_alpha_ampa_std.open("results/_array_Core_3_alpha_ampa_std_-7203114556096116483", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_ampa_std.is_open())
	{
		outfile__array_Core_3_alpha_ampa_std.write(reinterpret_cast<char*>(_array_Core_3_alpha_ampa_std), 256*sizeof(_array_Core_3_alpha_ampa_std[0]));
		outfile__array_Core_3_alpha_ampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_ampa_std." << endl;
	}
	ofstream outfile__array_Core_3_alpha_gaba_a;
	outfile__array_Core_3_alpha_gaba_a.open("results/_array_Core_3_alpha_gaba_a_1017672766087495077", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_gaba_a.is_open())
	{
		outfile__array_Core_3_alpha_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_alpha_gaba_a), 256*sizeof(_array_Core_3_alpha_gaba_a[0]));
		outfile__array_Core_3_alpha_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_alpha_gaba_b;
	outfile__array_Core_3_alpha_gaba_b.open("results/_array_Core_3_alpha_gaba_b_8720795421847451606", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_gaba_b.is_open())
	{
		outfile__array_Core_3_alpha_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_alpha_gaba_b), 256*sizeof(_array_Core_3_alpha_gaba_b[0]));
		outfile__array_Core_3_alpha_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_alpha_nmda;
	outfile__array_Core_3_alpha_nmda.open("results/_array_Core_3_alpha_nmda_2277002530062314892", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_nmda.is_open())
	{
		outfile__array_Core_3_alpha_nmda.write(reinterpret_cast<char*>(_array_Core_3_alpha_nmda), 256*sizeof(_array_Core_3_alpha_nmda[0]));
		outfile__array_Core_3_alpha_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_nmda." << endl;
	}
	ofstream outfile__array_Core_3_alpha_soma;
	outfile__array_Core_3_alpha_soma.open("results/_array_Core_3_alpha_soma_-7983673243083719379", ios::binary | ios::out);
	if(outfile__array_Core_3_alpha_soma.is_open())
	{
		outfile__array_Core_3_alpha_soma.write(reinterpret_cast<char*>(_array_Core_3_alpha_soma), 256*sizeof(_array_Core_3_alpha_soma[0]));
		outfile__array_Core_3_alpha_soma.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_alpha_soma." << endl;
	}
	ofstream outfile__array_Core_3_Campa;
	outfile__array_Core_3_Campa.open("results/_array_Core_3_Campa_3093561123730754268", ios::binary | ios::out);
	if(outfile__array_Core_3_Campa.is_open())
	{
		outfile__array_Core_3_Campa.write(reinterpret_cast<char*>(_array_Core_3_Campa), 256*sizeof(_array_Core_3_Campa[0]));
		outfile__array_Core_3_Campa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Campa." << endl;
	}
	ofstream outfile__array_Core_3_Campa_std;
	outfile__array_Core_3_Campa_std.open("results/_array_Core_3_Campa_std_-60580976572470661", ios::binary | ios::out);
	if(outfile__array_Core_3_Campa_std.is_open())
	{
		outfile__array_Core_3_Campa_std.write(reinterpret_cast<char*>(_array_Core_3_Campa_std), 256*sizeof(_array_Core_3_Campa_std[0]));
		outfile__array_Core_3_Campa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Campa_std." << endl;
	}
	ofstream outfile__array_Core_3_Cgaba_a;
	outfile__array_Core_3_Cgaba_a.open("results/_array_Core_3_Cgaba_a_2001031597783841779", ios::binary | ios::out);
	if(outfile__array_Core_3_Cgaba_a.is_open())
	{
		outfile__array_Core_3_Cgaba_a.write(reinterpret_cast<char*>(_array_Core_3_Cgaba_a), 256*sizeof(_array_Core_3_Cgaba_a[0]));
		outfile__array_Core_3_Cgaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cgaba_a." << endl;
	}
	ofstream outfile__array_Core_3_Cgaba_b;
	outfile__array_Core_3_Cgaba_b.open("results/_array_Core_3_Cgaba_b_3005271605144066450", ios::binary | ios::out);
	if(outfile__array_Core_3_Cgaba_b.is_open())
	{
		outfile__array_Core_3_Cgaba_b.write(reinterpret_cast<char*>(_array_Core_3_Cgaba_b), 256*sizeof(_array_Core_3_Cgaba_b[0]));
		outfile__array_Core_3_Cgaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cgaba_b." << endl;
	}
	ofstream outfile__array_Core_3_Cnmda;
	outfile__array_Core_3_Cnmda.open("results/_array_Core_3_Cnmda_5135988978642087308", ios::binary | ios::out);
	if(outfile__array_Core_3_Cnmda.is_open())
	{
		outfile__array_Core_3_Cnmda.write(reinterpret_cast<char*>(_array_Core_3_Cnmda), 256*sizeof(_array_Core_3_Cnmda[0]));
		outfile__array_Core_3_Cnmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cnmda." << endl;
	}
	ofstream outfile__array_Core_3_Csoma_ahp;
	outfile__array_Core_3_Csoma_ahp.open("results/_array_Core_3_Csoma_ahp_6312833039208327285", ios::binary | ios::out);
	if(outfile__array_Core_3_Csoma_ahp.is_open())
	{
		outfile__array_Core_3_Csoma_ahp.write(reinterpret_cast<char*>(_array_Core_3_Csoma_ahp), 1*sizeof(_array_Core_3_Csoma_ahp[0]));
		outfile__array_Core_3_Csoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Csoma_ahp." << endl;
	}
	ofstream outfile__array_Core_3_Csoma_mem;
	outfile__array_Core_3_Csoma_mem.open("results/_array_Core_3_Csoma_mem_-8369544009591244028", ios::binary | ios::out);
	if(outfile__array_Core_3_Csoma_mem.is_open())
	{
		outfile__array_Core_3_Csoma_mem.write(reinterpret_cast<char*>(_array_Core_3_Csoma_mem), 1*sizeof(_array_Core_3_Csoma_mem[0]));
		outfile__array_Core_3_Csoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Csoma_mem." << endl;
	}
	ofstream outfile__array_Core_3_i;
	outfile__array_Core_3_i.open("results/_array_Core_3_i_-3268498941910952987", ios::binary | ios::out);
	if(outfile__array_Core_3_i.is_open())
	{
		outfile__array_Core_3_i.write(reinterpret_cast<char*>(_array_Core_3_i), 256*sizeof(_array_Core_3_i[0]));
		outfile__array_Core_3_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_i." << endl;
	}
	ofstream outfile__array_Core_3_I0;
	outfile__array_Core_3_I0.open("results/_array_Core_3_I0_8816024133791193199", ios::binary | ios::out);
	if(outfile__array_Core_3_I0.is_open())
	{
		outfile__array_Core_3_I0.write(reinterpret_cast<char*>(_array_Core_3_I0), 1*sizeof(_array_Core_3_I0[0]));
		outfile__array_Core_3_I0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I0." << endl;
	}
	ofstream outfile__array_Core_3_Iampa;
	outfile__array_Core_3_Iampa.open("results/_array_Core_3_Iampa_-4022045073049321297", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa.is_open())
	{
		outfile__array_Core_3_Iampa.write(reinterpret_cast<char*>(_array_Core_3_Iampa), 256*sizeof(_array_Core_3_Iampa[0]));
		outfile__array_Core_3_Iampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_std;
	outfile__array_Core_3_Iampa_std.open("results/_array_Core_3_Iampa_std_-65567393109231947", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_std.is_open())
	{
		outfile__array_Core_3_Iampa_std.write(reinterpret_cast<char*>(_array_Core_3_Iampa_std), 256*sizeof(_array_Core_3_Iampa_std[0]));
		outfile__array_Core_3_Iampa_std.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_std." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_std_tau;
	outfile__array_Core_3_Iampa_std_tau.open("results/_array_Core_3_Iampa_std_tau_7464319251528085299", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_std_tau.is_open())
	{
		outfile__array_Core_3_Iampa_std_tau.write(reinterpret_cast<char*>(_array_Core_3_Iampa_std_tau), 256*sizeof(_array_Core_3_Iampa_std_tau[0]));
		outfile__array_Core_3_Iampa_std_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_std_tau." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_tau;
	outfile__array_Core_3_Iampa_tau.open("results/_array_Core_3_Iampa_tau_-1642560976417119522", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_tau.is_open())
	{
		outfile__array_Core_3_Iampa_tau.write(reinterpret_cast<char*>(_array_Core_3_Iampa_tau), 256*sizeof(_array_Core_3_Iampa_tau[0]));
		outfile__array_Core_3_Iampa_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_tau." << endl;
	}
	ofstream outfile__array_Core_3_Iampa_w0;
	outfile__array_Core_3_Iampa_w0.open("results/_array_Core_3_Iampa_w0_-261178290818466040", ios::binary | ios::out);
	if(outfile__array_Core_3_Iampa_w0.is_open())
	{
		outfile__array_Core_3_Iampa_w0.write(reinterpret_cast<char*>(_array_Core_3_Iampa_w0), 256*sizeof(_array_Core_3_Iampa_w0[0]));
		outfile__array_Core_3_Iampa_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iampa_w0." << endl;
	}
	ofstream outfile__array_Core_3_Idischarge_w;
	outfile__array_Core_3_Idischarge_w.open("results/_array_Core_3_Idischarge_w_5584413143150678627", ios::binary | ios::out);
	if(outfile__array_Core_3_Idischarge_w.is_open())
	{
		outfile__array_Core_3_Idischarge_w.write(reinterpret_cast<char*>(_array_Core_3_Idischarge_w), 256*sizeof(_array_Core_3_Idischarge_w[0]));
		outfile__array_Core_3_Idischarge_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Idischarge_w." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a;
	outfile__array_Core_3_Igaba_a.open("results/_array_Core_3_Igaba_a_588032785351247893", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a.is_open())
	{
		outfile__array_Core_3_Igaba_a.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a), 256*sizeof(_array_Core_3_Igaba_a[0]));
		outfile__array_Core_3_Igaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a_tau;
	outfile__array_Core_3_Igaba_a_tau.open("results/_array_Core_3_Igaba_a_tau_-5654790170987215199", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a_tau.is_open())
	{
		outfile__array_Core_3_Igaba_a_tau.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a_tau), 256*sizeof(_array_Core_3_Igaba_a_tau[0]));
		outfile__array_Core_3_Igaba_a_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a_tau." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_a_w0;
	outfile__array_Core_3_Igaba_a_w0.open("results/_array_Core_3_Igaba_a_w0_3279611501974304680", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_a_w0.is_open())
	{
		outfile__array_Core_3_Igaba_a_w0.write(reinterpret_cast<char*>(_array_Core_3_Igaba_a_w0), 256*sizeof(_array_Core_3_Igaba_a_w0[0]));
		outfile__array_Core_3_Igaba_a_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_a_w0." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b;
	outfile__array_Core_3_Igaba_b.open("results/_array_Core_3_Igaba_b_-5795477824424724835", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b.is_open())
	{
		outfile__array_Core_3_Igaba_b.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b), 256*sizeof(_array_Core_3_Igaba_b[0]));
		outfile__array_Core_3_Igaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b_tau;
	outfile__array_Core_3_Igaba_b_tau.open("results/_array_Core_3_Igaba_b_tau_-6428532122642351477", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b_tau.is_open())
	{
		outfile__array_Core_3_Igaba_b_tau.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b_tau), 256*sizeof(_array_Core_3_Igaba_b_tau[0]));
		outfile__array_Core_3_Igaba_b_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b_tau." << endl;
	}
	ofstream outfile__array_Core_3_Igaba_b_w0;
	outfile__array_Core_3_Igaba_b_w0.open("results/_array_Core_3_Igaba_b_w0_4471992266102088500", ios::binary | ios::out);
	if(outfile__array_Core_3_Igaba_b_w0.is_open())
	{
		outfile__array_Core_3_Igaba_b_w0.write(reinterpret_cast<char*>(_array_Core_3_Igaba_b_w0), 256*sizeof(_array_Core_3_Igaba_b_w0[0]));
		outfile__array_Core_3_Igaba_b_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Igaba_b_w0." << endl;
	}
	ofstream outfile__array_Core_3_Inmda;
	outfile__array_Core_3_Inmda.open("results/_array_Core_3_Inmda_5623459764423332662", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda.is_open())
	{
		outfile__array_Core_3_Inmda.write(reinterpret_cast<char*>(_array_Core_3_Inmda), 256*sizeof(_array_Core_3_Inmda[0]));
		outfile__array_Core_3_Inmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_tau;
	outfile__array_Core_3_Inmda_tau.open("results/_array_Core_3_Inmda_tau_5860634878230422374", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_tau.is_open())
	{
		outfile__array_Core_3_Inmda_tau.write(reinterpret_cast<char*>(_array_Core_3_Inmda_tau), 256*sizeof(_array_Core_3_Inmda_tau[0]));
		outfile__array_Core_3_Inmda_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_tau." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_thr;
	outfile__array_Core_3_Inmda_thr.open("results/_array_Core_3_Inmda_thr_4192387829995355222", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_thr.is_open())
	{
		outfile__array_Core_3_Inmda_thr.write(reinterpret_cast<char*>(_array_Core_3_Inmda_thr), 256*sizeof(_array_Core_3_Inmda_thr[0]));
		outfile__array_Core_3_Inmda_thr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_thr." << endl;
	}
	ofstream outfile__array_Core_3_Inmda_w0;
	outfile__array_Core_3_Inmda_w0.open("results/_array_Core_3_Inmda_w0_-5648560752725800009", ios::binary | ios::out);
	if(outfile__array_Core_3_Inmda_w0.is_open())
	{
		outfile__array_Core_3_Inmda_w0.write(reinterpret_cast<char*>(_array_Core_3_Inmda_w0), 256*sizeof(_array_Core_3_Inmda_w0[0]));
		outfile__array_Core_3_Inmda_w0.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Inmda_w0." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp;
	outfile__array_Core_3_Isoma_ahp.open("results/_array_Core_3_Isoma_ahp_7055064559341562861", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp.is_open())
	{
		outfile__array_Core_3_Isoma_ahp.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp), 256*sizeof(_array_Core_3_Isoma_ahp[0]));
		outfile__array_Core_3_Isoma_ahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_g;
	outfile__array_Core_3_Isoma_ahp_g.open("results/_array_Core_3_Isoma_ahp_g_-7346046515116835778", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_g.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_g.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_g), 1*sizeof(_array_Core_3_Isoma_ahp_g[0]));
		outfile__array_Core_3_Isoma_ahp_g.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_g." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_tau;
	outfile__array_Core_3_Isoma_ahp_tau.open("results/_array_Core_3_Isoma_ahp_tau_892341848889450761", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_tau.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_tau.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_tau), 1*sizeof(_array_Core_3_Isoma_ahp_tau[0]));
		outfile__array_Core_3_Isoma_ahp_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_tau." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_ahp_w;
	outfile__array_Core_3_Isoma_ahp_w.open("results/_array_Core_3_Isoma_ahp_w_4268361080240999947", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_ahp_w.is_open())
	{
		outfile__array_Core_3_Isoma_ahp_w.write(reinterpret_cast<char*>(_array_Core_3_Isoma_ahp_w), 256*sizeof(_array_Core_3_Isoma_ahp_w[0]));
		outfile__array_Core_3_Isoma_ahp_w.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_ahp_w." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_const;
	outfile__array_Core_3_Isoma_const.open("results/_array_Core_3_Isoma_const_6696547379766149800", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_const.is_open())
	{
		outfile__array_Core_3_Isoma_const.write(reinterpret_cast<char*>(_array_Core_3_Isoma_const), 256*sizeof(_array_Core_3_Isoma_const[0]));
		outfile__array_Core_3_Isoma_const.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_const." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_dpi_tau;
	outfile__array_Core_3_Isoma_dpi_tau.open("results/_array_Core_3_Isoma_dpi_tau_8087246107678570800", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_dpi_tau.is_open())
	{
		outfile__array_Core_3_Isoma_dpi_tau.write(reinterpret_cast<char*>(_array_Core_3_Isoma_dpi_tau), 1*sizeof(_array_Core_3_Isoma_dpi_tau[0]));
		outfile__array_Core_3_Isoma_dpi_tau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_dpi_tau." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_mem;
	outfile__array_Core_3_Isoma_mem.open("results/_array_Core_3_Isoma_mem_8113434652285146830", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_mem.is_open())
	{
		outfile__array_Core_3_Isoma_mem.write(reinterpret_cast<char*>(_array_Core_3_Isoma_mem), 256*sizeof(_array_Core_3_Isoma_mem[0]));
		outfile__array_Core_3_Isoma_mem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_mem." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_gain;
	outfile__array_Core_3_Isoma_pfb_gain.open("results/_array_Core_3_Isoma_pfb_gain_5022970340760184690", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_gain.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_gain.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_gain), 1*sizeof(_array_Core_3_Isoma_pfb_gain[0]));
		outfile__array_Core_3_Isoma_pfb_gain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_gain." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_norm;
	outfile__array_Core_3_Isoma_pfb_norm.open("results/_array_Core_3_Isoma_pfb_norm_-93482178671690399", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_norm.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_norm.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_norm), 1*sizeof(_array_Core_3_Isoma_pfb_norm[0]));
		outfile__array_Core_3_Isoma_pfb_norm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_norm." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_pfb_th;
	outfile__array_Core_3_Isoma_pfb_th.open("results/_array_Core_3_Isoma_pfb_th_-6268685557535085921", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_pfb_th.is_open())
	{
		outfile__array_Core_3_Isoma_pfb_th.write(reinterpret_cast<char*>(_array_Core_3_Isoma_pfb_th), 1*sizeof(_array_Core_3_Isoma_pfb_th[0]));
		outfile__array_Core_3_Isoma_pfb_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_pfb_th." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_reset;
	outfile__array_Core_3_Isoma_reset.open("results/_array_Core_3_Isoma_reset_2065884891990943132", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_reset.is_open())
	{
		outfile__array_Core_3_Isoma_reset.write(reinterpret_cast<char*>(_array_Core_3_Isoma_reset), 1*sizeof(_array_Core_3_Isoma_reset[0]));
		outfile__array_Core_3_Isoma_reset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_reset." << endl;
	}
	ofstream outfile__array_Core_3_Isoma_th;
	outfile__array_Core_3_Isoma_th.open("results/_array_Core_3_Isoma_th_-5721303411343058006", ios::binary | ios::out);
	if(outfile__array_Core_3_Isoma_th.is_open())
	{
		outfile__array_Core_3_Isoma_th.write(reinterpret_cast<char*>(_array_Core_3_Isoma_th), 1*sizeof(_array_Core_3_Isoma_th[0]));
		outfile__array_Core_3_Isoma_th.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Isoma_th." << endl;
	}
	ofstream outfile__array_Core_3_kn;
	outfile__array_Core_3_kn.open("results/_array_Core_3_kn_6538181180129419085", ios::binary | ios::out);
	if(outfile__array_Core_3_kn.is_open())
	{
		outfile__array_Core_3_kn.write(reinterpret_cast<char*>(_array_Core_3_kn), 1*sizeof(_array_Core_3_kn[0]));
		outfile__array_Core_3_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kn." << endl;
	}
	ofstream outfile__array_Core_3_kp;
	outfile__array_Core_3_kp.open("results/_array_Core_3_kp_-3895081082089267543", ios::binary | ios::out);
	if(outfile__array_Core_3_kp.is_open())
	{
		outfile__array_Core_3_kp.write(reinterpret_cast<char*>(_array_Core_3_kp), 1*sizeof(_array_Core_3_kp[0]));
		outfile__array_Core_3_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kp." << endl;
	}
	ofstream outfile__array_Core_3_lastspike;
	outfile__array_Core_3_lastspike.open("results/_array_Core_3_lastspike_-2034714730927369515", ios::binary | ios::out);
	if(outfile__array_Core_3_lastspike.is_open())
	{
		outfile__array_Core_3_lastspike.write(reinterpret_cast<char*>(_array_Core_3_lastspike), 256*sizeof(_array_Core_3_lastspike[0]));
		outfile__array_Core_3_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_lastspike." << endl;
	}
	ofstream outfile__array_Core_3_not_refractory;
	outfile__array_Core_3_not_refractory.open("results/_array_Core_3_not_refractory_-6836104215994174835", ios::binary | ios::out);
	if(outfile__array_Core_3_not_refractory.is_open())
	{
		outfile__array_Core_3_not_refractory.write(reinterpret_cast<char*>(_array_Core_3_not_refractory), 256*sizeof(_array_Core_3_not_refractory[0]));
		outfile__array_Core_3_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_not_refractory." << endl;
	}
	ofstream outfile__array_Core_3_soma_refP;
	outfile__array_Core_3_soma_refP.open("results/_array_Core_3_soma_refP_3094961052126793841", ios::binary | ios::out);
	if(outfile__array_Core_3_soma_refP.is_open())
	{
		outfile__array_Core_3_soma_refP.write(reinterpret_cast<char*>(_array_Core_3_soma_refP), 1*sizeof(_array_Core_3_soma_refP[0]));
		outfile__array_Core_3_soma_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_soma_refP." << endl;
	}
	ofstream outfile__array_Core_3_std_pulse;
	outfile__array_Core_3_std_pulse.open("results/_array_Core_3_std_pulse_337203737017769832", ios::binary | ios::out);
	if(outfile__array_Core_3_std_pulse.is_open())
	{
		outfile__array_Core_3_std_pulse.write(reinterpret_cast<char*>(_array_Core_3_std_pulse), 256*sizeof(_array_Core_3_std_pulse[0]));
		outfile__array_Core_3_std_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_std_pulse." << endl;
	}
	ofstream outfile__array_Core_3_tau_pulse;
	outfile__array_Core_3_tau_pulse.open("results/_array_Core_3_tau_pulse_3192498304039969224", ios::binary | ios::out);
	if(outfile__array_Core_3_tau_pulse.is_open())
	{
		outfile__array_Core_3_tau_pulse.write(reinterpret_cast<char*>(_array_Core_3_tau_pulse), 256*sizeof(_array_Core_3_tau_pulse[0]));
		outfile__array_Core_3_tau_pulse.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_tau_pulse." << endl;
	}
	ofstream outfile__array_Core_3_Ut;
	outfile__array_Core_3_Ut.open("results/_array_Core_3_Ut_3052644639981522020", ios::binary | ios::out);
	if(outfile__array_Core_3_Ut.is_open())
	{
		outfile__array_Core_3_Ut.write(reinterpret_cast<char*>(_array_Core_3_Ut), 1*sizeof(_array_Core_3_Ut[0]));
		outfile__array_Core_3_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ut." << endl;
	}
	ofstream outfile__array_Core_3_Va;
	outfile__array_Core_3_Va.open("results/_array_Core_3_Va_-5257217567364255177", ios::binary | ios::out);
	if(outfile__array_Core_3_Va.is_open())
	{
		outfile__array_Core_3_Va.write(reinterpret_cast<char*>(_array_Core_3_Va), 256*sizeof(_array_Core_3_Va[0]));
		outfile__array_Core_3_Va.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Va." << endl;
	}
	ofstream outfile__array_Core_3_Vw;
	outfile__array_Core_3_Vw.open("results/_array_Core_3_Vw_5123331074268040962", ios::binary | ios::out);
	if(outfile__array_Core_3_Vw.is_open())
	{
		outfile__array_Core_3_Vw.write(reinterpret_cast<char*>(_array_Core_3_Vw), 256*sizeof(_array_Core_3_Vw[0]));
		outfile__array_Core_3_Vw.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Vw." << endl;
	}
	ofstream outfile__array_defaultclock_dt;
	outfile__array_defaultclock_dt.open("results/_array_defaultclock_dt_-5380856118790581464", ios::binary | ios::out);
	if(outfile__array_defaultclock_dt.is_open())
	{
		outfile__array_defaultclock_dt.write(reinterpret_cast<char*>(_array_defaultclock_dt), 1*sizeof(_array_defaultclock_dt[0]));
		outfile__array_defaultclock_dt.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_dt." << endl;
	}
	ofstream outfile__array_defaultclock_t;
	outfile__array_defaultclock_t.open("results/_array_defaultclock_t_-6841955892421953755", ios::binary | ios::out);
	if(outfile__array_defaultclock_t.is_open())
	{
		outfile__array_defaultclock_t.write(reinterpret_cast<char*>(_array_defaultclock_t), 1*sizeof(_array_defaultclock_t[0]));
		outfile__array_defaultclock_t.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_t." << endl;
	}
	ofstream outfile__array_defaultclock_timestep;
	outfile__array_defaultclock_timestep.open("results/_array_defaultclock_timestep_-5049415264935667516", ios::binary | ios::out);
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

