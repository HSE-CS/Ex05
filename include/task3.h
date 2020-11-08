#ifndef TASK3_H
#define TASK3_H

#include <iostream>

template <typename T, size_t n> 
T minArr(T (&arr)[n])
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
    {
		if (arr[i] <= min)
			min = arr[i];
    }
	return min;
}

#endif