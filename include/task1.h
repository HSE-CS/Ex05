#pragma once
#include<iostream>

template< typename T>
bool less(T a, T b)
{

	return a < b;

}
template<>
bool less(const char* a, const char* b)
{
	int i;
	for (i = 0; a[i] != '\0' || b[i] != '\0'; i++)
	{

		if (b[i] > a[i]) return true;
		if (b[i] < a[i]) return false;
		
	}

	if (b[i] != '\0' && a[i] == '\0') return true;
	if (a[i] != '\0' && b[i] == '\0') return false;

}