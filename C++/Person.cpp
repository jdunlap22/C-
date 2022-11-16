#include "Person2.h"

Person::Person(){ this->name = ""; this->age = 0; }
Person::Person(std::string s1, int i2){
    this->name = s1; this->age = i2;
}
Person::~Person(){}

std::string Person::getName(){ return this->name; }
void Person::setName(std::string temp){ this->name = temp; }
int Person::getAge(){ return this->age; }
void Person::setAge(int temp){ this->age = temp; }

void Person::Display(){
    std::cout << "Person: " << this->name << "(" << this->age << ")" << std::endl;
}