#include <iostream>
#include <fstream>

int main() {

    std::ofstream file;
    file.open("file1.txt", std::ios_base::out);

    if ( file.is_open() ) {
        std::cout << "file1.txt opened sucessfully" << std::endl;
        std::cout << "Please enter some text: ";

        std::string data;
        std::getline(std::cin >> std::ws, data);

        file << data;
        std::cout << "file1.txt will be closed" << std::endl;
        file.close();
    }

    return 0;
}