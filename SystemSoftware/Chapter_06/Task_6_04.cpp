//
// Created by gdr on 4/10/17.
//

#include <iostream>

using namespace std;

int main() {
    int mas[20];

    int count = 0;
    int sum = 0;

    for (int i = 0; i < 20; i++) {
        cin >> mas[i];
    }

    int left, right;
    cin >> left >> right;

    if (right < left) {
        swap(right, left);
    }

    for (int i = 0; i < 20; i++) {
        if (left < mas[i] && mas[i] < right) {
            count++;
            sum += mas[i];
        }
    }

    cout << "Count: " << count << endl;
    cout << "Sum: " << sum << endl;
}