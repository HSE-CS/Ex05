#ifndef TASK3_H
#define TASK3_H

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

template <typename T, size_t n>
T minArr(T (&arr)[n])
{
	T min = INT_MAX;
	for (unsigned int i = 0; i < n; i++) if (arr[i] < min) min = arr[i];
	return min;
}

#endif