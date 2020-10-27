//
// Created by Vadim Makarov on 27.10.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <iostream>
#include <cstring>

using namespace std;

template <class T>
bool less(T param1, T param2){
    return param1 < param2;
}

template <>
bool less(const char* param1, const char* param2){
    return (strcmp(param1, param2) > 0);
}



#endif //TASK1_TASK1_H
