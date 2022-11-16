#include <iostream>
#include "Utility2.h"
//#include "Person.h"

int main() {
    Person first("Darren", 45);
    std::cout << "Access via Person..." << std::endl;
    first.Display();

    //Utility util;
    //util.DisplayPersonAge(first);
    std::cout << "Access via Utility..." << std::endl;
    Utility::DisplayPersonAge(first);

    //TO RUN:
    //change: g++ TestPerson.cpp -o TestPerson
    //to: g++ TestPerson.cpp Person.cpp Utility.cpp -o TestPerson

    //NOTE: When I ran into the issue in class, I only linked to Person, neglected to link to Utility as well 

    return 0;
}


