//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>

using namespace std;

int main() {
    double x, y;

    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << "At center";
        return 0;
    }
    if (x == 0) {
        cout << "At x axis";
        return 0;
    }
    if (y == 0) {
        cout << "At y axis";
        return 0;
    }

    if (x > 0 && y > 0) {
        cout << "At first quarter";
    }
    if (x < 0 && y > 0) {
        cout << "At second quarter";
    }
    if (x < 0 && y < 0) {
        cout << "At third quarter";
    }
    if (x > 0 && y < 0) {
        cout << "At fourth quarter";
    }
}