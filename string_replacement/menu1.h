//
// Created by daimon on 8/19/19.
//

#ifndef UNTITLED2_MENU1_H
#define UNTITLED2_MENU1_H

#include <string>
#include <iostream>
#include "replace_all.h"

using namespace std;

// Program which get string from keyboard -> replace old_sub_string to new_sub_string -> print result
void menu1(string &s, string &old_sub_string, string &new_sub_string) {
    cin.ignore();
    cout << "Input String: ";
    getline(cin, s);
    cout << "Input old_sub_string: ";
    getline(cin, old_sub_string);
    cout << "Input new_sub_string: ";
    getline(cin, new_sub_string);
    cout << endl;

    // Print old and new string
    string tmp;
    tmp.assign(s);
    replace_all(s, old_sub_string, new_sub_string);

    cout << "Old String:\n" << tmp << endl;
    cout << "New String:\n" << s << endl;
}


#endif //UNTITLED2_MENU1_H
