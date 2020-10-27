#ifndef TASK3_H
#define TASK3_H
#include <typeinfo>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iterator>


using namespace std;


template <typename T>
int minArr(T& a)
{
	double mina = a[0];
	for (size_t i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
	{
		if (a[i] < mina)
			mina = a[i];
	}
	return(mina);
}
#endif 