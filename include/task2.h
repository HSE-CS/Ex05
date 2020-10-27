//
// Created by Алексей Трутнев on 26.10.2020.
//

#include <iostream>

template <typename T>
double averageArr(const T * array, size_t size){
    double sum = {0.};
    for (size_t i = {0}; i < size; ++i) sum += array[i];
    return sum / size;
}


