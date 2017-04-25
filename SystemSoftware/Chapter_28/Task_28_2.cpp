//
// Created by Damir Garifullin on 24/04/2017.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int temp;
    cin >> temp;
    if (vec.size() > 0 && vec[0] % temp != 0) {
        vec.erase(vec.begin());
    }
    return 0;
}