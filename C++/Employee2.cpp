#include <iostream>
#include <string>
/*
    1. define skeleton
    2. define attributes
    3. getters/setters
    4. default constructor
    5. define destructor***
    6. secondary constructors (if required)
    7. display function
    8. any other functions
    10. test in a program
*/
//1. define skeleton
class Employee2 {
    //2. define attributes
    private:
        int ID;
        std::string FirstName;
        std::string LastName;
        std::string Address;
        std::string HireDate;
        std::string Department;
        //pointers (if creating manual linked list)

    public:

    //3. getters/setters
    int getID(){
        return this->ID;
    }
    std::string getFirstName(){
        return this->FirstName;
    }
    std::string getLastName(){
        return this->LastName;
    }
    std::string getAddress(){
        return this->Address;
    }
    std::string getHireDate(){
        return this->HireDate;
    }
    std::string getDepartment(){
        return this->Department;
    }
    void setID(int temp){
        this->ID = temp;
    }  
    void setFirstName(std::string temp){
        this->FirstName = temp;
    }
    void setLastName(std::string temp){
        this->LastName = temp;
    }
    void setAddress(std::string temp){
        this->Address = temp;
    }
    void setHireDate(std::string temp){
        this->HireDate = temp;
    }
    void setDepartment(std::string temp){
        this->Department = temp;
    }

    //4. default constructor
    Employee2(){
        this->ID = 0; this->FirstName=""; this->LastName="";
        this->Address = ""; this->HireDate = ""; this->Department = "";
    }

    //5. destructor
    ~Employee2(){

    }

    //6. secondary constructor
    Employee2(std::string s1, std::string s2){
        this->ID = 0; this->FirstName=s1; this->LastName=s2;
        this->Address = ""; this->HireDate = ""; this->Department = "";
    }
    Employee2(int i1, std::string s2, std::string s3, 
                std::string s4, std::string s5, std::string s6){
        this->ID = i1; this->FirstName=s2; this->LastName=s3;
        this->Address = s4; this->HireDate = s5; this->Department = s6;
    }

    //7. display function
    void Display(){
        std::cout << "ID: " << this->ID << std::endl;
        std::cout << "FirstName: " << this->FirstName << std::endl;
        std::cout << "LastName: " << this->LastName << std::endl;
        std::cout << "Address: " << this->Address << std::endl;
        std::cout << "HireDate: " << this->HireDate << std::endl;
        std::cout << "Department: " << this->Department << std::endl;
    }

    //8. other methods
    double NetIncome(double d1, double d2){
        return d1 * d2;
    }
};