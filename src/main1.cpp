#include "task1.h"

int main() {
	int first_int = 5;
	int second_int = 3;

	double first_double = 15.0;
	double second_double = 25.7;

	std::string first_str = "cpp";
	std::string second_str = "template";

	std::cout << less(first_int, second_int) << std::endl;
	std::cout << less(first_double, second_double) << std::endl;
	std::cout << less(first_str, second_str) << std::endl;
	return 0;
}