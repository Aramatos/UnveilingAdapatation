#include "code_objects/AMPA_STD1_pre_codeobject.h"
#include "objects.h"
#include "brianlib/common_math.h"
#include "brianlib/stdint_compat.h"
#include<cmath>
#include<ctime>
#include<iostream>
#include<fstream>
#include<climits>
#include "brianlib/stdint_compat.h"
#include "synapses_classes.h"

////// SUPPORT CODE ///////
namespace {
        
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



void _run_AMPA_STD1_pre_codeobject()
{
    using namespace brian;


    ///// CONSTANTS ///////////
    const size_t _num__Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa_AMPA_STD1___Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa_Core_2_subgroup_1___Iampa_std_w_Core_2_kappa_Core_2_kp = 1;
const size_t _numIampa_std_post = 256;
const size_t _numalpha_ampa_post = 256;
const size_t _numstd_pulse = 256;
const size_t _num_Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_Vw = 256;
double* const _array_AMPA_STD1_weight = _dynamic_array_AMPA_STD1_weight.empty()? 0 : &_dynamic_array_AMPA_STD1_weight[0];
const size_t _numweight = _dynamic_array_AMPA_STD1_weight.size();
int32_t* const _array_AMPA_STD1__synaptic_pre = _dynamic_array_AMPA_STD1__synaptic_pre.empty()? 0 : &_dynamic_array_AMPA_STD1__synaptic_pre[0];
const size_t _num_synaptic_pre = _dynamic_array_AMPA_STD1__synaptic_pre.size();
const size_t _num__Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa_AMPA_STD1___Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa_Core_2_subgroup_1___Iampa_std_w_Core_2_kappa_Core_2_kn = 1;
const size_t _num_Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_I0 = 1;
const size_t _num_Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_Ut = 1;
int32_t* const _array_AMPA_STD1__synaptic_post = _dynamic_array_AMPA_STD1__synaptic_post.empty()? 0 : &_dynamic_array_AMPA_STD1__synaptic_post[0];
const size_t _num_postsynaptic_idx = _dynamic_array_AMPA_STD1__synaptic_post.size();
    ///// POINTERS ////////////
        
    double*   _ptr_array_Core_2_kp = _array_Core_2_kp;
    double* __restrict  _ptr_array_Core_2_Iampa_std = _array_Core_2_Iampa_std;
    double* __restrict  _ptr_array_Core_2_alpha_ampa = _array_Core_2_alpha_ampa;
    double* __restrict  _ptr_array_Core_2_std_pulse = _array_Core_2_std_pulse;
    double* __restrict  _ptr_array_Core_2_Vw = _array_Core_2_Vw;
    double* __restrict  _ptr_array_AMPA_STD1_weight = _array_AMPA_STD1_weight;
    int32_t* __restrict  _ptr_array_AMPA_STD1__synaptic_pre = _array_AMPA_STD1__synaptic_pre;
    double*   _ptr_array_Core_2_kn = _array_Core_2_kn;
    double*   _ptr_array_Core_2_I0 = _array_Core_2_I0;
    double*   _ptr_array_Core_2_Ut = _array_Core_2_Ut;
    int32_t* __restrict  _ptr_array_AMPA_STD1__synaptic_post = _array_AMPA_STD1__synaptic_post;



    // This is only needed for the _debugmsg function below

    // scalar code
    const size_t _vectorisation_idx = -1;
        
    const double __Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa_AMPA_STD1___Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa_Core_2_subgroup_1___Iampa_std_w_Core_2_kappa_Core_2_kp = _ptr_array_Core_2_kp[0];
    const double __Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa_AMPA_STD1___Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa_Core_2_subgroup_1___Iampa_std_w_Core_2_kappa_Core_2_kn = _ptr_array_Core_2_kn[0];
    const double _Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_I0 = _ptr_array_Core_2_I0[0];
    const double _Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_Ut = _ptr_array_Core_2_Ut[0];
    const double _lio_1 = 0.5 * (__Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa_AMPA_STD1___Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa_Core_2_subgroup_1___Iampa_std_w_Core_2_kappa_Core_2_kn + __Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa_AMPA_STD1___Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa_Core_2_subgroup_1___Iampa_std_w_Core_2_kappa_Core_2_kp);
    const double _lio_2 = 1.0f*1.0/_Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_Ut;


    
    {
    std::vector<int> *_spiking_synapses = AMPA_STD1_pre.peek();
    const int _num_spiking_synapses = _spiking_synapses->size();

    
    {
        for(int _spiking_synapse_idx=0;
            _spiking_synapse_idx<_num_spiking_synapses;
            _spiking_synapse_idx++)
        {
            const size_t _idx = (*_spiking_synapses)[_spiking_synapse_idx];
            const size_t _vectorisation_idx = _idx;
                        
            const int32_t _postsynaptic_idx = _ptr_array_AMPA_STD1__synaptic_post[_idx];
            double Iampa_std_post = _ptr_array_Core_2_Iampa_std[_postsynaptic_idx];
            const double alpha_ampa_post = _ptr_array_Core_2_alpha_ampa[_postsynaptic_idx];
            const double _Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_Vw = _ptr_array_Core_2_Vw[_postsynaptic_idx];
            const double weight = _ptr_array_AMPA_STD1_weight[_idx];
            double std_pulse;
            std_pulse = 0;
            const double _Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa = _lio_1;
            const double Iampa_std_w_post = _Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_I0 * exp(_lio_2 * (_Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_kappa * _Iampa_std_w_post_AMPA_STD1__Iampa_std_w_post_Core_2_subgroup_1__Iampa_std_w_Core_2_Vw));
            Iampa_std_post += (Iampa_std_w_post * weight) * alpha_ampa_post;
            _ptr_array_Core_2_Iampa_std[_postsynaptic_idx] = Iampa_std_post;
            _ptr_array_Core_2_std_pulse[_postsynaptic_idx] = std_pulse;

        }
    }
    }

}

void _debugmsg_AMPA_STD1_pre_codeobject()
{
    using namespace brian;
    std::cout << "Number of synapses: " << _dynamic_array_AMPA_STD1__synaptic_pre.size() << endl;
}

