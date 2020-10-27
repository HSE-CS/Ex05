#ifndef Task1_H
#define Task1_H
#include <сstring>

using namespace std; 

template<typename T> bool less(T a, T b)
{
	return a < b;
}
template<> bool less<const char*>(const char* a, const char* b)
{
	return strcmp(a, b) < 0;
} 
#endif
