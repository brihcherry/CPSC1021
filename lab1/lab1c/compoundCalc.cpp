#include <iostream>
#include <cmath>
#include "compoundCalc.h"

using namespace std;

double compoundCalc(double P, double r, double t){

    double savings;

    savings = P * pow((1+r), t);

    return savings;
}