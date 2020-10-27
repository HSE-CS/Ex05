#ifndef Task3_H
#define Task3_H
#include <iostream>

using namespace std; 


template <typename T, size_t n>
T minArr(T (& arr)[n])
{
	T min = arr[0];
	for (size_t i = 0; i < n; i++) {
		if (arr[i] < min) min = arr[i];
	}
	return min;
} 
#endif
