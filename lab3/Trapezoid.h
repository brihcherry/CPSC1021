// 
// prototypes for the trapezoid class
// 

#ifndef TRAPEZOID_
#define TRAPEZOID_

#include <string>

class Trapezoid{
    private:
        double base1,
               base2,
               height;

    public:
        Trapezoid();
        bool setBase1(double b1);
        bool setBase2(double b2);
        bool setHeight(double h);
        double getBase1();
        double getHeight();
        double getBase2();
        double calcArea();

};

#endif