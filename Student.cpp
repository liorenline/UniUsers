#include "Student.h"

Student::Student(): Person("", 0, 0), group(""){};
Student::Student(std::string name, int age, int id, std::string group): Person(name, age, id), group(group) {
};
Student::~Student(){};
void Student::study() {
    std::cout << "I`m studying in group " << group << std::endl;
};
void Student::printInfo() {
    std::cout << "Name: " << name << ", age: " << age << ", group: "<< group<< std::endl;
};
