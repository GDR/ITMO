//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>

using namespace std;

int main() {
    double **matrix;
    matrix = new double*[5];
    for (int i = 0; i < 5; i++) {
        matrix[i] = new double[5];
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        double min = matrix[i][0];
        for (int j = 0; j < 5; j++) {
            min = min(min, matrix[i][j]);
        }
        for (int j = 0; j < 5; j++) {
            matrix[i][j] += min;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
    double *oddAmount = new double[3];
    double *evenAmount = new double[2];

    int idx = 0;

    for (int i = 0; i < 5; i+= 2) {
        oddAmount[idx] = 0;
        for (int j = 0; j < 5; j++) {
            if ((int) matrix[j][i] % 2 == 1) {
                oddAmount[idx]++;
            }
        }
        idx++;
    }
    idx = 0;
    for (int i = 1; i < 5; i+= 2) {
        evenAmount[idx] = 0;
        for (int j = 0; j < 5; j++) {
            if ((int) matrix[j][i] % 2 == 0) {
                evenAmount[idx]++;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << oddAmount[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < 2; i++) {
        cout << evenAmount[i] << ' ';
    }
}