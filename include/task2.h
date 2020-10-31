/*
 * @author Stanislav Stoianov
 */

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <iostream>

template<typename T>
double averageArr(T arr, const size_t size) {
    double sum = 0;
    for (auto i = 0; i < size; i++) sum += *arr++;
    return sum /= size;
}

#endif