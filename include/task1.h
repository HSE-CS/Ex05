//
// Created by toliman on 27.10.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

// #include <bits/stdc++.h>

#include <cstring>


template<class T>
bool less(T first, T second) {
    return first < second;
}

template<>
bool less(const char *first, const char *second) {
    return strcmp(first, second) < 0;
}


#endif //TASK1_TASK1_H
