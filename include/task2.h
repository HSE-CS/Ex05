//
// Created by kasya on 26.10.2020.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

template<typename T>
T averageArr(T *a, int n) {
    T sum = 0;
    for (size_t i = 0; i < n; ++i) {
        sum += a[i];
    }
    return sum / n;
}

#endif //TASK1_TASK2_H
