//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>

using namespace std;

int findMin(int **matrix, int col, int row) {
    int min = matrix[0][col];
    for (int i = 0; i < row; i++) {
        if (min > matrix[i][col]) {
            min = matrix[i][col];
        }
    }
    return min;
}

int main() {
    int const N = 4;
    int const M = 7;
    int **A, **B;
    A = new int*[N];
    B = new int*[M];
    for (int i = 0; i < N; i++) {
        A[i] = new int[M];
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < M; i++) {
        B[i] = new int[M];
        for (int j = 0; j < M; j++) {
            cin >> B[i][j];
        }
    }

    int C[N], D[M];
    for (int i = 0; i < N; i++) {
        C[i] = findMin(A, i, M);
    }
    for (int i = 0; i < M; i++) {
        D[i] = findMin(B, i, M);
    }
    for (int i = 0; i < N; i++) {
        cout << C[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < M; i++) {
        cout << D[i] << ' ';
    }
    cout << endl;
    return 0;
}