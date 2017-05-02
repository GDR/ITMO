//
// Created by Damir Garifullin on 25/04/2017.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    double min;
    double minIdx;
    double max;
    double maxIdx;

    freopen("Task_9_08.file", "rt", stdin);

    vector<double> vec;

    double temp;
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

    vec[minIdx] = max;
    vec[maxIdx] = min;

    fclose(stdin);

    freopen("Task_9_08.file", "wt", stdout);
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ' ';
    }
}