#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

template <typename T, size_t n>
T minArr(T(&arr)[n])
{
	T min = *arr;
	for (unsigned int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}


