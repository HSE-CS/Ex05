#include <iostream>
#ifndef TASK3_H
#define TASK3_H

template <class T, size_t arr_size>
T minArr(T (&arr)[arr_size])
{
    T min_element = arr[0];
    for (size_t i = 1; i < arr_size; i++)
    {
        if (arr[i] < min_element)
            min_element = arr[i];
    }
    return min_element;
}

#endif