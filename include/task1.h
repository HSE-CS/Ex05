<<<<<<< HEAD
#ifndef Task1_H
#define Task1_H
#include <iostream>
#include <сstring>

using namespace std; 
=======
#include <iostream>
#include <cstring>
>>>>>>> origin/b112

template<typename T> bool less(T a, T b)
{
	return a < b;
}
<<<<<<< HEAD
bool less(const char* a, const char* b)
{
	return strcmp(a, b) < 0;
} 
#endif
=======
template<> bool less<const char*>(const char* a, const char* b)
{
	return strcmp(a, b) < 0;
} 
>>>>>>> origin/b112
