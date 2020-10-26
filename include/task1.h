#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED
#include <cstring>

template<class T> bool less(T a, T b)
{
	return a < b;
}

template<> bool less<const char*>(const char* a, const char* b)
{
   return strcmp(a, b) == -1;
}


#endif // TASK1_H_INCLUDED
