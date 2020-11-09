#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <cstring>

template<typename T>
int averageArr(T * array, int SIZE) {
    long sum = 0;
    for (int i = 0; i < SIZE; ++i)
        sum += array[i];
    return (int) (sum / SIZE);
}
#endif //TASK1_TASK2_H
