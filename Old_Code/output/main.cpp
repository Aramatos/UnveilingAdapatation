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
#include "code_objects/Core_0_resetter_1_codeobject.h"
#include "code_objects/Core_0_stateupdater_1_codeobject.h"
#include "code_objects/Core_0_thresholder_1_codeobject.h"
#include "code_objects/after_run_Core_0_thresholder_1_codeobject.h"
#include "code_objects/Core_1_resetter_1_codeobject.h"
#include "code_objects/Core_1_stateupdater_1_codeobject.h"
#include "code_objects/Core_1_thresholder_1_codeobject.h"
#include "code_objects/after_run_Core_1_thresholder_1_codeobject.h"
#include "code_objects/Core_2_resetter_1_codeobject.h"
#include "code_objects/Core_2_stateupdater_1_codeobject.h"
#include "code_objects/Core_2_thresholder_1_codeobject.h"
#include "code_objects/after_run_Core_2_thresholder_1_codeobject.h"
#include "code_objects/Core_3_resetter_1_codeobject.h"
#include "code_objects/Core_3_stateupdater_1_codeobject.h"
#include "code_objects/Core_3_thresholder_1_codeobject.h"
#include "code_objects/after_run_Core_3_thresholder_1_codeobject.h"
#include "code_objects/InpSpikeGenerator_codeobject.h"
#include "code_objects/mon_neuron_input_codeobject.h"
#include "code_objects/mon_neuron_output_codeobject.h"
#include "code_objects/statemonitor_2_codeobject.h"
#include "code_objects/statemonitor_3_codeobject.h"
#include "code_objects/statemonitor_4_codeobject.h"


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
        _dynamic_array_InpSpikeGenerator_spike_number.resize(1000);
        
                        
                        for(int i=0; i<_dynamic_array_InpSpikeGenerator_spike_number.size(); i++)
                        {
                            _dynamic_array_InpSpikeGenerator_spike_number[i] = _static_array__dynamic_array_InpSpikeGenerator_spike_number[i];
                        }
                        
        _dynamic_array_InpSpikeGenerator_neuron_index.resize(1000);
        
                        
                        for(int i=0; i<_dynamic_array_InpSpikeGenerator_neuron_index.size(); i++)
                        {
                            _dynamic_array_InpSpikeGenerator_neuron_index[i] = _static_array__dynamic_array_InpSpikeGenerator_neuron_index[i];
                        }
                        
        _dynamic_array_InpSpikeGenerator_spike_time.resize(1000);
        
                        
                        for(int i=0; i<_dynamic_array_InpSpikeGenerator_spike_time.size(); i++)
                        {
                            _dynamic_array_InpSpikeGenerator_spike_time[i] = _static_array__dynamic_array_InpSpikeGenerator_spike_time[i];
                        }
                        
        _dynamic_array_InpSpikeGenerator__timebins.resize(1000);
        _array_InpSpikeGenerator__lastindex[0] = 0;
        _array_InpSpikeGenerator_period[0] = 0.0;
        
                        
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
                        
        _run_AMPA0_synapses_create_generator_codeobject();
        
                        
                        for(int i=0; i<_dynamic_array_AMPA0_weight.size(); i++)
                        {
                            _dynamic_array_AMPA0_weight[i] = 1;
                        }
                        
        
                        
                        for(int i=0; i<_dynamic_array_AMPA0_d.size(); i++)
                        {
                            _dynamic_array_AMPA0_d[i] = 0;
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
                        
        
                        
                        for(int i=0; i<_num__array_Core_1_Iconst; i++)
                        {
                            _array_Core_1_Iconst[i] = 5e-13;
                        }
                        
        _array_Core_1_Itau[0] = 1e-12;
        _array_Core_1_Ith[0] = 3e-11;
        _array_Core_1_Itauahp[0] = 5e-13;
        _array_Core_1_Ithahp[0] = 1e-12;
        
                        
                        for(int i=0; i<_num__array_Core_1_Ica; i++)
                        {
                            _array_Core_1_Ica[i] = 3e-12;
                        }
                        
        _array_statemonitor_3__indices[0] = 0;
        _array_statemonitor_2__indices[0] = 0;
        _array_statemonitor_4__indices[0] = 0;
        _array_defaultclock_timestep[0] = 0;
        _array_defaultclock_t[0] = 0.0;
        _array_InpSpikeGenerator__lastindex[0] = 0;
        
                        
                        for(int i=0; i<_dynamic_array_InpSpikeGenerator__timebins.size(); i++)
                        {
                            _dynamic_array_InpSpikeGenerator__timebins[i] = _static_array__dynamic_array_InpSpikeGenerator__timebins[i];
                        }
                        
        _array_InpSpikeGenerator__period_bins[0] = 0.0;
        _before_run_AMPA0_pre_push_spikes();
        _before_run_AMPA0_post_push_spikes();
        network_1.clear();
        network_1.add(&defaultclock, _run_statemonitor_2_codeobject);
        network_1.add(&defaultclock, _run_statemonitor_3_codeobject);
        network_1.add(&defaultclock, _run_statemonitor_4_codeobject);
        network_1.add(&defaultclock, _run_Core_0_stateupdater_1_codeobject);
        network_1.add(&defaultclock, _run_Core_1_stateupdater_1_codeobject);
        network_1.add(&defaultclock, _run_Core_2_stateupdater_1_codeobject);
        network_1.add(&defaultclock, _run_Core_3_stateupdater_1_codeobject);
        network_1.add(&defaultclock, _run_Core_0_thresholder_1_codeobject);
        network_1.add(&defaultclock, _run_Core_1_thresholder_1_codeobject);
        network_1.add(&defaultclock, _run_Core_2_thresholder_1_codeobject);
        network_1.add(&defaultclock, _run_Core_3_thresholder_1_codeobject);
        network_1.add(&defaultclock, _run_InpSpikeGenerator_codeobject);
        network_1.add(&defaultclock, _run_mon_neuron_input_codeobject);
        network_1.add(&defaultclock, _run_mon_neuron_output_codeobject);
        network_1.add(&defaultclock, _run_AMPA0_pre_push_spikes);
        network_1.add(&defaultclock, _run_AMPA0_pre_codeobject);
        network_1.add(&defaultclock, _run_AMPA0_post_push_spikes);
        network_1.add(&defaultclock, _run_AMPA0_post_codeobject);
        network_1.add(&defaultclock, _run_Core_0_resetter_1_codeobject);
        network_1.add(&defaultclock, _run_Core_1_resetter_1_codeobject);
        network_1.add(&defaultclock, _run_Core_2_resetter_1_codeobject);
        network_1.add(&defaultclock, _run_Core_3_resetter_1_codeobject);
        network_1.run(1.0, NULL, 10.0);
        _after_run_Core_0_thresholder_1_codeobject();
        _after_run_Core_1_thresholder_1_codeobject();
        _after_run_Core_2_thresholder_1_codeobject();
        _after_run_Core_3_thresholder_1_codeobject();
        #ifdef DEBUG
        _debugmsg_mon_neuron_input_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_mon_neuron_output_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA0_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_AMPA0_post_codeobject();
        #endif

	}
        

	brian_end();
        

	return 0;
}