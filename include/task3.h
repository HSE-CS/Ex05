#ifndef TASK3_TASK_H
#define TASK3_TASK_H

template <typename T, size_t size>
T minArr(T(&array)[size])
{
    T min = array[0];
    for (int i = 1; i < size; i++)
        if (array[i] < min)
            min = array[i];
    return min;
}

#endif //TASK3_TASK_H