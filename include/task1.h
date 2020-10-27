#ifndef TASK1_H
#define TASK1_H

#include <string.h>

template <typename T>
bool less(T left, T right) {
	return left < right;
}
template <> bool less <const char*>(const char* left, const char* right)
{
	if (strcmp(left, right) < 0) return true;
	return false;
}
#endif
