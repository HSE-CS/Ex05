#pragma once
#include<iostream>

template < typename T >
auto minArr(T& mas)
{

	auto min = mas[0];

	for (int i = 1; i < sizeof(mas) / sizeof(mas[0]); i++)
	{
		if (mas[i] < min) min = mas[i];

	}
	return min;
}