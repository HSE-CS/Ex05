//
// Created by stoja on 10.12.2020.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <iostream>
#include <algorithm>

template<typename T, int n>
T minArr(T(&arr)[n]) {
    T c = arr[0];
    for (int i = 1; i < n; i++) {
        if (c > arr[i]) {
            c = arr[i];
        }
    }
    return c;
}
#endif //TASK1_TASK3_H
