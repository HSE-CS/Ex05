#include <iostream>
#include "task2.h"

#define SIZE 3

int main() {
	int s1 = NULL;
	int arr1[SIZE] = { 1,2,3 };
	s1 = averageArr(arr1, SIZE);
	std::cout << s1;

	char s2 = NULL;
	int size2 = 3;
	char arr2[SIZE] = { '5','7','9' };
	s2 = averageArr(arr2, SIZE);
	std::cout << s2;

	return 0;
}