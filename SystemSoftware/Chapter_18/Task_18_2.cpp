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
        char *result = new char[strlen(str) + strlen(o.str)];
        int idx = 0;
        for (int i = 0; i < strlen(str) ;i++ ) {
            result[idx++] = str[i];
        }
        for (int i = 0; i < strlen(o.str); i++) {
            result[idx++] = o.str[i];
        }
        return my_str(result);
    }

    int count_words() {
        int result = 0;
        bool is_word = false;
        for (int i = 0; i < strlen(str); i++) {
            if (isalpha(str[i])) {
                is_word = true;
            } else {
                result++;
                is_word = false;
            }
        }
        result += is_word ? 1 : 0;
        return result;
    }

    friend ostream &operator<<(ostream &os, const my_str &str) {
        os << str.str;
        return os;
    }
};

using namespace std;

int main() {
    my_str s("asd asd");
    my_str space(" ");
    my_str ss("dsa dsa asd ewq");
    cout << (s + space + ss) << endl;
    cout << s.count_words() << ' ' << ss.count_words() << endl;
    return 0;
}