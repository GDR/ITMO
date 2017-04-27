//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <set>
#include <sstream>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    stringstream ss(str);

    set<string> set;
    string result = "";
    string temp;
    while (ss >> temp) {
        if (set.find(temp) == set.end()) {
            result += temp + " ";
            set.insert(temp);
        }
    }
    cout << result;
}