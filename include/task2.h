#ifndef TASK2_TASK2_H
#define TASK2_TASK2_H

#include <iostream>
using namespace std;

template <typename T>
T averageArr(T *arr, int size){
    T sum = arr[0];
    for (int i = 1; i < size; ++i)
        sum += arr[i];
    return sum / size;
}


#endif //TASK2_TASK2_H
