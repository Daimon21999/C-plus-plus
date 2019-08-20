//
// Created by daimon on 8/19/19.
//

#ifndef UNTITLED2_CREATE_FILE_H
#define UNTITLED2_CREATE_FILE_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void create_file(){
    unsigned long long count=0;
    string s;
    string words;
    string path;
    cout << "Enter count of words to be created: ";
    cin >> count;
    cout << "Enter words: ";
    cin.ignore();
    getline(cin, words);
    for (unsigned long long i = 0; i < count; ++i) {
        s.append(words + ' ');
    }
    cout << "Enter path: ";
    cin >> path;
    ofstream file(path);
    file << s;
    cout << "Operation completed successfully!!!" << endl;
}

#endif //UNTITLED2_CREATE_FILE_H
