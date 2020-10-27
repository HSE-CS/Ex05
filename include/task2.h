
//
// Created by toliman on 27.10.2020.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <bits/stdc++.h>

using namespace std;

namespace Ex05 {

    template<class T1, class T2>
    T1 averageArr(T1 *array, T2 n) {
        T1 answer = 0;
        for (T2 i = 0; i < n; ++i) {
            answer += array[i];
        }
        return answer / n;
    }

}
}


#endif //TASK1_TASK2_H
