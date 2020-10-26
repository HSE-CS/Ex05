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
bool less1(T& a, T& b)
{
	if (typeid(T) == typeid(stroka))
	{
		while ((a) && (b))
		{
			if (a < b)
				return true;

			if (a > b)
				return false;

			if (a == b)
			{
				a++;
				b++;
			}

		}
	}

	else if (a < b) return true;
		else return false;
}

#endif