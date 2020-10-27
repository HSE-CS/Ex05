#ifndef TASK3_H
#define TASK3_H

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

template<class T, size_t N> T minArr(T (&arr)[N])
{
	T min = arr[0];
	for (size_t i = 0; i < N; i++)
		min = min < arr[i] ? min : arr[i];
	return min;
}

#endif TASK3_H