#ifndef TASK2_H
#define TASK2_H
#include <iostream>
#include <cstring>

template < typename T >

T averageArr(T* arr, size_t size) {

	T sum = 0;

	for (size_t i = 0; i < size; ++i) {

		sum += arr[i];

	}

	return (sum / size);

}

#endif