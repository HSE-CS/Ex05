#ifndef TASK2_TASK_H
#define TASK2_TASK_H

template <typename T>
T averageArr(T* array, int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];
    return sum / size;
}

#endif //TASK2_TASK_H