#include <iostream>
template <typename T>
double averageArr(T * array, size_t size){
    double sum = {0.};
    for (size_t i = {0}; i < size; ++i) sum += array[i];
    return sum / size;
}