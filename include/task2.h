#pragma once
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

template< typename T >
T averageArr(T* massive, int size) //T - тип, указанный в параметре шаблона
{

	T sum = massive[0];
	for (int i = 1; i < size; i++)
	{
		sum = sum + massive[i];
	}
	return sum / size;
};


