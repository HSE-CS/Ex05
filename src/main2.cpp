#include "../include/task2.h"
#include <iostream>

using namespace std;

int main()
{
	double arr[] = { 0.1, 0.2, 0.3, 0.4, 0.5 };
	cout << averageArr(arr, 5) << endl;

	int arr1[] = { 1, 2, 3, 4, 5 };
	cout << averageArr(arr1, 5);

	return 0;
}