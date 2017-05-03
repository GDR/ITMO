//
// Created by Damir Garifullin on 25/04/2017.
//
#include <iostream>

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

    my_vector operator * (const my_vector &o) {
        my_vector result(max(o.size, this->size));
        for (int i = 0; i < min(o.size, this->size); i++) {
            result.data[i] = this->data[i] * o[i];
        }
        for (int i = min(o.size, this->size); i < max(o.size, this->size); i++) {
            result.data[i]  = 0;
        }
        return result;
    }

    my_vector operator + (const my_vector &o) {
        my_vector result(max(o.size, this->size));
        for (int i = 0; i < result.size; i++) {
            result.data[i]  = 0;
        }
        for (int i = 0; i < this->size; i++) {
            result.data[i]  += this->data[i];
        }
        for(int i = 0; i < o.size; i++) {
            result.data[i]  += o[i];
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
    my_vector a(8);
    my_vector b(3);

    my_vector c = a + b;
    my_vector d = a * b;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    return 0;
}