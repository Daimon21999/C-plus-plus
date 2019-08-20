#include <iostream>
#include <vector>
#include "Sort.h"
#include "Array.h"

using namespace std;

int main(){
    Array array;
    for (int i = 0; i < 10; ++i) {
        array.add(i);
    }

    cout << "Lenth: " << array.lenth << endl;

    for (int i = 0; i < array.lenth; ++i) {
        cout << i << ") " << array.arr[i] << endl;
    }
}

