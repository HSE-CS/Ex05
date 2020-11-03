
//
// Created by toliman on 27.10.2020.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

// #include <bits/stdc++.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}


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
