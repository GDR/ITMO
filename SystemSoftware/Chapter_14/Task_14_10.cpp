//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <cmath>
using namespace std;

#define EPS 1e-5

double function1(double x) {
    return 3 * x * x - 7 + (4 / x) - x;
}

double function2(double x) {
    return cos(x) + sqrt(x) - x;
}

double calc(double(*function)(double), double left, double right) {
    bool flag = function(left) > function(right);
    while (right - left > EPS) {
        double mid = (right + left) / 2;
        if (function(mid) > 0 ^ flag) {
            right = mid;
        } else {
            left = mid;
        }
    }
    return (left + right) / 2;
}

int main() {

    printf("%.6f\n", calc(function1, 0, 0.8));
    printf("%.6f\n", calc(function1, 1, 10));
    printf("%.6f\n", calc(function1, -3, -1));
    printf("%.6f\n", calc(function2, 0, 2));
    return 0;
}