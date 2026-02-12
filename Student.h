#ifndef UNIUSERS_STUDENT_H
#define UNIUSERS_STUDENT_H

#include "Person.h"
#include <iostream>
#include <string>

class Student: Person {
protected:
    std::string group;
public:
    Student();
    Student(std::string name, int age, int id, std::string group);
    ~Student();
    void study();
    void printInfo();
};


#endif /