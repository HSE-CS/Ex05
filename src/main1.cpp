//
//  main1.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 28.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include <stdio.h>
#include "task1.h"

int main() {
    int a = 5;
    int b = 6;
    bool isLess = less(a, b);
    std::cout << isLess << std::endl;
    return 0;
}
