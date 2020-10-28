#define TASK2_H
#include <iostream>

template<class T> int averageArr(T* arg, unsigned int n)
{
    int amount = 0;
    for (size_t i = 0; i < n; ++i) {
        amount += arg[i];
    }
    return amount / n;
}
