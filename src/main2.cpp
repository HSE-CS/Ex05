#include <iostream>
#include <task2.h>


int main() {
    const int n = 4;
    int *arr = new int[n]{ 1,2,3,4 };
    std::cout << averageArr(arr, n) << std::endl;
    return 0;
}
