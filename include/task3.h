#include <iostream>
template<typename T>

T minArr(T arr) {
	int len = sizeof(arr) / sizeof(arr[0]);
	double min{ INT_MAX };
	for (size_t i = 0; i < len; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}