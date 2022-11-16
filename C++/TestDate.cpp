#include <iostream>
#include "Date.h"

int main () {
    Date rDay(11, 11, 2022);
    std::cout << " rDay is initialized to: "; 
    rDay.Display();

    ++rDay;
    std::cout << " rDay after: "; 
    rDay.Display();

    --rDay;
    --rDay;
    --rDay;
    std::cout << " rDay before: "; 
    rDay.Display();

    return 0;
}