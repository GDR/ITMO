//
// Created by Damir Garifullin on 25/04/2017.
//
#include <iostream>

using namespace std;

class node {
    int value;
    node *next = nullptr;
    node *prev = nullptr;

public:
    node(int value) : value(value) {}

    node *add_next(node *n) {
        if (this->next != nullptr) {
            n->next = this->next;
            this->next->prev = n;
        }
        this->next = n;
        n->prev = this;
        return n;
    }

    node *add_next(int value) {
        return add_next(new node(value));
    }

    node *add_prev(node *n) {
        if (this->prev != nullptr) {
            n->prev = this->prev;
            this->prev->next = n;
        }
        this->prev = n;
        n->prev = this;
        return n;
    }

    node *add_prev(int value) {
        return add_prev(new node(value));
    }

    int get_value() {
        return value;
    }

    node *get_prev() {
        return prev;
    }

    node *get_next() {
        return next;
    }
};

class list {

private:
    node *head = nullptr;
    node *tail = nullptr;
public:


    void push_back(int value) {
        if (head == nullptr && tail == nullptr) {
            head = tail = new node(value);
        } else {
            tail = tail->add_next(value);
        }
    }

    void push_front(int value) {
        if (head == nullptr && tail == nullptr) {
            head = tail = new node(value);
        } else {
            head = head->add_prev(value);
        }
    }

    void push_before(node *pointer, int value) {
        pointer->add_prev(value);
    }

    node *push_after(node *pointer, int value) {
        return pointer->add_next(value);
    }

    void push_after(node *to, node *from) {
        node *fromPointer = from;
        node *toPointer = to;
        while (fromPointer != nullptr) {
            toPointer = toPointer->add_next(fromPointer->get_value());
            fromPointer = fromPointer->get_next();
        }
    }

    node *begin() {
        return head;
    }

    node *end() {
        return tail;
    }

    list() {}

    list(int size) {
        for (int i = 0; i < size; i++) {
            push_back(0);
        }
    }

    list(list &o) {
        node *iterator = o.begin();
        while (iterator != nullptr) {
            this->push_back(iterator->get_value());
            iterator = iterator->get_next();
        }
    }

    int get_size() {
        int result = 0;
        node *pointer = head;
        while (pointer != nullptr) {
            pointer = pointer->get_next();
            result++;
        }
        return result;
    }

    friend ostream &operator<<(ostream &os, const list &list1) {
        node *pointer = list1.head;
        while (pointer != nullptr) {
            os << pointer->get_value() << ' ';
            pointer = pointer->get_next();
        }
        return os;
    }
};

int main() {
    list l1;
    list l2;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(5);
    l1.push_back(6);
    l2.push_back(3);
    l2.push_back(4);

    cout << l1.get_size() << ": " << l1 << endl;
    cout << l2.get_size() << ": " << l2 << endl;
    node *pointerL1 = l1.begin()->get_next();
    l1.push_after(pointerL1, l2.begin());
    cout << l1.get_size() << ": " << l1 << endl;


    return 0;
}