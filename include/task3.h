#ifndef TASK3_H
#define TASK3_H

#include <iostream>
using namespace std;

template <typename T, const unsigned int size>
T minArr(T(&arr)[size]) 
{
	T minimal = arr[0];
	for (int i = 0; i < size; i++) 
	{
		if (minimal > arr[i]) 
		{
			minimal = arr[i];
		}
	}
	return minimal;
}

#endif