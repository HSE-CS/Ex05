#include <iostream>
#define task1_h

template <class Type> bool less(Type a, Type b) {
	return (a < b) ? true : false;
}
template<>bool less<char*>(char* a, char* b) {
	if (strcmp(a, b) >= 0) {
		return false;
	}
	else {
		return true; 
	}
}

