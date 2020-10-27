#pragma once
#include <cstring>

template<typename T>
bool less(T param1, T param2)
{
   return param1 < param2;
}
template<>
bool less<const char*>(const char* str1, const char* str2)
{
    return strcmp(str1, str2) < 0;
}

