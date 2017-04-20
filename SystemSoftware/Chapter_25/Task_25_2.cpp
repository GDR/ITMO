//
// Created by gdr on 4/10/17.
//
#include <iostream>
#include <vector>

template <typename T> class Node {
public:
    Node(T v) {
        value = v;
    }

private:
    T value;
    Node<T> *next = NULL, *prev = NULL;
public:
    T getValue() {
        return value;
    }
    Node<T> getNext() {
        return next;
    }
    Node<T> getPrev() {
        return prev;
    }
    void addNext(T value) {
        Node<T> node = new Node<T>(value);
        node.prev = this;
        node.next = this->next;
        if (this->next != NULL) {
            this->next->prev = &node;
        }
        this->next = &node;
    }

    void addPrev(T value) {
        Node<T> node = new Node<T>(value);
        node.next = this;
        node.prev = this->prev;
        if (this->prev != NULL) {
            this->prev->next = &node;
        }
        this->prev = &node;
    }
};

int main() {
    Node<int>* list = new Node<int>(2);
    list->addNext(3);
    list->addPrev(1);
    return 0;
}