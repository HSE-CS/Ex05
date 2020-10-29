<<<<<<< HEAD
#ifndef Task3_H
#define Task3_H
#include <iostream>

using namespace std; 

=======
#include <iostream>

>>>>>>> origin/b112

template <typename T, size_t n>
T minArr(T (& arr)[n])
{
<<<<<<< HEAD
	T min = arr[0];
	for (size_t i = 0; i < n; i++) {
		if (arr[i] < min) min = arr[i];
	}
	return min;
} 
#endif
=======
	size_t size = sizeof(arr) / sizeof(arr[0]);
	T min = 2147483647;
	for (size_t i = 0; i < size; i++) {
		if (arr[i] < min) min = arr[i];
	}
	return min;
} 
>>>>>>> origin/b112
