#include <cstring>
#include <typeinfo>

template < typename T, size_t size>
T minArr(T(&array)[size]) {
    T min = array[0];
    for (T i : array)
        if (i < min)
            min = i;
    return min;
}