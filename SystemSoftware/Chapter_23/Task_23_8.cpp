//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
#include <stack>
using namespace std;

int main () {
    freopen("Task_23_8.file", "rt", stdin);
    stack<char> st;
    char temp;
    while ((temp = (char) getchar()) != EOF) {
        st.push(temp);
    }
    fclose(stdin);
    freopen("Task_23_8.file", "wt", stdout);
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
}