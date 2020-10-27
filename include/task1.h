#ifndef task1_h
#define task1_h

#include <iostream>
#include <cstring>

template <typename T>
bool less(T x, T y) {
    return x < y;
}

template <>
bool less(const char * x, const char * y) {
    return strcmp(x, y) < 0;
}

#endif
