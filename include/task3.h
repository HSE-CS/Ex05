#include<cstring>
#include<iostream>

template<typename T, size_t n>
T minArr(T(&point_array)[n]) 
{

	T min = point_array[0];

	for (size_t i = 0; i < n; ++i) 
	{

		min = (min > point_array[i]) ? point_array[i] : min;

	}

	return min;

}