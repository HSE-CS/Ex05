/*
 * @author Stanislav Stoianov
 */

#include <string.h>

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

template<typename T>
bool less(T first, T second) {
    return first < second;
}

template<>
bool less<const char *>(const char *first, const char *second) {
    return strcmp(first, second) < 0;
}

#endif
