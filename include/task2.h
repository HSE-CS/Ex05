#include <iostream>


template <typename T>
T averageArr(T* arr, size_t sizeArr) {
    T sum = 0;
    for (int i = 0; i < sizeArr; i++) {
        sum += arr[i];
    }
    return sum /= sizeArr;
}