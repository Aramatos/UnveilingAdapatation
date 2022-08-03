#include <stdlib.h>
#include "objects.h"
#include <ctime>
#include <time.h>

#include "run.h"
#include "brianlib/common_math.h"
#include "randomkit.h"

#include "code_objects/AMPA0_post_codeobject.h"
#include "code_objects/AMPA0_post_push_spikes.h"
#include "code_objects/before_run_AMPA0_post_push_spikes.h"
#include "code_objects/AMPA0_pre_codeobject.h"
#include "code_objects/AMPA0_pre_push_spikes.h"
#include "code_objects/before_run_AMPA0_pre_push_spikes.h"
#include "code_objects/AMPA0_synapses_create_generator_codeobject.h"
#include "code_objects/AMPA2_post_codeobject.h"
#include "code_objects/AMPA2_post_push_spikes.h"
#include "code_objects/before_run_AMPA2_post_push_spikes.h"
#include "code_objects/AMPA2_pre_codeobject.h"
#include "code_objects/AMPA2_pre_push_spikes.h"
#include "code_objects/before_run_AMPA2_pre_push_spikes.h"
#include "code_objects/AMPA2_synapses_create_generator_codeobject.h"
#include "code_objects/AMPA3_post_codeobject.h"
#include "code_objects/AMPA3_post_push_spikes.h"
#include "code_objects/before_run_AMPA3_post_push_spikes.h"
#include "code_objects/AMPA3_pre_codeobject.h"
#include "code_objects/AMPA3_pre_push_spikes.h"
#include "code_objects/before_run_AMPA3_pre_push_spikes.h"
#include "code_objects/AMPA3_synapses_create_generator_codeobject.h"
#include "code_objects/AMPA7_post_codeobject.h"
#include "code_objects/AMPA7_post_push_spikes.h"
#include "code_objects/before_run_AMPA7_post_push_spikes.h"
#include "code_objects/AMPA7_pre_codeobject.h"
#include "code_objects/AMPA7_pre_push_spikes.h"
#include "code_objects/before_run_AMPA7_pre_push_spikes.h"
#include "code_objects/AMPA7_synapses_create_generator_codeobject.h"
#include "code_objects/AMPA_STD1_post_codeobject.h"
#include "code_objects/AMPA_STD1_post_push_spikes.h"
#include "code_objects/before_run_AMPA_STD1_post_push_spikes.h"
#include "code_objects/AMPA_STD1_pre_codeobject.h"
#include "code_objects/AMPA_STD1_pre_push_spikes.h"
#include "code_objects/before_run_AMPA_STD1_pre_push_spikes.h"
#include "code_objects/AMPA_STD1_synapses_create_generator_codeobject.h"
#include "code_objects/AMPA_STD8_post_codeobject.h"
#include "code_objects/AMPA_STD8_post_push_spikes.h"
#include "code_objects/before_run_AMPA_STD8_post_push_spikes.h"
#include "code_objects/AMPA_STD8_pre_codeobject.h"
#include "code_objects/AMPA_STD8_pre_push_spikes.h"
#include "code_objects/before_run_AMPA_STD8_pre_push_spikes.h"
#include "code_objects/AMPA_STD8_synapses_create_generator_codeobject.h"
#include "code_objects/Core_0_resetter_codeobject.h"
#include "code_objects/Core_0_stateupdater_codeobject.h"
#include "code_objects/Core_0_thresholder_codeobject.h"
#include "code_objects/after_run_Core_0_thresholder_codeobject.h"
#include "code_objects/Core_1_resetter_codeobject.h"
#include "code_objects/Core_1_stateupdater_codeobject.h"
#include "code_objects/Core_1_thresholder_codeobject.h"
#include "code_objects/after_run_Core_1_thresholder_codeobject.h"
#include "code_objects/Core_2_resetter_codeobject.h"
#include "code_objects/Core_2_stateupdater_codeobject.h"
#include "code_objects/Core_2_thresholder_codeobject.h"
#include "code_objects/after_run_Core_2_thresholder_codeobject.h"
#include "code_objects/Core_3_resetter_codeobject.h"
#include "code_objects/Core_3_stateupdater_codeobject.h"
#include "code_objects/Core_3_thresholder_codeobject.h"
#include "code_objects/after_run_Core_3_thresholder_codeobject.h"
#include "code_objects/GABA_B10_post_codeobject.h"
#include "code_objects/GABA_B10_post_push_spikes.h"
#include "code_objects/before_run_GABA_B10_post_push_spikes.h"
#include "code_objects/GABA_B10_pre_codeobject.h"
#include "code_objects/GABA_B10_pre_push_spikes.h"
#include "code_objects/before_run_GABA_B10_pre_push_spikes.h"
#include "code_objects/GABA_B10_synapses_create_generator_codeobject.h"
#include "code_objects/GABA_B4_post_codeobject.h"
#include "code_objects/GABA_B4_post_push_spikes.h"
#include "code_objects/before_run_GABA_B4_post_push_spikes.h"
#include "code_objects/GABA_B4_pre_codeobject.h"
#include "code_objects/GABA_B4_pre_push_spikes.h"
#include "code_objects/before_run_GABA_B4_pre_push_spikes.h"
#include "code_objects/GABA_B4_synapses_create_generator_codeobject.h"
#include "code_objects/GABA_B5_post_codeobject.h"
#include "code_objects/GABA_B5_post_push_spikes.h"
#include "code_objects/before_run_GABA_B5_post_push_spikes.h"
#include "code_objects/GABA_B5_pre_codeobject.h"
#include "code_objects/GABA_B5_pre_push_spikes.h"
#include "code_objects/before_run_GABA_B5_pre_push_spikes.h"
#include "code_objects/GABA_B5_synapses_create_generator_codeobject.h"
#include "code_objects/GABA_B6_post_codeobject.h"
#include "code_objects/GABA_B6_post_push_spikes.h"
#include "code_objects/before_run_GABA_B6_post_push_spikes.h"
#include "code_objects/GABA_B6_pre_codeobject.h"
#include "code_objects/GABA_B6_pre_push_spikes.h"
#include "code_objects/before_run_GABA_B6_pre_push_spikes.h"
#include "code_objects/GABA_B6_synapses_create_generator_codeobject.h"
#include "code_objects/GABA_B9_post_codeobject.h"
#include "code_objects/GABA_B9_post_push_spikes.h"
#include "code_objects/before_run_GABA_B9_post_push_spikes.h"
#include "code_objects/GABA_B9_pre_codeobject.h"
#include "code_objects/GABA_B9_pre_push_spikes.h"
#include "code_objects/before_run_GABA_B9_pre_push_spikes.h"
#include "code_objects/GABA_B9_synapses_create_generator_codeobject.h"
#include "code_objects/mon_neuron_input_codeobject.h"
#include "code_objects/PC_output_codeobject.h"
#include "code_objects/PV_output_codeobject.h"
#include "code_objects/SpikeGenerator_codeobject.h"
#include "code_objects/SST_output_codeobject.h"


