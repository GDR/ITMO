//
// Created by Damir Garifullin on 24/04/2017.
//

#include <iostream>
#include <cmath>
using namespace std;

double target_function(double x) {
    return pow(x, 5) - x - 0.2;
}

double bin_search() {
    double left = 0.9;
    double right = 1.1;
    while (right-left > 0.0001) {
        double mid = (left + right) / 2;
        if (target_function(mid) > 0) {
            right = mid;
        } else {
            left = mid;
        }
    }
    return (right + left) / 2;
}

int main() {
    cout << bin_search();

    return 0;
}