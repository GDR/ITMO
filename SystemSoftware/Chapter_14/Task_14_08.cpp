//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>

using namespace std;

struct result {
    double sum = 0;
    double product = 1;
};

result calc(double **matrix, int rows, int cols) {
    result res = result();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < 0) {
                res.product *= matrix[i][j];
            } else {
                res.sum += matrix[i][j];
            }
        }
    }

    return res;
}

int main() {
    double **matrix = new double*[5];

    for (int i = 0; i < 5; i++) {
        matrix[i] = new double[7];
        for (int j = 0; j < 7; j++) {
            cin >> matrix[i][j];
        }
    }

    result res = calc(matrix, 5, 7);

}