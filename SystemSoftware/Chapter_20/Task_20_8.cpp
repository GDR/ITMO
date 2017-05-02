//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>

class node {
    int value;
    node *next = nullptr;
    node *prev = nullptr;

public:
    node(int value) : value(value) {}

    node* add_next(node *n) {
        if (this->next != nullptr) {
            n->next = this->next;
            this->next->prev = n;
        }
        this->next = n;
        n->prev = this;
        return n;
    }

    node* add_next(int value) {
        return add_next(new node(value));
    }

    node* add_prev(node* n) {
        if (this->prev != nullptr) {
            n->prev = this->prev;
            this->prev->next = n;
        }
        this->prev = n;
        n->next = this;
        return n;
    }

    node* add_prev(int value) {
        return add_prev(new node(value));
    }

    int get_value() {
        return value;
    }

    node* get_prev() {
        return prev;
    }

    node* get_next() {
        return next;
    }

    void swap() {
        node* temp = prev;
        prev = next;
        next = temp;
    }
};

class list {

private:
    node *head = nullptr;
    node *tail = nullptr;
    int size = 0;
public:

    void push_back(int value) {
        size++;
        if (head == nullptr && tail == nullptr) {
            head = tail = new node(value);
        } else {
            tail = tail->add_next(value);
        }
    }

    void push_front(int value) {
        size++;
        if (head == nullptr && tail == nullptr) {
            head = tail = new node(value);
        } else {
            head = head->add_prev(value);
        }
    }

    void push_before(node* pointer, int value) {
        size++;
        pointer->add_prev(value);
    }

    void push_after(node* pointer, int value) {
        size++;
        pointer->add_next(value);
    }

    node* begin() {
        return head;
    }

    node* end() {
        return tail;
    }

    list() {}

    list(int size) {
        for (int i = 0; i < size; i++) {
            push_back(0);
        }
    }

    list(list &o) {
        node* iterator = o.begin();
        while (iterator != nullptr) {
            this->push_back(iterator->get_value());
            iterator = iterator->get_next();
        }
    }

    list operator++() {
        int *array = new int[size];
        node* pointer = begin();
        int idx = 0;
        while (pointer != nullptr) {
            array[idx++] = pointer->get_value();
            pointer = pointer->get_next();
        }

        for (int i = 0; i < size; i++) {
            int minIdx = i;
            for (int j = i + 1; j < size; j++) {
                if (array[minIdx] > array[j]) {
                    minIdx = j;
                }
            }
            int temp = array[i];
            array[i] = array[minIdx];
            array[minIdx] = temp;
        }
        list result;
        for (int i = 0; i < size; i++) {
            result.push_back(array[i]);
        }
        this->head = result.head;
        this->tail = result.tail;
        return result;
    }

    list operator--() {
        list result;
        node* pointer = begin();
        while (pointer != nullptr) {
            result.push_front(pointer->get_value());
            pointer = pointer->get_next();
        }
        this->head = result.head;
        this->tail = result.tail;
        return result;
    }
};

int main() {
    list a;
    a.push_back(5);
    a.push_back(4);
    a.push_back(3);
    a.push_back(2);
    a.push_back(1);
    a.push_back(0);
    ++a;

    node* pointer = a.begin();
    while (pointer != nullptr) {
        std::cout << pointer->get_value() << ' ';
        pointer = pointer->get_next();
    }
    std::cout << std::endl;
    --a;
    pointer = a.begin();
    while (pointer != nullptr) {
        std::cout << pointer->get_value() << ' ';
        pointer = pointer->get_next();
    }
}