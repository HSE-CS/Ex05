#include <iostream>
#include <cstring>
#include "task2.h"

//using namespace std;

#define SIZE 4



int main() 
{
	char arr[SIZE]{ 'a','e','u','r' };
	char * arrPtr = arr;
	std::cout << averageArr(arrPtr, SIZE);
	return 0;
}

