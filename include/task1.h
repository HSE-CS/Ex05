#include <cstring>

template<class T> bool less(T a, T b)
{
	return a < b;
}

template<> bool less<const char*>(const char* a, const char* b)
{
	return strcmp(a, b) == -1;
}
