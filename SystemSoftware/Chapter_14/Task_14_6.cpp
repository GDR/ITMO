//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <vector>

using namespace std;

struct result {
    int average;
    int sum;
    int amount;
};

result calc(vector<int> vec) {
    result res;
    res.average = 0;
    for (int i = 0; i < vec.size(); i++) {
        res.average += vec[i];
    }
    res.average /= vec.size();
    res.sum = 0;
    res.amount = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] < res.average) {
            res.sum += vec[i];
            res.amount++;
        }
    }
    return res;
}

int main() {
    vector<int> v;
    for (int i = 0; i < 20; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    result res = calc(v);

    cout << res.average << endl;
    cout << res.sum << endl;
    cout << res.amount << endl;

    return 0;
}