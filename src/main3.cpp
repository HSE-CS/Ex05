#include <iostream>
#include "task3.h"

int main() {
	int I[] = { 1, 0, -4, 5, 100 };
	double D[] = { 1.21, 0.98, -21.33, -101.33, 90.0 };
	std::cout << minArr(I) << '\n' << minArr(D);
	return 0;
} 
