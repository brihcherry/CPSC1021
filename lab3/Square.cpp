#include "Square.h"
#include <cmath>

Square::Square(){
    side = 1;
}

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