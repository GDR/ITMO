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

    if (a < 0) {
        cout << a + pow(tan(x*x*x));
    } else {
        cout << sqrt(a + x*x*x*x);
    }

    return 0;
}