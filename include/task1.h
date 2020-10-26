#include <iostream>
#include <string.h>
#include <string>

template <typename T>
bool less(T a, T b)
{
	if (a < b)
	{
		return true;
	}
	else
	{
		return false;
	}

}
template<>bool less<char*>(char* a, char* b)
{
	if (strcmp(a, b) >= 0)
	{
		return false;
	}
	else
	{
		return true;
	}

}