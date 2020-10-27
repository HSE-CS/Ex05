#ifndef TASK2_H
#define TASK2_H

template <typename T> double averageArr( T &arr, int size)
{
	double sum = 0;
	for (int i = 0; i < size;i++)
	{
		sum += arr[i];
	}
	return sum/size;
}

#endif