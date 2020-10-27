#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

int MAX = 10000000;

template<class T, size_t N>
int minArr(T (&arr) [N]) {

    int min = MAX;
    for (unsigned int i = 0; i < N; i++)
        if (min > arr[i])
            min = arr[i];

    return min;
}

#endif //TASK1_TASK3_H
