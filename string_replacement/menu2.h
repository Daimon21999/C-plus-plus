//
// Created by daimon on 8/19/19.
//

#ifndef UNTITLED2_MENU2_H
#define UNTITLED2_MENU2_H

#include <string>
#include <iostream>
#include <fstream>
#include "replace_all.h"


using namespace std;

// Menu for file read-replace-writing
void menu2(string file_path, string old_sub, string new_sub) {
    // ________________________ Input file_path from user if he dont't put it as parameter  ____________________________
    if (file_path.empty()) {
        cout << "Enter the file path" << endl;
        cin >> file_path;
    }
    try {
        fstream file;
        file.open(file_path);
        if (file.fail()) {
            throw 0;
        }
        file.close();
    } catch (...) {
        cout << "File not exist" << endl;
        return;
    }
    if (old_sub.empty()) {
        cout << "Enter old string to be replaced on something: ";
        cin.ignore();
        getline(cin, old_sub);

    }
    if (new_sub.empty()) {
        cout << "Enter new string to replace old one: ";
        getline(cin, new_sub);
    }
    // ________________________ Test to existence of file_path ____________________________

    // ________________________ reading from file old string s ____________________________
    string tmp;
    string s;
    unsigned long long count = 0;
    ifstream file(file_path);
    while (file >> tmp) {
        s.append(tmp + ' ');
       //!!!!!!!!!!!!!!!!!! count++;
    }
    replace_all(s, old_sub, new_sub);
    file.close();
    // ________________________ writing new string s to file ____________________________
    ofstream output(file_path);
    output << s;
    output.close();
    //!!!!!!!!!!!!!!!!!!!cout << "Operation "
}



#endif //UNTITLED2_MENU1_H
