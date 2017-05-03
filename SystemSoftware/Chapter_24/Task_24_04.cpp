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
    in.open("Task_24_04.dat", ios::binary);
    vector<int> vec;
    int temp;
    while(in >> temp) {
        vec.push_back(temp);
    }
    in.close();
    out.open("Task_24_04.dat", ios::binary | ios::app);

    out.seekp(0, ios::end);
    long pos = out.tellp() / 2;
    out.seekp(pos);
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] % 5 == 0) {
            out << vec[i];
        }
    }
    return 0;
}