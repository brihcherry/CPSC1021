// 
// This file contains the prototypes for the Circle class
// 

#ifndef CIRCLE_
#define CIRCLE_


class Circle{
    private:
        double radius;

    public:
        Circle();
        bool setRadius(double radiusIn);
        double getRadius();
        double calcArea();

};

#endif