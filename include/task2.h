#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

template <typename T>
    double averageArr(T *arr, unsigned int size){

    T sum = 0;
    for (unsigned int i = 0; i < size; i++){
        sum += arr[i];
    }
    return (double)sum / size;
}

#endif //TASK1_TASK2_H
