//
// Created by Vadim Makarov on 27.10.2020.
//


#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <iostream>

using namespace std;

template <class T>
int averageArr(T arr, const size_t size){
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return (sum/size);
}


#endif //TASK1_TASK2_H
