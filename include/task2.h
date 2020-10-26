#ifndef TASK2_H
#define TASK2_H

#include<iostream>

template <typename T>
T averageArr(T *a, size_t n) {
	T average = 0;
	for (size_t i = 0; i < n; i++) {
		average += a[i];
	}
	return(average / n);
}
#endif 
