//
// Created by sharg on 27.10.2020.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H
#include <cstring>
#include <typeinfo>

template < typename T, size_t size>
T minArr(T (&array)[size]) {
    T minNumber = array[0];
    for (T number:array)
        if(number<minNumber)
            minNumber=number;
    return minNumber;
}
#endif //TASK1_TASK3_H
