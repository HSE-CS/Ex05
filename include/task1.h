//
<<<<<<< HEAD
// Created by toliman on 27.10.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

// #include <bits/stdc++.h>

#include <cstring>


template<class T>
bool less(T first, T second) {
    return first < second;
}

template<>
bool less(const char *first, const char *second) {
    return strcmp(first, second) < 0;
}


#endif //TASK1_TASK1_H
=======
// Created by User on 29.10.2020.
//

#include <bits/stdc++.h>

using namespace std;


template<class T>
bool less(T fi, T se) {
    return fi < se;
}

template<>
bool less(const char *fi, const char *se) {
    return strcmp(fi, se) < 0;
}

>>>>>>> a22aa6eae89f777ceabb50a830e1b6624d4fbab1
