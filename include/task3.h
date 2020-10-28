#include <iostream>
#include <cstring>
#ifndef TASK3_H
#define TASK3_H

template <typename T, size_t n>
T minArr(T(&a)[n]) {

	T min = a[0];

	for (size_t i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}

	return min;

}

#endif