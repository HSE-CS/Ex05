//
// Created by Алексей Трутнев on 26.10.2020.
//

#include <iostream>

template <typename T, size_t size>
T minArr(T (&array)[size]){
    T result_min = array[0];
    for (size_t i = {0}; i < size; ++i) if (array[i] < result_min) result_min = array[i];
    return result_min;
}
