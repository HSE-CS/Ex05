#ifndef TASK3_H
#define TASK3_H
#include <iostream>
#include <cstring>

template < typename T, size_t n >

T minArr(T (&arr)[n]) {

	T min = arr[0];

	for (size_t i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {

		if (arr[i] < min)
			min = arr[i];

	}

	return min;

}

#endif