#ifndef TASK1_H
#define TASK1_H
#include <iostream>
#include <string.h>

template <typename T> bool less(T a, T b)
{
	if (a < b)
		return true;
	else
		return false;
}

template <> bool less(char* str1, char* str2)
{
	if (strcmp(str1, str2) < 0)
		return true;
	else
		return false;
}

#endif