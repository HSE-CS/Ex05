#ifndef TASK3_H
#define TASK3_H

#include <string.h>
#include <iostream>

template <typename T, size_t N> int minArr(T (&arr)[N])
{
	int n = sizeof(arr) / sizeof(int);
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}


#endif