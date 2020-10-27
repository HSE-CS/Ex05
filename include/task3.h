#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H
template <class T, size_t size>
T minArr(T (&arr)[size]{
    T min = arr[0];
    for (int i = 1; i < size; ++i) {
        if(arr[i]<min) min = arr[i];
    }
    return min;
}
#endif //TASK1_TASK3_H
