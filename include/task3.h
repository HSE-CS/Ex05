#include <iostream>
template <typename T, size_t N>
T minArr(T (&a)[N])
{
	T min = a[0];
	for(int i = 0; i < N; i++)
	{
		if(a[i] < min)
			min = a[i];

	}
	return min;
}