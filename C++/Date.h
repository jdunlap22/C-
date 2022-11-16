#include <iostream>

class Date {
    private:
        int day, month, year;
    public:
        Date();
        Date(int d, int m, int y);
        ~Date();

        void Display();

        Date& operator ++ ();
        Date& operator -- ();

};