#include <iostream>

template <typename T, size_t n>
T minArr(T (& arr)[n])
{
	size_t size = sizeof(arr) / sizeof(arr[0]);
	T min = INT_MAX;
	for (size_t i = 0; i < size; i++) {
		if (arr[i] < min) min = arr[i];
	}
	return min;
}