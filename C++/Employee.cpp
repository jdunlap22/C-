#include "Employee.h"

//3. getters/setters
int Employee::getID(){
    return this->ID;
}
std::string Employee::getFirstName(){
    return this->FirstName;
}
std::string Employee::getLastName(){
    return this->LastName;
}
std::string Employee::getAddress(){
    return this->Address;
}
std::string Employee::getHireDate(){
    return this->HireDate;
}
std::string Employee::getDepartment(){
    return this->Department;
}
void Employee::setID(int temp){
    this->ID = temp;
}  
void Employee::setFirstName(std::string temp){
    this->FirstName = temp;
}
void Employee::setLastName(std::string temp){
    this->LastName = temp;
}
void Employee::setAddress(std::string temp){
    this->Address = temp;
}
void Employee::setHireDate(std::string temp){
    this->HireDate = temp;
}
void Employee::setDepartment(std::string temp){
    this->Department = temp;
}

//4. default constructor
Employee::Employee(){
    this->ID = 0; this->FirstName=""; this->LastName="";
    this->Address = ""; this->HireDate = ""; this->Department = "";
}

//5. destructor
Employee::~Employee(){

}

//6. secondary constructor
Employee::Employee(std::string s1, std::string s2){
    this->ID = 0; this->FirstName=s1; this->LastName=s2;
    this->Address = ""; this->HireDate = ""; this->Department = "";
}
Employee::Employee(int i1, std::string s2, std::string s3, 
            std::string s4, std::string s5, std::string s6){
    this->ID = i1; this->FirstName=s2; this->LastName=s3;
    this->Address = s4; this->HireDate = s5; this->Department = s6;
}

//7. display function
void Employee::Display(){
    std::cout << "ID: " << this->ID << std::endl;
    std::cout << "FirstName: " << this->FirstName << std::endl;
    std::cout << "LastName: " << this->LastName << std::endl;
    std::cout << "Address: " << this->Address << std::endl;
    std::cout << "HireDate: " << this->HireDate << std::endl;
    std::cout << "Department: " << this->Department << std::endl;
}

//8. other methods
double Employee::NetIncome(double d1, double d2){
    return d1 * d2;
}
