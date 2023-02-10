#include "Square.h"
#include <cmath>


bool Square::setSide(double s){
    if (s <= 0) return false;
    else {
        side = s;
        return true;}
}

double Square::getSide(){
    return side;
}

double Square::calcArea(){
    return (pow(side, 2));
}