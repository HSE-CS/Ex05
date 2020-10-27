//
// Created by Алексей Трутнев on 26.10.2020.
//

#ifndef EX05_TASK3_H
#define EX05_TASK3_H

#include <iostream>

template <typename T, size_t size>
T minArr(T (&array)[size]){
    int result_min = array[0];
    for (size_t i = {0}; i < size; ++i) if (array[i] < result_min) result_min = array[i];
    return result_min;
}

#endif //EX05_TASK3_H
