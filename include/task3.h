//
// Created by freeb on 26.10.2020.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <algorithm>

template<typename T, int N>
T minArr(T (&arr)[N]) {
    T c = arr[0];
    for (int i = 1; i < N; i++) {
       if (c > arr[i]) {
           c = arr[i];
       }
    }
    return c;
}

#endif //TASK1_TASK3_H
