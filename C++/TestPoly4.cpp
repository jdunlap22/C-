/*
4. Casting (Coersion Polymorphism)
       An object or primitive that is case into another object
       or primitive type
*/
#include <iostream>
#include "Integer.h"

void display(int n);

int main() {
    Integer i(111); 
    display(i);

    display(777);

    Integer i2 = 2222;
    display(i2);

    return 0;
}

void display(int n) {
    std::cout << n << std::endl;
}