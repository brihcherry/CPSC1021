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
        Rectangle(){length = width = 1;}; // default constructor

        // input constructor, uses setters to validate input
        Rectangle(double w, double l) 
        {
            if ( !setWidth(w) || !setLength(l) )
                {width = length = 1;}
        };

        bool setWidth(double w);
        bool setLength(double l);

        double getWidth();
        double getLength();
        
        double calcArea();

};

#endif