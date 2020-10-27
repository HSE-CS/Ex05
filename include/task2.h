#ifndef EX05_TASK2_H
#define EX05_TASK2_H

#include <iostream>

template<typename T>
T averageArr(T *a, int n) {
    T s = 0;
    int i = 0;
    while (i < n) {
        s += a[i];
        ++i;
    }
    T av = s / n;
    return av;
}

#endif //EX05_TASK2_H
