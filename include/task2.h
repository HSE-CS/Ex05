#include <iostream>

template <typename T>
T averageArr(T *arr, unsigned int size){

    T sum = 0;
    for (unsigned int i = 0; i < size; i++){
        sum += arr[i];
    }
    return (T)sum / size;
}