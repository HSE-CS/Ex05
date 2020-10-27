#define TASK1_H
#include <iostream>


template<class T> bool less(T a, T b)
{
	if (a < b) {
		return true; 
	}
}
template<> bool less<const char*>(const char* a, const char* b)
{
	if (strcmp(a, b) < 0) {
		return true;
	}
}