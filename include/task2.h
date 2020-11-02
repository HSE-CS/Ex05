#ifndef TASK2_H
#define TASK2_H

#include <stddef.h>

template<class T>
T averageArr(T* arr, size_t len) {
	T sum = *arr;
	for (size_t i = 1; i < len; ++i) {
		sum += arr[i];
	}
	return sum / (T)len;
}
#endif