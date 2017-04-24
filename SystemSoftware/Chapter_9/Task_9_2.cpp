//
// Created by gdr on 4/22/17.
//

#include <iostream>
#include <zconf.h>

using namespace std;

int main() {
    freopen("Task_9_2.in", "rt", stdin);
    string temp;
    int idx = 1;
    while (!cin.eof()) {
        getline(cin, temp);
        if (temp.length() != 0)
            cout << idx++ << ": " << temp << '\n';
    }
}