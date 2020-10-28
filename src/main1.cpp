#include "task1.h"

#include <iostream>
#include <ctime>
#include <iterator>

using namespace std;


int main()
{
	int a = 5, b = 6;
	char x = 'a', y = 'b';
	bool result = ::less(a, b);
	cout << result;
	result = ::less(x, y);
	cout << result;
	const char* str1 = "abba";
	const char* str2 = "baab";
	result = ::less(str2, str1);
	cout << result;
}