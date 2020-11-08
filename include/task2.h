#ifndef TASK2_H
#define TASK2_H

template <typename T>
int averageArr(T* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum =  sum + arr[i];
    }
    return sum / size;
} 

#endif