#ifndef TASK2_TASK2_H
#define TASK2_TASK2_H

#include <iostream>
using namespace std;

template <typename T>
double averageArr(T *arr, int size){
    int counter;
    T sum = arr[0];
    for (counter = 1; counter < size; ++counter)
        sum += arr[counter];
    return sum / 1.0 / counter;
}


#endif //TASK2_TASK2_H
