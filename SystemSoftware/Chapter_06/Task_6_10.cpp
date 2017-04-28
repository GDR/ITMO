//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>

using namespace std;

int main() {
    double  matrix[6][8];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 8; j++) {
            sum += matrix[i][j];
        }
        cout << "Sum of " << i << ": " << sum;
    }

    for (int i = 0; i < 3; i++) {
        int product = 1;
        for (int j = 0; j < 8; j++) {
            product *= matrix[i][j];
        }
        cout << "Product of " << i << ": " << sum;
    }

    return 0;
}