#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <algorithm>

template<typename T, size_t n>
T minArr(T (&a)[n]) {
    T min = a[0];
    for(size_t i = 0; i < n; ++i) {
        min = std::min(min, a[i]);
    }
    return min;
}

#endif //TASK1_TASK3_H
