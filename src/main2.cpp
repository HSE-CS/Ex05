#include <iostream>
#include "../include/task2.h"
int main() {
    int arr[10];
    for(int i = 0; i < 10; i++) arr[i] = i * (1 ^ i);
    std::cout << averageArr(arr, 10);
    return 0;
}