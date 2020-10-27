//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>

#include "task1.h"

#include <iostream>
#include <cstdlib>


//using namespace std;


int main() {

    int num1 = 10;
    int num2 = 20;
    float f1 = 1.0f;
    float f2 = -1.0f;
    const char* s1 = "My string";
    const char* s2 = "My string is bigger";
    
    bool a;
    a = less(num1, num2);
    std::cout << "INT: " << a << "\n";
    
    a = less(f1, f2);
    std::cout << "FLOAT: " << a << "\n";
    
    a = less(s1, s2);
    std::cout << "STRING: " << a << "\n";
    
}

