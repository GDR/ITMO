//
// Created by Damir Garifullin on 24/04/2017.
//

#include <iostream>

using namespace std;

struct Node {
    int value = NULL;
    Node* next;
    Node* prev;

    Node() {
        this->value = 0;
    }

    Node(int value) {
        this->value = value;
    }

    void remove() {
        if (this->prev != NULL) {
            prev->next = this->next;
        }
        if (this->next != NULL) {
            next->prev = this->prev;
        }
    }

    void setNext(Node* next) {
        this->next = next;
        next->prev = this;
    }
};

int main() {
    int n, temp;
    cin >> n >> temp;
    Node* list = new Node(temp);
    Node* cur = list;
    for (int i = 0; i < n - 1; i++) {
        cin >> temp;
        cur->setNext(new Node(temp));
        cur = cur->next;
    }
    int target;
    cin >> target;
    cur = list;
    while (cur != NULL) {
        Node* next = cur->next;
        if (cur->value == target) {
            cur->remove();
        }
        cur = next;
    }
    return 0;
}