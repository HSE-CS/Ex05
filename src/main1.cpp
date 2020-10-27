#include <iostream>
#include "task1.h"

int main() {
	int a = 10;
	int b = 20;
	char x='a',y='b';
	std::cout << less(a, b) << less(x, y);
	const char *str1="aaa";
	const char *str2="aab";
	std::cout << less(str2, str1);
}