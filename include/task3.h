#include <iostream>
#include <cmath>
#include <cstring>


template <typename T, size_t n>
T minArr(T(&arr)[n]) {
    T min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
