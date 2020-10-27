//
// Created by sharg on 27.10.2020.
//
#include "task1.h"
#include <iostream>

int main() {
    std::cout << std::boolalpha;

    int firstIntNumber = 1;
    int secondIntNumber = 2;
    std::cout << less(firstIntNumber, secondIntNumber) << std::endl;

    float firstFloatNumber = 1.76675;
    float secondFloatNumber = 1.56456;
    std::cout << less(firstFloatNumber, secondFloatNumber) << std::endl;


    float firstCharNumber = 'a';
    float secondCharNumber = 'g';
    std::cout << less(firstCharNumber, secondCharNumber) << std::endl;


    const char *firstString = "evgenySharunov";
    const char *secondString = "EvgenySharunov19pi-2";
    std::cout << less(firstString, secondString) << std::endl;
    return 0;
}