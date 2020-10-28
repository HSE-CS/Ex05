//
// Created by User on 29.10.2020.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <bits/stdc++.h>

using namespace std;

namespace Ex05 {

    template<class T>
    int averageArr(T *array, int n) {
        T answer = 0;
        for (int i = 0; i < n; ++i) answer += array[i];
        return answer / (T) n;
    }

}

#endif //TASK1_TASK2_H
