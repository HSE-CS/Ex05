#ifndef EX05_TASK1_H
#define EX05_TASK1_H

#include <iostream>
#incliude <cstring>

template<typename T>
bool less(T a, T b) {
    return a < b;
}

template<>
bool less<const char *>(const char *s1, const char *s2) {
    return strcmp(s1, s2) < 0;
}

#endif //EX05_TASK1_H
