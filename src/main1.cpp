//
// Created by Vadim Makarov on 27.10.2020.
//

#include <iostream>
#include "task1.h"

using namespace std;

int main(){

    cout << ::less(1, 2) << endl;
    cout << ::less('a', 'b') << endl;
    cout << ::less("abba", "baab") << endl;

}

