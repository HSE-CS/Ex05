#include <iostream>
template <typename T, size_t size>
T minArr(T (&array)[size]){
    T res = array[0];
    for (size_t i = {0}; i < size; ++i) if (array[i] < res) res = array[i];
    return res;
}