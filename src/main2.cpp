#include "task2.h"
#include <iostream>
#include <string>
#include <string.h>


int main() {


    const size_t n = 6;
    int val[n]{ 4, 3, 2, 2, 2, -1 };
    std::cout << ::averageArr<int>(val, n);


    return 0;
}