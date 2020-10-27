#include <iostream>
#include "task1.h"

int main() {
	bool f = 0;

	int a = 5, b = 8;
	f = less(a,b);
	std::cout << f;


	a = 15, b = 6;
	f = less(a, b);
	std::cout << f;

	return 0;
}