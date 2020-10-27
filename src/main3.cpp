#include <iostream>
#include "task3.h"

int main()
{
    const size_t size= 5;
    int array_int[size]{ 4, 3, 2, 2, -1 };
    std::cout << "Initial array: ";
    for (int i = 0; i < size; i++)
        std::cout << array_int[i] << " ";
    std::cout << "\nanswer: "<< minArr(array_int);

    float array_float[size]{ 4.1, 3.03, 2.1, 2.04, -1.17 };
    std::cout << "\nInitial array: ";
    for (int i = 0; i < size; i++)
        std::cout << array_float[i] << " ";
    std::cout << "\nanswer: "<< minArr(array_float);

    return 0;
}