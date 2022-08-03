PROGRAM = main

SRCS = brianlib/randomkit/randomkit.c code_objects/AMPA1_post_codeobject_3.cpp code_objects/AMPA1_post_push_spikes.cpp code_objects/AMPA1_pre_codeobject_3.cpp code_objects/AMPA1_pre_push_spikes.cpp code_objects/AMPA1_synapses_create_generator_codeobject.cpp code_objects/Core_0_resetter_codeobject.cpp code_objects/Core_0_stateupdater_codeobject.cpp code_objects/Core_0_thresholder_codeobject.cpp code_objects/Core_1_resetter_codeobject.cpp code_objects/Core_1_stateupdater_codeobject.cpp code_objects/Core_1_thresholder_codeobject.cpp code_objects/Core_2_resetter_codeobject.cpp code_objects/Core_2_stateupdater_codeobject.cpp code_objects/Core_2_thresholder_codeobject.cpp code_objects/Core_3_resetter_codeobject.cpp code_objects/Core_3_stateupdater_codeobject.cpp code_objects/Core_3_thresholder_codeobject.cpp code_objects/NMDA0_post_codeobject.cpp code_objects/NMDA0_post_push_spikes.cpp code_objects/NMDA0_pre_codeobject.cpp code_objects/NMDA0_pre_push_spikes.cpp code_objects/NMDA0_synapses_create_generator_codeobject.cpp code_objects/SpikeGenerator_codeobject_3.cpp code_objects/after_run_Core_0_thresholder_codeobject.cpp code_objects/after_run_Core_1_thresholder_codeobject.cpp code_objects/after_run_Core_2_thresholder_codeobject.cpp code_objects/after_run_Core_3_thresholder_codeobject.cpp code_objects/before_run_AMPA1_post_push_spikes.cpp code_objects/before_run_AMPA1_pre_push_spikes.cpp code_objects/before_run_NMDA0_post_push_spikes.cpp code_objects/before_run_NMDA0_pre_push_spikes.cpp code_objects/mon_neuron_input_codeobject.cpp code_objects/mon_neuron_output_codeobject_3.cpp code_objects/statemonitor_4_codeobject.cpp code_objects/statemonitor_5_codeobject.cpp code_objects/statemonitor_codeobject.cpp main.cpp network.cpp objects.cpp run.cpp synapses_classes.cpp
H_SRCS = brianlib/clocks.h brianlib/common_math.h brianlib/dynamic_array.h code_objects/AMPA1_post_codeobject_3.h code_objects/AMPA1_post_push_spikes.h code_objects/AMPA1_pre_codeobject_3.h code_objects/AMPA1_pre_push_spikes.h code_objects/AMPA1_synapses_create_generator_codeobject.h code_objects/Core_0_resetter_codeobject.h code_objects/Core_0_stateupdater_codeobject.h code_objects/Core_0_thresholder_codeobject.h code_objects/Core_1_resetter_codeobject.h code_objects/Core_1_stateupdater_codeobject.h code_objects/Core_1_thresholder_codeobject.h code_objects/Core_2_resetter_codeobject.h code_objects/Core_2_stateupdater_codeobject.h code_objects/Core_2_thresholder_codeobject.h code_objects/Core_3_resetter_codeobject.h code_objects/Core_3_stateupdater_codeobject.h code_objects/Core_3_thresholder_codeobject.h code_objects/NMDA0_post_codeobject.h code_objects/NMDA0_post_push_spikes.h code_objects/NMDA0_pre_codeobject.h code_objects/NMDA0_pre_push_spikes.h code_objects/NMDA0_synapses_create_generator_codeobject.h code_objects/SpikeGenerator_codeobject_3.h code_objects/after_run_Core_0_thresholder_codeobject.h code_objects/after_run_Core_1_thresholder_codeobject.h code_objects/after_run_Core_2_thresholder_codeobject.h code_objects/after_run_Core_3_thresholder_codeobject.h code_objects/before_run_AMPA1_post_push_spikes.h code_objects/before_run_AMPA1_pre_push_spikes.h code_objects/before_run_NMDA0_post_push_spikes.h code_objects/before_run_NMDA0_pre_push_spikes.h code_objects/mon_neuron_input_codeobject.h code_objects/mon_neuron_output_codeobject_3.h code_objects/statemonitor_4_codeobject.h code_objects/statemonitor_5_codeobject.h code_objects/statemonitor_codeobject.h network.h objects.h run.h synapses_classes.h
OBJS = ${SRCS:.cpp=.o}
OBJS := ${OBJS:.c=.o}
OPTIMISATIONS = -Ibrianlib/randomkit -I/home/hector/miniconda3/envs/dynapse_sim/include -w -O3 -ffast-math -fno-finite-math-only -march=native -std=c++11
CXXFLAGS = -c -Wno-write-strings $(OPTIMISATIONS) -I.  
LFLAGS =  -Lbrianlib/randomkit -L/home/hector/miniconda3/envs/dynapse_sim/lib -Wl,-R/home/hector/miniconda3/envs/dynapse_sim/lib 
DEPS = make.deps

all: $(PROGRAM)

.PHONY: all clean

$(PROGRAM): $(OBJS) $(DEPS) makefile
	$(CXX) $(OBJS) -o $(PROGRAM) $(LFLAGS)

clean:
	rm $(OBJS) $(PROGRAM) $(DEPS)

make.deps: $(SRCS) $(H_SRCS)
	$(CXX) $(CXXFLAGS) -MM $(SRCS) > make.deps
	
ifneq ($(wildcard $(DEPS)), )
include $(DEPS)
endif

%.o : %.cpp makefile
	$(CXX) $(CXXFLAGS) $< -o $@