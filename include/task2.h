#include <iostream>
#ifndef TASK2_H
#define TASK2_H

template <class T>
T averageArr(T *arr, int arr_size)
{
    T sum = 0;
    for (size_t i = 0; i < arr_size; i++)
    {
        sum += arr[i];
    }
    return sum / arr_size;
}

#endif