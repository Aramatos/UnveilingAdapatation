#include "code_objects/Core_2_stateupdater_codeobject.h"
#include "objects.h"
#include "brianlib/common_math.h"
#include "brianlib/stdint_compat.h"
#include<cmath>
#include<ctime>
#include<iostream>
#include<fstream>
#include<climits>

////// SUPPORT CODE ///////
namespace {
        
    template <typename T>
    static inline T _clip(const T value, const double a_min, const double a_max)
    {
        if (value < a_min)
            return a_min;
        if (value > a_max)
            return a_max;
        return value;
    }
    static inline int64_t _timestep(double t, double dt)
    {
        return (int64_t)((t + 1e-3*dt)/dt); 
    }
    template < typename T1, typename T2 > struct _higher_type;
    template < > struct _higher_type<int,int> { typedef int type; };
    template < > struct _higher_type<int,long> { typedef long type; };
    template < > struct _higher_type<int,long long> { typedef long long type; };
    template < > struct _higher_type<int,float> { typedef float type; };
    template < > struct _higher_type<int,double> { typedef double type; };
    template < > struct _higher_type<int,long double> { typedef long double type; };
    template < > struct _higher_type<long,int> { typedef long type; };
    template < > struct _higher_type<long,long> { typedef long type; };
    template < > struct _higher_type<long,long long> { typedef long long type; };
    template < > struct _higher_type<long,float> { typedef float type; };
    template < > struct _higher_type<long,double> { typedef double type; };
    template < > struct _higher_type<long,long double> { typedef long double type; };
    template < > struct _higher_type<long long,int> { typedef long long type; };
    template < > struct _higher_type<long long,long> { typedef long long type; };
    template < > struct _higher_type<long long,long long> { typedef long long type; };
    template < > struct _higher_type<long long,float> { typedef float type; };
    template < > struct _higher_type<long long,double> { typedef double type; };
    template < > struct _higher_type<long long,long double> { typedef long double type; };
    template < > struct _higher_type<float,int> { typedef float type; };
    template < > struct _higher_type<float,long> { typedef float type; };
    template < > struct _higher_type<float,long long> { typedef float type; };
    template < > struct _higher_type<float,float> { typedef float type; };
    template < > struct _higher_type<float,double> { typedef double type; };
    template < > struct _higher_type<float,long double> { typedef long double type; };
    template < > struct _higher_type<double,int> { typedef double type; };
    template < > struct _higher_type<double,long> { typedef double type; };
    template < > struct _higher_type<double,long long> { typedef double type; };
    template < > struct _higher_type<double,float> { typedef double type; };
    template < > struct _higher_type<double,double> { typedef double type; };
    template < > struct _higher_type<double,long double> { typedef long double type; };
    template < > struct _higher_type<long double,int> { typedef long double type; };
    template < > struct _higher_type<long double,long> { typedef long double type; };
    template < > struct _higher_type<long double,long long> { typedef long double type; };
    template < > struct _higher_type<long double,float> { typedef long double type; };
    template < > struct _higher_type<long double,double> { typedef long double type; };
    template < > struct _higher_type<long double,long double> { typedef long double type; };
    template < typename T1, typename T2 >
    static inline typename _higher_type<T1,T2>::type
    _brian_mod(T1 x, T2 y)
    {{
        return x-y*floor(1.0*x/y);
    }}
    template < typename T1, typename T2 >
    static inline typename _higher_type<T1,T2>::type
    _brian_floordiv(T1 x, T2 y)
    {{
        return floor(1.0*x/y);
    }}
    #ifdef _MSC_VER
    #define _brian_pow(x, y) (pow((double)(x), (y)))
    #else
    #define _brian_pow(x, y) (pow((x), (y)))
    #endif

}

////// HASH DEFINES ///////



