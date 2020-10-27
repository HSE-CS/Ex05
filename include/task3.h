#ifndef TASK3_H
#define TASK3_H

template <typename T, unsigned int size> T minArr(T (&arr)[size])
{ 
	T min = arr[0];
	for (int i=0; i<size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

#endif