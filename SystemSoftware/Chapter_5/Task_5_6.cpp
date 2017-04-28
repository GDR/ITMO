//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <cmath>
using namespace std;

double func(double x) {
    return 1 / (5 - 3 * cos(x));
}

double calc() {
    double from = 0;
    double to = 3./2.;

    double n = 2000;

    double h = (to - from) / n;
    double result = 0;
    for (double x = from + h / 2; x < to; x += h) {
        result += func(x) * h;
    }

    return result;
}

int main() {
    printf("%.5f\n", calc());
    printf("%.4f\n", func(0));
}