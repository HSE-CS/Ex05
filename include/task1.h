#ifndef TASK1_H
#define TASK1_H

#include<iostream>
#include <cstring>
template <typename T>
bool less(T a, T b) {
	if (a < b) return true;
	else return false;
}

template<>
bool less(const char* str1, const char* str2) {
	if (strcmp(str1,str2)<0) return true;
	else return false;
}
#endif 
