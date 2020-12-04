#include <iostream>
#include <cstring>

template <typename T> bool less(T a, T b) {
	if (a < b) {
		return true;
	}
	else {
		return false;
	}
}

template<>
bool less <const char*>(const char* a, const char* b) {
	if (strcmp(a, b) == 0) {
		return false;
	}
	if (strcmp(a, b) == 1) {
		return false;
	}
	else {
		return true;
	}
}


