#ifndef TASK1
#define TASK1
#include <string.h>

template <typename T> bool less(T a, T b)
{
	return (a < b);
}


template <> bool less(const char* arr1, const char* arr2)
{
	return (strcmp(arr1, arr2) < 0);
}
#endif