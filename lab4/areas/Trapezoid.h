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
        Trapezoid() {base1 = base2 = height = 1;}; // defualt
        Trapezoid(double b1, double b2, double h){ // input constructor
            if ( !setBase1(b1) || !setBase2(b2) || !setHeight(h))
                {base1 = base2 = height = 1;}
        };

        bool setBase1(double b1);
        bool setBase2(double b2);
        bool setHeight(double h);

        double getBase1();
        double getHeight();
        double getBase2();

        double calcArea();

};

#endif