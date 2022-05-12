#include "code_objects/Core_3_thresholder_2_codeobject.h"
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



void _run_Core_3_thresholder_2_codeobject()
{
    using namespace brian;


    ///// CONSTANTS ///////////
    const size_t _numIspkthr = 1;
const size_t _num_spikespace = 257;
const int64_t N = 256;
const size_t _numlastspike = 256;
const size_t _numImem = 256;
const size_t _numt = 1;
const size_t _numnot_refractory = 256;
    ///// POINTERS ////////////
        
    double*   _ptr_array_Core_3_Ispkthr = _array_Core_3_Ispkthr;
    int32_t* __restrict  _ptr_array_Core_3__spikespace = _array_Core_3__spikespace;
    double* __restrict  _ptr_array_Core_3_lastspike = _array_Core_3_lastspike;
    double* __restrict  _ptr_array_Core_3_Imem = _array_Core_3_Imem;
    double*   _ptr_array_defaultclock_t = _array_defaultclock_t;
    char* __restrict  _ptr_array_Core_3_not_refractory = _array_Core_3_not_refractory;



    //// MAIN CODE ////////////
    // scalar code
    const int _vectorisation_idx = -1;
        
    const double Ispkthr = _ptr_array_Core_3_Ispkthr[0];



    long _count = 0;
    for(size_t _idx=0; _idx<N; _idx++)
    {
        const size_t _vectorisation_idx = _idx;
                
        const double Imem = _ptr_array_Core_3_Imem[_idx];
        const char not_refractory = _ptr_array_Core_3_not_refractory[_idx];
        char _cond;
        if(!not_refractory)
            _cond = (Imem > Ispkthr) && false;
        else 
            _cond = (Imem > Ispkthr) && true;

        if(_cond) {
            _ptr_array_Core_3__spikespace[_count++] = _idx;
            _ptr_array_Core_3_not_refractory[_idx] = false;
            _ptr_array_Core_3_lastspike[_idx] = _ptr_array_defaultclock_t[0];
        }
    }
    _ptr_array_Core_3__spikespace[N] = _count;

}


