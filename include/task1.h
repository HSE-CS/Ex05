<<<<<<< HEAD
#pragma once
#ifndef TASK_1
#define TASK_1
#define Print { if(res == 1) std::cout << "True\n"; else std::cout << "False\n"; }
template <typename T>
bool less(T value1, T value2)
{
	return value1 < value2;
}
template<> bool less<const char*>(const char* a, const char* b)
{
	return (strcmp(a, b) < 0);
}
#endif // !TASK_1

#include<iostream>
#include <cstring>
template<typename T>
bool less(T num1, T num2){
    return num1 < num2;
}
template<>
bool less<const char*>(const char* num1, const char* num2){
    return strcmp(num1, num2) < 0;
}
>>>>>>> 2ce3b7f6962f4fbc560a4d79681365483cd63024
