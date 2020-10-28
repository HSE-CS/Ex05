//
//  task2.h
//  programming-technologies
//
//  Created by Даниил Иванов on 28.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include <iostream>
template<typename T>

double averageArr(T arr, T len) {
    double result{ 0 };
    for (size_t i = 0; i < len; i++)
    {
        result += arr[i];
    }
    result /= len;
    return result;
}


/* task2_h */
