#include <iostream>
#include <cstring>

template<typename T>
bool less(T a, T b) 
{
	return (a < b) ? true : false;
}

template<>
bool less<char*>(char* a, char* b) 
{

	if (strcmp(a, b) <= 0) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}