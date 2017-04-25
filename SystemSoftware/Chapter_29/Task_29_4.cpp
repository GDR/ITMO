//
// Created by Damir Garifullin on 24/04/2017.
//
#include <iostream>

using namespace std;

int main() {
    string str;
    char symbol ;
    getline(cin, str);
    cin >> symbol;
    string result = "";
    string temp = "";
    string longestWord = "";

    for (int i = 0; i < str.size(); i++) {
        result += str[i];
        if (str[i] == symbol) {
            result += ',';
        }
    }
    for (int i = 0; i < result.size(); i++) {
        if (isalpha(str[i])) {
            temp += str[i];
        }
        if (!isalpha(str[i])) {
            if (temp.size() > longestWord.size()) {
                longestWord = temp;
            }
            temp = "";
        }
    }

    if (!temp.empty()) {
        if (temp.size() > longestWord.size()) {
            longestWord = temp;
        }
    }
    cout << endl;
    cout << result << '\n' << longestWord;
}