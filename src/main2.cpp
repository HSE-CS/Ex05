#include "task2.h"

int main()
{
	const int size = 6;
	int arr[size]{ 4, 3, 2, 2, 2, -1 };
	double arr2[size]{ 4.0, 3.3, 2.1, 2.4, 2, -1.6 };
	cout << averageArr(arr, size) << endl;
	cout << averageArr(arr2, size);
	return 0;
}

