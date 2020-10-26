#ifndef TASK2_H
#define TASK2_H

#include<cstring>
#include<iostream>

using namespace std;

template <typename T>
int averageArr(T& a, int b)
{
	double sum = 0;
	for (size_t i = 0; i < b; ++i)
	{
		sum += a[i];
	}
	return(sum / b);
}
#endif 