<<<<<<< HEAD

//
// Created by toliman on 27.10.2020.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

// #include <bits/stdc++.h>


template<class T>
int averageArr(T *array, int n) {
    int answer = 0;
    for (int i = 0; i < n; ++i) {
        answer += array[i];
    }
    return answer / (T) n;
}


#endif //TASK1_TASK2_H