//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <cmath>

using namespace std;

double pow(double a) {
    return a * a;
}

int main() {
    double a, x;
    cin >> a >> x;
    if (sin(a) > x) {
        cout << (x + 9 - pow(sin(x))) / (cbrt(sin(3 * a)));
    } else {
        cout << (exp(sin(a * x)))/(pow(cos(a * x)));
    }
}