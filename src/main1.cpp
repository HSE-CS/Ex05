#include <iostream>
#include <cstring>
#include "task1.h"

int main() {

	int number_1 = 3, number_2 = 15;
	bool result = less(number_1, number_2);
	std::cout << result << std::endl;

	char symbol_1 = 'x', symbol_2 = 'a';
	bool result = less(symbol_1, symbol_2);
	std::cout << result << std::endl;

	const char* string_1 = "dada";
	const char* string_2 = "ad";
	result = less(string_1, string_2);
	std::cout << result << std::endl;
	
	return 0;
}