//
// Created by User on 29.10.2020.
//

#include <bits/stdc++.h>

using namespace std;


template<class T>
int averageArr(T *array, int n) {
    T answer = 0;
    for (int i = 0; i < n; ++i) answer += array[i];
    return answer / (T) n;
}

