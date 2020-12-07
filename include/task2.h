#ifndef TASK2_H
#define TASK2_H
template<typename T>
T averageArr(T* arr, size_t t) {
    T a = *arr;
    for (int i = 1; i < t; i++) {
        a += arr[i];
    }
    return a / t;
}
#endif
