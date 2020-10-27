#include <iostream>
#include "task3.h"

#define SIZE 3

int main() {
	int min = NULL;
	int arr[SIZE] = { 1,2,3 };
	min = minArr(arr, SIZE);
	std::cout << min;
	return 0;
}