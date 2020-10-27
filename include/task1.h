#include <iostream>
#include <string.h>

template<typename T>
bool less(T x, T y)
{
    return x<y;
}

template<>
bool less<const char*>(const char* x, const char* y)
{
    return strcmp(x,y)<0;
}