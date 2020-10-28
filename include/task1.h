//
// Created by jmax on 27.10.2020.
//

#ifndef TASK1_H
#define TASK1_H
#include <cstring>
template<class T> bool less(T a, T b) {
    return a < b;
}

template <> bool less(const char* a, const char* b) {
    return strcmp(a, b) < 0;
}
#endif //EX_05_TASK1_H