#include <iostream>
#include <fstream>
#include <string>




int main(int argc, char **argv)
{
        

	brian_start();
        

	{
		using namespace brian;

		
                
        _array_defaultclock_dt[0] = 0.0001;
        _array_defaultclock_dt[0] = 0.0001;
        _array_defaultclock_dt[0] = 0.0001;
        _array_defaultclock_dt[0] = 1.9999999999999998e-05;
        
                        
                        for(int i=0; i<_num__array_Core_0_lastspike; i++)
                        {
                            _array_Core_0_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_not_refractory; i++)
                        {
                            _array_Core_0_not_refractory[i] = true;
                        }
                        
        _array_Core_0_kn[0] = 0.75;
        _array_Core_0_kp[0] = 0.66;
        _array_Core_0_Ut[0] = 0.025;
        _array_Core_0_I0[0] = 1e-12;
        
                        
                        for(int i=0; i<_num__array_Core_0_alpha_soma; i++)
                        {
                            _array_Core_0_alpha_soma[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_alpha_ahp; i++)
                        {
                            _array_Core_0_alpha_ahp[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_alpha_nmda; i++)
                        {
                            _array_Core_0_alpha_nmda[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_alpha_ampa; i++)
                        {
                            _array_Core_0_alpha_ampa[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_alpha_ampa_std; i++)
                        {
                            _array_Core_0_alpha_ampa_std[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_alpha_gaba_a; i++)
                        {
                            _array_Core_0_alpha_gaba_a[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_alpha_gaba_b; i++)
                        {
                            _array_Core_0_alpha_gaba_b[i] = 4;
                        }
                        
        _array_Core_0_Csoma_mem[0] = 2e-12;
        
                        
                        for(int i=0; i<_num__array_Core_0_Isoma_mem; i++)
                        {
                            _array_Core_0_Isoma_mem[i] = 1.1000000000000002e-12;
                        }
                        
        _array_Core_0_Isoma_dpi_tau[0] = 5e-12;
        _array_Core_0_Isoma_th[0] = 2e-09;
        _array_Core_0_Isoma_reset[0] = 1.2e-12;
        
                        
                        for(int i=0; i<_num__array_Core_0_Isoma_const; i++)
                        {
                            _array_Core_0_Isoma_const[i] = 1e-12;
                        }
                        
        _array_Core_0_soma_refP[0] = 0.005;
        _array_Core_0_Csoma_ahp[0] = 4e-12;
        _array_Core_0_Isoma_ahp_tau[0] = 2e-12;
        
                        
                        for(int i=0; i<_num__array_Core_0_Isoma_ahp_w; i++)
                        {
                            _array_Core_0_Isoma_ahp_w[i] = 1e-12;
                        }
                        
        _array_Core_0_Isoma_pfb_gain[0] = 1e-10;
        _array_Core_0_Isoma_pfb_th[0] = 1e-09;
        _array_Core_0_Isoma_pfb_norm[0] = 2e-11;
        
                        
                        for(int i=0; i<_num__array_Core_0_Cnmda; i++)
                        {
                            _array_Core_0_Cnmda[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Inmda_tau; i++)
                        {
                            _array_Core_0_Inmda_tau[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Inmda_w0; i++)
                        {
                            _array_Core_0_Inmda_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Inmda; i++)
                        {
                            _array_Core_0_Inmda[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Inmda_thr; i++)
                        {
                            _array_Core_0_Inmda_thr[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Campa; i++)
                        {
                            _array_Core_0_Campa[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Iampa_tau; i++)
                        {
                            _array_Core_0_Iampa_tau[i] = 2e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Iampa_w0; i++)
                        {
                            _array_Core_0_Iampa_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Iampa; i++)
                        {
                            _array_Core_0_Iampa[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_std_pulse; i++)
                        {
                            _array_Core_0_std_pulse[i] = 1;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_tau_pulse; i++)
                        {
                            _array_Core_0_tau_pulse[i] = 0.005;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Idischarge_w; i++)
                        {
                            _array_Core_0_Idischarge_w[i] = 0.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Va; i++)
                        {
                            _array_Core_0_Va[i] = 0.015;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Vw; i++)
                        {
                            _array_Core_0_Vw[i] = 0.015;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Campa_std; i++)
                        {
                            _array_Core_0_Campa_std[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Iampa_std_tau; i++)
                        {
                            _array_Core_0_Iampa_std_tau[i] = 2e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Iampa_std; i++)
                        {
                            _array_Core_0_Iampa_std[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Cgaba_b; i++)
                        {
                            _array_Core_0_Cgaba_b[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Igaba_b_tau; i++)
                        {
                            _array_Core_0_Igaba_b_tau[i] = 5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Igaba_b_w0; i++)
                        {
                            _array_Core_0_Igaba_b_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Igaba_b; i++)
                        {
                            _array_Core_0_Igaba_b[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Cgaba_a; i++)
                        {
                            _array_Core_0_Cgaba_a[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Igaba_a_tau; i++)
                        {
                            _array_Core_0_Igaba_a_tau[i] = 5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Igaba_a_w0; i++)
                        {
                            _array_Core_0_Igaba_a_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_Igaba_a; i++)
                        {
                            _array_Core_0_Igaba_a[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_lastspike; i++)
                        {
                            _array_Core_1_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_not_refractory; i++)
                        {
                            _array_Core_1_not_refractory[i] = true;
                        }
                        
        _array_Core_1_kn[0] = 0.75;
        _array_Core_1_kp[0] = 0.66;
        _array_Core_1_Ut[0] = 0.025;
        _array_Core_1_I0[0] = 1e-12;
        
                        
                        for(int i=0; i<_num__array_Core_1_alpha_soma; i++)
                        {
                            _array_Core_1_alpha_soma[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_alpha_ahp; i++)
                        {
                            _array_Core_1_alpha_ahp[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_alpha_nmda; i++)
                        {
                            _array_Core_1_alpha_nmda[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_alpha_ampa; i++)
                        {
                            _array_Core_1_alpha_ampa[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_alpha_ampa_std; i++)
                        {
                            _array_Core_1_alpha_ampa_std[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_alpha_gaba_a; i++)
                        {
                            _array_Core_1_alpha_gaba_a[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_alpha_gaba_b; i++)
                        {
                            _array_Core_1_alpha_gaba_b[i] = 4;
                        }
                        
        _array_Core_1_Csoma_mem[0] = 2e-12;
        
                        
                        for(int i=0; i<_num__array_Core_1_Isoma_mem; i++)
                        {
                            _array_Core_1_Isoma_mem[i] = 1.1000000000000002e-12;
                        }
                        
        _array_Core_1_Isoma_dpi_tau[0] = 5e-12;
        _array_Core_1_Isoma_th[0] = 2e-09;
        _array_Core_1_Isoma_reset[0] = 1.2e-12;
        
                        
                        for(int i=0; i<_num__array_Core_1_Isoma_const; i++)
                        {
                            _array_Core_1_Isoma_const[i] = 1e-12;
                        }
                        
        _array_Core_1_soma_refP[0] = 0.005;
        _array_Core_1_Csoma_ahp[0] = 4e-12;
        _array_Core_1_Isoma_ahp_tau[0] = 2e-12;
        
                        
                        for(int i=0; i<_num__array_Core_1_Isoma_ahp_w; i++)
                        {
                            _array_Core_1_Isoma_ahp_w[i] = 1e-12;
                        }
                        
        _array_Core_1_Isoma_pfb_gain[0] = 1e-10;
        _array_Core_1_Isoma_pfb_th[0] = 1e-09;
        _array_Core_1_Isoma_pfb_norm[0] = 2e-11;
        
                        
                        for(int i=0; i<_num__array_Core_1_Cnmda; i++)
                        {
                            _array_Core_1_Cnmda[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Inmda_tau; i++)
                        {
                            _array_Core_1_Inmda_tau[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Inmda_w0; i++)
                        {
                            _array_Core_1_Inmda_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Inmda; i++)
                        {
                            _array_Core_1_Inmda[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Inmda_thr; i++)
                        {
                            _array_Core_1_Inmda_thr[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Campa; i++)
                        {
                            _array_Core_1_Campa[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Iampa_tau; i++)
                        {
                            _array_Core_1_Iampa_tau[i] = 2e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Iampa_w0; i++)
                        {
                            _array_Core_1_Iampa_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Iampa; i++)
                        {
                            _array_Core_1_Iampa[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_std_pulse; i++)
                        {
                            _array_Core_1_std_pulse[i] = 1;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_tau_pulse; i++)
                        {
                            _array_Core_1_tau_pulse[i] = 0.005;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Idischarge_w; i++)
                        {
                            _array_Core_1_Idischarge_w[i] = 0.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Va; i++)
                        {
                            _array_Core_1_Va[i] = 0.015;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Vw; i++)
                        {
                            _array_Core_1_Vw[i] = 0.015;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Campa_std; i++)
                        {
                            _array_Core_1_Campa_std[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Iampa_std_tau; i++)
                        {
                            _array_Core_1_Iampa_std_tau[i] = 2e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Iampa_std; i++)
                        {
                            _array_Core_1_Iampa_std[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Cgaba_b; i++)
                        {
                            _array_Core_1_Cgaba_b[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Igaba_b_tau; i++)
                        {
                            _array_Core_1_Igaba_b_tau[i] = 5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Igaba_b_w0; i++)
                        {
                            _array_Core_1_Igaba_b_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Igaba_b; i++)
                        {
                            _array_Core_1_Igaba_b[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Cgaba_a; i++)
                        {
                            _array_Core_1_Cgaba_a[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Igaba_a_tau; i++)
                        {
                            _array_Core_1_Igaba_a_tau[i] = 5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Igaba_a_w0; i++)
                        {
                            _array_Core_1_Igaba_a_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Igaba_a; i++)
                        {
                            _array_Core_1_Igaba_a[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_lastspike; i++)
                        {
                            _array_Core_2_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_not_refractory; i++)
                        {
                            _array_Core_2_not_refractory[i] = true;
                        }
                        
        _array_Core_2_kn[0] = 0.75;
        _array_Core_2_kp[0] = 0.66;
        _array_Core_2_Ut[0] = 0.025;
        _array_Core_2_I0[0] = 1e-12;
        
                        
                        for(int i=0; i<_num__array_Core_2_alpha_soma; i++)
                        {
                            _array_Core_2_alpha_soma[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_alpha_ahp; i++)
                        {
                            _array_Core_2_alpha_ahp[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_alpha_nmda; i++)
                        {
                            _array_Core_2_alpha_nmda[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_alpha_ampa; i++)
                        {
                            _array_Core_2_alpha_ampa[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_alpha_ampa_std; i++)
                        {
                            _array_Core_2_alpha_ampa_std[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_alpha_gaba_a; i++)
                        {
                            _array_Core_2_alpha_gaba_a[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_alpha_gaba_b; i++)
                        {
                            _array_Core_2_alpha_gaba_b[i] = 4;
                        }
                        
        _array_Core_2_Csoma_mem[0] = 2e-12;
        
                        
                        for(int i=0; i<_num__array_Core_2_Isoma_mem; i++)
                        {
                            _array_Core_2_Isoma_mem[i] = 1.1000000000000002e-12;
                        }
                        
        _array_Core_2_Isoma_dpi_tau[0] = 5e-12;
        _array_Core_2_Isoma_th[0] = 2e-09;
        _array_Core_2_Isoma_reset[0] = 1.2e-12;
        
                        
                        for(int i=0; i<_num__array_Core_2_Isoma_const; i++)
                        {
                            _array_Core_2_Isoma_const[i] = 1e-12;
                        }
                        
        _array_Core_2_soma_refP[0] = 0.005;
        _array_Core_2_Csoma_ahp[0] = 4e-12;
        _array_Core_2_Isoma_ahp_tau[0] = 2e-12;
        
                        
                        for(int i=0; i<_num__array_Core_2_Isoma_ahp_w; i++)
                        {
                            _array_Core_2_Isoma_ahp_w[i] = 1e-12;
                        }
                        
        _array_Core_2_Isoma_pfb_gain[0] = 1e-10;
        _array_Core_2_Isoma_pfb_th[0] = 1e-09;
        _array_Core_2_Isoma_pfb_norm[0] = 2e-11;
        
                        
                        for(int i=0; i<_num__array_Core_2_Cnmda; i++)
                        {
                            _array_Core_2_Cnmda[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Inmda_tau; i++)
                        {
                            _array_Core_2_Inmda_tau[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Inmda_w0; i++)
                        {
                            _array_Core_2_Inmda_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Inmda; i++)
                        {
                            _array_Core_2_Inmda[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Inmda_thr; i++)
                        {
                            _array_Core_2_Inmda_thr[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Campa; i++)
                        {
                            _array_Core_2_Campa[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Iampa_tau; i++)
                        {
                            _array_Core_2_Iampa_tau[i] = 2e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Iampa_w0; i++)
                        {
                            _array_Core_2_Iampa_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Iampa; i++)
                        {
                            _array_Core_2_Iampa[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_std_pulse; i++)
                        {
                            _array_Core_2_std_pulse[i] = 1;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_tau_pulse; i++)
                        {
                            _array_Core_2_tau_pulse[i] = 0.005;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Idischarge_w; i++)
                        {
                            _array_Core_2_Idischarge_w[i] = 0.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Va; i++)
                        {
                            _array_Core_2_Va[i] = 0.015;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Vw; i++)
                        {
                            _array_Core_2_Vw[i] = 0.015;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Campa_std; i++)
                        {
                            _array_Core_2_Campa_std[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Iampa_std_tau; i++)
                        {
                            _array_Core_2_Iampa_std_tau[i] = 2e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Iampa_std; i++)
                        {
                            _array_Core_2_Iampa_std[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Cgaba_b; i++)
                        {
                            _array_Core_2_Cgaba_b[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Igaba_b_tau; i++)
                        {
                            _array_Core_2_Igaba_b_tau[i] = 5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Igaba_b_w0; i++)
                        {
                            _array_Core_2_Igaba_b_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Igaba_b; i++)
                        {
                            _array_Core_2_Igaba_b[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Cgaba_a; i++)
                        {
                            _array_Core_2_Cgaba_a[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Igaba_a_tau; i++)
                        {
                            _array_Core_2_Igaba_a_tau[i] = 5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Igaba_a_w0; i++)
                        {
                            _array_Core_2_Igaba_a_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Igaba_a; i++)
                        {
                            _array_Core_2_Igaba_a[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_lastspike; i++)
                        {
                            _array_Core_3_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_not_refractory; i++)
                        {
                            _array_Core_3_not_refractory[i] = true;
                        }
                        
        _array_Core_3_kn[0] = 0.75;
        _array_Core_3_kp[0] = 0.66;
        _array_Core_3_Ut[0] = 0.025;
        _array_Core_3_I0[0] = 1e-12;
        
                        
                        for(int i=0; i<_num__array_Core_3_alpha_soma; i++)
                        {
                            _array_Core_3_alpha_soma[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_alpha_ahp; i++)
                        {
                            _array_Core_3_alpha_ahp[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_alpha_nmda; i++)
                        {
                            _array_Core_3_alpha_nmda[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_alpha_ampa; i++)
                        {
                            _array_Core_3_alpha_ampa[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_alpha_ampa_std; i++)
                        {
                            _array_Core_3_alpha_ampa_std[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_alpha_gaba_a; i++)
                        {
                            _array_Core_3_alpha_gaba_a[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_alpha_gaba_b; i++)
                        {
                            _array_Core_3_alpha_gaba_b[i] = 4;
                        }
                        
        _array_Core_3_Csoma_mem[0] = 2e-12;
        
                        
                        for(int i=0; i<_num__array_Core_3_Isoma_mem; i++)
                        {
                            _array_Core_3_Isoma_mem[i] = 1.1000000000000002e-12;
                        }
                        
        _array_Core_3_Isoma_dpi_tau[0] = 5e-12;
        _array_Core_3_Isoma_th[0] = 2e-09;
        _array_Core_3_Isoma_reset[0] = 1.2e-12;
        
                        
                        for(int i=0; i<_num__array_Core_3_Isoma_const; i++)
                        {
                            _array_Core_3_Isoma_const[i] = 1e-12;
                        }
                        
        _array_Core_3_soma_refP[0] = 0.005;
        _array_Core_3_Csoma_ahp[0] = 4e-12;
        _array_Core_3_Isoma_ahp_tau[0] = 2e-12;
        
                        
                        for(int i=0; i<_num__array_Core_3_Isoma_ahp_w; i++)
                        {
                            _array_Core_3_Isoma_ahp_w[i] = 1e-12;
                        }
                        
        _array_Core_3_Isoma_pfb_gain[0] = 1e-10;
        _array_Core_3_Isoma_pfb_th[0] = 1e-09;
        _array_Core_3_Isoma_pfb_norm[0] = 2e-11;
        
                        
                        for(int i=0; i<_num__array_Core_3_Cnmda; i++)
                        {
                            _array_Core_3_Cnmda[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Inmda_tau; i++)
                        {
                            _array_Core_3_Inmda_tau[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Inmda_w0; i++)
                        {
                            _array_Core_3_Inmda_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Inmda; i++)
                        {
                            _array_Core_3_Inmda[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Inmda_thr; i++)
                        {
                            _array_Core_3_Inmda_thr[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Campa; i++)
                        {
                            _array_Core_3_Campa[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Iampa_tau; i++)
                        {
                            _array_Core_3_Iampa_tau[i] = 2e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Iampa_w0; i++)
                        {
                            _array_Core_3_Iampa_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Iampa; i++)
                        {
                            _array_Core_3_Iampa[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_std_pulse; i++)
                        {
                            _array_Core_3_std_pulse[i] = 1;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_tau_pulse; i++)
                        {
                            _array_Core_3_tau_pulse[i] = 0.005;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Idischarge_w; i++)
                        {
                            _array_Core_3_Idischarge_w[i] = 0.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Va; i++)
                        {
                            _array_Core_3_Va[i] = 0.015;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Vw; i++)
                        {
                            _array_Core_3_Vw[i] = 0.015;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Campa_std; i++)
                        {
                            _array_Core_3_Campa_std[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Iampa_std_tau; i++)
                        {
                            _array_Core_3_Iampa_std_tau[i] = 2e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Iampa_std; i++)
                        {
                            _array_Core_3_Iampa_std[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Cgaba_b; i++)
                        {
                            _array_Core_3_Cgaba_b[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Igaba_b_tau; i++)
                        {
                            _array_Core_3_Igaba_b_tau[i] = 5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Igaba_b_w0; i++)
                        {
                            _array_Core_3_Igaba_b_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Igaba_b; i++)
                        {
                            _array_Core_3_Igaba_b[i] = 1e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Cgaba_a; i++)
                        {
                            _array_Core_3_Cgaba_a[i] = 2e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Igaba_a_tau; i++)
                        {
                            _array_Core_3_Igaba_a_tau[i] = 5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Igaba_a_w0; i++)
                        {
                            _array_Core_3_Igaba_a_w0[i] = 1e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Igaba_a; i++)
                        {
                            _array_Core_3_Igaba_a[i] = 1e-12;
                        }
                        
        _dynamic_array_SpikeGenerator_spike_number.resize(50);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator_spike_number.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator_spike_number[i] = _static_array__dynamic_array_SpikeGenerator_spike_number[i];
                        }
                        
        _dynamic_array_SpikeGenerator_neuron_index.resize(50);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator_neuron_index.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator_neuron_index[i] = _static_array__dynamic_array_SpikeGenerator_neuron_index[i];
                        }
                        
        _dynamic_array_SpikeGenerator_spike_time.resize(50);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator_spike_time.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator_spike_time[i] = _static_array__dynamic_array_SpikeGenerator_spike_time[i];
                        }
                        
        _dynamic_array_SpikeGenerator__timebins.resize(50);
        _array_SpikeGenerator__lastindex[0] = 0;
        _array_SpikeGenerator_period[0] = 0.0;
        _run_AMPA0_synapses_create_generator_codeobject();
        _run_AMPA_STD1_synapses_create_generator_codeobject();
        _run_AMPA2_synapses_create_generator_codeobject();
        _run_AMPA3_synapses_create_generator_codeobject();
        _run_GABA_B4_synapses_create_generator_codeobject();
        _run_GABA_B5_synapses_create_generator_codeobject();
        _run_GABA_B6_synapses_create_generator_codeobject();
        _run_AMPA7_synapses_create_generator_codeobject();
        _run_AMPA_STD8_synapses_create_generator_codeobject();
        _run_GABA_B9_synapses_create_generator_codeobject();
        _run_GABA_B10_synapses_create_generator_codeobject();
        
                        
                        for(int i=0; i<_dynamic_array_AMPA0_weight.size(); i++)
                        {
                            _dynamic_array_AMPA0_weight[i] = 10;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_AMPA_STD1_weight.size(); i++)
                        {
                            _dynamic_array_AMPA_STD1_weight[i] = 10;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_AMPA2_weight.size(); i++)
                        {
                            _dynamic_array_AMPA2_weight[i] = 0;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_AMPA3_weight.size(); i++)
                        {
                            _dynamic_array_AMPA3_weight[i] = 20.0;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_GABA_B4_weight.size(); i++)
                        {
                            _dynamic_array_GABA_B4_weight[i] = 5;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_GABA_B5_weight.size(); i++)
                        {
                            _dynamic_array_GABA_B5_weight[i] = 0;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_GABA_B6_weight.size(); i++)
                        {
                            _dynamic_array_GABA_B6_weight[i] = 5;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_AMPA7_weight.size(); i++)
                        {
                            _dynamic_array_AMPA7_weight[i] = 0;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_AMPA_STD8_weight.size(); i++)
                        {
                            _dynamic_array_AMPA_STD8_weight[i] = 1.0;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_GABA_B9_weight.size(); i++)
                        {
                            _dynamic_array_GABA_B9_weight[i] = 0;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_GABA_B10_weight.size(); i++)
                        {
                            _dynamic_array_GABA_B10_weight[i] = 0;
                        }
                        
        _array_Core_1_Isoma_dpi_tau[0] = 2.7999999999999998e-12;
        _array_Core_1_Isoma_th[0] = 3.0000000000000004e-08;
        
                        
                        for(int i=0; i<_num__array_Core_1_alpha_soma; i++)
                        {
                            _array_Core_1_alpha_soma[i] = 4;
                        }
                        
        _array_Core_1_Isoma_ahp_tau[0] = 3e-12;
        
                        
                        for(int i=0; i<_num__array_Core_1_Isoma_ahp_w; i++)
                        {
                            _array_Core_1_Isoma_ahp_w[i] = 7e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_alpha_ahp; i++)
                        {
                            _array_Core_1_alpha_ahp[i] = 15;
                        }
                        
        _array_Core_1_soma_refP[0] = 0.002;
        
                        
                        for(int i=0; i<_num__array_Core_1_Isoma_const; i++)
                        {
                            _array_Core_1_Isoma_const[i] = 1.5e-10;
                        }
                        
        _array_Core_2_Isoma_dpi_tau[0] = 7.5e-12;
        _array_Core_2_Isoma_th[0] = 1e-08;
        
                        
                        for(int i=0; i<_num__array_Core_2_alpha_soma; i++)
                        {
                            _array_Core_2_alpha_soma[i] = 3;
                        }
                        
        _array_Core_2_Isoma_ahp_tau[0] = 1.0999999999999999e-11;
        
                        
                        for(int i=0; i<_num__array_Core_2_Isoma_ahp_w; i++)
                        {
                            _array_Core_2_Isoma_ahp_w[i] = 0.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_alpha_ahp; i++)
                        {
                            _array_Core_2_alpha_ahp[i] = 1;
                        }
                        
        _array_Core_2_soma_refP[0] = 0.001;
        
                        
                        for(int i=0; i<_num__array_Core_2_Isoma_const; i++)
                        {
                            _array_Core_2_Isoma_const[i] = 3e-10;
                        }
                        
        _array_Core_3_Isoma_dpi_tau[0] = 1e-12;
        
                        
                        for(int i=0; i<_num__array_Core_3_alpha_soma; i++)
                        {
                            _array_Core_3_alpha_soma[i] = 1;
                        }
                        
        _array_Core_3_Isoma_th[0] = 1e-09;
        _array_Core_3_Isoma_ahp_tau[0] = 3e-11;
        
                        
                        for(int i=0; i<_num__array_Core_3_Isoma_ahp_w; i++)
                        {
                            _array_Core_3_Isoma_ahp_w[i] = 5e-10;
                        }
                        
        _array_Core_3_soma_refP[0] = 0.002;
        
                        
                        for(int i=0; i<_num__array_Core_3_Isoma_const; i++)
                        {
                            _array_Core_3_Isoma_const[i] = 1.5e-10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Iampa_tau; i++)
                        {
                            _array_Core_1_Iampa_tau[i] = 5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_alpha_ampa; i++)
                        {
                            _array_Core_1_alpha_ampa[i] = 4;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Iampa_w0; i++)
                        {
                            _array_Core_1_Iampa_w0[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Iampa_std_tau; i++)
                        {
                            _array_Core_2_Iampa_std_tau[i] = 4e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Va; i++)
                        {
                            _array_Core_2_Va[i] = 0.1;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Vw; i++)
                        {
                            _array_Core_2_Vw[i] = 0.1;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_tau_pulse; i++)
                        {
                            _array_Core_2_tau_pulse[i] = 0.002;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Idischarge_w; i++)
                        {
                            _array_Core_2_Idischarge_w[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_Iampa_w0; i++)
                        {
                            _array_Core_2_Iampa_w0[i] = 2e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Iampa_tau; i++)
                        {
                            _array_Core_3_Iampa_tau[i] = 1e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_alpha_ampa; i++)
                        {
                            _array_Core_3_alpha_ampa[i] = 10;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_Iampa_w0; i++)
                        {
                            _array_Core_3_Iampa_w0[i] = 0.0;
                        }
                        
        _array_defaultclock_timestep[0] = 0;
        _array_defaultclock_t[0] = 0.0;
        _array_SpikeGenerator__lastindex[0] = 0;
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator__timebins.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator__timebins[i] = _static_array__dynamic_array_SpikeGenerator__timebins[i];
                        }
                        
        _array_SpikeGenerator__period_bins[0] = 0.0;
        _before_run_AMPA0_pre_push_spikes();
        _before_run_AMPA2_pre_push_spikes();
        _before_run_AMPA3_pre_push_spikes();
        _before_run_AMPA7_pre_push_spikes();
        _before_run_AMPA_STD1_pre_push_spikes();
        _before_run_AMPA_STD8_pre_push_spikes();
        _before_run_GABA_B10_pre_push_spikes();
        _before_run_GABA_B4_pre_push_spikes();
        _before_run_GABA_B5_pre_push_spikes();
        _before_run_GABA_B6_pre_push_spikes();
        _before_run_GABA_B9_pre_push_spikes();
        _before_run_AMPA0_post_push_spikes();
        _before_run_AMPA2_post_push_spikes();
        _before_run_AMPA3_post_push_spikes();
        _before_run_AMPA7_post_push_spikes();
        _before_run_AMPA_STD1_post_push_spikes();
        _before_run_AMPA_STD8_post_push_spikes();
        _before_run_GABA_B10_post_push_spikes();
        _before_run_GABA_B4_post_push_spikes();
        _before_run_GABA_B5_post_push_spikes();
        _before_run_GABA_B6_post_push_spikes();
        _before_run_GABA_B9_post_push_spikes();
        network.clear();
        network.add(&defaultclock, _run_Core_0_stateupdater_codeobject);
        network.add(&defaultclock, _run_Core_1_stateupdater_codeobject);
        network.add(&defaultclock, _run_Core_2_stateupdater_codeobject);
        network.add(&defaultclock, _run_Core_3_stateupdater_codeobject);
        network.add(&defaultclock, _run_Core_0_thresholder_codeobject);
        network.add(&defaultclock, _run_Core_1_thresholder_codeobject);
        network.add(&defaultclock, _run_Core_2_thresholder_codeobject);
        network.add(&defaultclock, _run_Core_3_thresholder_codeobject);
        network.add(&defaultclock, _run_SpikeGenerator_codeobject);
        network.add(&defaultclock, _run_mon_neuron_input_codeobject);
        network.add(&defaultclock, _run_PC_output_codeobject);
        network.add(&defaultclock, _run_PV_output_codeobject);
        network.add(&defaultclock, _run_SST_output_codeobject);
        network.add(&defaultclock, _run_AMPA0_pre_push_spikes);
        network.add(&defaultclock, _run_AMPA0_pre_codeobject);
        network.add(&defaultclock, _run_AMPA2_pre_push_spikes);
        network.add(&defaultclock, _run_AMPA2_pre_codeobject);
        network.add(&defaultclock, _run_AMPA3_pre_push_spikes);
        network.add(&defaultclock, _run_AMPA3_pre_codeobject);
        network.add(&defaultclock, _run_AMPA7_pre_push_spikes);
        network.add(&defaultclock, _run_AMPA7_pre_codeobject);
        network.add(&defaultclock, _run_AMPA_STD1_pre_push_spikes);
        network.add(&defaultclock, _run_AMPA_STD1_pre_codeobject);
        network.add(&defaultclock, _run_AMPA_STD8_pre_push_spikes);
        network.add(&defaultclock, _run_AMPA_STD8_pre_codeobject);
        network.add(&defaultclock, _run_GABA_B10_pre_push_spikes);
        network.add(&defaultclock, _run_GABA_B10_pre_codeobject);
        network.add(&defaultclock, _run_GABA_B4_pre_push_spikes);
        network.add(&defaultclock, _run_GABA_B4_pre_codeobject);
        network.add(&defaultclock, _run_GABA_B5_pre_push_spikes);
        network.add(&defaultclock, _run_GABA_B5_pre_codeobject);
        network.add(&defaultclock, _run_GABA_B6_pre_push_spikes);
        network.add(&defaultclock, _run_GABA_B6_pre_codeobject);
        network.add(&defaultclock, _run_GABA_B9_pre_push_spikes);
        network.add(&defaultclock, _run_GABA_B9_pre_codeobject);
        network.add(&defaultclock, _run_AMPA0_post_push_spikes);
        network.add(&defaultclock, _run_AMPA0_post_codeobject);
        network.add(&defaultclock, _run_AMPA2_post_push_spikes);
        network.add(&defaultclock, _run_AMPA2_post_codeobject);
        network.add(&defaultclock, _run_AMPA3_post_push_spikes);
        network.add(&defaultclock, _run_AMPA3_post_codeobject);
        network.add(&defaultclock, _run_AMPA7_post_push_spikes);
        network.add(&defaultclock, _run_AMPA7_post_codeobject);
        network.add(&defaultclock, _run_AMPA_STD1_post_push_spikes);
        network.add(&defaultclock, _run_AMPA_STD1_post_codeobject);
        network.add(&defaultclock, _run_AMPA_STD8_post_push_spikes);
        network.add(&defaultclock, _run_AMPA_STD8_post_codeobject);
        network.add(&defaultclock, _run_GABA_B10_post_push_spikes);
        network.add(&defaultclock, _run_GABA_B10_post_codeobject);
        network.add(&defaultclock, _run_GABA_B4_post_push_spikes);
        network.add(&defaultclock, _run_GABA_B4_post_codeobject);
        network.add(&defaultclock, _run_GABA_B5_post_push_spikes);
        network.add(&defaultclock, _run_GABA_B5_post_codeobject);
        network.add(&defaultclock, _run_GABA_B6_post_push_spikes);
        network.add(&defaultclock, _run_GABA_B6_post_codeobject);
        network.add(&defaultclock, _run_GABA_B9_post_push_spikes);
        network.add(&defaultclock, _run_GABA_B9_post_codeobject);
        network.add(&defaultclock, _run_Core_0_resetter_codeobject);
        network.add(&defaultclock, _run_Core_1_resetter_codeobject);
        network.add(&defaultclock, _run_Core_2_resetter_codeobject);
        network.add(&defaultclock, _run_Core_3_resetter_codeobject);
        network.run(1.0, NULL, 10.0);
        _after_run_Core_0_thresholder_codeobject();
        _after_run_Core_1_thresholder_codeobject();
        _after_run_Core_2_thresholder_codeobject();
        _after_run_Core_3_thresholder_codeobject();
        #ifdef DEBUG
        _debugmsg_mon_neuron_input_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_PC_output_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_PV_output_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_SST_output_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA0_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA2_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA3_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA7_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA_STD1_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA_STD8_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_GABA_B10_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_GABA_B4_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_GABA_B5_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_GABA_B6_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_GABA_B9_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA0_post_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA2_post_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA3_post_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA7_post_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA_STD1_post_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA_STD8_post_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_GABA_B10_post_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_GABA_B4_post_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_GABA_B5_post_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_GABA_B6_post_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_GABA_B9_post_codeobject();
        #endif

	}
        

	brian_end();
        

	return 0;
}