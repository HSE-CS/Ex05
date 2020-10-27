#ifndef Task3_H
#define Task3_H


using namespace std; 


template <typename T, size_t n>
T minArr(T (& arr)[n])
{
	size_t size = sizeof(arr) / sizeof(arr[0]);
	T min = INT_MAX;
	for (size_t i = 0; i < n; i++) {
		if (arr[i] < min) min = arr[i];
	}
	return min;
} 
#endif
