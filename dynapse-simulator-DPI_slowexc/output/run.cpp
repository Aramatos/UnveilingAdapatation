#include<stdlib.h>
#include "objects.h"
#include<ctime>
#include "randomkit.h"

#include "code_objects/AMPA0_post_codeobject_4.h"
#include "code_objects/AMPA0_post_push_spikes.h"
#include "code_objects/AMPA0_pre_codeobject_4.h"
#include "code_objects/AMPA0_pre_push_spikes.h"
#include "code_objects/AMPA0_synapses_create_generator_codeobject.h"
#include "code_objects/AMPA1_post_codeobject_4.h"
#include "code_objects/AMPA1_post_push_spikes.h"
#include "code_objects/AMPA1_pre_codeobject_4.h"
#include "code_objects/AMPA1_pre_push_spikes.h"
#include "code_objects/AMPA1_synapses_create_generator_codeobject.h"
#include "code_objects/AMPA2_post_codeobject_4.h"
#include "code_objects/AMPA2_post_push_spikes.h"
#include "code_objects/AMPA2_pre_codeobject_4.h"
#include "code_objects/AMPA2_pre_push_spikes.h"
#include "code_objects/AMPA2_synapses_create_generator_codeobject.h"
#include "code_objects/Core_0_resetter_1_codeobject.h"
#include "code_objects/Core_0_stateupdater_1_codeobject.h"
#include "code_objects/Core_0_thresholder_1_codeobject.h"
#include "code_objects/Core_1_resetter_1_codeobject.h"
#include "code_objects/Core_1_stateupdater_1_codeobject.h"
#include "code_objects/Core_1_thresholder_1_codeobject.h"
#include "code_objects/Core_2_resetter_1_codeobject.h"
#include "code_objects/Core_2_stateupdater_1_codeobject.h"
#include "code_objects/Core_2_thresholder_1_codeobject.h"
#include "code_objects/Core_3_resetter_1_codeobject.h"
#include "code_objects/Core_3_stateupdater_1_codeobject.h"
#include "code_objects/Core_3_thresholder_1_codeobject.h"
#include "code_objects/GABA_B10_post_codeobject_4.h"
#include "code_objects/GABA_B10_post_push_spikes.h"
#include "code_objects/GABA_B10_pre_codeobject_3.h"
#include "code_objects/GABA_B10_pre_push_spikes.h"
#include "code_objects/GABA_B10_synapses_create_generator_codeobject.h"
#include "code_objects/GABA_B4_post_codeobject_4.h"
#include "code_objects/GABA_B4_post_push_spikes.h"
#include "code_objects/GABA_B4_pre_codeobject_4.h"
#include "code_objects/GABA_B4_pre_push_spikes.h"
#include "code_objects/GABA_B4_synapses_create_generator_codeobject.h"
#include "code_objects/GABA_B5_post_codeobject_4.h"
#include "code_objects/GABA_B5_post_push_spikes.h"
#include "code_objects/GABA_B5_pre_codeobject_4.h"
#include "code_objects/GABA_B5_pre_push_spikes.h"
#include "code_objects/GABA_B5_synapses_create_generator_codeobject.h"
#include "code_objects/GABA_B6_post_codeobject_4.h"
#include "code_objects/GABA_B6_post_push_spikes.h"
#include "code_objects/GABA_B6_pre_codeobject_4.h"
#include "code_objects/GABA_B6_pre_push_spikes.h"
#include "code_objects/GABA_B6_synapses_create_generator_codeobject.h"
#include "code_objects/GABA_B9_post_codeobject_4.h"
#include "code_objects/GABA_B9_post_push_spikes.h"
#include "code_objects/GABA_B9_pre_codeobject_4.h"
#include "code_objects/GABA_B9_pre_push_spikes.h"
#include "code_objects/GABA_B9_synapses_create_generator_codeobject.h"
#include "code_objects/mon_neuron_input_codeobject_9.h"
#include "code_objects/NMDA3_post_codeobject_4.h"
#include "code_objects/NMDA3_post_push_spikes.h"
#include "code_objects/NMDA3_pre_codeobject_4.h"
#include "code_objects/NMDA3_pre_push_spikes.h"
#include "code_objects/NMDA3_synapses_create_generator_codeobject.h"
#include "code_objects/NMDA7_post_codeobject_4.h"
#include "code_objects/NMDA7_post_push_spikes.h"
#include "code_objects/NMDA7_pre_codeobject_4.h"
#include "code_objects/NMDA7_pre_push_spikes.h"
#include "code_objects/NMDA7_synapses_create_generator_codeobject.h"
#include "code_objects/NMDA8_post_codeobject.h"
#include "code_objects/NMDA8_post_push_spikes.h"
#include "code_objects/NMDA8_pre_codeobject_4.h"
#include "code_objects/NMDA8_pre_push_spikes.h"
#include "code_objects/NMDA8_synapses_create_generator_codeobject.h"
#include "code_objects/PC_output_codeobject_1.h"
#include "code_objects/PV_output_codeobject_1.h"
#include "code_objects/SpikeGenerator_codeobject_10.h"
#include "code_objects/SST_output_codeobject_1.h"


void brian_start()
{
	_init_arrays();
	_load_arrays();
	// Initialize clocks (link timestep and dt to the respective arrays)
    brian::defaultclock.timestep = brian::_array_defaultclock_timestep;
    brian::defaultclock.dt = brian::_array_defaultclock_dt;
    brian::defaultclock.t = brian::_array_defaultclock_t;
    for (int i=0; i<1; i++)
	    rk_randomseed(brian::_mersenne_twister_states[i]);  // Note that this seed can be potentially replaced in main.cpp
}

void brian_end()
{
	_write_arrays();
	_dealloc_arrays();
}


