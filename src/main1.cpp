
#include "task1.h"


int main() {

	int a_int = 12;
	int b_int = 17;
	
	double a_double = 12.124;
	double b_double = 15.213;

	const char* a_string = "hello";
	const char* b_string = "privet";

	std::cout << less(a_int, b_int) << std::endl;

	std::cout << less(a_double, b_double) << std::endl;

	std::cout << less(a_string, b_string) << std::endl;

	
}
