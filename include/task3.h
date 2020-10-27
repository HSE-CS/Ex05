//
//  task1.hpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#ifndef task3_h
#define task3_h

#include <iostream>
#include <string.h>

template <class T, size_t N> T minArr (T (&my_arr)[N]){
//    unsigned const int size = sizeof(my_arr)/sizeof(T);
    T min = my_arr[0];
    for (int i = 1; i < N; i++)
        if (my_arr[i] < min)
            min = my_arr[i];
    return min;
}

#endif /* task1_hpp */
