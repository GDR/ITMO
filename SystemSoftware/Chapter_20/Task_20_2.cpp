//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>

using namespace std;

class my_str {
    const char *str;

public:
    my_str(const char *str) : str(str) {}

    my_str(const my_str &o) {
        strcpy((char *) this->str, o.str);
    }

    my_str operator+(const my_str &o) {
        char *result = new char[strlen(str) + strlen(o.str) + 1];
        int idx = 0;
        for (int i = 0; i < strlen(str); i++) {
            result[idx++] = str[i];
        }
        for (int i = 0; i < strlen(o.str); i++) {
            result[idx++] = o.str[i];
        }
        return my_str(result);
    }

    my_str operator++() {
        char *result = new char[strlen(this->str)];
        for (int i = 0; i < strlen(this->str); i++) {
            result[i] = (char) tolower(this->str[i]);
        }
        return my_str(result);
    }
    friend ostream &operator<<(ostream &os, const my_str &str) {
        os << str.str;
        return os;
    }
};

int main() {
    my_str s("AsdASDASD");
    my_str space(" ");
    my_str ss("aeW eadasWE");

    cout << s << endl;
    cout << ss << endl;
    cout << s + ss << '\n';

    cout << ++s << endl;
    cout << ++ss << endl;
    return 0;
}