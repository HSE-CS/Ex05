#ifndef TASK1_H
#define TASK1_H

#include <string.h>

template<class T>
bool less(T a, T b){
    return a < b;
}

template<>
bool less(char *a, char *b){
    return (bool)strcmp(a, b);
}
#endif