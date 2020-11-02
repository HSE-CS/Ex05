//
// Created by jmax on 27.10.2020.
//

#ifndef TASK3_H
#define TASK3_H

template <class T, size_t size> T minArr(T(&arr)[size]) {
    T min = arr[0];
    for (T item : arr) {
        if (min > item)
            min = item;
    }
    return min;
}
#endif //EX_05_TASK1_H
