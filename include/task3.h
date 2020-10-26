#ifndef TASK3_H
#define TASK3_H

#include<cstring>
#include<iostream>

using namespace std;

template <typename T>
int minArr(T& a)
{
	double min = a[0];
	for (size_t i = 0; i < (sizeof(a) / sizeof(a[0])); ++i)
	{
		if (a[i] < min)
			min = a[i];
	}
	return(min);
}
#endif 