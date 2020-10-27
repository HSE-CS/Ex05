#include<iostream>
#include"task3.h"

using namespace std;

int main(){

	const unsigned int size = 7;

	int a[size]{ 4, -1, 2, 3, 5, 6, 11 };

	cout << minArr(a);
	return 0;
}