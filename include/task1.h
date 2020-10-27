#ifndef Task1_H
#define Task1_H
#include <iostream>
#include <сstring>

using namespace std; 

template<typename T> bool less(T a, T b)
{
	return a < b;
}
bool less(const char* a, const char* b)
{
	return strcmp(a, b) < 0;
} 
#endif
