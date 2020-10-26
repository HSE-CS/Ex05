#ifndef TASK2_H
#define TASK2_H

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

template <typename T, typename T2>
double averageArr(T& a, T2& b)
{
	//typedef T new_type;
	//new_type sum = 0;
	double sum = 0;
	for (unsigned int i = 0; i < b; i++)
		sum += *(a + i);
	return ((double)(sum / b));
}

#endif