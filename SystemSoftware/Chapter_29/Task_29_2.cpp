//
// Created by Damir Garifullin on 24/04/2017.
//

#include <iostream>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    string result;
    string temp;
    int word_count = 0;
    int special_word_count = 0;
    str += " ";
    for (int i = 0; i < str.size(); i++) {
        if (isspace(str[i])) {
            if (!temp.empty() && temp.size() > 0) {
                word_count++;
                if (temp[0] == temp[temp.size() - 1])
                    special_word_count++;
                result += temp + " ";
                temp = "";
            }
        } else {
            temp += str[i];
        }
    }
    cout << '\n';
    cout << result << '\n';
    cout << "Word count: " << word_count << '\n';
    cout << "Words with the same first and last letter: " << special_word_count << '\n';
}