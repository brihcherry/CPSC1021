
#include "Trapezoid.h"
#include <cmath>


bool Trapezoid::setBase1(double b1){
    if (b1 <= 0) return false;
    else {
        base1 = b1;
        return true;}
}

bool Trapezoid::setBase2(double b2){
    if (b2 <= 0) return false;
    else {
        base2 = b2;
        return true;}
}

bool Trapezoid::setHeight(double h){
    if (h <= 0) return false;
    else {
        height = h;
        return true;}
}

double Trapezoid::getBase1(){
    return base1;
}

double Trapezoid::getHeight(){
    return height;
}

double Trapezoid::getBase2(){
    return base2;
}

double Trapezoid::calcArea(){
    return ((base1 + base2) * height / 2);
}