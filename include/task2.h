//
// Created by jmax on 27.10.2020.
//

#ifndef TASK2_H
#define TASK2_H

template<class T> T averageArr(T* arr, size_t size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum/(T)size;
}
#endif //EX_05_TASK1_H
