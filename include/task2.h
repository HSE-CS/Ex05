//
// Created by freeb on 26.10.2020.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

template<typename T>
T averageArr(T *arr, size_t n){
    T c = *arr;
    for (int i = 1; i < n; i++) {
        c += arr[i];
    }
    return c / n;
}

#endif //TASK1_TASK2_H
