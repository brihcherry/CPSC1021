//
// contains declarations for Date class
// 

#ifndef _DATE_
#define _DATE_

#include <string>
using namespace std;

class Date{

    private:
        int month = 01;
        int day = 01;
        int year = 1900;
        string static const MONTHS[12];

    public:
        Date();
        Date(int m, int d, int y);

        int getMonth() const;
        int getDay() const;
        int getYear() const;

        void setMonth(int m);
        void setDay(int d);
        void setYear(int y);

        string print();

        bool static compare(Date const d1, Date const d2);

};

#endif