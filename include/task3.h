//
// Created by Алексей Трутнев on 26.10.2020.
//

#ifndef EX05_TASK3_H
#define EX05_TASK3_H

#include <iostream>

template <typename T, auto n>
T minArr(T (&array)[n]){
    int result_min = {INT_MAX};
    for (auto i = 0; i < sizeof(array); ++i) if (array[i] < result_min) result_min = array[i];
//    for (size_t i = 0; i < sizeof(array); ++i) if (array[i] < result_min) result_min = array[i];
    return result_min;
}

#endif //EX05_TASK3_H
