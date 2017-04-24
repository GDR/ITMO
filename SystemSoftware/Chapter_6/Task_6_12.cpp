//
// Created by Damir Garifullin on 24/04/2017.
//

#include <iostream>

using namespace std;

int main() {
    double matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        double min = matrix[i][0];
        for (int j = 0; j < 5; j++) {
            if (min > matrix[i][j]) {
                min = matrix[i][j];
            }
        }
        for (int j = 0; j < 5; j++) {
            matrix[i][j] += min;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
