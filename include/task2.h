#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED

template<class T> T averageArr(T* arr, unsigned long long size)
{
	T sum = 0;
	for (size_t i = 0; i < size; i++)
		sum += arr[i];
	return sum / size;
}


#endif // TASK2_H_INCLUDED
