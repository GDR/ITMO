//
// Created by Damir Garifullin on 24/04/2017.
//

#include <iostream>
#include <cmath>
using namespace std;

double calc_log(double a) {
    if (a < 0) {
        throw "Calc log less than zero";
    }
    return log(a);
}

int main() {
    double a;
    cin >> a;
    try {
        cout << calc_log(a);
    } catch (const char* e) {
        cout << e;
    }
}