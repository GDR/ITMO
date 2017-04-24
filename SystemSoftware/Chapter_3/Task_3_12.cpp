//
// Created by Damir Garifullin on 24/04/2017.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int temp1;
    if (a < b) {
        temp1 = a;
    } else {
        temp1 = b;
    }
    int temp2;
    if (c < d) {
        temp2 = c;
    } else {
        temp2 = d;
    }

    if (temp1 > temp2) {
        cout << temp1;
    } else {
        cout << temp2;
    }

}