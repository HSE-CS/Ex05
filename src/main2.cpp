#include <iostream>
#include "task2.h"

int main() {
    const int size = 6;
    int arg[size] = { 2,5,7,1,-1,8 };
    std::cout << averageArr(arg, size);
    return 0;
}