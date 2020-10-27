#pragma once
#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H
#include<cstring>


template<typename T>
bool less(T a, T b) {
	if (a  < b) {
		return true;
	}
	else {
		return false;
	}
}
template<> bool less <const char*> (const char* a, const char* b) {
	return strcmp(a, b) < 0;
}




#endif
