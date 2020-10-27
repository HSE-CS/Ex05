//#include"../include/task3.h"
#include <iostream>
#include "task3.h"


int main() {
	const size_t n = 6;
	int a[]{ 5, 2, 8, 1, -3, 9};
	std::cout << minArr(a) << '\n';
	float b[]{ 5., 2., 8., 9., 1., -3. };
	std::cout << minArr(b);
	return 0;
}