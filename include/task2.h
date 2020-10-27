#ifndef TASK2_H
#define TASK2_H
#include <iostream>

template<typename T1, typename T2> 
double averageArr(T1 *a, T2 size){
    T1 sum = 0;
    for (int i = 0; i < size; i++){
        sum += a[i];
    }
    return sum/size;
}

#endif