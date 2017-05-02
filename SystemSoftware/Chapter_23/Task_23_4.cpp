//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    freopen("Task_23_4.in", "rt", stdin);
    freopen("Task_23_4.out", "wt", stdout);
    string longest_word = "";
    string temp;
    while (cin >> temp) {
        if (longest_word.length() < temp.length()) {
            longest_word = temp;
        }
    }

    cout << "The longest word is: " << longest_word;

    return 0;
}