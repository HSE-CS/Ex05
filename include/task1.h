
#include <iostream>
#include <string>
#include <cstring>

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

template<class T> bool less(T a, T b)
{
    return a < b;
}
template<> bool less<const char*>(const char* a, const char* b)
{
    return strcmp(a, b) < 0;
}

/*
template<class T> bool less(T& a, T& b){
    if(a < b) return true;
    else return false;
}
template<> bool less <const char*>(const char* a, const char* b)
{
    return strcmp(a, b) < 0;
}
*/
#endif //TASK1_TASK1_H
