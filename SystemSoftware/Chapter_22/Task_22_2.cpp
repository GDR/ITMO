//
// Created by Damir Garifullin on 24/04/2017.
//

#include <iostream>
#include <string>

using namespace std;

class Object {
public:
    virtual string getName() = 0;
    virtual double getSize() = 0;
};

class Dot : public Object {
public:
    string getName() override {
        return "Dot";
    }

    double getSize() override {
        return 0;
    }
};

class Line: public Object {
public:
    double size;

    string getName() override {
        return "Line";
    }

    double getSize() override {
        return this->size;
    }
};

class Circle: public Object {
public:
    double size;

    string getName() override {
        return "Circle";
    }

    double getSize() override  {
        return this->size;
    }
};

int main() {
    Object *temp;
    Dot dot;
    Line line;
    Circle circle;
    line.size = 12;
    circle.size = 2;

    temp = &dot;
    cout << temp->getName() << ' ' << temp->getSize() << '\n';

    temp = &line;
    cout << temp->getName() << ' ' << temp->getSize() << '\n';

    temp = &circle;
    cout << temp->getName() << ' ' << temp->getSize() << '\n';
    return 0;
}
