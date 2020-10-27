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
bool less<char*>(char* param1, char* param2)
{
  if (strcmp(param1, param2)<0) return true;
  else return false;
}
#endif TASK1_H