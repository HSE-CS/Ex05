//
// Created by jmax on 27.10.2020.
//

#ifndef EX_05_TASK1_H
#define EX_05_TASK1_H

template <typename T>
T averageArr(T *arr, unsigned N){
    T sum = 0;
    for(unsigned i = 0; i < N; i++){
        sum += arr[i];
    }
    return sum / (T)N;
}

#endif //EX_05_TASK1_H
