#ifndef TASK1_H
#define TASK1_H

#include <typeinfo>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iterator>

using namespace std;

typedef const char* str;

template <typename T>
bool less(T& a, T& b)
{
	if (typeid(T) == typeid(str))
	{
		if (strcmp(str(a), str(b)) != -1)
			return false;
	    return true;
	}
	else if (a < b) return true;
	return false;
}
#endif 