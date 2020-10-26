#include <iostream>
#include <stdio.h>
#include <string.h>
#include "task1.h"


template <class Type> bool less(Type a, Type b){
	if (a < b) {
		return true;
	}
	return false;
}

template<> bool less<const char*>(const char* a, const char* b){
	if (strcmp(a, b) < 0 ){
		return false;
	}
	else return true;
}

int main(){
	std::cout << less(1,3) << "\n" << std ::endl;	
	std::cout << less('a', 'b') << "\n" << std::endl;
	const char* str1 = "abba";
	const char* str2 = "baab";
	std::cout << less(str1, str2) << "\n" << std::endl;

	return 0;
}