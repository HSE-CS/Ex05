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
=======
//
// Created by User on 29.10.2020.
//

#include <bits/stdc++.h>

using namespace std;

template<class T>
T averageArr(T *array, int n) {
    T answer = 0;
    for (int i = 0; i < n; ++i) answer += array[i];
    return answer / (T) n;
}

>>>>>>> a22aa6eae89f777ceabb50a830e1b6624d4fbab1
