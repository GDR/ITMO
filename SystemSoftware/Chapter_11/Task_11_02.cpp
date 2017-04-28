//
// Created by Damir Garifullin on 24/04/2017.
//

#include <iostream>

using namespace std;

int MAX(int a, int b) {
    return a > b ? a : b;
}

int MAX(int a, int b, int c) {
    return MAX(MAX(a, b), c);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << MAX(a, b, c);
    return 0;
}