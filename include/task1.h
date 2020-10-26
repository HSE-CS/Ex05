#ifndef TASK1_H
#define TASK1_H

#include <cstring>
#include <string>
#include <string.h>

template<typename T> bool less(T a, T b) {
	if (a < b) {
		return true;
	}
	else {
		return false;
	}
}

template <> bool less <const char*>(const char* a, const char* b) {
		return strcmp(a, b) < 0;
}


#endif