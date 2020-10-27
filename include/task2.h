#pragma once
#include <iostream>
#include <cstring>

template <typename T>
T averageArr(T* a, unsigned n)
{
	T res = 0;

	for (int i = 0; i < n; i++)
		res += a[i];

	res /= n;
	return res;
}