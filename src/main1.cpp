#include<iostream>
#include "task1.h"
#include <cstring>


int main() {
	int a = 5, b = 6;
	char x = 'a', y = 'b';
	bool c = less(a, b);
	bool d = less(x, y);
	std::cout << c;
    std::cout << d;
	const char* str1 = "abba";
	const char* str2 = "baab";
	bool f = less(str1, str2);
	std::cout << f;
}