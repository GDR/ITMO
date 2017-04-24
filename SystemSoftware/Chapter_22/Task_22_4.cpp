//
// Created by Damir Garifullin on 24/04/2017.
//

#include <iostream>

using namespace std;

class Human {
public:
    virtual string getInstitution() = 0;

    virtual string getPosition() = 0;
};

class SchoolStudent : public Human {
public:
    int schoolNumber;
    int grade;

    string getInstitution() override {
        return "School number " + to_string(schoolNumber) + " student";
    }

    string getPosition() override {
        return to_string(grade) + " Grade";
    }
};

class Student : public Human {
public:
    string university;
    int group;
    int year;

    string getInstitution() override {
        return "Student of " + university;
    }

    string getPosition() override {
        return "Year " + to_string(year) + " group " + to_string(group);
    }
};

class Engineer : public Human {
public:
    string company;
    string position;
    int salary;

    string getInstitution() override {
        return "Engineer in " + company;
    }

    string getPosition() override {
        return position + " salary: " + to_string(salary);
    }
};

int main() {
    Human *human;

    SchoolStudent schoolStudent;
    schoolStudent.schoolNumber = 32;
    schoolStudent.grade = 8;

    Student student;
    student.university = "NRU ITMO";
    student.group = 3200;
    student.year = 2;

    Engineer engineer;
    engineer.company = "Foo inc.";
    engineer.position = "Software engineer";
    engineer.salary = 1000;

    human = &schoolStudent;
    cout << human->getInstitution() << '\n' << human->getPosition() << '\n' << '\n';
    human = &student;
    cout << human->getInstitution() << '\n' << human->getPosition() << '\n' << '\n';
    human = &engineer;
    cout << human->getInstitution() << '\n' << human->getPosition() << '\n' << '\n';
    return 0;
}
