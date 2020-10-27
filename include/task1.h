#ifndef TASK1_H
#define TASK1_H

#include <string.h>

template <typename T>
bool less(T a, T b){
    return a < b ? true : false;
}


template <>
bool less(const char* a, const char* b){
    return strcmp(a, b) < 0 ? true : false;
}

#endif // TASK1_H
