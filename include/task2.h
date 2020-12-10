//
// Created by stoja on 10.12.2020.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <iostream>

template <typename T>
T averageArr(T *arr, unsigned int size){

    T sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return (T)sum / size;
}

#endif //TASK1_TASK2_H
