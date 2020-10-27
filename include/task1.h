#pragma once
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

template< typename T >
bool less(T& first, T& second) //T - тип, указанный в параметре шаблона
{
    return first < second;
}

 template<> 
 bool less(char& first, char& second)
 {
     return strcmp(*first, *second);
 }





