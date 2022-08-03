#include<stdlib.h>
#include "objects.h"
#include<ctime>
#include "randomkit.h"

#include "code_objects/AMPA1_post_codeobject_2.h"
#include "code_objects/AMPA1_post_push_spikes.h"
#include "code_objects/AMPA1_pre_codeobject_2.h"
#include "code_objects/AMPA1_pre_push_spikes.h"
#include "code_objects/AMPA1_synapses_create_generator_codeobject.h"
#include "code_objects/Core_0_resetter_codeobject.h"
#include "code_objects/Core_0_stateupdater_codeobject.h"
#include "code_objects/Core_0_thresholder_codeobject.h"
#include "code_objects/Core_1_resetter_codeobject.h"
#include "code_objects/Core_1_stateupdater_codeobject.h"
#include "code_objects/Core_1_thresholder_codeobject.h"
#include "code_objects/Core_2_resetter_codeobject.h"
#include "code_objects/Core_2_stateupdater_codeobject.h"
#include "code_objects/Core_2_thresholder_codeobject.h"
#include "code_objects/Core_3_resetter_codeobject.h"
#include "code_objects/Core_3_stateupdater_codeobject.h"
#include "code_objects/Core_3_thresholder_codeobject.h"
#include "code_objects/mon_neuron_input_codeobject.h"
#include "code_objects/mon_neuron_output_codeobject_2.h"
#include "code_objects/NMDA0_post_codeobject.h"
#include "code_objects/NMDA0_post_push_spikes.h"
#include "code_objects/NMDA0_pre_codeobject.h"
#include "code_objects/NMDA0_pre_push_spikes.h"
#include "code_objects/NMDA0_synapses_create_generator_codeobject.h"
#include "code_objects/SpikeGenerator_codeobject_2.h"
#include "code_objects/statemonitor_3_codeobject.h"
#include "code_objects/statemonitor_4_codeobject.h"
#include "code_objects/statemonitor_codeobject.h"


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


