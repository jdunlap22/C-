/*
    Polymorphism refers to referencing an object to call
    a member function in either a base or derived class.

    Last year:
        ad-hoc polymorphism (one function name, many definitions)
                                   overloading
        run-time polymorphism (multiple display functions)
                                    overriding
    
    C++ definitions of polymorphism
    --------------------------------
    1. Runtime Polymorphism (subtype polymorphism)
       The ability to use a derived class through base class members
    
    2. Compile-time Polymorphism (parametric polymorphism)
       Execute the same code for any data type. 
       Implemented via templates

    3. Overloading (ad-hoc polymorphism)
       Functions with the same name acting differently for each type

    4. Casting (Coersion Polymorphism)
       An object or primitive that is case into another object
       or primitive type

*/
#include "Cat.h"
#include "Tiger.h"

void call_meow(Felis *felis);

int main() {
    Cat cat;
    //cat.meow();
    call_meow(&cat);

    Tiger tiger;
    //tiger.meow();
    call_meow(&tiger);

    //g++ TestPoly1.cpp Felis.cpp Cat.cpp Tiger.cpp

    return 0;
}

void call_meow(Felis *felis) {
    felis->meow();
}