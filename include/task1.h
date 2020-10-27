#include <iostream>
#include <cstring>

template <typename T>
bool less(T first, T second)
{
    if (first < second) {
        return true;
    }
    return false;
}

template <> 
bool less(const char* first, const char* second) {
    if (strcmp(first, second) < 0) {
        return true;
    }
    return false;
}
