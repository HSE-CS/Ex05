#include<iostream>

#include "task1.h"

int main() {
	int a, b;
	a = 5; b = 1;
	const char* x, * y;
	x = "a";
	y = "b";
	std::cout << less(a, b) << '\n' << less(x, y);
	return 0;
}