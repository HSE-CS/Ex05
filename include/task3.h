#ifndef TASK3_H
#define TASK3_H

#include<iostream>

template <typename T, size_t n>
T minArr(T (&a)[n]) {
	T min = a[0];
	for (size_t i = 0; i < (sizeof(a)/sizeof(a[0])); i++) {
		if (a[i] < min)
			min = a[i];
	}
	return min;
}
#endif 
