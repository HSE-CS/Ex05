#include <iostream>
#include <stdio.h>
#include <string.h>
#include "task1.h"


int main1(){
	std::cout << less(1,3) << "\n" << std ::endl;	
	std::cout << less('a', 'b') << "\n" << std::endl;
	const char* str1 = "abba";
	const char* str2 = "baab";
	std::cout << less(str1, str2) << "\n" << std::endl;

	return 0;
}