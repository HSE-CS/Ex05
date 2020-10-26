#include <iostream>
#include <algorithm>
#include "../include/task3.h"


int main() {
    const size_t n = 6;
    double arr1[n] = {1.5, 10.0, 5.5, 4.87, 65.3, 14.0};
    int arr2[n] = {4, 3, 2, 2, 2, -1};
    std::cout << minArr(arr1) << '\n';
    std::cout << minArr(arr2) << '\n';
    return 0;
}

