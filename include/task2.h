#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <iostream>

template<class T>
int averageArr(T & arr, int N) {

    int sum = 0;
    for (unsigned int i = 0; i < N; i++)
        sum += arr[i];
    sum/=N;

    return sum;
}

#endif //TASK1_TASK2_H
