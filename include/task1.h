#ifndef TASK1_H
#define TASK1_H
#include <string.h>
#include <iostream>

template <typename T> bool less(T a, T b)
{
	return (a < b);
}

template <> bool less(const char* str1, const char* str2)
{
	if (strcmp(str1, str2) < 0)
		return true;
	else return false;
}

#endif