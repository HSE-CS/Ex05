#include <iostream>
#include "task2.h"

#define SIZE 3

int main() {
	int s1 = NULL;
	int arr[SIZE] = { 1,2,3 };
	s1 = averageArr(arr, SIZE);
	std::cout << s1;

	/*char s2 = NULL;
	int size2 = 3;
	char arr[size2] = { '5','7','9' };
	s2 = averageArr(arr);
	std::cout << s;*/

	return 0;
}