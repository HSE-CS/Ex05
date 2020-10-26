#include <iostream>
#include <cstring>
#ifndef TASK1_H
#define TASK1_H

template <class T>
bool less(T first, T second)
{
    return first < second;
}

template <>
bool less<char *>(char *first, char *second)
{
    return std::strcmp < 0;
}

#endif