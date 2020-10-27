//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>

#include "task3.h"

#include <iostream>
#include <cstdlib>


int main() {
    int numbers[]{0, 1, 2};
    float fs[3] = {-1.0f, 0.0f, 2.0f};
    
    std::cout << "INT:" << minArr(numbers) << "\n";
    std::cout << "FLOAT:" << minArr(fs) << "\n";
    
}

