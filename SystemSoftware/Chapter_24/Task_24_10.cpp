//
// Created by Damir Garifullin on 25/04/2017.
//

//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream in;
    ofstream out;
    in.open("Task_24_10.dat", ios::binary);
    vector<int> vec;
    int temp;
    while(in >> temp) {
        vec.push_back(temp);
    }
    in.close();
    out.open("Task_24_10.dat", ios::binary);

    bool was_zero = false;
    for (int i = 0; i < vec.size(); i++) {
        if (!was_zero && vec[i] == 0) {
            out << vec[i];
            i++;
            was_zero = true;
        } else {
            out << vec[i];
        }
    }
    return 0;
}