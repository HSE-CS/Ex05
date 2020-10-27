//
//  task1.hpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#ifndef task2_h
#define task2_h

#include <iostream>
#include <string.h>

template <class T> T averageArr (T* ar, unsigned int ar_size){
    T sum = ar[0];
    for (int i = 1; i < ar_size; i++)
        sum += ar[i];
    return sum / ar_size;
    
}

#endif /* task1_hpp */
