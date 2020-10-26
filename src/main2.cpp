#include <iostream>
#include "task2.h"

int main() {
	T s = 0;

	int arr = {1,2,3};
	s = averageArr(arr);
	std::cout << s;

	int arr = { 5,7,9 };
	s = averageArr(arr);
	std::cout << s;

	return 0;
}