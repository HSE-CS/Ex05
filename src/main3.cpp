#include <iostream>
#include "task3.h"
int main() {
	const size_t n = 6;
	int val[n]{ 4, 3, 2, 2, 2, -1 };
	
	int expected = -1;
	std::cout << minArr(val);
	return 0;
}