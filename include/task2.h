#include <iostream>
// #include <time.h>
template<typename T>

double averageArr(T arr, T len) {
	// int len = sizeof(arr) / sizeof(arr[0]);
	double result{ 0 };
	for (size_t i = 0; i < len; i++)
	{
		result += arr[i];
	}
	result /= len;
	return result;
}