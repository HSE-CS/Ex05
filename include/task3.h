#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED

template<class T, size_t N> T minArr(T (&arr)[N])
{

	T min_el = arr[0];

	for (size_t i = 0; i < N; i++)
		min_el = min_el < arr[i] ? min_el : arr[i];

	return min_el;
}

#endif // TASK3_H_INCLUDED
