//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>

using namespace std;

struct book {
    string author_last_name;
    string author_first_name;
    string title;
    int year;
    bool onlyOnSite;
    bool available;
};

int main() {
    int n;
    cin >> n;
    book *books = new book[n];

    for (int i = 0; i < n; i++) {
        cin >> books[i].author_last_name
            >> books[i].author_first_name
            >> books[i].title
            >> books[i].year
            >> books[i].onlyOnSite
            >> books[i].available;
    }
    string last_name;
    int year;

    while (1) {
        char c;
        cin >> c;
        switch (c) {
            case '1':
                cin >> last_name;
                for (int i = 0; i < n; i++) {
                    if (books[i].author_last_name == last_name) {
                        cout << books[i].title << endl;
                    }
                }
                cout << endl;
                break;
            case '2':
                cin >> last_name >> year;
                for (int i = 0; i < n; i++) {
                    if (books[i].author_last_name == last_name &&
                        books[i].year <= year &&
                        !books[i].onlyOnSite &&
                        books[i].available) {
                        cout << books[i].title << endl;
                    }
                }
                cout << endl;
                break;
            default:
                return 0;
        }
    }
}