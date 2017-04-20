//
// Created by gdr on 4/10/17.
//
#include <iostream>

using namespace std;

int main() {
    double matrix[3][5];

    double sum = 0.;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            sum += matrix[i][j];
        }
    }

    double average = sum / (3 * 5);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] < average) {
                matrix[i][j] = 0;
            }
            if (matrix[i][j] > average) {
                matrix[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
}