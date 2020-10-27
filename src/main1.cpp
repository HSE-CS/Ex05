#include <iostream>
#include "task1.h"

int main() {

	int a = 1, b = 2;
	const char* c = "a"; const char*  d = "b";
	std::cout << less(a, b) << " " << less(c, d);
	return 0;
}