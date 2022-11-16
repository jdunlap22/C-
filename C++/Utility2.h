#include <iostream>

#ifndef UTILITY_H
    #define UTILITY_H

    #include "Person2.h"

    class Utility {

        public:
            static void DisplayPersonAge(Person& person);
    };
#endif



//HEADER GUARDS PREVENT THE RE-DEFINITION OF A CLASS
//(aka forward declaration)
//We define a constant (UTILITY_H) that on initial load, does not exist
//It then declares the Utility class and sets the UTILITY_H constant
//on a subsequent load of the header, UTILITY_H already exists
//so it skips redeclaring the Utility class over again