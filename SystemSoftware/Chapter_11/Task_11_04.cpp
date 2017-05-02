//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <cmath>
using namespace std;

double calc(double x, double precision) {
    double result = 0;
    double i = 1;
    double prev = 0;
    do {
        prev = result;
        result += (i * i) / pow(x, i);
        i++;
    } while (abs(result - prev) > precision);
    return result;
}

int main() {
    double x;
    double precision;
    cin >> x >> precision;
    cout << calc(x, precision);
}