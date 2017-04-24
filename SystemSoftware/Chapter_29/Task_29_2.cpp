//
// Created by Damir Garifullin on 24/04/2017.
//

#include <iostream>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    string result = "";
    bool was_first_word = false;
    bool was_space = true;
    for (int i = 0; i < str.size(); i++) {
        if (isspace(str[i])) {
            if (was_first_word && !was_space) {
                result += str[i];
                was_space = true;
            }
        } else {
            was_first_word = true;
            was_space = false;
            result += str[i];
        }
    }

    int word_count = 0;
    for (int i = 0; i < result.size(); i++) {
        if (isspace(result[i]))
            word_count++;
    }
    if (isspace(result[result.size()])) {
        word_count--;
    }
}