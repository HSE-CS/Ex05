#pragma once

template <typename T>
T averageArr(const T* mas, int size)
{
	T sum = 0;
	for (int i = 0; i < size; i++)
	{

		sum += mas[i];

	}
	return sum / size;

}
