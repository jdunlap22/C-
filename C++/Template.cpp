#include <iostream>
#include <string>

    /* Template Design patterns use templated to use the same function or declare different data type functions as it own
       Template to call upon the function the template is for to change the output of the variable. Helps prevent code
       Duplication and reduces large blocks of code. Commonly used in gaming and other large projects due to how easy it 
       is to work with.
    */

    //template set for 1 function named by the typename Temp
    template<typename Temp>

    //function called Value using Temp to declare the data type the variable its going to be in the argument.
    void Value(Temp variable) {
        //outputting the variable
        std::cout << variable << std::endl;

    }

int main () {

    //printing the variable through using the template over and over again using different types of data types.
    Value(1.89f);
    Value(50);
    Value("Jeremy");

    std::cin.get();
}