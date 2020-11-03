#ifndef TASK2_H
#define TASK2_H

template<class T> T averageArr (T* arr, size_t size) 
{
    T sum = 0;
    for (int i = 0; i < size; i++) sum = sum + arr[i];
    sum = sum/(T)size;
    return sum;
}
#endif 
