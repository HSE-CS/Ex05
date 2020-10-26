//
// Created by kasya on 26.10.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <cstring>

template<typename T>
bool less(T a, T b) {
    return a < b;
}

template<>
bool less(char *a, char *b) {
    if (strcmp(a, b) < 0) {
        return true;
    }else{
        return false;
    }
}

#endif //TASK1_TASK1_H
