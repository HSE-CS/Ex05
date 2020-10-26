#pragma once
#define TASK3_H
#ifdef TASK3_H
template<class T, int size> T minArr(T(&arg)[size])
{
	T minEL = arg[0];
	for (size_t i = 0; i < size; i++)
		if (arg[i] < minEL) {
			minEL = arg[i];
		}

	return minEL;
}

#endif // TASK3_H