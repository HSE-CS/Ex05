#ifndef TASK1_H
#define TASK1_H

#include <cstring>

template<class T> bool less(T a, T b) 
{
    if a < b
        return 1;
    else
        return 0; 
}
template<> bool less<const char*>(const char* a, const char* b)
{
    if strcmp(a, b) < 0
        return 1;
    else
        return 0;
}

#endif