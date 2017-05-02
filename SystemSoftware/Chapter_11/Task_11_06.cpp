//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>

using namespace std;

int calcProduction(int array[], int size, int constant) {
    int result = 1;
    for (int i = 0; i < size; i++) {
        result *= array[i] + constant;
    }
    return result;
}

int main() {
    int M[8], L[7], C[9];
    for (int i = 0; i < 8; i++) {
        cin >> M[i];
    }
    for (int i = 0; i < 7; i++) {
        cin >> L[i];
    }
    for (int i = 0; i < 9; i++) {
        cin >> C[i];
    }

    int z = (calcProduction(M, 8, -1) + calcProduction(C, 9, -5)) / (calcProduction(L, 7, 0) - calcProduction(M, 8, 0));
    cout << z;
    return 0;
}