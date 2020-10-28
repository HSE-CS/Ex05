#include <iostream>

template <typename T>
auto minArr(T &arr){
    auto min = arr[0];
    for (int i = 0; i < sizeof(arr) / sizeof(min); i++)
        if (arr[i] < min) min = arr[i];
    return min;
}
