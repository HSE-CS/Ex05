#pragma once
#include<iostream>
#include<cstring>

template<typename T, size_t n>
T minArr(T (&arr)[n]) {
	T min = arr[0];
	for (size_t i = 0; i < n; ++i) {
		if (min>arr[i])
			min = arr[i];
	}
	return min;
} 