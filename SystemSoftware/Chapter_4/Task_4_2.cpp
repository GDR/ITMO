//
// Created by gdr on 4/10/17.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int first;
    int temp;
    int result = 0;

    cin >> first;
    for (int i = 0; i < 9; i++) {
        cin >> temp;
        if (abs(temp) > abs(first))
            result++;
    }

    cout << result;
    return 0;
}