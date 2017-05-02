//
// Created by Damir Garifullin on 25/04/2017.
//
#include <iostream>
#include <cstdlib>

using namespace std;

class my_vector {
    int *data;
    int size;

public:

    int operator [](int i) {
        return data[i];
    }
    const int operator [](int i) const {
        return data[i];
    }

    my_vector(int _size) {
        this->data = new int[_size];
        this->size = _size;
        for (int i = 0; i < _size; i++) {
            this->data[i] = rand() % 1000;
        }
    }

    my_vector(const my_vector &vec) {
        this->size = vec.get_size();
        this->data = new int[this->size];
        for (int i = 0; i < vec.get_size(); i++) {
            this->data[i] = vec[i];
        }
    }

    int get_size() const {
        return size;
    }

    my_vector operator & (my_vector v) {
        my_vector result = max(this->get_size(), v.get_size());
        int idx = 0;
        while (idx < this->get_size() && idx < v.get_size()) {
            result.data[idx] = (this->data[idx] > v.data[idx] ? this->data[idx] : v.data[idx]);
            idx++;
        }
        while (idx < this->get_size()) {
            result.data[idx] = this->data[idx];
            idx++;
        }
        while (idx < v.get_size()) {
            result.data[idx] = v.data[idx];
            idx++;
        }
        return result;
    }

    int operator++ () {
        if (size <= 0) {
            return NULL;
        }
        int result = this->data[0];
        for (int i = 0; i < size; i++) {
            result = max(result, this->data[i]);
        }
        return result;
    }

    friend ostream &operator<<(ostream &os, const my_vector &vector1) {
        for (int i = 0; i < vector1.size; i++) {
            os << vector1[i] << ' ';
        }
        return os;
    }

};

int main() {
    my_vector a(10);
    my_vector b(8);

    cout << a << endl;
    cout << b << endl;

    my_vector ab = a & b;
    cout << ab << endl;
    cout << ++a << endl;
    cout << ++b << endl;
    cout << ++ab << endl;
}