#ifndef TASK3_H
#define TASK3_H
#include <iostream>

template<typename T, size_t size>
T minArr(T (&array)[size]){
    int min = array[0];
    for (int i = 1; i < size; i++){
        if (min > array[i])
            min = array[i];
    }
    return min;
}

#endif