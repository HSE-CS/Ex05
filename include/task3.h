//
// Created by Vadim Makarov on 27.10.2020.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <iostream>

using namespace std;


template <class T, size_t size>
T minArr(T (&arr)[size]){
    T minElem = arr[0];
    for (int i = 0; i < size; ++i) {
        if (minElem > arr[i]){
            minElem = arr[i];
        }
    }
    return minElem;
}


#endif //TASK1_TASK3_H
