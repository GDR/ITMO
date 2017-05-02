//
// Created by Damir Garifullin on 25/04/2017.
//

#include <iostream>
// Вместо iostream было iostream.h

int main() { // Не было int main
    int *xp;
    int *wp;
    int y;
    int z;
    *xp = 34;
    y = -35;
    wp = &y;
    // Отсутствовало пространство имен std::
    // Не определена переменная z
    std::cout << "Размер указателя xp = " << sizeof(xp) << std::endl;
    std::cout << "Значение указателя xp = " << xp << std::endl;
    std::cout << "Значение, адресуемое xp = " << *xp << std::endl;
    std::cout << "Адрес переменной y = " << &y << std::endl;
    std::cout << "Адрес переменной z = " << &z << std::endl;
    std::cout << "Разыменованное значение wp = " << *wp << std::endl;
}

/*
 * Вывод программы:
 *
 *      Размер указателя xp = 8
 *      Значение указателя xp = 0x7fff5a124b78
 *      Значение, адресуемое xp = 34
 *      Адрес переменной y = 0x7fff5a124afc
 *      Адрес переменной z = 0x7fff5a124af8
 *      Разыменованное значение wp = -35
 *
 */