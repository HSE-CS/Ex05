#include <iostream>
#include "task2.h"

int main() {
    const size_t n = 8;
    int arr[n]{ 10, 20, 5, 4, 1, -7, 8, -1 };
    std::cout << averageArr(arr, n) << std::endl;
    return 0;
}
