//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        q.push(temp);
    }
    queue<int> temp;
    for (int i = 0; i < n; i++) {
        int current = q.front();
        q.pop();
        q.push(current);
        if (current % 2 == 1) {
            temp.push(current);
        }
    }
    while (!temp.empty()) {
        int current = temp.front();
        temp.pop();
        q.push(current);
    }
    while (!q.empty()) {
        cout << q.front();
        q.pop();
    }
    return 0;
}