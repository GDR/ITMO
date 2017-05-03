//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double *A, *B;
    A = new double[10];
    B = new double[10];

    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < 10; i++) {
        cin >> B[i];
    }

    double *X, *Y;
    X = new double[10];
    Y = new double[10];

    for (int i = 0; i < 10; i++) {
        X[i] = sin(A[i])/(sin(A[i] * A[i]) - sin(A[i]) * sin(A[i]));
        Y[i] = tan(A[i])/( - tan(A[i] * A[i]) + tan(A[i]) * tan(A[i]));
    }

    for (int i = 0; i < 10; i++) {
        cout << X[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << Y[i] << ' ';
    }
    return 0;
}