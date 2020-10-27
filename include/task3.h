#pragma once
#include <iostream>
#include <cstring>

template <typename T, int N>
T minArr(T (&a)[N])
{
	T min = a[0];

	for (int i = 1; i < (sizeof(a) / sizeof(T)); i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}
