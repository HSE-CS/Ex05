#include "task1.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
	std::cout << less(5, 8) << "\n" ;

	const char* str1 = "abba";
	const char* str2 = "baab";
	std::cout << less(str1, str2) << "\n";

	return 0;
}