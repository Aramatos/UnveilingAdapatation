#include "code_objects/mon_neuron_output_4_codeobject.h"
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



void _run_mon_neuron_output_4_codeobject()
{
    using namespace brian;


    ///// CONSTANTS ///////////
    const int64_t __source_i_Core_1_subgroup_24__offset = 3;
double* const _array_mon_neuron_output_4_t = _dynamic_array_mon_neuron_output_4_t.empty()? 0 : &_dynamic_array_mon_neuron_output_4_t[0];
const size_t _numt = _dynamic_array_mon_neuron_output_4_t.size();
const int64_t _source_start = 3;
int32_t* const _array_mon_neuron_output_4_i = _dynamic_array_mon_neuron_output_4_i.empty()? 0 : &_dynamic_array_mon_neuron_output_4_i[0];
const size_t _numi = _dynamic_array_mon_neuron_output_4_i.size();
const size_t _numN = 1;
const size_t _num_clock_t = 1;
const int64_t _source_stop = 4;
const size_t _num_spikespace = 257;
const size_t _num__source_i_Core_1_subgroup_24__source_i = 256;
const size_t _num_source_t = 1;
const size_t _numcount = 1;
const size_t _num_source_idx = 1;
    ///// POINTERS ////////////
        
    double* __restrict  _ptr_array_mon_neuron_output_4_t = _array_mon_neuron_output_4_t;
    int32_t* __restrict  _ptr_array_mon_neuron_output_4_i = _array_mon_neuron_output_4_i;
    int32_t*   _ptr_array_mon_neuron_output_4_N = _array_mon_neuron_output_4_N;
    double*   _ptr_array_defaultclock_t = _array_defaultclock_t;
    int32_t* __restrict  _ptr_array_Core_1__spikespace = _array_Core_1__spikespace;
    int32_t* __restrict  _ptr_array_Core_1_i = _array_Core_1_i;
    int32_t*   _ptr_array_mon_neuron_output_4_count = _array_mon_neuron_output_4_count;
    int32_t*   _ptr_array_mon_neuron_output_4__source_idx = _array_mon_neuron_output_4__source_idx;


    //// MAIN CODE ////////////

    int32_t _num_events = _ptr_array_Core_1__spikespace[_num_spikespace-1];

    if (_num_events > 0)
    {
        size_t _start_idx = _num_events;
        size_t _end_idx = _num_events;
        for(size_t _j=0; _j<_num_events; _j++)
        {
            const int _idx = _ptr_array_Core_1__spikespace[_j];
            if (_idx >= _source_start) {
                _start_idx = _j;
                break;
            }
        }
        for(size_t _j=_num_events-1; _j>=_start_idx; _j--)
        {
            const int _idx = _ptr_array_Core_1__spikespace[_j];
            if (_idx < _source_stop) {
                break;
            }
            _end_idx = _j;
        }
        _num_events = _end_idx - _start_idx;
        if (_num_events > 0) {
            const size_t _vectorisation_idx = 1;
                        
            const double _source_t = _ptr_array_defaultclock_t[0];

            for(size_t _j=_start_idx; _j<_end_idx; _j++)
            {
                const size_t _idx = _ptr_array_Core_1__spikespace[_j];
                const size_t _vectorisation_idx = _idx;
                                
                const int32_t __source_i_Core_1_subgroup_24__source_i = _ptr_array_Core_1_i[_idx];
                const int32_t _source_i = __source_i_Core_1_subgroup_24__source_i - __source_i_Core_1_subgroup_24__offset;
                const int32_t _to_record_i = _source_i;
                const double _to_record_t = _source_t;

                _dynamic_array_mon_neuron_output_4_i.push_back(_to_record_i);
                _dynamic_array_mon_neuron_output_4_t.push_back(_to_record_t);
                _ptr_array_mon_neuron_output_4_count[_idx-_source_start]++;
            }
            _ptr_array_mon_neuron_output_4_N[0] += _num_events;
        }
    }


}

void _debugmsg_mon_neuron_output_4_codeobject()
{
    using namespace brian;
    const int64_t __source_i_Core_1_subgroup_24__offset = 3;
double* const _array_mon_neuron_output_4_t = _dynamic_array_mon_neuron_output_4_t.empty()? 0 : &_dynamic_array_mon_neuron_output_4_t[0];
const size_t _numt = _dynamic_array_mon_neuron_output_4_t.size();
const int64_t _source_start = 3;
int32_t* const _array_mon_neuron_output_4_i = _dynamic_array_mon_neuron_output_4_i.empty()? 0 : &_dynamic_array_mon_neuron_output_4_i[0];
const size_t _numi = _dynamic_array_mon_neuron_output_4_i.size();
const size_t _numN = 1;
const size_t _num_clock_t = 1;
const int64_t _source_stop = 4;
const size_t _num_spikespace = 257;
const size_t _num__source_i_Core_1_subgroup_24__source_i = 256;
const size_t _num_source_t = 1;
const size_t _numcount = 1;
const size_t _num_source_idx = 1;
        
    double* __restrict  _ptr_array_mon_neuron_output_4_t = _array_mon_neuron_output_4_t;
    int32_t* __restrict  _ptr_array_mon_neuron_output_4_i = _array_mon_neuron_output_4_i;
    int32_t*   _ptr_array_mon_neuron_output_4_N = _array_mon_neuron_output_4_N;
    double*   _ptr_array_defaultclock_t = _array_defaultclock_t;
    int32_t* __restrict  _ptr_array_Core_1__spikespace = _array_Core_1__spikespace;
    int32_t* __restrict  _ptr_array_Core_1_i = _array_Core_1_i;
    int32_t*   _ptr_array_mon_neuron_output_4_count = _array_mon_neuron_output_4_count;
    int32_t*   _ptr_array_mon_neuron_output_4__source_idx = _array_mon_neuron_output_4__source_idx;

    std::cout << "Number of spikes: " << _ptr_array_mon_neuron_output_4_N[0] << endl;
}

