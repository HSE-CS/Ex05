#include <iostream>
#include "task3.h"
#define Number 10

int main() {
    int arr[Number];
    for(int i = 0; i < Number; i++) arr[i] = i * (1 ^ i);
    std::cout << minArr(arr);
    return 0;
}
