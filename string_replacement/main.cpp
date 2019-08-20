#include <iostream>
#include <string>

#include "menu1.h"
#include "menu2.h"
#include "create_file.h"

using namespace std;
// replaces substrings in a string from keyboard or file
int main() {
    // _____________________ Current Version ___________________________________
    cout << "Where to get the string: 1(from keyboard), 2(from file), 3(create file) --> ";
    char choose = '0';
    cin >> choose;
    string s;
    string old_sub_string;
    string new_sub_string;
    switch (choose) {
        case '1':
            menu1(s, old_sub_string, new_sub_string);
            break;
        case '2':
            menu2(s, old_sub_string, new_sub_string);
            break;
        case '3':
            create_file();
            break;
        default:
            cout << "Error!!! Unknown option" << endl;
    }
    // _______________________ Speed Test _________________________________
//    menu2("/home/daimon/Desktop/my_test_file.txt", "dima", "ilia");
}



