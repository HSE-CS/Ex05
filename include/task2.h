#include <iostream>

template <typename T>
T averageArr(T* arr, int sizeArr) {
    T sum_res = 0;
    for (int i = 0; i < sizeArr; i++) {
        sum_res += arr[i];
    }
    return sum_res /= sizeArr;
}
