//
// Created by jmax on 27.10.2020.
//

#ifndef EX_05_TASK1_H
#define EX_05_TASK1_H

template <class T, unsigned int size> T minArr(T(&arr)[size]) {
    T min = arr[0];
    for (unsigned int i = 0; i < size; i++) {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}
#endif //EX_05_TASK1_H
