#include <iostream>
#define task1_h



template <class Type> bool less(Type a, Type b) {
	if (a < b) {
		return true;
	}
	return false;
}
template<> bool less<const char*>(const char* a, const char* b) {
	if (strcmp(a, b) < 0) {
		return false;
	}
	else return true;
}

