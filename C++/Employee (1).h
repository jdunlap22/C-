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
    9. define all functions in the implementation file (.cpp)***
    10. test in a program
*/
//1. define skeleton
class Employee {
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
        int getID();
        std::string getFirstName();
        std::string getLastName();
        std::string getAddress();
        std::string getHireDate();
        std::string getDepartment();
        void setID(int temp); //void setID(int);  
        void setFirstName(std::string temp); //void setID(std::string);  
        void setLastName(std::string temp);
        void setAddress(std::string temp);
        void setHireDate(std::string temp);
        void setDepartment(std::string temp);

        //4. default constructor
        Employee();

        //5. destructor
        ~Employee();

        //6. secondary constructor
        Employee(std::string s1, std::string s2);//constructor for first/last names
        //Employee(std::string s1, std::string s2);//constructor for Hire Date/Department
        Employee(int i1, std::string s2, std::string s3, 
                 std::string s4, std::string s5, std::string s6);
        
        //7. display function
        void Display();

        //8. other methods
        double NetIncome(double d1, double d2);
};