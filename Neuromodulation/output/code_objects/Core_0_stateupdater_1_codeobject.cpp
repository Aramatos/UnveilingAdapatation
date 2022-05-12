#include "code_objects/Core_0_stateupdater_1_codeobject.h"
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
        
    static inline int64_t _timestep(double t, double dt)
    {
        return (int64_t)((t + 1e-3*dt)/dt); 
    }
    template <typename T>
    static inline T _clip(const T value, const double a_min, const double a_max)
    {
        if (value < a_min)
            return a_min;
        if (value > a_max)
            return a_max;
        return value;
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



void _run_Core_0_stateupdater_1_codeobject()
{
    using namespace brian;


    ///// CONSTANTS ///////////
    const size_t _numlastspike = 256;
const size_t _numC_syn_ampa = 256;
const size_t _numIath = 1;
const size_t _numC_syn_gaba_a = 256;
const size_t _numdt = 1;
const size_t _numIahp = 256;
const size_t _numItau = 1;
const size_t _numI_g_syn_nmda = 256;
const size_t _numUt = 1;
const size_t _numItauahp = 1;
const size_t _numImem = 256;
const size_t _numIo = 1;
const size_t _numCahp = 1;
const double amp = 1.0;
const size_t _numI_syn_nmda = 256;
const size_t _numIth = 1;
const size_t _numCmem = 1;
const size_t _numkn = 1;
const size_t _numI_g_syn_ampa = 256;
const size_t _numI_syn_ampa = 256;
const size_t _numC_syn_gaba_b = 256;
const size_t _numIthahp = 1;
const size_t _numD = 256;
const size_t _numI_tau_syn_ampa = 256;
const size_t _numkp = 1;
const size_t _numI_g_syn_gaba_a = 256;
const size_t _numI_tau_syn_nmda = 256;
const int64_t N = 256;
const size_t _numI_g_syn_gaba_b = 256;
const size_t _numrefP = 1;
const size_t _numt = 1;
const size_t _numI_syn_gaba_a = 256;
const size_t _numIagain = 1;
const size_t _numI_syn_gaba_b = 256;
const size_t _numI_tau_syn_gaba_b = 256;
const size_t _numI_tau_syn_gaba_a = 256;
const size_t _numIanorm = 1;
const size_t _numIconst = 256;
const size_t _numM = 1;
const size_t _numnot_refractory = 256;
const size_t _numC_syn_nmda = 256;
    ///// POINTERS ////////////
        
    double* __restrict  _ptr_array_Core_0_lastspike = _array_Core_0_lastspike;
    double* __restrict  _ptr_array_Core_0_C_syn_ampa = _array_Core_0_C_syn_ampa;
    double*   _ptr_array_Core_0_Iath = _array_Core_0_Iath;
    double* __restrict  _ptr_array_Core_0_C_syn_gaba_a = _array_Core_0_C_syn_gaba_a;
    double*   _ptr_array_defaultclock_dt = _array_defaultclock_dt;
    double* __restrict  _ptr_array_Core_0_Iahp = _array_Core_0_Iahp;
    double*   _ptr_array_Core_0_Itau = _array_Core_0_Itau;
    double* __restrict  _ptr_array_Core_0_I_g_syn_nmda = _array_Core_0_I_g_syn_nmda;
    double*   _ptr_array_Core_0_Ut = _array_Core_0_Ut;
    double*   _ptr_array_Core_0_Itauahp = _array_Core_0_Itauahp;
    double* __restrict  _ptr_array_Core_0_Imem = _array_Core_0_Imem;
    double*   _ptr_array_Core_0_Io = _array_Core_0_Io;
    double*   _ptr_array_Core_0_Cahp = _array_Core_0_Cahp;
    double* __restrict  _ptr_array_Core_0_I_syn_nmda = _array_Core_0_I_syn_nmda;
    double*   _ptr_array_Core_0_Ith = _array_Core_0_Ith;
    double*   _ptr_array_Core_0_Cmem = _array_Core_0_Cmem;
    double*   _ptr_array_Core_0_kn = _array_Core_0_kn;
    double* __restrict  _ptr_array_Core_0_I_g_syn_ampa = _array_Core_0_I_g_syn_ampa;
    double* __restrict  _ptr_array_Core_0_I_syn_ampa = _array_Core_0_I_syn_ampa;
    double* __restrict  _ptr_array_Core_0_C_syn_gaba_b = _array_Core_0_C_syn_gaba_b;
    double*   _ptr_array_Core_0_Ithahp = _array_Core_0_Ithahp;
    double* __restrict  _ptr_array_Core_0_D = _array_Core_0_D;
    double* __restrict  _ptr_array_Core_0_I_tau_syn_ampa = _array_Core_0_I_tau_syn_ampa;
    double*   _ptr_array_Core_0_kp = _array_Core_0_kp;
    double* __restrict  _ptr_array_Core_0_I_g_syn_gaba_a = _array_Core_0_I_g_syn_gaba_a;
    double* __restrict  _ptr_array_Core_0_I_tau_syn_nmda = _array_Core_0_I_tau_syn_nmda;
    double* __restrict  _ptr_array_Core_0_I_g_syn_gaba_b = _array_Core_0_I_g_syn_gaba_b;
    double*   _ptr_array_Core_0_refP = _array_Core_0_refP;
    double*   _ptr_array_defaultclock_t = _array_defaultclock_t;
    double* __restrict  _ptr_array_Core_0_I_syn_gaba_a = _array_Core_0_I_syn_gaba_a;
    double*   _ptr_array_Core_0_Iagain = _array_Core_0_Iagain;
    double* __restrict  _ptr_array_Core_0_I_syn_gaba_b = _array_Core_0_I_syn_gaba_b;
    double* __restrict  _ptr_array_Core_0_I_tau_syn_gaba_b = _array_Core_0_I_tau_syn_gaba_b;
    double* __restrict  _ptr_array_Core_0_I_tau_syn_gaba_a = _array_Core_0_I_tau_syn_gaba_a;
    double*   _ptr_array_Core_0_Ianorm = _array_Core_0_Ianorm;
    double* __restrict  _ptr_array_Core_0_Iconst = _array_Core_0_Iconst;
    double*   _ptr_array_Core_0_M = _array_Core_0_M;
    char* __restrict  _ptr_array_Core_0_not_refractory = _array_Core_0_not_refractory;
    double* __restrict  _ptr_array_Core_0_C_syn_nmda = _array_Core_0_C_syn_nmda;


    //// MAIN CODE ////////////
    // scalar code
    const size_t _vectorisation_idx = -1;
        
    const double refP = _ptr_array_Core_0_refP[0];
    const double t = _ptr_array_defaultclock_t[0];
    const double Cahp = _ptr_array_Core_0_Cahp[0];
    const double Iath = _ptr_array_Core_0_Iath[0];
    const double Iagain = _ptr_array_Core_0_Iagain[0];
    const double Ithahp = _ptr_array_Core_0_Ithahp[0];
    const double Ith = _ptr_array_Core_0_Ith[0];
    const double dt = _ptr_array_defaultclock_dt[0];
    const double Itau = _ptr_array_Core_0_Itau[0];
    const double Ianorm = _ptr_array_Core_0_Ianorm[0];
    const double Itauahp = _ptr_array_Core_0_Itauahp[0];
    const double Ut = _ptr_array_Core_0_Ut[0];
    const double kp = _ptr_array_Core_0_kp[0];
    const double M = _ptr_array_Core_0_M[0];
    const double Cmem = _ptr_array_Core_0_Cmem[0];
    const double kn = _ptr_array_Core_0_kn[0];
    const double Io = _ptr_array_Core_0_Io[0];
    const int64_t _lio_1 = _timestep(refP, dt);
    const double _lio_2 = M * dt;
    const double _lio_3 = 1.0f*1.0/((0.5 * kn) + (0.5 * kp));
    const double _lio_4 = 1.0f*(dt * ((0.5 * kn) + (0.5 * kp)))/Ut;
    const double _lio_5 = 2.0 * Io;
    const double _lio_6 = 1.0f*(dt * ((0.5 * kn) + (0.5 * kp)))/(Cahp * Ut);
    const double _lio_7 = 1.0f*(dt * ((0.5 * kn) + (0.5 * kp)))/(Cmem * Ut);
    const double _lio_8 = 1.0f*1.0/Ianorm;


    const int _N = N;
    
    for(int _idx=0; _idx<_N; _idx++)
    {
        // vector code
        const size_t _vectorisation_idx = _idx;
                
        const double lastspike = _ptr_array_Core_0_lastspike[_idx];
        const double C_syn_ampa = _ptr_array_Core_0_C_syn_ampa[_idx];
        const double C_syn_gaba_a = _ptr_array_Core_0_C_syn_gaba_a[_idx];
        double Iahp = _ptr_array_Core_0_Iahp[_idx];
        const double I_g_syn_nmda = _ptr_array_Core_0_I_g_syn_nmda[_idx];
        double Imem = _ptr_array_Core_0_Imem[_idx];
        double I_syn_nmda = _ptr_array_Core_0_I_syn_nmda[_idx];
        const double I_g_syn_ampa = _ptr_array_Core_0_I_g_syn_ampa[_idx];
        double I_syn_ampa = _ptr_array_Core_0_I_syn_ampa[_idx];
        char not_refractory = _ptr_array_Core_0_not_refractory[_idx];
        const double C_syn_gaba_b = _ptr_array_Core_0_C_syn_gaba_b[_idx];
        const double I_tau_syn_ampa = _ptr_array_Core_0_I_tau_syn_ampa[_idx];
        const double I_g_syn_gaba_a = _ptr_array_Core_0_I_g_syn_gaba_a[_idx];
        const double I_tau_syn_nmda = _ptr_array_Core_0_I_tau_syn_nmda[_idx];
        const double I_g_syn_gaba_b = _ptr_array_Core_0_I_g_syn_gaba_b[_idx];
        double I_syn_gaba_a = _ptr_array_Core_0_I_syn_gaba_a[_idx];
        double I_syn_gaba_b = _ptr_array_Core_0_I_syn_gaba_b[_idx];
        const double I_tau_syn_gaba_b = _ptr_array_Core_0_I_tau_syn_gaba_b[_idx];
        const double I_tau_syn_gaba_a = _ptr_array_Core_0_I_tau_syn_gaba_a[_idx];
        const double Iconst = _ptr_array_Core_0_Iconst[_idx];
        double D = _ptr_array_Core_0_D[_idx];
        const double C_syn_nmda = _ptr_array_Core_0_C_syn_nmda[_idx];
        not_refractory = _timestep(t - lastspike, dt) >= _lio_1;
        const double _D = D + (_lio_2 * (1.0 - (_brian_pow(D, _lio_3))));
        const double _I_syn_ampa = I_syn_ampa + (1.0f*(_lio_4 * ((((I_tau_syn_ampa * (I_syn_ampa > Io)) + (Io * (I_syn_ampa <= Io))) * (_brian_pow(1.0 + (1.0f*((I_g_syn_ampa * (I_syn_ampa > Io)) + (Io * (I_syn_ampa <= Io)))/I_syn_ampa), - 1))) * (((- I_syn_ampa) + (_lio_5 * (I_syn_ampa <= Io))) - ((I_g_syn_ampa * (I_syn_ampa > Io)) + (Io * (I_syn_ampa <= Io))))))/C_syn_ampa);
        const double _I_syn_gaba_a = I_syn_gaba_a + (1.0f*(_lio_4 * ((((I_tau_syn_gaba_a * (I_syn_gaba_a > Io)) + (Io * (I_syn_gaba_a <= Io))) * (_brian_pow(1.0 + (1.0f*((I_g_syn_gaba_a * (I_syn_gaba_a > Io)) + (Io * (I_syn_gaba_a <= Io)))/I_syn_gaba_a), - 1))) * (((- I_syn_gaba_a) + (_lio_5 * (I_syn_gaba_a <= Io))) - ((I_g_syn_gaba_a * (I_syn_gaba_a > Io)) + (Io * (I_syn_gaba_a <= Io))))))/C_syn_gaba_a);
        const double _I_syn_gaba_b = I_syn_gaba_b + (1.0f*(_lio_4 * ((((I_tau_syn_gaba_b * (I_syn_gaba_b > Io)) + (Io * (I_syn_gaba_b <= Io))) * (_brian_pow(1.0 + (1.0f*((I_g_syn_gaba_b * (I_syn_gaba_b > Io)) + (Io * (I_syn_gaba_b <= Io)))/I_syn_gaba_b), - 1))) * (((- I_syn_gaba_b) + (_lio_5 * (I_syn_gaba_b <= Io))) - ((I_g_syn_gaba_b * (I_syn_gaba_b > Io)) + (Io * (I_syn_gaba_b <= Io))))))/C_syn_gaba_b);
        const double _I_syn_nmda = I_syn_nmda + (1.0f*(_lio_4 * ((((I_tau_syn_nmda * (I_syn_nmda > Io)) + (Io * (I_syn_nmda <= Io))) * (_brian_pow(1.0 + (1.0f*((I_g_syn_nmda * (I_syn_nmda > Io)) + (Io * (I_syn_nmda <= Io)))/I_syn_nmda), - 1))) * (((- I_syn_nmda) + (_lio_5 * (I_syn_nmda <= Io))) - ((I_g_syn_nmda * (I_syn_nmda > Io)) + (Io * (I_syn_nmda <= Io))))))/C_syn_nmda);
        const double _Iahp = Iahp + (_lio_6 * ((((Io * (Iahp <= Io)) + (Itauahp * (Iahp > Io))) * (_brian_pow(1.0 + (1.0f*((Io * (Iahp <= Io)) + (Ithahp * (Iahp > Io)))/Iahp), - 1))) * (((- Iahp) + (_lio_5 * (Iahp <= Io))) - ((Io * (Iahp <= Io)) + (Ithahp * (Iahp > Io))))));
        double _Imem;
        if(!not_refractory)
            _Imem = Imem;
        else 
            _Imem = Imem + (_lio_7 * ((((Io * (Imem <= Io)) + (Itau * (Imem > Io))) * (_brian_pow(1.0 + (1.0f*((Io * (Imem <= Io)) + (Ith * (Imem > Io)))/(Io + Imem)), - 1))) * ((((- Imem) * (1.0 + ((_brian_pow((Io * (Imem <= Io)) + (Itau * (Imem > Io)), - 1)) * ((((Iahp * (Imem > Io)) + (Io * (Imem <= Io))) + _clip(I_syn_gaba_a, Io, Imem)) - ((1.0f*(Iagain * (Imem > Io))/(1.0 + exp(_lio_8 * (Iath - Imem)))) + (_lio_5 * (Imem <= Io))))))) + ((((Io * (Imem <= Io)) + (Ith * (Imem > Io))) * (_brian_pow((Io * (Imem <= Io)) + (Itau * (Imem > Io)), - 1))) * ((((1.0f*(Iagain * (Imem > Io))/(1.0 + exp(_lio_8 * (Iath - Imem)))) + (_lio_5 * (Imem <= Io))) + _clip(((I_syn_ampa + I_syn_nmda) + Iconst) - I_syn_gaba_a, Io, amp)) - ((_clip(I_syn_gaba_a, Io, Imem) + (Iahp * (Imem > Io))) + (Io * (Imem <= Io)))))) - ((Io * (Imem <= Io)) + (Ith * (Imem > Io))))));
        D = _D;
        I_syn_ampa = _I_syn_ampa;
        I_syn_gaba_a = _I_syn_gaba_a;
        I_syn_gaba_b = _I_syn_gaba_b;
        I_syn_nmda = _I_syn_nmda;
        Iahp = _Iahp;
        if(not_refractory)
            Imem = _Imem;
        _ptr_array_Core_0_I_syn_gaba_a[_idx] = I_syn_gaba_a;
        _ptr_array_Core_0_I_syn_nmda[_idx] = I_syn_nmda;
        _ptr_array_Core_0_I_syn_gaba_b[_idx] = I_syn_gaba_b;
        _ptr_array_Core_0_Iahp[_idx] = Iahp;
        _ptr_array_Core_0_D[_idx] = D;
        _ptr_array_Core_0_Imem[_idx] = Imem;
        _ptr_array_Core_0_I_syn_ampa[_idx] = I_syn_ampa;
        _ptr_array_Core_0_not_refractory[_idx] = not_refractory;

    }

}


