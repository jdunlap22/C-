#include <iostream>
#ifndef PERSON_H
    #define PERSON_H

    //DO NOT INCLUDE THIS LINE AS IT ABORTS THE CODE BELOW 
    //IF DEFINED
    //#include "Utility2.h"

    class Person {

        private:
            friend class Utility;
            std::string name;
            int age;

        public:
            Person();
            Person(std::string s1, int i2);
            ~Person();

            std::string getName();
            void setName(std::string temp);
            int getAge();
            void setAge(int temp);

            void Display();

    };
#endif


