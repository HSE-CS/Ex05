#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <iostream>
using namespace std;

template <typename T, size_t arr_size>
T minArr(T (&arr)[arr_size]){
    T min = arr[0];
    for (int i = 0; i < arr_size; ++i)
        min = arr[i] < min ? arr[i] : min;
    return min;
}

#endif //TASK1_TASK3_H
