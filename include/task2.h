<<<<<<< HEAD
#pragma once
#ifndef TASK_2
#define TASK_2
template <class T> double averageArr(T* mass, int size)
{
	int summ = 0;
	for (int x = 0; x < size; x++)
	{
		summ += mass[x];
	}
	return float(summ) / size;
}
#endif // !TASK_2
=======
#include <iostream>
template <typename T>
double averageArr(T * array, size_t size){
    double sum = {0.};
    for (size_t i = {0}; i < size; ++i) sum += array[i];
    return sum / size;
}
>>>>>>> 2ce3b7f6962f4fbc560a4d79681365483cd63024
