#include "code_objects/Core_3_resetter_codeobject.h"
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



void _run_Core_3_resetter_codeobject()
{
    using namespace brian;


    ///// CONSTANTS ///////////
    const size_t _numIsoma_reset = 1;
const size_t _num_spikespace = 257;
const size_t _numIsoma_ahp_w = 256;
const size_t _numIsoma_mem = 256;
const size_t _numIsoma_ahp = 256;
const int64_t N = 256;
const size_t _numalpha_ahp = 256;
const size_t _numnot_refractory = 256;
    ///// POINTERS ////////////
        
    double*   _ptr_array_Core_3_Isoma_reset = _array_Core_3_Isoma_reset;
    int32_t* __restrict  _ptr_array_Core_3__spikespace = _array_Core_3__spikespace;
    double* __restrict  _ptr_array_Core_3_Isoma_ahp_w = _array_Core_3_Isoma_ahp_w;
    double* __restrict  _ptr_array_Core_3_Isoma_mem = _array_Core_3_Isoma_mem;
    double* __restrict  _ptr_array_Core_3_Isoma_ahp = _array_Core_3_Isoma_ahp;
    double* __restrict  _ptr_array_Core_3_alpha_ahp = _array_Core_3_alpha_ahp;
    char* __restrict  _ptr_array_Core_3_not_refractory = _array_Core_3_not_refractory;



	const int32_t *_events = _ptr_array_Core_3__spikespace;
	const int32_t _num_events = _ptr_array_Core_3__spikespace[N];

	//// MAIN CODE ////////////	
	// scalar code
	const size_t _vectorisation_idx = -1;
 	
 const double Isoma_reset = _ptr_array_Core_3_Isoma_reset[0];


	
	for(int32_t _index_events=0; _index_events<_num_events; _index_events++)
	{
	    // vector code
		const size_t _idx = _events[_index_events];
		const size_t _vectorisation_idx = _idx;
                
        const double alpha_ahp = _ptr_array_Core_3_alpha_ahp[_idx];
        const double Isoma_ahp_w = _ptr_array_Core_3_Isoma_ahp_w[_idx];
        double Isoma_ahp = _ptr_array_Core_3_Isoma_ahp[_idx];
        double Isoma_mem;
        Isoma_ahp += Isoma_ahp_w * alpha_ahp;
        Isoma_mem = Isoma_reset;
        _ptr_array_Core_3_Isoma_mem[_idx] = Isoma_mem;
        _ptr_array_Core_3_Isoma_ahp[_idx] = Isoma_ahp;

	}

}


