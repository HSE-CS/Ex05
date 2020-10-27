#ifndef TASK3_H
#define TASK3_H

#include <string.h>
#include <iostream>

template <typename T> int minArr(T arr)
{
	int n = sizeof(arr) / sizeof(T);
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (i < min)
			min = i;
	}
	return min;
}


#endif