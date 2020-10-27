#ifndef Task2_H
#define Task2_H


using namespace std; 


template <typename T>
double averageArr(T ptr, size_t size_arr)
{
	double sum = 0;
	for (size_t i = 0; i < size_arr; i++)
		sum += ptr[i];
	return sum / size_arr;
} 
#endif
