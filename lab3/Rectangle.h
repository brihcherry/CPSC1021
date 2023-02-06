// 
// 
// 
// This file contains the prototypes for the Rectangle class
// 

#ifndef RECTANGLE_
#define RECTANGLE_

class Rectangle{
    private:
        double length,
                width;

    public:
        Rectangle();
        bool setWidth(double width);
        bool setLength(double length);
        double getWidth();
        double getLength();
        double calcArea();

};

#endif