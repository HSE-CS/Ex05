//
// Created by sharg on 27.10.2020.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H
#include <typeinfo>
#include <cstring>

template < typename T >
auto averageArr(T* array, size_t arraySize) ->T{
    T sum = 0;
    for (size_t number=0;number<arraySize;number++)
        sum += array[number];
    return (sum / arraySize);
}
#endif //TASK1_TASK2_H
