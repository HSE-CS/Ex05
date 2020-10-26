#include<cstring>
#include<iostream>

template<typename T, typename S>
T averageArr(T* point_array, S size) 
{

	T sum = 0;

	for (size_t i = 0; i < size; ++i) 
	{
		sum += point_array[i];
	}

	return (sum / size);

}