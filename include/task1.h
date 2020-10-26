#include<iostream>
#include<cstring>

template<typename T>
bool  less(T a, T b)
{
	if(a < b)
		return true;
	else 
		return false;
}
bool less(char * a, char *b)
{
	if(strcmp(a,b) < 0)
		return true;
	return false;

}