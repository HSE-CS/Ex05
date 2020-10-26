#ifndef TASK1_H
#define TASK1_H

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

template <> bool less <char*>(char* a, char* b) {
		return strcmp(a, b) < 0;
}


#endif