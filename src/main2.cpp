#include "task2.h"
#include <iostream>

int main() {
	const int n = 10;
	double a1[n];
	int a2[n];
	for (int i = 0; i < n; i++)
	{
		a1[i] = i;
		a2[i] = i + 0.5;
	}
	std::cout << averageArr(a1, n) << '\n';
	std::cout << averageArr(a2, n) << '\n';
	return 0;
}