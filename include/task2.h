#pragma once

template <typename T>
double averageArr(T* arr, unsigned int size)
{
	T sum = 0;
	for (int i = 0; i < size; ++i)
		sum += arr[i];
	return (double)sum / size;
}