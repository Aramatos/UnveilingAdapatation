#include <stdlib.h>
#include "objects.h"
#include <ctime>
#include <time.h>

#include "run.h"
#include "brianlib/common_math.h"
#include "randomkit.h"

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
                        
        _array_defaultclock_timestep[0] = 0;
        _array_defaultclock_t[0] = 0.0;
        network.clear();
        network.add(&defaultclock, _run_Core_0_stateupdater_codeobject);
        network.add(&defaultclock, _run_Core_1_stateupdater_codeobject);
        network.add(&defaultclock, _run_Core_2_stateupdater_codeobject);
        network.add(&defaultclock, _run_Core_3_stateupdater_codeobject);
        network.add(&defaultclock, _run_Core_0_thresholder_codeobject);
        network.add(&defaultclock, _run_Core_1_thresholder_codeobject);
        network.add(&defaultclock, _run_Core_2_thresholder_codeobject);
        network.add(&defaultclock, _run_Core_3_thresholder_codeobject);
        network.add(&defaultclock, _run_Core_0_resetter_codeobject);
        network.add(&defaultclock, _run_Core_1_resetter_codeobject);
        network.add(&defaultclock, _run_Core_2_resetter_codeobject);
        network.add(&defaultclock, _run_Core_3_resetter_codeobject);
        network.run(0.2, NULL, 10.0);
        _after_run_Core_0_thresholder_codeobject();
        _after_run_Core_1_thresholder_codeobject();
        _after_run_Core_2_thresholder_codeobject();
        _after_run_Core_3_thresholder_codeobject();

	}
        

	brian_end();
        

	return 0;
}