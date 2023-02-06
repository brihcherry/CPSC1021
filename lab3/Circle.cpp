// 
// this file contains the definitions for the functions and 
// constructor in the Circle class.
// 

#include "Circle.h"
#include <cmath>

Circle::Circle(){
    radius = 1; // constructor sets radius to a default value
}

// the setter function checks to see if the user input is valid;
// if it is, it returns true and sets the input to the radius variable.
// if not, it returns false and keeps the default value set by the 
// constructor.
bool Circle::setRadius(double radiusIn)
{
    if (radiusIn <= 0) return false;
    else {
        radius = radiusIn;
        return true;}
}

// getter function to return the radius
double Circle::getRadius(){
    return radius;
}

// calculates the area of the circle using the radius in the object
double Circle::calcArea(){
    return (3.14159*pow(radius,2));
}