#ifndef TASK1_H
#define TASK1_H
#include <cstring>

template<class T> bool less(T a, T b) 
{
    return a < b;
}

template <> bool less(const char* first, const char* second) 
{
    return strcmp(first, second) < 0;
}

#endif
