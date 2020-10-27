#ifndef TASK3_H
#define TASK3_H

#include<typeinfo>

const unsigned int n = 6;

template<class T, size_t N>
T minArr(T (&a)[N])
{
	T min = a[0];
	for (unsigned int i = 0; i < N; ++i) {
		if (a[i] < min) min = a[i];
	}
	return min;
}

//template<class T> int minArr(T& a) 
//{
//	int min = a[0];
//	for (unsigned int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
//		if (a[i] < min) min = a[i];
//	}
//	return min;
//}
//template<class T> double minArr(T& a)
//{
//	double min = a[0];
//	for (unsigned int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
//		if (a[i] < min) min = a[i];
//	}
//	return min;
//}

#endif // !TASK1_H
