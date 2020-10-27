//
//  task1.hpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#ifndef task1_h
#define task1_h

#include <iostream>
#include <string.h>

template<class T> bool less(T a, T b)
{
   return a < b;
}
template<> bool less<const char*>(const char* a, const char* b)
{
   return strcmp(a, b) < 0;
}

#endif /* task1_hpp */
