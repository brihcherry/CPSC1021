// 
// This file contains the prototypes for the Circle class
// 

#ifndef CIRCLE_
#define CIRCLE_


class Circle{
    private:
        double radius;

    public:
        Circle() {radius = 1;}; // default constructor

        // user input constructor, uses setters to get data validation
        Circle(double r) 
            {if (!setRadius(r)) radius = 1;};

        bool setRadius(double r);

        double getRadius();
        
        double calcArea();

};

#endif