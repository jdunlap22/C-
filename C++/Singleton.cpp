#include <iostream>

// This ensures that a class will only run just a single instance.

using namespace std;

class Singleton {

    //protected constructor this prevents objects from using the operator outside singleton class.
    protected:
    Singleton() = default;

    public:

        //variable for number that is stored
        int num;

    static Singleton& get_instance()
    {
        //static constructor that call to the protected constructor above to create an object and save it as static.
       static Singleton instance;

       return instance;
    }
};


int main () {
    
    //display of singleton design and declarign variable as 20. the cout line displays that the
    //singleton instance is grabbed by using get_instance();
    Singleton &singleton = Singleton::get_instance();

    singleton.num = 20;

    cout << "singleton.data = " << singleton.num << endl;
    return 0;
}