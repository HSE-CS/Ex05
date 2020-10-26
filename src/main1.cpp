#include <iostream>
#include "task1.h"
int main()
{
	int a = 10;
	int b = 20;
	bool c = less<int>(a,b);
	char * m = "xyi";
	char * n = "abc";
	std :: cout << less(m,n) << std::endl;
}