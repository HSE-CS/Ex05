#include <iostream>
#include <cstring>
#ifndef TASK1_H
#define TASK1_H

template<class T>
bool less(T a, T b) {
	if (a > b) {
		return false;
	}
	else {
		return true;
	}
	 
}

template<>
bool less<char*>(char* a, char* b) {
	if (strcmp(a, b) <= 0) {
		return true;
	}
	else {
		return false;
	}
}
#endif