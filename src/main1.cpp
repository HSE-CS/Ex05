#include "task1.h"

int main(){
	char string1[] = "big";
	char string2[] = "little";
    std::cout << less(2, 3) << std::endl;
    std::cout << less(2.98, 3.2) << std::endl;
    std::cout << less(string1, string2) << std::endl;
	return 0;
}