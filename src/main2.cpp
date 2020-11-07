#include <iostream>
#include "task2.h"

int main() {
	double D[] = { 1.212, 0.001, 1.413, 3.12 };
	int I[] = { 1, 10, 2, 3, 80 };
	std::cout << averageArr(D, 4) << '\n' << averageArr(I, 5);
} 