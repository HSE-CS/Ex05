#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <cstring>

template < typename T >
int averageArr(T arr, size_t n)
{
    int temp = 0;
    for(int i = 0; i < n; i++)
    {
        temp = temp + arr[i];
    }
    return temp / n;
}

#endif //TASK1_TASK2_H
