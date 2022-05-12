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
#include "code_objects/AMPA1_post_codeobject.h"
#include "code_objects/AMPA1_post_push_spikes.h"
#include "code_objects/before_run_AMPA1_post_push_spikes.h"
#include "code_objects/AMPA1_pre_codeobject.h"
#include "code_objects/AMPA1_pre_push_spikes.h"
#include "code_objects/before_run_AMPA1_pre_push_spikes.h"
#include "code_objects/AMPA1_synapses_create_generator_codeobject.h"
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
#include "code_objects/mon_neuron_output_1_codeobject.h"
#include "code_objects/mon_neuron_output_2_codeobject.h"
#include "code_objects/mon_neuron_output_3_codeobject.h"
#include "code_objects/mon_neuron_output_4_codeobject.h"
#include "code_objects/SpikeGenerator0_codeobject.h"
#include "code_objects/SpikeGenerator1_codeobject.h"
#include "code_objects/SpikeGenerator2_codeobject.h"
#include "code_objects/SpikeGenerator3_codeobject.h"
#include "code_objects/statemonitor_1_codeobject.h"
#include "code_objects/statemonitor_2_codeobject.h"
#include "code_objects/statemonitor_codeobject.h"


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
        _array_defaultclock_dt[0] = 1.9999999999999998e-05;
        
                        
                        for(int i=0; i<_num__array_Core_0_lastspike; i++)
                        {
                            _array_Core_0_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_not_refractory; i++)
                        {
                            _array_Core_0_not_refractory[i] = true;
                        }
                        
        _array_Core_0_ahp[0] = 0;
        
                        
                        for(int i=0; i<_num__array_Core_0_D; i++)
                        {
                            _array_Core_0_D[i] = 0;
                        }
                        
        _array_Core_0_taud[0] = 0.015;
        _array_Core_0_M[0] = 0.0;
        _array_Core_0_kn[0] = 0.75;
        _array_Core_0_kp[0] = 0.66;
        _array_Core_0_Ut[0] = 0.025;
        _array_Core_0_Io[0] = 5e-13;
        _array_Core_0_Cmem[0] = 1.5e-12;
        _array_Core_0_Ispkthr[0] = 1e-09;
        _array_Core_0_refP[0] = 0.005;
        _array_Core_0_Ireset[0] = 6e-13;
        
                        
                        for(int i=0; i<_num__array_Core_0_Iconst; i++)
                        {
                            _array_Core_0_Iconst[i] = 5e-13;
                        }
                        
        _array_Core_0_Itau[0] = 8e-12;
        
                        
                        for(int i=0; i<_num__array_Core_0_Ishunt; i++)
                        {
                            _array_Core_0_Ishunt[i] = 5e-13;
                        }
                        
        _array_Core_0_Ith[0] = 9e-13;
        
                        
                        for(int i=0; i<_num__array_Core_0_Ica; i++)
                        {
                            _array_Core_0_Ica[i] = 2e-12;
                        }
                        
        _array_Core_0_Itauahp[0] = 1e-12;
        _array_Core_0_Ithahp[0] = 1e-12;
        _array_Core_0_Cahp[0] = 1e-12;
        
                        
                        for(int i=0; i<_num__array_Core_0_Iahp; i++)
                        {
                            _array_Core_0_Iahp[i] = 5e-13;
                        }
                        
        _array_Core_0_Iath[0] = 5e-10;
        _array_Core_0_Iagain[0] = 5e-11;
        _array_Core_0_Ianorm[0] = 1e-11;
        
                        
                        for(int i=0; i<_num__array_Core_0_C_syn_nmda; i++)
                        {
                            _array_Core_0_C_syn_nmda[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_tau_syn_nmda; i++)
                        {
                            _array_Core_0_I_tau_syn_nmda[i] = 8.7e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_wo_syn_nmda; i++)
                        {
                            _array_Core_0_I_wo_syn_nmda[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_g_syn_nmda; i++)
                        {
                            _array_Core_0_I_g_syn_nmda[i] = 2.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_syn_nmda; i++)
                        {
                            _array_Core_0_I_syn_nmda[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_C_syn_ampa; i++)
                        {
                            _array_Core_0_C_syn_ampa[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_tau_syn_ampa; i++)
                        {
                            _array_Core_0_I_tau_syn_ampa[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_wo_syn_ampa; i++)
                        {
                            _array_Core_0_I_wo_syn_ampa[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_g_syn_ampa; i++)
                        {
                            _array_Core_0_I_g_syn_ampa[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_syn_ampa; i++)
                        {
                            _array_Core_0_I_syn_ampa[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_C_syn_gaba_b; i++)
                        {
                            _array_Core_0_C_syn_gaba_b[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_tau_syn_gaba_b; i++)
                        {
                            _array_Core_0_I_tau_syn_gaba_b[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_wo_syn_gaba_b; i++)
                        {
                            _array_Core_0_I_wo_syn_gaba_b[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_g_syn_gaba_b; i++)
                        {
                            _array_Core_0_I_g_syn_gaba_b[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_syn_gaba_b; i++)
                        {
                            _array_Core_0_I_syn_gaba_b[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_C_syn_gaba_a; i++)
                        {
                            _array_Core_0_C_syn_gaba_a[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_tau_syn_gaba_a; i++)
                        {
                            _array_Core_0_I_tau_syn_gaba_a[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_wo_syn_gaba_a; i++)
                        {
                            _array_Core_0_I_wo_syn_gaba_a[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_g_syn_gaba_a; i++)
                        {
                            _array_Core_0_I_g_syn_gaba_a[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_0_I_syn_gaba_a; i++)
                        {
                            _array_Core_0_I_syn_gaba_a[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_lastspike; i++)
                        {
                            _array_Core_1_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_not_refractory; i++)
                        {
                            _array_Core_1_not_refractory[i] = true;
                        }
                        
        _array_Core_1_ahp[0] = 0;
        
                        
                        for(int i=0; i<_num__array_Core_1_D; i++)
                        {
                            _array_Core_1_D[i] = 0;
                        }
                        
        _array_Core_1_taud[0] = 0.015;
        _array_Core_1_M[0] = 0.0;
        _array_Core_1_kn[0] = 0.75;
        _array_Core_1_kp[0] = 0.66;
        _array_Core_1_Ut[0] = 0.025;
        _array_Core_1_Io[0] = 5e-13;
        _array_Core_1_Cmem[0] = 1.5e-12;
        _array_Core_1_Ispkthr[0] = 1e-09;
        _array_Core_1_refP[0] = 0.005;
        _array_Core_1_Ireset[0] = 6e-13;
        
                        
                        for(int i=0; i<_num__array_Core_1_Iconst; i++)
                        {
                            _array_Core_1_Iconst[i] = 5e-13;
                        }
                        
        _array_Core_1_Itau[0] = 8e-12;
        
                        
                        for(int i=0; i<_num__array_Core_1_Ishunt; i++)
                        {
                            _array_Core_1_Ishunt[i] = 5e-13;
                        }
                        
        _array_Core_1_Ith[0] = 9e-13;
        
                        
                        for(int i=0; i<_num__array_Core_1_Ica; i++)
                        {
                            _array_Core_1_Ica[i] = 2e-12;
                        }
                        
        _array_Core_1_Itauahp[0] = 1e-12;
        _array_Core_1_Ithahp[0] = 1e-12;
        _array_Core_1_Cahp[0] = 1e-12;
        
                        
                        for(int i=0; i<_num__array_Core_1_Iahp; i++)
                        {
                            _array_Core_1_Iahp[i] = 5e-13;
                        }
                        
        _array_Core_1_Iath[0] = 5e-10;
        _array_Core_1_Iagain[0] = 5e-11;
        _array_Core_1_Ianorm[0] = 1e-11;
        
                        
                        for(int i=0; i<_num__array_Core_1_C_syn_nmda; i++)
                        {
                            _array_Core_1_C_syn_nmda[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_tau_syn_nmda; i++)
                        {
                            _array_Core_1_I_tau_syn_nmda[i] = 8.7e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_wo_syn_nmda; i++)
                        {
                            _array_Core_1_I_wo_syn_nmda[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_g_syn_nmda; i++)
                        {
                            _array_Core_1_I_g_syn_nmda[i] = 2.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_syn_nmda; i++)
                        {
                            _array_Core_1_I_syn_nmda[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_C_syn_ampa; i++)
                        {
                            _array_Core_1_C_syn_ampa[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_tau_syn_ampa; i++)
                        {
                            _array_Core_1_I_tau_syn_ampa[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_wo_syn_ampa; i++)
                        {
                            _array_Core_1_I_wo_syn_ampa[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_g_syn_ampa; i++)
                        {
                            _array_Core_1_I_g_syn_ampa[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_syn_ampa; i++)
                        {
                            _array_Core_1_I_syn_ampa[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_C_syn_gaba_b; i++)
                        {
                            _array_Core_1_C_syn_gaba_b[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_tau_syn_gaba_b; i++)
                        {
                            _array_Core_1_I_tau_syn_gaba_b[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_wo_syn_gaba_b; i++)
                        {
                            _array_Core_1_I_wo_syn_gaba_b[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_g_syn_gaba_b; i++)
                        {
                            _array_Core_1_I_g_syn_gaba_b[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_syn_gaba_b; i++)
                        {
                            _array_Core_1_I_syn_gaba_b[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_C_syn_gaba_a; i++)
                        {
                            _array_Core_1_C_syn_gaba_a[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_tau_syn_gaba_a; i++)
                        {
                            _array_Core_1_I_tau_syn_gaba_a[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_wo_syn_gaba_a; i++)
                        {
                            _array_Core_1_I_wo_syn_gaba_a[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_g_syn_gaba_a; i++)
                        {
                            _array_Core_1_I_g_syn_gaba_a[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_syn_gaba_a; i++)
                        {
                            _array_Core_1_I_syn_gaba_a[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_lastspike; i++)
                        {
                            _array_Core_2_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_not_refractory; i++)
                        {
                            _array_Core_2_not_refractory[i] = true;
                        }
                        
        _array_Core_2_ahp[0] = 0;
        
                        
                        for(int i=0; i<_num__array_Core_2_D; i++)
                        {
                            _array_Core_2_D[i] = 0;
                        }
                        
        _array_Core_2_taud[0] = 0.015;
        _array_Core_2_M[0] = 0.0;
        _array_Core_2_kn[0] = 0.75;
        _array_Core_2_kp[0] = 0.66;
        _array_Core_2_Ut[0] = 0.025;
        _array_Core_2_Io[0] = 5e-13;
        _array_Core_2_Cmem[0] = 1.5e-12;
        _array_Core_2_Ispkthr[0] = 1e-09;
        _array_Core_2_refP[0] = 0.005;
        _array_Core_2_Ireset[0] = 6e-13;
        
                        
                        for(int i=0; i<_num__array_Core_2_Iconst; i++)
                        {
                            _array_Core_2_Iconst[i] = 5e-13;
                        }
                        
        _array_Core_2_Itau[0] = 8e-12;
        
                        
                        for(int i=0; i<_num__array_Core_2_Ishunt; i++)
                        {
                            _array_Core_2_Ishunt[i] = 5e-13;
                        }
                        
        _array_Core_2_Ith[0] = 9e-13;
        
                        
                        for(int i=0; i<_num__array_Core_2_Ica; i++)
                        {
                            _array_Core_2_Ica[i] = 2e-12;
                        }
                        
        _array_Core_2_Itauahp[0] = 1e-12;
        _array_Core_2_Ithahp[0] = 1e-12;
        _array_Core_2_Cahp[0] = 1e-12;
        
                        
                        for(int i=0; i<_num__array_Core_2_Iahp; i++)
                        {
                            _array_Core_2_Iahp[i] = 5e-13;
                        }
                        
        _array_Core_2_Iath[0] = 5e-10;
        _array_Core_2_Iagain[0] = 5e-11;
        _array_Core_2_Ianorm[0] = 1e-11;
        
                        
                        for(int i=0; i<_num__array_Core_2_C_syn_nmda; i++)
                        {
                            _array_Core_2_C_syn_nmda[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_tau_syn_nmda; i++)
                        {
                            _array_Core_2_I_tau_syn_nmda[i] = 8.7e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_wo_syn_nmda; i++)
                        {
                            _array_Core_2_I_wo_syn_nmda[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_g_syn_nmda; i++)
                        {
                            _array_Core_2_I_g_syn_nmda[i] = 2.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_syn_nmda; i++)
                        {
                            _array_Core_2_I_syn_nmda[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_C_syn_ampa; i++)
                        {
                            _array_Core_2_C_syn_ampa[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_tau_syn_ampa; i++)
                        {
                            _array_Core_2_I_tau_syn_ampa[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_wo_syn_ampa; i++)
                        {
                            _array_Core_2_I_wo_syn_ampa[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_g_syn_ampa; i++)
                        {
                            _array_Core_2_I_g_syn_ampa[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_syn_ampa; i++)
                        {
                            _array_Core_2_I_syn_ampa[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_C_syn_gaba_b; i++)
                        {
                            _array_Core_2_C_syn_gaba_b[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_tau_syn_gaba_b; i++)
                        {
                            _array_Core_2_I_tau_syn_gaba_b[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_wo_syn_gaba_b; i++)
                        {
                            _array_Core_2_I_wo_syn_gaba_b[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_g_syn_gaba_b; i++)
                        {
                            _array_Core_2_I_g_syn_gaba_b[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_syn_gaba_b; i++)
                        {
                            _array_Core_2_I_syn_gaba_b[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_C_syn_gaba_a; i++)
                        {
                            _array_Core_2_C_syn_gaba_a[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_tau_syn_gaba_a; i++)
                        {
                            _array_Core_2_I_tau_syn_gaba_a[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_wo_syn_gaba_a; i++)
                        {
                            _array_Core_2_I_wo_syn_gaba_a[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_g_syn_gaba_a; i++)
                        {
                            _array_Core_2_I_g_syn_gaba_a[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_2_I_syn_gaba_a; i++)
                        {
                            _array_Core_2_I_syn_gaba_a[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_lastspike; i++)
                        {
                            _array_Core_3_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_not_refractory; i++)
                        {
                            _array_Core_3_not_refractory[i] = true;
                        }
                        
        _array_Core_3_ahp[0] = 0;
        
                        
                        for(int i=0; i<_num__array_Core_3_D; i++)
                        {
                            _array_Core_3_D[i] = 0;
                        }
                        
        _array_Core_3_taud[0] = 0.015;
        _array_Core_3_M[0] = 0.0;
        _array_Core_3_kn[0] = 0.75;
        _array_Core_3_kp[0] = 0.66;
        _array_Core_3_Ut[0] = 0.025;
        _array_Core_3_Io[0] = 5e-13;
        _array_Core_3_Cmem[0] = 1.5e-12;
        _array_Core_3_Ispkthr[0] = 1e-09;
        _array_Core_3_refP[0] = 0.005;
        _array_Core_3_Ireset[0] = 6e-13;
        
                        
                        for(int i=0; i<_num__array_Core_3_Iconst; i++)
                        {
                            _array_Core_3_Iconst[i] = 5e-13;
                        }
                        
        _array_Core_3_Itau[0] = 8e-12;
        
                        
                        for(int i=0; i<_num__array_Core_3_Ishunt; i++)
                        {
                            _array_Core_3_Ishunt[i] = 5e-13;
                        }
                        
        _array_Core_3_Ith[0] = 9e-13;
        
                        
                        for(int i=0; i<_num__array_Core_3_Ica; i++)
                        {
                            _array_Core_3_Ica[i] = 2e-12;
                        }
                        
        _array_Core_3_Itauahp[0] = 1e-12;
        _array_Core_3_Ithahp[0] = 1e-12;
        _array_Core_3_Cahp[0] = 1e-12;
        
                        
                        for(int i=0; i<_num__array_Core_3_Iahp; i++)
                        {
                            _array_Core_3_Iahp[i] = 5e-13;
                        }
                        
        _array_Core_3_Iath[0] = 5e-10;
        _array_Core_3_Iagain[0] = 5e-11;
        _array_Core_3_Ianorm[0] = 1e-11;
        
                        
                        for(int i=0; i<_num__array_Core_3_C_syn_nmda; i++)
                        {
                            _array_Core_3_C_syn_nmda[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_tau_syn_nmda; i++)
                        {
                            _array_Core_3_I_tau_syn_nmda[i] = 8.7e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_wo_syn_nmda; i++)
                        {
                            _array_Core_3_I_wo_syn_nmda[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_g_syn_nmda; i++)
                        {
                            _array_Core_3_I_g_syn_nmda[i] = 2.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_syn_nmda; i++)
                        {
                            _array_Core_3_I_syn_nmda[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_C_syn_ampa; i++)
                        {
                            _array_Core_3_C_syn_ampa[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_tau_syn_ampa; i++)
                        {
                            _array_Core_3_I_tau_syn_ampa[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_wo_syn_ampa; i++)
                        {
                            _array_Core_3_I_wo_syn_ampa[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_g_syn_ampa; i++)
                        {
                            _array_Core_3_I_g_syn_ampa[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_syn_ampa; i++)
                        {
                            _array_Core_3_I_syn_ampa[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_C_syn_gaba_b; i++)
                        {
                            _array_Core_3_C_syn_gaba_b[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_tau_syn_gaba_b; i++)
                        {
                            _array_Core_3_I_tau_syn_gaba_b[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_wo_syn_gaba_b; i++)
                        {
                            _array_Core_3_I_wo_syn_gaba_b[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_g_syn_gaba_b; i++)
                        {
                            _array_Core_3_I_g_syn_gaba_b[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_syn_gaba_b; i++)
                        {
                            _array_Core_3_I_syn_gaba_b[i] = 5e-13;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_C_syn_gaba_a; i++)
                        {
                            _array_Core_3_C_syn_gaba_a[i] = 1.5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_tau_syn_gaba_a; i++)
                        {
                            _array_Core_3_I_tau_syn_gaba_a[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_wo_syn_gaba_a; i++)
                        {
                            _array_Core_3_I_wo_syn_gaba_a[i] = 5e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_g_syn_gaba_a; i++)
                        {
                            _array_Core_3_I_g_syn_gaba_a[i] = 1e-11;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_3_I_syn_gaba_a; i++)
                        {
                            _array_Core_3_I_syn_gaba_a[i] = 5e-13;
                        }
                        
        _dynamic_array_SpikeGenerator0_spike_number.resize(200);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator0_spike_number.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator0_spike_number[i] = _static_array__dynamic_array_SpikeGenerator0_spike_number[i];
                        }
                        
        _dynamic_array_SpikeGenerator0_neuron_index.resize(200);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator0_neuron_index.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator0_neuron_index[i] = _static_array__dynamic_array_SpikeGenerator0_neuron_index[i];
                        }
                        
        _dynamic_array_SpikeGenerator0_spike_time.resize(200);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator0_spike_time.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator0_spike_time[i] = _static_array__dynamic_array_SpikeGenerator0_spike_time[i];
                        }
                        
        _dynamic_array_SpikeGenerator0__timebins.resize(200);
        _array_SpikeGenerator0__lastindex[0] = 0;
        _array_SpikeGenerator0_period[0] = 0.0;
        _run_AMPA0_synapses_create_generator_codeobject();
        
                        
                        for(int i=0; i<_dynamic_array_AMPA0_weight.size(); i++)
                        {
                            _dynamic_array_AMPA0_weight[i] = 1;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_AMPA0_d.size(); i++)
                        {
                            _dynamic_array_AMPA0_d[i] = 0;
                        }
                        
        _dynamic_array_SpikeGenerator1_spike_number.resize(334);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator1_spike_number.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator1_spike_number[i] = _static_array__dynamic_array_SpikeGenerator1_spike_number[i];
                        }
                        
        _dynamic_array_SpikeGenerator1_neuron_index.resize(334);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator1_neuron_index.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator1_neuron_index[i] = _static_array__dynamic_array_SpikeGenerator1_neuron_index[i];
                        }
                        
        _dynamic_array_SpikeGenerator1_spike_time.resize(334);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator1_spike_time.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator1_spike_time[i] = _static_array__dynamic_array_SpikeGenerator1_spike_time[i];
                        }
                        
        _dynamic_array_SpikeGenerator1__timebins.resize(334);
        _array_SpikeGenerator1__lastindex[0] = 0;
        _array_SpikeGenerator1_period[0] = 0.0;
        _run_AMPA1_synapses_create_generator_codeobject();
        
                        
                        for(int i=0; i<_dynamic_array_AMPA1_weight.size(); i++)
                        {
                            _dynamic_array_AMPA1_weight[i] = 1;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_AMPA1_d.size(); i++)
                        {
                            _dynamic_array_AMPA1_d[i] = 0;
                        }
                        
        _dynamic_array_SpikeGenerator2_spike_number.resize(500);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator2_spike_number.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator2_spike_number[i] = _static_array__dynamic_array_SpikeGenerator2_spike_number[i];
                        }
                        
        _dynamic_array_SpikeGenerator2_neuron_index.resize(500);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator2_neuron_index.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator2_neuron_index[i] = _static_array__dynamic_array_SpikeGenerator2_neuron_index[i];
                        }
                        
        _dynamic_array_SpikeGenerator2_spike_time.resize(500);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator2_spike_time.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator2_spike_time[i] = _static_array__dynamic_array_SpikeGenerator2_spike_time[i];
                        }
                        
        _dynamic_array_SpikeGenerator2__timebins.resize(500);
        _array_SpikeGenerator2__lastindex[0] = 0;
        _array_SpikeGenerator2_period[0] = 0.0;
        _run_AMPA2_synapses_create_generator_codeobject();
        
                        
                        for(int i=0; i<_dynamic_array_AMPA2_weight.size(); i++)
                        {
                            _dynamic_array_AMPA2_weight[i] = 1;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_AMPA2_d.size(); i++)
                        {
                            _dynamic_array_AMPA2_d[i] = 0;
                        }
                        
        _dynamic_array_SpikeGenerator3_spike_number.resize(1000);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator3_spike_number.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator3_spike_number[i] = _static_array__dynamic_array_SpikeGenerator3_spike_number[i];
                        }
                        
        _dynamic_array_SpikeGenerator3_neuron_index.resize(1000);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator3_neuron_index.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator3_neuron_index[i] = _static_array__dynamic_array_SpikeGenerator3_neuron_index[i];
                        }
                        
        _dynamic_array_SpikeGenerator3_spike_time.resize(1000);
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator3_spike_time.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator3_spike_time[i] = _static_array__dynamic_array_SpikeGenerator3_spike_time[i];
                        }
                        
        _dynamic_array_SpikeGenerator3__timebins.resize(1000);
        _array_SpikeGenerator3__lastindex[0] = 0;
        _array_SpikeGenerator3_period[0] = 0.0;
        _run_AMPA3_synapses_create_generator_codeobject();
        
                        
                        for(int i=0; i<_dynamic_array_AMPA3_weight.size(); i++)
                        {
                            _dynamic_array_AMPA3_weight[i] = 1;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_AMPA3_d.size(); i++)
                        {
                            _dynamic_array_AMPA3_d[i] = 0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_tau_syn_ampa; i++)
                        {
                            _array_Core_1_I_tau_syn_ampa[i] = 5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_g_syn_ampa; i++)
                        {
                            _array_Core_1_I_g_syn_ampa[i] = 5e-12;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_I_wo_syn_ampa; i++)
                        {
                            _array_Core_1_I_wo_syn_ampa[i] = 1e-10;
                        }
                        
        _array_Core_1_Itau[0] = 2e-12;
        _array_Core_1_Ith[0] = 1e-11;
        _array_Core_1_Itauahp[0] = 5e-13;
        _array_Core_1_Ithahp[0] = 5e-13;
        
                        
                        for(int i=0; i<_num__array_Core_1_Ica; i++)
                        {
                            _array_Core_1_Ica[i] = 6e-12;
                        }
                        
        _array_statemonitor__indices[0] = 0;
        _array_statemonitor_1__indices[0] = 0;
        _array_statemonitor__indices_1[0] = 0;
        _array_statemonitor_1__indices_1[0] = 0;
        
                        
                        for(int i=0; i<_num__array_statemonitor__indices_2; i++)
                        {
                            _array_statemonitor__indices_2[i] = _static_array__array_statemonitor__indices_2[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_statemonitor_2__indices; i++)
                        {
                            _array_statemonitor_2__indices[i] = _static_array__array_statemonitor_2__indices[i];
                        }
                        
        _array_defaultclock_timestep[0] = 0;
        _array_defaultclock_t[0] = 0.0;
        _array_SpikeGenerator0__lastindex[0] = 0;
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator0__timebins.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator0__timebins[i] = _static_array__dynamic_array_SpikeGenerator0__timebins[i];
                        }
                        
        _array_SpikeGenerator0__period_bins[0] = 0.0;
        _array_SpikeGenerator1__lastindex[0] = 0;
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator1__timebins.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator1__timebins[i] = _static_array__dynamic_array_SpikeGenerator1__timebins[i];
                        }
                        
        _array_SpikeGenerator1__period_bins[0] = 0.0;
        _array_SpikeGenerator2__lastindex[0] = 0;
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator2__timebins.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator2__timebins[i] = _static_array__dynamic_array_SpikeGenerator2__timebins[i];
                        }
                        
        _array_SpikeGenerator2__period_bins[0] = 0.0;
        _array_SpikeGenerator3__lastindex[0] = 0;
        
                        
                        for(int i=0; i<_dynamic_array_SpikeGenerator3__timebins.size(); i++)
                        {
                            _dynamic_array_SpikeGenerator3__timebins[i] = _static_array__dynamic_array_SpikeGenerator3__timebins[i];
                        }
                        
        _array_SpikeGenerator3__period_bins[0] = 0.0;
        _before_run_AMPA0_pre_push_spikes();
        _before_run_AMPA1_pre_push_spikes();
        _before_run_AMPA2_pre_push_spikes();
        _before_run_AMPA3_pre_push_spikes();
        _before_run_AMPA0_post_push_spikes();
        _before_run_AMPA1_post_push_spikes();
        _before_run_AMPA2_post_push_spikes();
        _before_run_AMPA3_post_push_spikes();
        network.clear();
        network.add(&defaultclock, _run_statemonitor_codeobject);
        network.add(&defaultclock, _run_statemonitor_1_codeobject);
        network.add(&defaultclock, _run_statemonitor_2_codeobject);
        network.add(&defaultclock, _run_Core_0_stateupdater_codeobject);
        network.add(&defaultclock, _run_Core_1_stateupdater_codeobject);
        network.add(&defaultclock, _run_Core_2_stateupdater_codeobject);
        network.add(&defaultclock, _run_Core_3_stateupdater_codeobject);
        network.add(&defaultclock, _run_Core_0_thresholder_codeobject);
        network.add(&defaultclock, _run_Core_1_thresholder_codeobject);
        network.add(&defaultclock, _run_Core_2_thresholder_codeobject);
        network.add(&defaultclock, _run_Core_3_thresholder_codeobject);
        network.add(&defaultclock, _run_SpikeGenerator0_codeobject);
        network.add(&defaultclock, _run_SpikeGenerator1_codeobject);
        network.add(&defaultclock, _run_SpikeGenerator2_codeobject);
        network.add(&defaultclock, _run_SpikeGenerator3_codeobject);
        network.add(&defaultclock, _run_mon_neuron_output_1_codeobject);
        network.add(&defaultclock, _run_mon_neuron_output_2_codeobject);
        network.add(&defaultclock, _run_mon_neuron_output_3_codeobject);
        network.add(&defaultclock, _run_mon_neuron_output_4_codeobject);
        network.add(&defaultclock, _run_AMPA0_pre_push_spikes);
        network.add(&defaultclock, _run_AMPA0_pre_codeobject);
        network.add(&defaultclock, _run_AMPA1_pre_push_spikes);
        network.add(&defaultclock, _run_AMPA1_pre_codeobject);
        network.add(&defaultclock, _run_AMPA2_pre_push_spikes);
        network.add(&defaultclock, _run_AMPA2_pre_codeobject);
        network.add(&defaultclock, _run_AMPA3_pre_push_spikes);
        network.add(&defaultclock, _run_AMPA3_pre_codeobject);
        network.add(&defaultclock, _run_AMPA0_post_push_spikes);
        network.add(&defaultclock, _run_AMPA0_post_codeobject);
        network.add(&defaultclock, _run_AMPA1_post_push_spikes);
        network.add(&defaultclock, _run_AMPA1_post_codeobject);
        network.add(&defaultclock, _run_AMPA2_post_push_spikes);
        network.add(&defaultclock, _run_AMPA2_post_codeobject);
        network.add(&defaultclock, _run_AMPA3_post_push_spikes);
        network.add(&defaultclock, _run_AMPA3_post_codeobject);
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
        _debugmsg_mon_neuron_output_1_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_mon_neuron_output_2_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_mon_neuron_output_3_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_mon_neuron_output_4_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA0_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA1_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA2_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA3_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA0_post_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA1_post_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA2_post_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA3_post_codeobject();
        #endif

	}
        

	brian_end();
        

	return 0;
}