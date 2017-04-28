//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <cmath>
using namespace std;

struct sphere {
    double area;
    double volume;
};

sphere calc(double radius) {
    sphere s;
    s.area = 4 * M_PI * radius * radius;
    s.volume = (4 / 3) * M_PI * radius * radius * radius;
    return s;

}

int main() {
    double radius;
    cin >> radius;
    sphere s = calc(radius);
    cout << s.area << endl;
    cout << s.volume << endl;
    return 0;
}