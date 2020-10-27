#include <iostream>

template <typename T>
double averageArr(T ptr, int size_arr)
{
	double sum = 0;
	for (unsigned i = 0; i < size_arr; ++i)
		sum += ptr[i];
	return sum / size_arr;
} 