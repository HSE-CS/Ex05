#include "../include/task1.h"
#include <iostream>

//using namespace std;

int main()
{
	int a = 0;
	int b = 5;
	std::cout << less((char*)("aaa"), (char*)("aab")) << std::endl;
	std::cout << less(a, b) << std::endl;
	std::cout << less(0.6, 0.5) << std::endl;

	return 0;
}