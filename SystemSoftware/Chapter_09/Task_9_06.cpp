//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int min;
    int minIdx;
    int max;
    int maxIdx;

    freopen("Task_9_06.file", "rt", stdin);

    vector<int> vec;

    int temp;
    while (cin >> temp) {
        vec.push_back(temp);
    }
    min = max = vec[0];
    minIdx = maxIdx = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (min > vec[i]) {
            min = vec[i];
            minIdx = i;
        }
        if (max < vec[i]) {
            max = vec[i];
            maxIdx = i;
        }
    }

    temp = 0;
    for (int i = 0; i < minIdx; i++) {
        temp += vec[i];
    }
    vec[minIdx] = temp;
    temp = 0;
    for (int i = maxIdx + 1; i < vec.size(); i++) {
        temp += vec[i];
    }
    vec[maxIdx] = temp;
    fclose(stdin);
    freopen("Task_9_06.file", "wt", stdout);
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ' ';
    }
}