#include <iostream>
#include <cstring>
#include "task3.h"


int main() {
    const int size = 6;
    int a[size] = { 4, 3, 2, 2, 2, -1 };

    std::cout << minArr(a);

    return 0;
}