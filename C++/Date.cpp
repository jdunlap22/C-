#include "Date.h"

Date::Date() { day = 0; month = 0; year = 0; }
Date::Date(int d, int m, int y) {
    day = d; month = m; year = y;
}
Date::~Date() {}

void Date::Display() {
    std::cout << year << "-" << month << "-" << day <<std::endl;
}

Date& Date::operator ++ () {
    ++day;
    return *this;
}

Date& Date::operator -- () {
    --day;
    return *this;
}