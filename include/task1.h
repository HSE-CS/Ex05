#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <cstring>
#include <string>

template <typename T>
bool less(T first, T second){
    return first < second;
}

template <> bool less<char *>(char *first, char* second){
    return strcmp(first, second) < 0;
}

#endif //TASK1_TASK1_H
