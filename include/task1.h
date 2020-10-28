//
// Created by User on 29.10.2020.
//

#include <bits/stdc++.h>

using namespace std;

namespace Ex05 {

    template<class T>
    bool less(T fi, T se) {
        return fi < se;
    }

    template<>
    bool less(const char *fi, const char *se) {
        return strcmp(fi, se) < 0;
    }
}
