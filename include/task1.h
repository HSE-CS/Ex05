#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <string.h>
#include <cstring>
#include <string>

template <typename T>
bool less(T first, T second)
{
    if (first < second) {
        return true;
    } else {
    return false;
    }
}

template <>
bool less(const char* first, const char* second) {
    if (strcmp(first, second) < 0) {
        return true;
    }
    else {
    return false;
    }
}
