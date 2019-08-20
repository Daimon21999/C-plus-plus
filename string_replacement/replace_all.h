//
// Created by daimon on 8/19/19.
//

#ifndef UNTITLED2_REPLACE_ALL_H
#define UNTITLED2_REPLACE_ALL_H

#include <string>
#include <climits>

using namespace std;

void replace_all(string &s, const string &sub, const string &to_be_replaced) {
    unsigned long long index = 0;
    while (true) {
        index = s.find(sub, index);
        if (index == ULLONG_MAX)
            break;
        else {
            s.replace(index, sub.length(), to_be_replaced);
            index += 5;
        }
    }
}

#endif //UNTITLED2_REPLACE_ALL_H
