//
// Created by freeb on 26.10.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <cstring>

template<typename T>
bool less(T a, T b) {
    return a < b;
}

template<>
bool less<const char *>(const char *a, const char *b){
    return std::strcmp(a, b) < 0;
}

#endif //TASK1_TASK1_H
