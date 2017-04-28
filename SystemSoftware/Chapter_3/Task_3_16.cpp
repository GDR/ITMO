//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <cmath>
using namespace std;

#define EPS 1e-9

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double d = b*b - 4 * a * c;

    if (d < -EPS) {
        cout << "No solution in real numbers";
    } else if (abs(d) < EPS) {
        printf("%.6f\n", (-b)/(2 * a));

    } else {
        d = sqrt(d);
        printf("%.6f\n", (-b + d)/(2 * a));
        printf("%.6f\n", (-b - d)/(2 * a));
    }

    return 0;
}