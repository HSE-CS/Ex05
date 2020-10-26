//
// Created by Алексей Трутнев on 26.10.2020.
//

#ifndef EX05_TASK3_H
#define EX05_TASK3_H

#include <iostream>

template <typename T, size_t n>
T minArr(T (&array)[n]){
    int result_min = {INT_MAX};
    for (size_t i = {0}; i < sizeof(array)/sizeof(array[0]); ++i) if (array[i] < result_min) result_min = array[i];
    return result_min;
}

#endif //EX05_TASK3_H
