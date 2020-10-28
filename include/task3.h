#pragma once
#include <limits>

template <typename T, unsigned int size>
T minArr(const T (&arr)[size])
{
	T min = std::numeric_limits<int>::max();

	for (int i = 0; i < size; ++i)
		if (arr[i] < min)
			min = arr[i];
	return min;
}