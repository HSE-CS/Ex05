#ifndef TASK1_H
#define TASK1_H

#include <string.h>


template<class S>
bool less(S a, S b)
{
	return a > b;
}
template<> bool less<const char*>(const char* a, const char* b)
{
	return strcmp(a, b) > 0;
}

#endif