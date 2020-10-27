#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "task2.h"

using namespace std;

#define SIZE 4

int main (){
	char arr[SIZE]={ 'r','o','o','t' };
	cout << averageArr(*arr, SIZE);
	return 0;
}