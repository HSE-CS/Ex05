#pragma once
#include<iostream>

template< typename T>
bool lesst(T a, T b)
{

	return a < b;

}
template<>
bool lesst(const char* a, const char* b)
{
	int i;
	for (i = 0; a[i] != '\0' || b[i] != '\0'; i++)
	{

		if (a[i] > b[i]) return false;
		if (a[i] < b[i]) return true;

	}
	if (a[i] != '\0' && b[i] == '\0') return false;
	if (b[i] != '\0' && a[i] == '\0') return true;

}