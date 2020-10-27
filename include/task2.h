#include <iostream>

template<typename T> T averageArr(T* a, int n)
{
    T sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    return sum / n;
}