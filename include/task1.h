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