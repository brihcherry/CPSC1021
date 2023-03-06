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

    public:
        string static const MONTHS[12];

        Date();
        Date(int m, int d, int y);

        int getMonth() const;
        int getDay() const;
        int getYear() const;

        void setMonth(int m);
        void setDay(int d);
        void setYear(int y);

        string print();

        bool static compare(Date const d1, Date const d2)
        {
            if (d1.getYear() < d2.getYear()) 
                {return true;}
            else if (d1.getYear() == d2.getYear())
            {
                if (d1.getMonth() < d2.getMonth())
                    {return true;}
                else if (d1.getMonth() == d2.getMonth())
                {
                    if (d1.getDay() > d2.getDay())
                        {return false;}
                    else return true;
                }
                else return false;
            }
            else return false;
        }

};

#endif