#ifndef TASK1_H
#define TASK1_H

#include <string>
#include <typeinfo>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string.h>
#include <iterator>

using namespace std;

typedef const char* stroka;

template <typename T>
bool less(T& a, T& b)
{
	if (typeid(T) == typeid(stroka))
	{
		if (strcmp((stroka)a, (stroka)b) == 1)
			return false;
		else if (strcmp((stroka)a, (stroka)b) == 0)
			return false;
		else return true;
	}
	else if (a < b) return true;
		else return false;
}
#endif