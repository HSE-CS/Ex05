#include <iostream>

template<typename T>
T averageArr(T*arr, T n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum / n;
}
