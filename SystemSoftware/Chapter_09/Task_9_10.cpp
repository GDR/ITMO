//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    freopen("Task_9_10.file", "rt", stdin);
    int temp;
    vector<int> vec;

    while(cin >> temp) {
        vec.push_back(temp);
    }
    fclose(stdin);
    freopen("Task_9_10.file", "wt", stdout);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ' ';
    }
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] % 2 == 1) {
            cout << vec[i] << ' ';
        }
    }
}