
#ifndef _BRIAN_OBJECTS_H
#define _BRIAN_OBJECTS_H

#include "synapses_classes.h"
#include "brianlib/clocks.h"
#include "brianlib/dynamic_array.h"
#include "brianlib/stdint_compat.h"
#include "network.h"
#include "randomkit.h"
#include<vector>


namespace brian {

// In OpenMP we need one state per thread
extern std::vector< rk_state* > _mersenne_twister_states;

//////////////// clocks ///////////////////
extern Clock defaultclock;

//////////////// networks /////////////////
extern Network network;

//////////////// dynamic arrays ///////////
extern std::vector<int32_t> _dynamic_array_AMPA1__synaptic_post;
extern std::vector<int32_t> _dynamic_array_AMPA1__synaptic_pre;
extern std::vector<double> _dynamic_array_AMPA1_delay;
extern std::vector<double> _dynamic_array_AMPA1_delay_1;
extern std::vector<int32_t> _dynamic_array_AMPA1_N_incoming;
extern std::vector<int32_t> _dynamic_array_AMPA1_N_outgoing;
extern std::vector<double> _dynamic_array_AMPA1_weight;
extern std::vector<int32_t> _dynamic_array_mon_neuron_input_i;
extern std::vector<double> _dynamic_array_mon_neuron_input_t;
extern std::vector<int32_t> _dynamic_array_mon_neuron_output_i;
extern std::vector<double> _dynamic_array_mon_neuron_output_t;
extern std::vector<int32_t> _dynamic_array_NMDA0__synaptic_post;
extern std::vector<int32_t> _dynamic_array_NMDA0__synaptic_pre;
extern std::vector<double> _dynamic_array_NMDA0_delay;
extern std::vector<double> _dynamic_array_NMDA0_delay_1;
extern std::vector<int32_t> _dynamic_array_NMDA0_N_incoming;
extern std::vector<int32_t> _dynamic_array_NMDA0_N_outgoing;
extern std::vector<double> _dynamic_array_NMDA0_weight;
extern std::vector<int32_t> _dynamic_array_SpikeGenerator__timebins;
extern std::vector<int32_t> _dynamic_array_SpikeGenerator_neuron_index;
extern std::vector<int32_t> _dynamic_array_SpikeGenerator_spike_number;
extern std::vector<double> _dynamic_array_SpikeGenerator_spike_time;
extern std::vector<double> _dynamic_array_statemonitor_2_t;
extern std::vector<double> _dynamic_array_statemonitor_3_t;
extern std::vector<double> _dynamic_array_statemonitor_t;

//////////////// arrays ///////////////////
extern int32_t *_array_AMPA1_N;
extern const int _num__array_AMPA1_N;
extern int32_t *_array_Core_0__spikespace;
extern const int _num__array_Core_0__spikespace;
extern double *_array_Core_0_alpha_ahp;
extern const int _num__array_Core_0_alpha_ahp;
extern double *_array_Core_0_alpha_ampa;
extern const int _num__array_Core_0_alpha_ampa;
extern double *_array_Core_0_alpha_ampa_std;
extern const int _num__array_Core_0_alpha_ampa_std;
extern double *_array_Core_0_alpha_gaba_a;
extern const int _num__array_Core_0_alpha_gaba_a;
extern double *_array_Core_0_alpha_gaba_b;
extern const int _num__array_Core_0_alpha_gaba_b;
extern double *_array_Core_0_alpha_nmda;
extern const int _num__array_Core_0_alpha_nmda;
extern double *_array_Core_0_alpha_soma;
extern const int _num__array_Core_0_alpha_soma;
extern double *_array_Core_0_Campa;
extern const int _num__array_Core_0_Campa;
extern double *_array_Core_0_Campa_std;
extern const int _num__array_Core_0_Campa_std;
extern double *_array_Core_0_Cgaba_a;
extern const int _num__array_Core_0_Cgaba_a;
extern double *_array_Core_0_Cgaba_b;
extern const int _num__array_Core_0_Cgaba_b;
extern double *_array_Core_0_Cnmda;
extern const int _num__array_Core_0_Cnmda;
extern double *_array_Core_0_Csoma_ahp;
extern const int _num__array_Core_0_Csoma_ahp;
extern double *_array_Core_0_Csoma_mem;
extern const int _num__array_Core_0_Csoma_mem;
extern int32_t *_array_Core_0_i;
extern const int _num__array_Core_0_i;
extern double *_array_Core_0_I0;
extern const int _num__array_Core_0_I0;
extern double *_array_Core_0_Iampa;
extern const int _num__array_Core_0_Iampa;
extern double *_array_Core_0_Iampa_std;
extern const int _num__array_Core_0_Iampa_std;
extern double *_array_Core_0_Iampa_std_tau;
extern const int _num__array_Core_0_Iampa_std_tau;
extern double *_array_Core_0_Iampa_tau;
extern const int _num__array_Core_0_Iampa_tau;
extern double *_array_Core_0_Iampa_w0;
extern const int _num__array_Core_0_Iampa_w0;
extern double *_array_Core_0_Idischarge_w;
extern const int _num__array_Core_0_Idischarge_w;
extern double *_array_Core_0_Igaba_a;
extern const int _num__array_Core_0_Igaba_a;
extern double *_array_Core_0_Igaba_a_tau;
extern const int _num__array_Core_0_Igaba_a_tau;
extern double *_array_Core_0_Igaba_a_w0;
extern const int _num__array_Core_0_Igaba_a_w0;
extern double *_array_Core_0_Igaba_b;
extern const int _num__array_Core_0_Igaba_b;
extern double *_array_Core_0_Igaba_b_tau;
extern const int _num__array_Core_0_Igaba_b_tau;
extern double *_array_Core_0_Igaba_b_w0;
extern const int _num__array_Core_0_Igaba_b_w0;
extern double *_array_Core_0_Inmda;
extern const int _num__array_Core_0_Inmda;
extern double *_array_Core_0_Inmda_tau;
extern const int _num__array_Core_0_Inmda_tau;
extern double *_array_Core_0_Inmda_thr;
extern const int _num__array_Core_0_Inmda_thr;
extern double *_array_Core_0_Inmda_w0;
extern const int _num__array_Core_0_Inmda_w0;
extern double *_array_Core_0_Isoma_ahp;
extern const int _num__array_Core_0_Isoma_ahp;
extern double *_array_Core_0_Isoma_ahp_g;
extern const int _num__array_Core_0_Isoma_ahp_g;
extern double *_array_Core_0_Isoma_ahp_tau;
extern const int _num__array_Core_0_Isoma_ahp_tau;
extern double *_array_Core_0_Isoma_ahp_w;
extern const int _num__array_Core_0_Isoma_ahp_w;
extern double *_array_Core_0_Isoma_const;
extern const int _num__array_Core_0_Isoma_const;
extern double *_array_Core_0_Isoma_dpi_tau;
extern const int _num__array_Core_0_Isoma_dpi_tau;
extern double *_array_Core_0_Isoma_mem;
extern const int _num__array_Core_0_Isoma_mem;
extern double *_array_Core_0_Isoma_pfb_gain;
extern const int _num__array_Core_0_Isoma_pfb_gain;
extern double *_array_Core_0_Isoma_pfb_norm;
extern const int _num__array_Core_0_Isoma_pfb_norm;
extern double *_array_Core_0_Isoma_pfb_th;
extern const int _num__array_Core_0_Isoma_pfb_th;
extern double *_array_Core_0_Isoma_reset;
extern const int _num__array_Core_0_Isoma_reset;
extern double *_array_Core_0_Isoma_th;
extern const int _num__array_Core_0_Isoma_th;
extern double *_array_Core_0_kn;
extern const int _num__array_Core_0_kn;
extern double *_array_Core_0_kp;
extern const int _num__array_Core_0_kp;
extern double *_array_Core_0_lastspike;
extern const int _num__array_Core_0_lastspike;
extern char *_array_Core_0_not_refractory;
extern const int _num__array_Core_0_not_refractory;
extern double *_array_Core_0_soma_refP;
extern const int _num__array_Core_0_soma_refP;
extern double *_array_Core_0_std_pulse;
extern const int _num__array_Core_0_std_pulse;
extern double *_array_Core_0_tau_pulse;
extern const int _num__array_Core_0_tau_pulse;
extern double *_array_Core_0_Ut;
extern const int _num__array_Core_0_Ut;
extern double *_array_Core_0_Va;
extern const int _num__array_Core_0_Va;
extern double *_array_Core_0_Vw;
extern const int _num__array_Core_0_Vw;
extern int32_t *_array_Core_1__spikespace;
extern const int _num__array_Core_1__spikespace;
extern double *_array_Core_1_alpha_ahp;
extern const int _num__array_Core_1_alpha_ahp;
extern double *_array_Core_1_alpha_ampa;
extern const int _num__array_Core_1_alpha_ampa;
extern double *_array_Core_1_alpha_ampa_std;
extern const int _num__array_Core_1_alpha_ampa_std;
extern double *_array_Core_1_alpha_gaba_a;
extern const int _num__array_Core_1_alpha_gaba_a;
extern double *_array_Core_1_alpha_gaba_b;
extern const int _num__array_Core_1_alpha_gaba_b;
extern double *_array_Core_1_alpha_nmda;
extern const int _num__array_Core_1_alpha_nmda;
extern double *_array_Core_1_alpha_soma;
extern const int _num__array_Core_1_alpha_soma;
extern double *_array_Core_1_Campa;
extern const int _num__array_Core_1_Campa;
extern double *_array_Core_1_Campa_std;
extern const int _num__array_Core_1_Campa_std;
extern double *_array_Core_1_Cgaba_a;
extern const int _num__array_Core_1_Cgaba_a;
extern double *_array_Core_1_Cgaba_b;
extern const int _num__array_Core_1_Cgaba_b;
extern double *_array_Core_1_Cnmda;
extern const int _num__array_Core_1_Cnmda;
extern double *_array_Core_1_Csoma_ahp;
extern const int _num__array_Core_1_Csoma_ahp;
extern double *_array_Core_1_Csoma_mem;
extern const int _num__array_Core_1_Csoma_mem;
extern int32_t *_array_Core_1_i;
extern const int _num__array_Core_1_i;
extern double *_array_Core_1_I0;
extern const int _num__array_Core_1_I0;
extern double *_array_Core_1_Iampa;
extern const int _num__array_Core_1_Iampa;
extern double *_array_Core_1_Iampa_std;
extern const int _num__array_Core_1_Iampa_std;
extern double *_array_Core_1_Iampa_std_tau;
extern const int _num__array_Core_1_Iampa_std_tau;
extern double *_array_Core_1_Iampa_tau;
extern const int _num__array_Core_1_Iampa_tau;
extern double *_array_Core_1_Iampa_w0;
extern const int _num__array_Core_1_Iampa_w0;
extern double *_array_Core_1_Idischarge_w;
extern const int _num__array_Core_1_Idischarge_w;
extern double *_array_Core_1_Igaba_a;
extern const int _num__array_Core_1_Igaba_a;
extern double *_array_Core_1_Igaba_a_tau;
extern const int _num__array_Core_1_Igaba_a_tau;
extern double *_array_Core_1_Igaba_a_w0;
extern const int _num__array_Core_1_Igaba_a_w0;
extern double *_array_Core_1_Igaba_b;
extern const int _num__array_Core_1_Igaba_b;
extern double *_array_Core_1_Igaba_b_tau;
extern const int _num__array_Core_1_Igaba_b_tau;
extern double *_array_Core_1_Igaba_b_w0;
extern const int _num__array_Core_1_Igaba_b_w0;
extern double *_array_Core_1_Inmda;
extern const int _num__array_Core_1_Inmda;
extern double *_array_Core_1_Inmda_tau;
extern const int _num__array_Core_1_Inmda_tau;
extern double *_array_Core_1_Inmda_thr;
extern const int _num__array_Core_1_Inmda_thr;
extern double *_array_Core_1_Inmda_w0;
extern const int _num__array_Core_1_Inmda_w0;
extern double *_array_Core_1_Isoma_ahp;
extern const int _num__array_Core_1_Isoma_ahp;
extern double *_array_Core_1_Isoma_ahp_g;
extern const int _num__array_Core_1_Isoma_ahp_g;
extern double *_array_Core_1_Isoma_ahp_tau;
extern const int _num__array_Core_1_Isoma_ahp_tau;
extern double *_array_Core_1_Isoma_ahp_w;
extern const int _num__array_Core_1_Isoma_ahp_w;
extern double *_array_Core_1_Isoma_const;
extern const int _num__array_Core_1_Isoma_const;
extern double *_array_Core_1_Isoma_dpi_tau;
extern const int _num__array_Core_1_Isoma_dpi_tau;
extern double *_array_Core_1_Isoma_mem;
extern const int _num__array_Core_1_Isoma_mem;
extern double *_array_Core_1_Isoma_pfb_gain;
extern const int _num__array_Core_1_Isoma_pfb_gain;
extern double *_array_Core_1_Isoma_pfb_norm;
extern const int _num__array_Core_1_Isoma_pfb_norm;
extern double *_array_Core_1_Isoma_pfb_th;
extern const int _num__array_Core_1_Isoma_pfb_th;
extern double *_array_Core_1_Isoma_reset;
extern const int _num__array_Core_1_Isoma_reset;
extern double *_array_Core_1_Isoma_th;
extern const int _num__array_Core_1_Isoma_th;
extern double *_array_Core_1_kn;
extern const int _num__array_Core_1_kn;
extern double *_array_Core_1_kp;
extern const int _num__array_Core_1_kp;
extern double *_array_Core_1_lastspike;
extern const int _num__array_Core_1_lastspike;
extern char *_array_Core_1_not_refractory;
extern const int _num__array_Core_1_not_refractory;
extern double *_array_Core_1_soma_refP;
extern const int _num__array_Core_1_soma_refP;
extern double *_array_Core_1_std_pulse;
extern const int _num__array_Core_1_std_pulse;
extern int32_t *_array_Core_1_subgroup_1__sub_idx;
extern const int _num__array_Core_1_subgroup_1__sub_idx;
extern double *_array_Core_1_tau_pulse;
extern const int _num__array_Core_1_tau_pulse;
extern double *_array_Core_1_Ut;
extern const int _num__array_Core_1_Ut;
extern double *_array_Core_1_Va;
extern const int _num__array_Core_1_Va;
extern double *_array_Core_1_Vw;
extern const int _num__array_Core_1_Vw;
extern int32_t *_array_Core_2__spikespace;
extern const int _num__array_Core_2__spikespace;
extern double *_array_Core_2_alpha_ahp;
extern const int _num__array_Core_2_alpha_ahp;
extern double *_array_Core_2_alpha_ampa;
extern const int _num__array_Core_2_alpha_ampa;
extern double *_array_Core_2_alpha_ampa_std;
extern const int _num__array_Core_2_alpha_ampa_std;
extern double *_array_Core_2_alpha_gaba_a;
extern const int _num__array_Core_2_alpha_gaba_a;
extern double *_array_Core_2_alpha_gaba_b;
extern const int _num__array_Core_2_alpha_gaba_b;
extern double *_array_Core_2_alpha_nmda;
extern const int _num__array_Core_2_alpha_nmda;
extern double *_array_Core_2_alpha_soma;
extern const int _num__array_Core_2_alpha_soma;
extern double *_array_Core_2_Campa;
extern const int _num__array_Core_2_Campa;
extern double *_array_Core_2_Campa_std;
extern const int _num__array_Core_2_Campa_std;
extern double *_array_Core_2_Cgaba_a;
extern const int _num__array_Core_2_Cgaba_a;
extern double *_array_Core_2_Cgaba_b;
extern const int _num__array_Core_2_Cgaba_b;
extern double *_array_Core_2_Cnmda;
extern const int _num__array_Core_2_Cnmda;
extern double *_array_Core_2_Csoma_ahp;
extern const int _num__array_Core_2_Csoma_ahp;
extern double *_array_Core_2_Csoma_mem;
extern const int _num__array_Core_2_Csoma_mem;
extern int32_t *_array_Core_2_i;
extern const int _num__array_Core_2_i;
extern double *_array_Core_2_I0;
extern const int _num__array_Core_2_I0;
extern double *_array_Core_2_Iampa;
extern const int _num__array_Core_2_Iampa;
extern double *_array_Core_2_Iampa_std;
extern const int _num__array_Core_2_Iampa_std;
extern double *_array_Core_2_Iampa_std_tau;
extern const int _num__array_Core_2_Iampa_std_tau;
extern double *_array_Core_2_Iampa_tau;
extern const int _num__array_Core_2_Iampa_tau;
extern double *_array_Core_2_Iampa_w0;
extern const int _num__array_Core_2_Iampa_w0;
extern double *_array_Core_2_Idischarge_w;
extern const int _num__array_Core_2_Idischarge_w;
extern double *_array_Core_2_Igaba_a;
extern const int _num__array_Core_2_Igaba_a;
extern double *_array_Core_2_Igaba_a_tau;
extern const int _num__array_Core_2_Igaba_a_tau;
extern double *_array_Core_2_Igaba_a_w0;
extern const int _num__array_Core_2_Igaba_a_w0;
extern double *_array_Core_2_Igaba_b;
extern const int _num__array_Core_2_Igaba_b;
extern double *_array_Core_2_Igaba_b_tau;
extern const int _num__array_Core_2_Igaba_b_tau;
extern double *_array_Core_2_Igaba_b_w0;
extern const int _num__array_Core_2_Igaba_b_w0;
extern double *_array_Core_2_Inmda;
extern const int _num__array_Core_2_Inmda;
extern double *_array_Core_2_Inmda_tau;
extern const int _num__array_Core_2_Inmda_tau;
extern double *_array_Core_2_Inmda_thr;
extern const int _num__array_Core_2_Inmda_thr;
extern double *_array_Core_2_Inmda_w0;
extern const int _num__array_Core_2_Inmda_w0;
extern double *_array_Core_2_Isoma_ahp;
extern const int _num__array_Core_2_Isoma_ahp;
extern double *_array_Core_2_Isoma_ahp_g;
extern const int _num__array_Core_2_Isoma_ahp_g;
extern double *_array_Core_2_Isoma_ahp_tau;
extern const int _num__array_Core_2_Isoma_ahp_tau;
extern double *_array_Core_2_Isoma_ahp_w;
extern const int _num__array_Core_2_Isoma_ahp_w;
extern double *_array_Core_2_Isoma_const;
extern const int _num__array_Core_2_Isoma_const;
extern double *_array_Core_2_Isoma_dpi_tau;
extern const int _num__array_Core_2_Isoma_dpi_tau;
extern double *_array_Core_2_Isoma_mem;
extern const int _num__array_Core_2_Isoma_mem;
extern double *_array_Core_2_Isoma_pfb_gain;
extern const int _num__array_Core_2_Isoma_pfb_gain;
extern double *_array_Core_2_Isoma_pfb_norm;
extern const int _num__array_Core_2_Isoma_pfb_norm;
extern double *_array_Core_2_Isoma_pfb_th;
extern const int _num__array_Core_2_Isoma_pfb_th;
extern double *_array_Core_2_Isoma_reset;
extern const int _num__array_Core_2_Isoma_reset;
extern double *_array_Core_2_Isoma_th;
extern const int _num__array_Core_2_Isoma_th;
extern double *_array_Core_2_kn;
extern const int _num__array_Core_2_kn;
extern double *_array_Core_2_kp;
extern const int _num__array_Core_2_kp;
extern double *_array_Core_2_lastspike;
extern const int _num__array_Core_2_lastspike;
extern char *_array_Core_2_not_refractory;
extern const int _num__array_Core_2_not_refractory;
extern double *_array_Core_2_soma_refP;
extern const int _num__array_Core_2_soma_refP;
extern double *_array_Core_2_std_pulse;
extern const int _num__array_Core_2_std_pulse;
extern double *_array_Core_2_tau_pulse;
extern const int _num__array_Core_2_tau_pulse;
extern double *_array_Core_2_Ut;
extern const int _num__array_Core_2_Ut;
extern double *_array_Core_2_Va;
extern const int _num__array_Core_2_Va;
extern double *_array_Core_2_Vw;
extern const int _num__array_Core_2_Vw;
extern int32_t *_array_Core_3__spikespace;
extern const int _num__array_Core_3__spikespace;
extern double *_array_Core_3_alpha_ahp;
extern const int _num__array_Core_3_alpha_ahp;
extern double *_array_Core_3_alpha_ampa;
extern const int _num__array_Core_3_alpha_ampa;
extern double *_array_Core_3_alpha_ampa_std;
extern const int _num__array_Core_3_alpha_ampa_std;
extern double *_array_Core_3_alpha_gaba_a;
extern const int _num__array_Core_3_alpha_gaba_a;
extern double *_array_Core_3_alpha_gaba_b;
extern const int _num__array_Core_3_alpha_gaba_b;
extern double *_array_Core_3_alpha_nmda;
extern const int _num__array_Core_3_alpha_nmda;
extern double *_array_Core_3_alpha_soma;
extern const int _num__array_Core_3_alpha_soma;
extern double *_array_Core_3_Campa;
extern const int _num__array_Core_3_Campa;
extern double *_array_Core_3_Campa_std;
extern const int _num__array_Core_3_Campa_std;
extern double *_array_Core_3_Cgaba_a;
extern const int _num__array_Core_3_Cgaba_a;
extern double *_array_Core_3_Cgaba_b;
extern const int _num__array_Core_3_Cgaba_b;
extern double *_array_Core_3_Cnmda;
extern const int _num__array_Core_3_Cnmda;
extern double *_array_Core_3_Csoma_ahp;
extern const int _num__array_Core_3_Csoma_ahp;
extern double *_array_Core_3_Csoma_mem;
extern const int _num__array_Core_3_Csoma_mem;
extern int32_t *_array_Core_3_i;
extern const int _num__array_Core_3_i;
extern double *_array_Core_3_I0;
extern const int _num__array_Core_3_I0;
extern double *_array_Core_3_Iampa;
extern const int _num__array_Core_3_Iampa;
extern double *_array_Core_3_Iampa_std;
extern const int _num__array_Core_3_Iampa_std;
extern double *_array_Core_3_Iampa_std_tau;
extern const int _num__array_Core_3_Iampa_std_tau;
extern double *_array_Core_3_Iampa_tau;
extern const int _num__array_Core_3_Iampa_tau;
extern double *_array_Core_3_Iampa_w0;
extern const int _num__array_Core_3_Iampa_w0;
extern double *_array_Core_3_Idischarge_w;
extern const int _num__array_Core_3_Idischarge_w;
extern double *_array_Core_3_Igaba_a;
extern const int _num__array_Core_3_Igaba_a;
extern double *_array_Core_3_Igaba_a_tau;
extern const int _num__array_Core_3_Igaba_a_tau;
extern double *_array_Core_3_Igaba_a_w0;
extern const int _num__array_Core_3_Igaba_a_w0;
extern double *_array_Core_3_Igaba_b;
extern const int _num__array_Core_3_Igaba_b;
extern double *_array_Core_3_Igaba_b_tau;
extern const int _num__array_Core_3_Igaba_b_tau;
extern double *_array_Core_3_Igaba_b_w0;
extern const int _num__array_Core_3_Igaba_b_w0;
extern double *_array_Core_3_Inmda;
extern const int _num__array_Core_3_Inmda;
extern double *_array_Core_3_Inmda_tau;
extern const int _num__array_Core_3_Inmda_tau;
extern double *_array_Core_3_Inmda_thr;
extern const int _num__array_Core_3_Inmda_thr;
extern double *_array_Core_3_Inmda_w0;
extern const int _num__array_Core_3_Inmda_w0;
extern double *_array_Core_3_Isoma_ahp;
extern const int _num__array_Core_3_Isoma_ahp;
extern double *_array_Core_3_Isoma_ahp_g;
extern const int _num__array_Core_3_Isoma_ahp_g;
extern double *_array_Core_3_Isoma_ahp_tau;
extern const int _num__array_Core_3_Isoma_ahp_tau;
extern double *_array_Core_3_Isoma_ahp_w;
extern const int _num__array_Core_3_Isoma_ahp_w;
extern double *_array_Core_3_Isoma_const;
extern const int _num__array_Core_3_Isoma_const;
extern double *_array_Core_3_Isoma_dpi_tau;
extern const int _num__array_Core_3_Isoma_dpi_tau;
extern double *_array_Core_3_Isoma_mem;
extern const int _num__array_Core_3_Isoma_mem;
extern double *_array_Core_3_Isoma_pfb_gain;
extern const int _num__array_Core_3_Isoma_pfb_gain;
extern double *_array_Core_3_Isoma_pfb_norm;
extern const int _num__array_Core_3_Isoma_pfb_norm;
extern double *_array_Core_3_Isoma_pfb_th;
extern const int _num__array_Core_3_Isoma_pfb_th;
extern double *_array_Core_3_Isoma_reset;
extern const int _num__array_Core_3_Isoma_reset;
extern double *_array_Core_3_Isoma_th;
extern const int _num__array_Core_3_Isoma_th;
extern double *_array_Core_3_kn;
extern const int _num__array_Core_3_kn;
extern double *_array_Core_3_kp;
extern const int _num__array_Core_3_kp;
extern double *_array_Core_3_lastspike;
extern const int _num__array_Core_3_lastspike;
extern char *_array_Core_3_not_refractory;
extern const int _num__array_Core_3_not_refractory;
extern double *_array_Core_3_soma_refP;
extern const int _num__array_Core_3_soma_refP;
extern double *_array_Core_3_std_pulse;
extern const int _num__array_Core_3_std_pulse;
extern double *_array_Core_3_tau_pulse;
extern const int _num__array_Core_3_tau_pulse;
extern double *_array_Core_3_Ut;
extern const int _num__array_Core_3_Ut;
extern double *_array_Core_3_Va;
extern const int _num__array_Core_3_Va;
extern double *_array_Core_3_Vw;
extern const int _num__array_Core_3_Vw;
extern double *_array_defaultclock_dt;
extern const int _num__array_defaultclock_dt;
extern double *_array_defaultclock_t;
extern const int _num__array_defaultclock_t;
extern int64_t *_array_defaultclock_timestep;
extern const int _num__array_defaultclock_timestep;
extern int32_t *_array_mon_neuron_input__source_idx;
extern const int _num__array_mon_neuron_input__source_idx;
extern int32_t *_array_mon_neuron_input_count;
extern const int _num__array_mon_neuron_input_count;
extern int32_t *_array_mon_neuron_input_N;
extern const int _num__array_mon_neuron_input_N;
extern int32_t *_array_mon_neuron_output__source_idx;
extern const int _num__array_mon_neuron_output__source_idx;
extern int32_t *_array_mon_neuron_output_count;
extern const int _num__array_mon_neuron_output_count;
extern int32_t *_array_mon_neuron_output_N;
extern const int _num__array_mon_neuron_output_N;
extern int32_t *_array_NMDA0_N;
extern const int _num__array_NMDA0_N;
extern int32_t *_array_SpikeGenerator__lastindex;
extern const int _num__array_SpikeGenerator__lastindex;
extern int32_t *_array_SpikeGenerator__period_bins;
extern const int _num__array_SpikeGenerator__period_bins;
extern int32_t *_array_SpikeGenerator__spikespace;
extern const int _num__array_SpikeGenerator__spikespace;
extern int32_t *_array_SpikeGenerator_i;
extern const int _num__array_SpikeGenerator_i;
extern double *_array_SpikeGenerator_period;
extern const int _num__array_SpikeGenerator_period;
extern int32_t *_array_statemonitor_2__indices;
extern const int _num__array_statemonitor_2__indices;
extern double *_array_statemonitor_2_Iampa;
extern const int _num__array_statemonitor_2_Iampa;
extern int32_t *_array_statemonitor_2_N;
extern const int _num__array_statemonitor_2_N;
extern int32_t *_array_statemonitor_3__indices;
extern const int _num__array_statemonitor_3__indices;
extern double *_array_statemonitor_3_Isoma_mem;
extern const int _num__array_statemonitor_3_Isoma_mem;
extern int32_t *_array_statemonitor_3_N;
extern const int _num__array_statemonitor_3_N;
extern int32_t *_array_statemonitor__indices;
extern const int _num__array_statemonitor__indices;
extern double *_array_statemonitor_Inmda;
extern const int _num__array_statemonitor_Inmda;
extern int32_t *_array_statemonitor_N;
extern const int _num__array_statemonitor_N;

//////////////// dynamic arrays 2d /////////
extern DynamicArray2D<double> _dynamic_array_statemonitor_2_Iampa;
extern DynamicArray2D<double> _dynamic_array_statemonitor_3_Isoma_mem;
extern DynamicArray2D<double> _dynamic_array_statemonitor_Inmda;

/////////////// static arrays /////////////
extern int32_t *_static_array__dynamic_array_SpikeGenerator__timebins;
extern const int _num__static_array__dynamic_array_SpikeGenerator__timebins;
extern double *_static_array__dynamic_array_SpikeGenerator_neuron_index;
extern const int _num__static_array__dynamic_array_SpikeGenerator_neuron_index;
extern int64_t *_static_array__dynamic_array_SpikeGenerator_spike_number;
extern const int _num__static_array__dynamic_array_SpikeGenerator_spike_number;
extern double *_static_array__dynamic_array_SpikeGenerator_spike_time;
extern const int _num__static_array__dynamic_array_SpikeGenerator_spike_time;

//////////////// synapses /////////////////
// AMPA1
extern SynapticPathway AMPA1_post;
extern SynapticPathway AMPA1_pre;
// NMDA0
extern SynapticPathway NMDA0_post;
extern SynapticPathway NMDA0_pre;

// Profiling information for each code object
}

void _init_arrays();
void _load_arrays();
void _write_arrays();
void _dealloc_arrays();

#endif


