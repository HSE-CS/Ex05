#include <iostream>
#include "task2.h"

int main()
{
    int arr1[] = { 8, 800, 555, 35, 35 };
    int res1 = averageArr(arr1, sizeof(arr1)/sizeof(arr1[0]));
	std::cout << res1;
    double arr2[] = { 3.14f, 9.88f, 2.7f};
	double res2 = averageArr(arr2, sizeof(arr2) / sizeof(arr2[0]));
	std::cout << res2;
    return 0;
}