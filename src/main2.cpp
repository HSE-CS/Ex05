#include "task2.h"
#include <cstddef>
#include <iostream>

int main() {
    const size_t n = 6;
    double arr1[n] = {1.5, 1.0, 5.5, 4.87, 65.3, 14.0};
    int arr2[n] = {4, 3, 2, 2, 2, -1};
    std::cout << averageArr(arr1, n) << '\n';
    std::cout << averageArr(arr2, n) << '\n';
    return 0;
}

