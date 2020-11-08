#include <iostream>
<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <cstring>
#include "task2.h"
using namespace std;

int main()
{
	const int size = 8;
	int my_mass[size] = { 1,2,3,4,5,6,7,8 };
	cout << averageArr(my_mass, size);
=======
#include "task2.h"
using namespace std;
int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    cout << averageArr(arr1, sizeof(arr1)/sizeof(int)) << endl;
    return 0;
>>>>>>> 2ce3b7f6962f4fbc560a4d79681365483cd63024
}