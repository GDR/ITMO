//
// Created by Damir Garifullin on 24/04/2017.
//

#include <iostream>

using namespace std;

int main() {
    double matrix[7][7];

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> matrix[i][j];
        }
    }

    double min = matrix[0][1], min_i = 0, min_j = 1;
    double max = matrix[1][0], max_i = 1, max_j = 0;

    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (min > matrix[i][j]) {
                min = matrix[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < i; j++) {
            if (max < matrix[i][j]) {
                max = matrix[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    cout << "Min: " << min << '\t' << "index: " << min_i << " " << min_j << '\n';
    cout << "Max: " << max << '\t' << "index: " << max_i << " " << max_j << '\n';
    return 0;
}
