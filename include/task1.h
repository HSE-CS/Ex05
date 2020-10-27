#ifndef TASK1_H
#define TASK1_H
#include <string.h>
template <typename T> bool less(T a, T b)
{
	return (a < b);
}
template <> bool less(const char* str1, const char* str2)
{
	if (strcmp(str1, str2) < 0)
		return true;
	return false;
}
#endif
