#pragma once
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>

template<typename T>
auto minArr(T &arr) {
    auto min = arr[0];
    int size = sizeof(arr)/sizeof(min);
    for (int i = 0; i < size; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}
