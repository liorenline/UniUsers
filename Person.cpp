#include "Person.h"

Person::Person(): name(""), age(0), id(0){};
Person::Person(std::string name, int age, int id) {
   this ->  name = name;
   this-> age = age;
   this -> id = id;
}
Person::~Person(){};
void Person::printInfo() {
   std::cout << "Name: " << name << ", age: " << age << std::endl;
};
void Person::showid() {
   std::cout <<"Id: " << id;
}
const int Person::GetID() const {
   return id;
};
