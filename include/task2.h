//
// Created by islam on 29.09.2020.
//

#ifndef WORK_TASK2_H
#define WORK_TASK2_H

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string>

template<class T>T averageArr(T *array, int size){
    T s = array[0];
    for(int i = 1; i < size;i++)
    {
        s = s + array[i];
    }

    return s / size;
}

#endif //WORK_TASK2_H
