#include <iostream>
#include <cmath>
#include <algorithm>

template <typename T, typename T2>
double averageArr(T* a, T2 b)
{
	T summa = 0;
	for (unsigned int i = 0; i < b; i++) {
		summa += *(a + i);
	}
	double answer = (double)(summa / b);
	return answer;
}

