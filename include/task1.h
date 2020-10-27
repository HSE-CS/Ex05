#pragma once
#include<iostream>

template< typename T>
bool less_(const T x, const T y)
{

	if (x > y) return false;
	else return true;

}
template<> 
bool less_(const char* x, const char* y)
{
	int i;
	for ( i = 0; x[i] != '\0' || y[i] != '\0'; i++)
	{

		if (x[i] > y[i]) return false;
		if (x[i] < y[i]) return true;

	}
	if (x[i] != '\0 ' && y[i] == '\0') return false;
	if (y[i] != '\0' && x[i] == '\0') return true;
	//if (x[i] == '\0' && y[i] == '\0') return 0;
}
