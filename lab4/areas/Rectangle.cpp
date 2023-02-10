//
// contains the definitions for the Rectangle class
// 

#include "Rectangle.h"
#include <cmath>


// setter functions below check to see if the user input
// is valid. if so, it returns true and sets the in-class
// variable to whatever the user input. if invalid input,
// the setter returns false and does not change the default
// value set by the constructor.
bool Rectangle::setWidth(double widthIn){
    if (widthIn <= 0) return false;
    else {
        width = widthIn;
        return true;}
}

bool Rectangle::setLength(double lengthIn){
    if (lengthIn <= 0) return false;
    else {
        length = lengthIn;
        return true;}
}

// getter functions below
double Rectangle::getWidth(){
    return width;
}

double Rectangle::getLength(){
    return length;
}

// calculates and returns the area of a rectangle
// using the values of the in-class variables
double Rectangle::calcArea(){
    return (width * length);
}