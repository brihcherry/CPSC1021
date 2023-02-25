//
// Date class definitions
// 

#include "Date.h"
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

// define the static attribute out of line
const string Date::MONTHS[12] = 
            {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", 
            "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};

// default constructor
Date::Date() 
{
    month = 1;
    day = 1;
    year = 1900;
}

// input constructor
Date::Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

// getters, must be const so as to be able to be called by compare()
int Date::getMonth() const {return month;}
int Date::getDay() const {return day;}
int Date::getYear() const {return year;}

// setters
void Date::setMonth(int m) {month = m;}
void Date::setDay(int d) {day = d;}
void Date::setYear(int y) {year = y;}

// uses a string stream to create a formatted string that will
// ultimately end up in the output file
string Date::print() 
// use string stream to create output
{
    stringstream ss;
    ss << left << setw(10) << MONTHS[month-1] 
       << left << setw(3)  << day 
       << left << setw(5)  << year;

    return ss.str();
}

// returns true if d1 is earlier than d2. 
// is used by sort() in main.
bool Date::compare(Date const d1, Date const d2) 
{
    if (d1.getYear() < d2.getYear()) 
        {return true;}
    else if (d1.getYear() == d2.getYear())
    {
        if (d1.getMonth() < d2.getMonth())
            {return true;}
        else if (d1.getMonth() == d2.getMonth())
        {
            if (d1.getDay() < d2.getDay())
                {return true;}
            else return false;
        }
        else return false;
    }
    else return false;
}

