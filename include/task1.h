#pragma once
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

template< typename T >
bool less(T& first, T& second) //T - тип, указанный в параметре шаблона
{
    if (first < second)
        return true;
    else
        return false;
};

 template<> 
 bool less(char &first, char &second)
 {
     if (strcmp(&first, &second) < 0)
         return true;
     else
         return false;
 }

