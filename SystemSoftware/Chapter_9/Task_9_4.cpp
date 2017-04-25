//
<<<<<<< HEAD
// Created by Damir Garifullin on 25/04/2017.
//

=======
// Created by gdr on 4/23/17.
//

#include <iostream>

using namespace std;

struct Toy {
    string name;
    double price;
    string article;
    int count;
    int age;
};

int main() {
    Toy *toys;
    int n;
    cin >> n;
    toys = new Toy[n];

    for (int i = 0; i < n; i++) {
        cin >> toys[i].name >> toys[i].price >> toys[i].article >> toys[i].count >> toys[i].age;
    }
    int targetAge;
    double availMoney;
    cin >> targetAge >> availMoney;

    for (int i = 0; i < n; i++) {
        if (toys[i].age == targetAge && availMoney - toys[i].price) {
            availMoney -= toys[i].price;
            cout << toys[i].name << ' '
                 << toys[i].price << ' '
                 << toys[i].article << ' '
                 << toys[i].count << ' '
                 << toys[i].age << '\n';
        }
    }
}
>>>>>>> 73b6239cf7ae7ed95c72a07794c9922c67ed850d
