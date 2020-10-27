#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H


template<class T, size_t N>
int minArr(T (&arr) [N]) {

    auto min = arr[0];
    for (unsigned int i = 0; i < N; i++)
        if (min > arr[i])
            min = arr[i];

    return min;
}

#endif //TASK1_TASK3_H