void _run_Core_2_stateupdater_codeobject()
{
    using namespace brian;


    ///// CONSTANTS ///////////
    const size_t _numIsoma_pfb_gain = 1;
const size_t _numsoma_refP = 1;
const size_t _numIsoma_ahp_tau = 1;
const size_t _numCgaba_b = 256;
const size_t _numkn = 1;
const size_t _numIsoma_dpi_tau = 1;
const size_t _numVw = 256;
const size_t _numnot_refractory = 256;
const size_t _numIampa = 256;
const size_t _numdt = 1;
const size_t _numCgaba_a = 256;
const size_t _numt = 1;
const int64_t N = 256;
const size_t _numI0 = 1;
const size_t _numalpha_ampa = 256;
const size_t _numIgaba_b = 256;
const size_t _numalpha_ampa_std = 256;
const double amp = 1.0;
const size_t _numUt = 1;
const size_t _numalpha_ahp = 256;
const size_t _numCampa_std = 256;
const size_t _numIsoma_const = 256;
const size_t _numVa = 256;
const size_t _numIdischarge_w = 256;
const size_t _numCnmda = 256;
const size_t _numInmda = 256;
const size_t _numIampa_std_tau = 256;
const size_t _numInmda_tau = 256;
const size_t _numIampa_tau = 256;
const size_t _numCampa = 256;
const size_t _numIsoma_pfb_th = 1;
const size_t _numIgaba_a = 256;
const size_t _numIgaba_b_tau = 256;
const size_t _numIampa_std = 256;
const size_t _numInmda_thr = 256;
const size_t _numlastspike = 256;
const size_t _numIsoma_pfb_norm = 1;
const size_t _numkp = 1;
const size_t _numCsoma_mem = 1;
const size_t _numalpha_nmda = 256;
const size_t _numalpha_soma = 256;
const size_t _numalpha_gaba_a = 256;
const size_t _numalpha_gaba_b = 256;
const size_t _numIsoma_mem = 256;
const size_t _numIsoma_ahp = 256;
const size_t _numtau_pulse = 256;
const size_t _numIgaba_a_tau = 256;
const size_t _numCsoma_ahp = 1;
const size_t _numstd_pulse = 256;
    ///// POINTERS ////////////
        
    double*   _ptr_array_Core_2_Isoma_pfb_gain = _array_Core_2_Isoma_pfb_gain;
    double*   _ptr_array_Core_2_soma_refP = _array_Core_2_soma_refP;
    double*   _ptr_array_Core_2_Isoma_ahp_tau = _array_Core_2_Isoma_ahp_tau;
    double* __restrict  _ptr_array_Core_2_Cgaba_b = _array_Core_2_Cgaba_b;
    double*   _ptr_array_Core_2_kn = _array_Core_2_kn;
    double*   _ptr_array_Core_2_Isoma_dpi_tau = _array_Core_2_Isoma_dpi_tau;
    double* __restrict  _ptr_array_Core_2_Vw = _array_Core_2_Vw;
    char* __restrict  _ptr_array_Core_2_not_refractory = _array_Core_2_not_refractory;
    double* __restrict  _ptr_array_Core_2_Iampa = _array_Core_2_Iampa;
    double*   _ptr_array_defaultclock_dt = _array_defaultclock_dt;
    double* __restrict  _ptr_array_Core_2_Cgaba_a = _array_Core_2_Cgaba_a;
    double*   _ptr_array_defaultclock_t = _array_defaultclock_t;
    double*   _ptr_array_Core_2_I0 = _array_Core_2_I0;
    double* __restrict  _ptr_array_Core_2_alpha_ampa = _array_Core_2_alpha_ampa;
    double* __restrict  _ptr_array_Core_2_Igaba_b = _array_Core_2_Igaba_b;
    double* __restrict  _ptr_array_Core_2_alpha_ampa_std = _array_Core_2_alpha_ampa_std;
    double*   _ptr_array_Core_2_Ut = _array_Core_2_Ut;
    double* __restrict  _ptr_array_Core_2_alpha_ahp = _array_Core_2_alpha_ahp;
    double* __restrict  _ptr_array_Core_2_Campa_std = _array_Core_2_Campa_std;
    double* __restrict  _ptr_array_Core_2_Isoma_const = _array_Core_2_Isoma_const;
    double* __restrict  _ptr_array_Core_2_Va = _array_Core_2_Va;
    double* __restrict  _ptr_array_Core_2_Idischarge_w = _array_Core_2_Idischarge_w;
    double* __restrict  _ptr_array_Core_2_Cnmda = _array_Core_2_Cnmda;
    double* __restrict  _ptr_array_Core_2_Inmda = _array_Core_2_Inmda;
    double* __restrict  _ptr_array_Core_2_Iampa_std_tau = _array_Core_2_Iampa_std_tau;
    double* __restrict  _ptr_array_Core_2_Inmda_tau = _array_Core_2_Inmda_tau;
    double* __restrict  _ptr_array_Core_2_Iampa_tau = _array_Core_2_Iampa_tau;
    double* __restrict  _ptr_array_Core_2_Campa = _array_Core_2_Campa;
    double*   _ptr_array_Core_2_Isoma_pfb_th = _array_Core_2_Isoma_pfb_th;
    double* __restrict  _ptr_array_Core_2_Igaba_a = _array_Core_2_Igaba_a;
    double* __restrict  _ptr_array_Core_2_Igaba_b_tau = _array_Core_2_Igaba_b_tau;
    double* __restrict  _ptr_array_Core_2_Iampa_std = _array_Core_2_Iampa_std;
    double* __restrict  _ptr_array_Core_2_Inmda_thr = _array_Core_2_Inmda_thr;
    double* __restrict  _ptr_array_Core_2_lastspike = _array_Core_2_lastspike;
    double*   _ptr_array_Core_2_Isoma_pfb_norm = _array_Core_2_Isoma_pfb_norm;
    double*   _ptr_array_Core_2_kp = _array_Core_2_kp;
    double*   _ptr_array_Core_2_Csoma_mem = _array_Core_2_Csoma_mem;
    double* __restrict  _ptr_array_Core_2_alpha_nmda = _array_Core_2_alpha_nmda;
    double* __restrict  _ptr_array_Core_2_alpha_soma = _array_Core_2_alpha_soma;
    double* __restrict  _ptr_array_Core_2_alpha_gaba_a = _array_Core_2_alpha_gaba_a;
    double* __restrict  _ptr_array_Core_2_alpha_gaba_b = _array_Core_2_alpha_gaba_b;
    double* __restrict  _ptr_array_Core_2_Isoma_mem = _array_Core_2_Isoma_mem;
    double* __restrict  _ptr_array_Core_2_Isoma_ahp = _array_Core_2_Isoma_ahp;
    double* __restrict  _ptr_array_Core_2_tau_pulse = _array_Core_2_tau_pulse;
    double* __restrict  _ptr_array_Core_2_Igaba_a_tau = _array_Core_2_Igaba_a_tau;
    double*   _ptr_array_Core_2_Csoma_ahp = _array_Core_2_Csoma_ahp;
    double* __restrict  _ptr_array_Core_2_std_pulse = _array_Core_2_std_pulse;


    //// MAIN CODE ////////////
    // scalar code
    const size_t _vectorisation_idx = -1;
        
    const double dt = _ptr_array_defaultclock_dt[0];
    const double Isoma_pfb_gain = _ptr_array_Core_2_Isoma_pfb_gain[0];
    const double soma_refP = _ptr_array_Core_2_soma_refP[0];
    const double Isoma_pfb_norm = _ptr_array_Core_2_Isoma_pfb_norm[0];
    const double kp = _ptr_array_Core_2_kp[0];
    const double Csoma_mem = _ptr_array_Core_2_Csoma_mem[0];
    const double Csoma_ahp = _ptr_array_Core_2_Csoma_ahp[0];
    const double Isoma_ahp_tau = _ptr_array_Core_2_Isoma_ahp_tau[0];
    const double t = _ptr_array_defaultclock_t[0];
    const double I0 = _ptr_array_Core_2_I0[0];
    const double kn = _ptr_array_Core_2_kn[0];
    const double Isoma_pfb_th = _ptr_array_Core_2_Isoma_pfb_th[0];
    const double Isoma_dpi_tau = _ptr_array_Core_2_Isoma_dpi_tau[0];
    const double Ut = _ptr_array_Core_2_Ut[0];
    const int64_t _lio_1 = _timestep(soma_refP, dt);
    const double _lio_2 = 1.0f*(dt * ((0.5 * kn) + (0.5 * kp)))/Ut;
    const double _lio_3 = 2.0 * I0;
    const double _lio_4 = 1.0f*(dt * ((0.5 * kn) + (0.5 * kp)))/(Csoma_ahp * Ut);
    const double _lio_5 = 1.0f*(dt * ((0.5 * kn) + (0.5 * kp)))/(Csoma_mem * Ut);
    const double _lio_6 = 1.0f*1.0/Isoma_pfb_norm;
    const double _lio_7 = 1.0f*1.0/Ut;
    const double _lio_8 = 1.0f*((0.5 * kn) + (0.5 * kp))/Ut;


    const int _N = N;
    
    for(int _idx=0; _idx<_N; _idx++)
    {
        // vector code
        const size_t _vectorisation_idx = _idx;
                
        const double Cgaba_b = _ptr_array_Core_2_Cgaba_b[_idx];
        double Vw = _ptr_array_Core_2_Vw[_idx];
        char not_refractory = _ptr_array_Core_2_not_refractory[_idx];
        double Isoma_ahp = _ptr_array_Core_2_Isoma_ahp[_idx];
        const double Cgaba_a = _ptr_array_Core_2_Cgaba_a[_idx];
        const double alpha_ampa = _ptr_array_Core_2_alpha_ampa[_idx];
        const double alpha_ampa_std = _ptr_array_Core_2_alpha_ampa_std[_idx];
        double Igaba_b = _ptr_array_Core_2_Igaba_b[_idx];
        const double alpha_ahp = _ptr_array_Core_2_alpha_ahp[_idx];
        const double Campa_std = _ptr_array_Core_2_Campa_std[_idx];
        const double Isoma_const = _ptr_array_Core_2_Isoma_const[_idx];
        const double Va = _ptr_array_Core_2_Va[_idx];
        const double Idischarge_w = _ptr_array_Core_2_Idischarge_w[_idx];
        const double Cnmda = _ptr_array_Core_2_Cnmda[_idx];
        double Inmda = _ptr_array_Core_2_Inmda[_idx];
        const double Iampa_std_tau = _ptr_array_Core_2_Iampa_std_tau[_idx];
        const double Inmda_tau = _ptr_array_Core_2_Inmda_tau[_idx];
        const double Iampa_tau = _ptr_array_Core_2_Iampa_tau[_idx];
        const double Campa = _ptr_array_Core_2_Campa[_idx];
        double Igaba_a = _ptr_array_Core_2_Igaba_a[_idx];
        const double Igaba_b_tau = _ptr_array_Core_2_Igaba_b_tau[_idx];
        double Iampa_std = _ptr_array_Core_2_Iampa_std[_idx];
        const double Inmda_thr = _ptr_array_Core_2_Inmda_thr[_idx];
        const double lastspike = _ptr_array_Core_2_lastspike[_idx];
        const double alpha_nmda = _ptr_array_Core_2_alpha_nmda[_idx];
        const double alpha_soma = _ptr_array_Core_2_alpha_soma[_idx];
        const double alpha_gaba_a = _ptr_array_Core_2_alpha_gaba_a[_idx];
        const double alpha_gaba_b = _ptr_array_Core_2_alpha_gaba_b[_idx];
        double Isoma_mem = _ptr_array_Core_2_Isoma_mem[_idx];
        double Iampa = _ptr_array_Core_2_Iampa[_idx];
        const double tau_pulse = _ptr_array_Core_2_tau_pulse[_idx];
        const double Igaba_a_tau = _ptr_array_Core_2_Igaba_a_tau[_idx];
        double std_pulse = _ptr_array_Core_2_std_pulse[_idx];
        not_refractory = _timestep(t - lastspike, dt) >= _lio_1;
        const double _Iampa = Iampa + (1.0f*(_lio_2 * ((((I0 * (Iampa <= I0)) + (Iampa_tau * (Iampa > I0))) * (_brian_pow(1.0 + (1.0f*((I0 * (Iampa <= I0)) + ((Iampa_tau * alpha_ampa) * (Iampa > I0)))/Iampa), - 1))) * ((_lio_3 * (Iampa <= I0)) - ((Iampa + (I0 * (Iampa <= I0))) + ((Iampa_tau * alpha_ampa) * (Iampa > I0))))))/Campa);
        const double _Iampa_std = Iampa_std + (1.0f*(_lio_2 * ((((I0 * (Iampa_std <= I0)) + (Iampa_tau * (Iampa_std > I0))) * (_brian_pow(1.0 + (1.0f*((I0 * (Iampa_std <= I0)) + ((Iampa_std_tau * alpha_ampa_std) * (Iampa_std > I0)))/Iampa_std), - 1))) * ((_lio_3 * (Iampa_std <= I0)) - ((Iampa_std + (I0 * (Iampa_std <= I0))) + ((Iampa_std_tau * alpha_ampa_std) * (Iampa_std > I0))))))/Campa_std);
        const double _Igaba_a = Igaba_a + (1.0f*(_lio_2 * ((((I0 * (Igaba_a <= I0)) + (Igaba_a_tau * (Igaba_a > I0))) * (_brian_pow(1.0 + (1.0f*((I0 * (Igaba_a <= I0)) + ((Igaba_a_tau * alpha_gaba_a) * (Igaba_a > I0)))/Igaba_a), - 1))) * ((_lio_3 * (Igaba_a <= I0)) - ((Igaba_a + (I0 * (Igaba_a <= I0))) + ((Igaba_a_tau * alpha_gaba_a) * (Igaba_a > I0))))))/Cgaba_a);
        const double _Igaba_b = Igaba_b + (1.0f*(_lio_2 * ((((I0 * (Igaba_b <= I0)) + (Igaba_b_tau * (Igaba_b > I0))) * (_brian_pow(1.0 + (1.0f*((I0 * (Igaba_b <= I0)) + ((Igaba_b_tau * alpha_gaba_b) * (Igaba_b > I0)))/Igaba_b), - 1))) * ((_lio_3 * (Igaba_b <= I0)) - ((Igaba_b + (I0 * (Igaba_b <= I0))) + ((Igaba_b_tau * alpha_gaba_b) * (Igaba_b > I0))))))/Cgaba_b);
        const double _Inmda = Inmda + (1.0f*(_lio_2 * ((((I0 * (Inmda <= I0)) + (Inmda_tau * (Inmda > I0))) * (_brian_pow(1.0 + (1.0f*((I0 * (Inmda <= I0)) + ((Inmda_tau * alpha_nmda) * (Inmda > I0)))/Inmda), - 1))) * ((_lio_3 * (Inmda <= I0)) - ((Inmda + (I0 * (Inmda <= I0))) + ((Inmda_tau * alpha_nmda) * (Inmda > I0))))))/Cnmda);
        const double _Isoma_ahp = Isoma_ahp + (_lio_4 * ((((I0 * (Isoma_ahp <= I0)) + (Isoma_ahp_tau * (Isoma_ahp > I0))) * (_brian_pow(1.0 + (((I0 * (Isoma_ahp <= I0)) + ((alpha_ahp * ((I0 * (Isoma_ahp <= I0)) + (Isoma_ahp_tau * (Isoma_ahp > I0)))) * (Isoma_ahp > I0))) * (_brian_pow((I0 * (Isoma_mem <= I0)) + (Isoma_ahp * (Isoma_mem > I0)), - 1))), - 1))) * ((_lio_3 * (Isoma_ahp <= I0)) - ((Isoma_ahp + (I0 * (Isoma_ahp <= I0))) + ((alpha_ahp * ((I0 * (Isoma_ahp <= I0)) + (Isoma_ahp_tau * (Isoma_ahp > I0)))) * (Isoma_ahp > I0))))));
        double _Isoma_mem;
        if(!not_refractory)
            _Isoma_mem = Isoma_mem;
        else 
            _Isoma_mem = Isoma_mem + (_lio_5 * ((((I0 * (Isoma_mem <= I0)) + (Isoma_dpi_tau * (Isoma_mem > I0))) * (_brian_pow(1.0 + (1.0f*((I0 * (Isoma_mem <= I0)) + ((alpha_soma * ((I0 * (Isoma_mem <= I0)) + (Isoma_dpi_tau * (Isoma_mem > I0)))) * (Isoma_mem > I0)))/_clip(Isoma_mem, I0, amp)), - 1))) * ((alpha_soma * ((- (((Igaba_a * (Isoma_mem > I0)) + (Isoma_dpi_tau * (Isoma_mem > I0))) - (1.0f*(Isoma_pfb_gain * (Isoma_mem > I0))/(1.0 + exp(_lio_6 * (Isoma_pfb_th + (- Isoma_mem))))))) + _clip((((Iampa + Iampa_std) + (1.0f*Inmda/(1.0 + (1.0f*Inmda_thr/_clip(Isoma_mem, I0, amp))))) + Isoma_const) - ((Igaba_b + (I0 * (Isoma_mem <= I0))) + (Isoma_ahp * (Isoma_mem > I0))), I0, amp))) - ((_clip(Isoma_mem, I0, amp) * (_brian_pow((I0 * (Isoma_mem <= I0)) + (Isoma_dpi_tau * (Isoma_mem > I0)), - 1))) * (((Igaba_a * (Isoma_mem > I0)) + (Isoma_dpi_tau * (Isoma_mem > I0))) - ((I0 * (Isoma_mem <= I0)) + (1.0f*(Isoma_pfb_gain * (Isoma_mem > I0))/(1.0 + exp(_lio_6 * (Isoma_pfb_th + (- Isoma_mem)))))))))));
        const double _Vw = Vw + (1.0f*(dt * ((I0 * ((1.0 - exp(_lio_7 * ((- Va) + Vw))) * exp(_lio_8 * (Va - Vw)))) - (Idischarge_w * (std_pulse < 0.9))))/Campa_std);
        const double _std_pulse = (1.0f*(dt * (1.0 - std_pulse))/tau_pulse) + std_pulse;
        Iampa = _Iampa;
        Iampa_std = _Iampa_std;
        Igaba_a = _Igaba_a;
        Igaba_b = _Igaba_b;
        Inmda = _Inmda;
        Isoma_ahp = _Isoma_ahp;
        if(not_refractory)
            Isoma_mem = _Isoma_mem;
        Vw = _Vw;
        std_pulse = _std_pulse;
        _ptr_array_Core_2_Isoma_ahp[_idx] = Isoma_ahp;
        _ptr_array_Core_2_Inmda[_idx] = Inmda;
        _ptr_array_Core_2_std_pulse[_idx] = std_pulse;
        _ptr_array_Core_2_Isoma_mem[_idx] = Isoma_mem;
        _ptr_array_Core_2_Igaba_b[_idx] = Igaba_b;
        _ptr_array_Core_2_Iampa[_idx] = Iampa;
        _ptr_array_Core_2_Igaba_a[_idx] = Igaba_a;
        _ptr_array_Core_2_Vw[_idx] = Vw;
        _ptr_array_Core_2_Iampa_std[_idx] = Iampa_std;
        _ptr_array_Core_2_not_refractory[_idx] = not_refractory;

    }

}


