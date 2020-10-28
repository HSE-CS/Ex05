//
//  task3.h
//  programming-technologies
//
//  Created by Даниил Иванов on 28.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//


#include <iostream>
template<typename T>
#define INT_MAX 2147483647

int minArr(T arr) {
    int len = sizeof(arr) / sizeof(arr[0]);
    int min{ INT_MAX };
    for (size_t i = 0; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
/* task3_h */
