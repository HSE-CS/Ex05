#include <iostream>


template <typename T, size_t sizeArr>
T minArr(T(&arr)[sizeArr]) {
    T res_min = arr[0];
    for (auto num : arr) {
        if (num < res_min)
            res_min = num;
    }
    return res_min;
}