<<<<<<< HEAD

//
// Created by toliman on 27.10.2020.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

// #include <bits/stdc++.h>


template<class T>
int minArr(T &array) {
    int n = sizeof(array) / sizeof(array[0]);
    int min_elem = (array)[0];

    for (int i = 1; i < n; ++i) {
        min_elem = min(min_elem, array[i]);
    }

    return min_elem;

//    vector <T> v(std::begin(array), std::end(array));
//
//    cout << v.size() << endl;
//
//    for (auto &x: v) cout << x << ' ';
}


#endif //TASK1_TASK3_H
=======
//
// Created by User on 29.10.2020.
//

#include <bits/stdc++.h>

using namespace std;

template<class T, int length>
T minArr(T (&array)[length]) {
    for (int i = 1; i < length; ++i) {
        array[0] = min(array[0], array[i]);
    }
    return array[0];
}

>>>>>>> a22aa6eae89f777ceabb50a830e1b6624d4fbab1
