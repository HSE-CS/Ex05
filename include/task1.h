#ifndef TASK1_H
#define TASK1_H


#include <iostream>
#include <cstring>

//using namespace std;

typedef const char* stroka;


template <typename T> bool less(T a, T b)
{
	if (a < b) return true;
	else return false;
}
template<>
bool less <const char*>(const char* a, const char* b)
{
	if (strcmp(a, b) == 0) return false;
	if (strcmp(a, b) == 1) return false;
	else return true;
}

/*
template <typename T>
bool less(T a, T b)
{

	if (typeid(T) == typeid(stroka))
	{
		if (strcmp(a, b) == 1)
			return false;
		else if (strcmp(a, b) == 0)
			return false;
		else return true;
	}
	else if (a < b) return true;
		else return false;
}
*/

#endif