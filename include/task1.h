#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H
#include <typeinfo>
#include <string.h>
template<class T>
bool less(T a, T b) {
    return a < b;
}

template<>
bool less(char* a, char* b) {
    return strcmp(a, b) < 0;
}
#endif //TASK1_TASK1_H
