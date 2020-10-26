#include <iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"

int main() {
//  Task_1
    std::cout << less(6,7) << std::endl;
    std::cout << less("five", "seven") << std::endl;

// Task_2
    int arr1[] = {5, 6, 7, 3, 1, -5, -7, -15};
    std::cout << averageArr(arr1, sizeof(arr1)/sizeof(int)) << std::endl;

// Task_3
    int arr2[] = {5, 6, 7, 3, 1, -5, -7, -15};
    std::cout << minArr(arr2) << std::endl;
    return 0;
}
