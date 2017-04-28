//
// Created by gdr on 4/10/17.
//

#include <iostream>

using namespace std;

int const N = 15;

int main() {
    double a[N];
    double min, max;
    int idx_min, idx_max;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    min = a[0]; idx_min = 0;
    max = a[0]; idx_max = 0;

    for (int i = 0; i < N; i++) {
        if (min > a[i]) {
            min = a[i];
            idx_min = i;
        }
        if (max < a[i]) {
            max = a[i];
            idx_max = i;
        }
    }
    cout << "Max: " << max << " index: " << idx_max;
    cout << endl;
    cout << "Min: " << max << " index: " << idx_min;

}