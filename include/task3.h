//
// Created by Алексей Трутнев on 26.10.2020.
//

#ifndef EX05_TASK3_H
#define EX05_TASK3_H

#include <iostream>

template <typename T>
float minArr(const T * array){
    float result_min = 0.;
    for (size_t i = 0; i < sizeof(array); ++i) if (array[i] < result_min) result_min = array[i];
    return result_min;
}

#endif //EX05_TASK3_H
