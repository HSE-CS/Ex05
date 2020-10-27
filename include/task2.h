#ifndef TASK2_H
#define TASK2_H

template <typename T>
T averageArr(T *arr, unsigned N){
    T sum = 0;
    for(unsigned i = 0; i < N; i++){
        sum += arr[i];
    }
    return sum / (T)N;
}

#endif // TASK2_H
