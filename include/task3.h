//
// Created by victor on 10.11.2020.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H
#include <cstring>

template<typename T, int SIZE>
int minArr(T (& array) [SIZE]) {
    int min = array[0];
    for (int i = 0; i < SIZE; ++i)
        if (array[i] < min)  min = array[i];
    return min;
}

#endif //TASK1_TASK3_H
