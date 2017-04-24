//
// Created by Damir Garifullin on 24/04/2017.
//

#include <iostream>

using namespace std;

int main() {
    char symbol;
    cin >> symbol;
    if (symbol > '0' && symbol < '9') {
        cout << "It's a digit";
        return 0;
    }
    if ((symbol > 'a' && symbol < 'z') || (symbol > 'A' && symbol < 'Z')) {
        cout << "It's a char";
        return 0;
    }
    cout << "It's neither char nor digit";
    return 0;
}