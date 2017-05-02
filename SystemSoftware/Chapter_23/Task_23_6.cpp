//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    freopen("Task_23_6.file", "rt", stdin);
    vector<string> vec;
    string temp;
    while(getline(cin, temp)) {
        vec.push_back(temp);
    }
    unsigned long minLen = vec[0].length();
    for (int i = 0; i < vec.size(); i++) {
        minLen = min(minLen, vec[i].length());
    }
    fclose(stdin);
    freopen("Task_23_6.file", "wt", stdout);
    for (int i = 0; i < vec.size(); i++) {
        for (unsigned long j = 0; j < vec[i].length(); j += minLen) {
            cout << vec[i].substr(j, minLen) << endl;
        }
    }
}