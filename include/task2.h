#pragma once
#ifndef TASK_2
#define TASK_2
template <class T> double averageArr(T* mass, int size);
{
	int summ = 0;
	for (int x = 0; x < size; x++)
	{
		summ += mass[x];
	}
	return float(summ) / size
}
#endif // !TASK_2
