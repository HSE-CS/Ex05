#include <iostream>
#include <algorithm>
#include <string>

template <typename T>
bool less(T a, T b)
{
	if (a < b)
		return true;
}
template<>bool less<char*>(char* a,  char* b)
{
	if (strcmp(a, b) < 0)
		return true;
}