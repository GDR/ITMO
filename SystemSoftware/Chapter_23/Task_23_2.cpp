//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    freopen("Task_23_2.in", "rt", stdin);
    ofstream even, odd;
    even.open("Task_23_2.even");
    odd.open("Task_23_2.odd");
    even << "Even numbers:\n";
    odd << "Odd numbers:\n";
    int temp;
    while (cin >> temp) {
        if (temp % 2 == 0) {
            even << temp << ' ';
        } else {
            odd << temp << ' ';
        }
    }
}