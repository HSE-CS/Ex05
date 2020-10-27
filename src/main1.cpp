#include "task1.h"
#include <iostream>

// using namespace std;

int main()
{
	int a = 3;
	int b = 6;
	const char* str2 = "Hello_World";
	const char* str1 = "Goodbye_World";
	std::cout << less(str1, str2) << std::endl;
	std::cout << less(a, b) << std::endl;

	return 0;
}