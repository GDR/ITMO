//
// Created by Damir Garifullin on 25/04/2017.
//

#include<iostream>
#include <cmath>

using namespace std;

double func(double x) {
    return cos(x) / (x + 2);
}

double calc_rectangle(double from, double to) {
    int n = 2000;

    double h = (to - from) / n;
    double result = 0;
    for (double x = from + h / 2; x < to; x += h) {
        result += func(x);
    }

    return result * h;
}

double calc_simpson(double from, double to) {
    int n = 1000 * 1000;
    double s = 0;
    double h = (to - from) / n;
    for (int i = 0; i <= n; ++i) {
        double x = from + h * i;
        if (i == 0 || i == n) {
            s += func(x);
        } else if (i % 2 == 0) {
            s += func(x) * 2;
        } else {
            s += func(x) * 4;
        }
    }
    s *= h / 3;
    return s;
}


int main() {
    double p;
    cin >> p;

    printf("%.4f\n", calc_rectangle(0, p));
    printf("%.4f\n", calc_simpson(0, p));
    return 0;
}