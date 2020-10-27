
//
// Created by toliman on 27.10.2020.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <bits/stdc++.h>

#include <iterator>

using namespace std;


namespace Ex05 {
    template<class T>
    int minArr(T &array) {
        int answer = 0;
        T n = sizeof(array) / sizeof(array[0]);
        T min_elem = array[0];

        for (size_t i = 1; i < n; ++i) {
            min_elem = min(min_elem, array[i]);
        }

        return min_elem;

//    vector <T> v(std::begin(array), std::end(array));
//
//    cout << v.size() << endl;
//
//    for (auto &x: v) cout << x << ' ';
        return answer;
    }
}

#endif //TASK1_TASK3_H
