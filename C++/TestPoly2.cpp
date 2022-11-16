#include <iostream>

template <class T> T maxOfTwo(T var1, T var2) {
    //if (var1 > var2) { return var1; } else { return var2; }
    return var1 > var2 ? var1 : var2;
}

int main () {
    std::cout << ::maxOfTwo(50, 20) << std::endl;
    std::cout << ::maxOfTwo(55.666742, -4.22222) << std::endl;

    std::cout << ::maxOfTwo("Burger", "Pizza") << std::endl;
    //std::cout << ::maxOfTwo("Burger", 55.5) << std::endl;

    return 0;
}