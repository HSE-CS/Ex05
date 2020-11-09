//
// Created by victor on 10.11.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H
#include "cstring"
template <class T>
bool less(T L, T R) {
    return L < R;
}

template <>
bool less(char *L, char *R){
    return strlen(L) < strlen(R);
}

#endif //TASK1_TASK1_H
