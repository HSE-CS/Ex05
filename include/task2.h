<<<<<<< HEAD
#ifndef Task2_H
#define Task2_H
#include <iostream>

using namespace std; 


template <typename T>
double averageArr(T arr, size_t size_arr)
{
	T sum = 0;
	for (size_t i = 0; i < size_arr; i++)
		sum += arr[i];
	return sum / size_arr;
} 
#endif
=======
#include <iostream>

template <typename T>
double averageArr(T ptr, int size_arr)
{
	double sum = 0;
	for (unsigned i = 0; i < size_arr; ++i)
		sum += ptr[i];
	return sum / size_arr;
} 
>>>>>>> origin/b112
