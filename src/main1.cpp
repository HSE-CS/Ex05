#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include "task1.h"
int main()
{
	bool res;
	res = less(5, 6);
	template<> bool less<const char*>(const char* a, const char* b)
	{
		return (strcmp(a, b) < 0);
	}
	Print
	res = less("abcd", "abcd");
	Print
	res = less(5.5, 5.5);
	Print
	res = less('A', 'B');
	Print
}