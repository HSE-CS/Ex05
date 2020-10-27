#ifndef EX05_TASK3_H
#define EX05_TASK3_H

#include <iostream>

template<typename T>
auto minArr(T &arr) {
    auto minimal = arr[0];
    int n;
    n = sizeof(arr) / sizeof(minimal);
    int i = 0;
    while (i < n) {
        if (arr[i] < minimal)
            minimal = arr[i];
        ++i;
    }
    return minimal;
}

#endif //EX05_TASK3_H
