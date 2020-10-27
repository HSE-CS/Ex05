#ifndef task3_h
#define task3_h

#include <iostream>

template <typename T, size_t size>
T minArr(T(&arr)[size]) {
    T min = arr[0];
    for (unsigned int i = 0; i < size; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

#endif
