//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <cmath>

using namespace std;

double function1(double x) {
    return 3 * x * x;
}

double calc(double(*func)(double), double from, double to, double precision) {
    double h = (to - from) / precision;
    double result = 0;

    for (double x = from + h / 2; x < to; x += h) {
        result += h * func(x);
    }

    return result;
}

int main() {
    cout << calc(function1, 0, 3, 500);
    return 0;
}