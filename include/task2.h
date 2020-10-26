#include <iostream>

template<typename T1,typename T2>
T1 averageArr(T1*arr, T2 n)
{
	T1 sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum / n;
}
