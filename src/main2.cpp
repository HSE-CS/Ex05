//
// Created by Алексей Трутнев on 27.10.2020.
//

#include <iostream>
#include "task2.h"

int main() {
    int arr1[] = {4, 3, 2, 2, 2, -1};
    std::cout << averageArr(arr1, sizeof(arr1)/sizeof(int)) << std::endl;
    return 0;
}