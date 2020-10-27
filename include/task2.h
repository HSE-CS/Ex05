#define task2_h
#include <iostream>


template <typename T> int averageArr(T& arr, int n)
{
	int sum = 0;
	for (size_t i = 0; i < n; ++i)
	{
		sum += arr[i];
	}
	return(sum/n);
}
