#include <iostream>
#include "task3.h"
#include <string>


int main(){
	int n = 3;
	int arr[3]{ 1, 2, 3 };
	int result = ::minArr(arr);
	std::cout << result;
	return 0;
}