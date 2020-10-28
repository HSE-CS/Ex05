//
//  main2.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 28.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include <stdio.h>
#include "task2.h"

int main() {
    int arr[10] = { 1, 2, 4, 9, 1, 3, 5, 7, 1, 3 };
    std::cout << averageArr(arr, 10) << std::endl;
    return 0;
}
