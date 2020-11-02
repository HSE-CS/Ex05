#pragma once

template <typename T>
T averageArr(const T* array, int length)
{
	T s = 0;
	for (int i = 0; i < length; i++)
	{

		s += array[i];

	}
	T average_value =  s / length;
	return average_value;

}