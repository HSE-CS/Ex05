//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>

#include "task2.h"

#include <iostream>
#include <cstdlib>





int main() {
    
    int numbers[3] = {0, 1, 2};
    float fs[3] = {-1.0f, 0.0f, 2.0f};
    
    std::cout << "INT:" << averageArr(numbers, 3) << "\n";
    std::cout << "FLOAT:" << averageArr(fs, 3) << "\n";
    
}

