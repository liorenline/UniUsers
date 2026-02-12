#ifndef UNIUSERS_PERSON_H
#define UNIUSERS_PERSON_H

#include <iostream>
#include <string>
class Person {
protected:
    std::string name;
    int age;
private:
    int id;
public:
    Person();
    Person(std::string name, int age, int id);
    ~Person();
    void printInfo();
    const int GetID() const;
    void showid();
};


#endif