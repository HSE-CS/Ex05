//
// Created by toliman on 27.10.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <bits/stdc++.h>

template<class T>
bool less(T first, T second) {

    if (!strcmp(typeid(first).name(), "i")) {
        return (bool) (first < second);
    }

    if (!strcmp(typeid(first).name(), "c")) {
        return (bool) (first < second);
    }
}

template<>
bool less<char *>(char *first, char *second) {
    return (bool) (strcmp(first, second) < 0);
}


#endif //TASK1_TASK1_H
