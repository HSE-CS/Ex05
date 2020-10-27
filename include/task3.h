#include <iostream>

template<class T> int minArr(T& arr)
{
	int min = arr[0];
	for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); ++i)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

