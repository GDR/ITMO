//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream in;
    in.open("Task_24_02.dat", ios::binary);
    vector<int> vec;
    int temp;
    while (in >> temp) {
        vec.push_back(temp);
    }
    in.close();
    ofstream out;
    out.open("Task_24_02.dat", ios::binary | ios::app);
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] % 2 == 0) {
            out << vec[i];
        }
    }
    out.close();
}