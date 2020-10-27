#ifndef TASK3_H
#define TASK3_H

#include <stddef.h>

template<class T, size_t N>
T minArr(T(&arr)[N]) {
	T min = arr[0];
	for (size_t i = 1; i < sizeof(arr) / sizeof(arr[0]); ++i) {
		min = min < arr[i] ? min : arr[i];
	}
	return min;
}

#endif