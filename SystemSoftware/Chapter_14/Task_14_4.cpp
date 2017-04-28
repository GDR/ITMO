//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>

using namespace std;

struct result {
    int max;
    int min;
};

result max_min(int a, int b, int c) {
    result res;

    res.max = max(max(a, b), c);
    res.min = min(min(a, b), c);

    return res;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    result res = max_min(a, b, c);

    cout << res.max << endl;
    cout << res.min << endl;

    return 0;
}