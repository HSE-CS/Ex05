//
// Created by jmax on 27.10.2020.
//

#ifndef EX_05_TASK1_H
#define EX_05_TASK1_H

#include <string.h>

template <typename T>
bool less(T a, T b){
    return a < b ? true : false;
}


template <>
bool less(const char* a, const char* b){
    return strcmp(a, b) < 0 ? true : false;
}

#endif //EX_05_TASK1_H
