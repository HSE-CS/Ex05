#ifndef TASK1_H
#define TASK1_H
#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

template<typename T>
bool less(T param1, T param2)
{
	if (param1 < param2) return true;
	else return false;
}

template<>
bool less(const char* param1, const char* param2)
{
	return strcmp(param2, param1);
}
#endif TASK1_H