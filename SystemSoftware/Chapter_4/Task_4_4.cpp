//
// Created by gdr on 4/10/17.
//

#include <iostream>

using namespace std;

int main() {
    int temp;
    int max;
    int idx = 0;
    int current_idx = 0;


    cin >> temp;
    current_idx++;
    max = temp;

    while (temp < 0) {
        cin >> temp;
        current_idx++;
        if (temp < 0 && temp > max) {
            max = temp;
            idx = current_idx;
        }
    }
    cout << "Max: " << max << "\nId: " << idx;
    return 0;
}