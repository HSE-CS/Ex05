#pragma once
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

template< typename T, size_t size >
T minARR(T (& massive)[size]) //T - тип, указанный в параметре шаблона
{
	T min = massive[0];
	//int size = sizeof(massive) / sizeof(T);

	for (int i = 1; i < size; i++)
	{
		if (min > massive[i])
			min = massive[i];
	}
	return min;
};


