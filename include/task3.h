#ifndef TASK3_H
#define TASK3_H

#include <iostream>

template <typename T, size_t N> 
T minArr(T (&arr)[N])
{
	T min = arr[0];
	for (int i = 1; i < N; i++)
		if (arr[i] < min)
			min = arr[i];

	return min;
}

#endif
