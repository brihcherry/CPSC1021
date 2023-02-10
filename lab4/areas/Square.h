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
        Square() { side = 1;}; // default constructor

        // user input constructor, which uses setters to validate input
        Square(double s) 
            {if (!setSide(s)) side = 1;}
            
        bool setSide(double s);
        double getSide();
        double calcArea();

};

#endif