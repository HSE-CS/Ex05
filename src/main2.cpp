#include<iostream>
#include"task1.h"

using namespace std;
int main() {
	const unsigned int size = 6;
	int a[size]{ 4, 5, 2, 3, 2, 1 };

	cout << averageArr(a, size);

	return 0;
} 