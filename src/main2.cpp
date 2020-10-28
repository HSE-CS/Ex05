#include <iostream>
#include <cstring>
#include "task2.h"


int main() {
    int size = 6;
    int a[size] = { 4, 3, 2, 2, 2, -1 };

    std::cout << averageArr(a, size);

    return 0;
}