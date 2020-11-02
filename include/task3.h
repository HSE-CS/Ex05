#pragma once
#include<iostream>

template < typename T >
auto minArr(T &array )
{

	auto minimal = array[0];

	for (int i = 1; i < sizeof(array) / sizeof(array[0]); i++)
	{
		if (array[i] < minimal) minimal = array[i];

	}
	return minimal;
}