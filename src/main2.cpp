#include "task2.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
    const size_t n = 3;
    int arr[n]{ 1, 2, 3 };
    std::cout << averageArr(arr, n) << "\n";
    return 0;
}