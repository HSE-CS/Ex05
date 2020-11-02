#pragma once

template <typename T>
T averageArr(const T* mas, int size)
{
	T s = 0;
	for (int i = 0; i < size; i++)
	{

		s += mas[i];

	}
	return s / size;

}