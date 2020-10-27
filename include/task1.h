#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
bool less(T value1, T value2) 
{
	if (value1 < value2)
		return true;
	else
		return false;
}

template <>
bool less(const char* value1, const char* value2) 
{
	if (strcmp(value1, value2)<0)
		return true;
	else
		return false;
}

#endif