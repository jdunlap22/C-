#include <iostream>

int add(int a, int b);
std::string add (std::string a, std::string b);
//std::string add (const char *a, const char *b);

int main() {
    std::cout << add(10, 15) << std::endl;
    std::cout << add("pizza", "burger");
    return 0;
}

int add(int a, int b){
    return a + b;
}
std::string add (std::string a, std::string b){
    std::string temp = ""; 
    temp += a;
    temp += b;
    return temp;
}
/*
std::string add (const char *a, const char *b){
    std::string temp(a); 
    temp += b;
    return temp;
}
*/
