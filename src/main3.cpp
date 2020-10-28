#include "task3.h"

#include <iostream>
#include <ctime>
#include <iterator>

using namespace std;


int main()
{
	const size_t n = 6;
	int val[n]{4, 3, 2, 2, 2, -1};
	int result= ::minArr(val);
	cout << result;
}