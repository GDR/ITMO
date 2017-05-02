//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>

using namespace std;

struct list {
    int value;
    list *next = nullptr;


    list() {}

    list(int value) : value(value) {}

    list *addNext(int value) {
        list *o = new list(value);
        this->next = o;
        return o;
    }

    list *addNext(list *o) {
        this->next = o;
        return o;
    }
};

list *readList(int size) {
    list *result = nullptr;
    list *pointer = nullptr;
    for (int i = 0; i < size; i++) {
        int temp;
        cin >> temp;
        if (i == 0) {
            result = new list(temp);
            pointer = result;
        } else {
            pointer = pointer->addNext(temp);
        }
    }
    return result;
}
list *resultFinal = nullptr;
list *resultFinalPointer = nullptr;

void reverseList(list *source) {
    if (source->next != nullptr) {
        reverseList(source->next);
    }
    if (resultFinal == nullptr) {
        resultFinal = new list(source->value);
        resultFinalPointer = resultFinal;
    } else {
        resultFinalPointer = resultFinalPointer->addNext(source->value);
    }
}

int main() {
    list *a = NULL;
    list *b = NULL;

    int n;
    cin >> n;
    a = readList(n);

    int m;
    cin >> m;
    b = readList(m);

    list *result;
    list *resultPointer;
    list *pointerA = a;
    list *pointerB = b;

    if (pointerA->value < pointerB->value) {
        result = new list(pointerA->value);
        pointerA = pointerA->next;
    } else {
        result = new list(pointerB->value);
        pointerB = pointerB->next;
    }
    resultPointer = result;

    while (pointerA != nullptr && pointerB != nullptr) {
        if (pointerA->value < pointerB->value) {
            resultPointer = resultPointer->addNext(pointerA);
            pointerA = pointerA->next;
        } else {
            resultPointer = resultPointer->addNext(pointerB);
            pointerB = pointerB->next;
        }
    }
    while (pointerA != nullptr) {
        resultPointer = resultPointer->addNext(pointerA);
        pointerA = pointerA->next;
    }
    while (pointerB != nullptr) {
        resultPointer = resultPointer->addNext(pointerB);
        pointerB = pointerB->next;
    }

    list *finalResult = nullptr;
    reverseList(result);

    resultFinalPointer = resultFinal;

    while (resultFinalPointer != nullptr) {
        cout << resultFinalPointer->value << ' ';
        resultFinalPointer = resultFinalPointer->next;
    }
}