//
// Created by islam on 06.10.2020.
//

#ifndef WORK_TASK3_H
#define WORK_TASK3_H

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string>


template <typename T, size_t n> T minArr(T (&array)[n]){
    T m = array[0];
    for (int i = 1; i < n; i++)
    {
        if(array[i] < m)
            m = array[i];
    }
    return m;
}

#endif //WORK_TASK3_H
