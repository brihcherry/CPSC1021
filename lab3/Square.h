// 
// prototypes for the Square class
// 

#ifndef SQUARE_
#define SQUARE_

#include <string>

class Square{
    private:
        double side;

    public:
        Square();
        bool setSide(double s);
        double getSide();
        double calcArea();

};

#endif