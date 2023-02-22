//
// contains definitions for the Scooter class.
//

#include "Scooter.h"
#include "globals.h"
#include <string>
#include <iostream>
using namespace std;

Scooter::Scooter()
{
    MAKE     = "Make";
    MODEL    = "Model";
    YEAR     = 2000;
    COLOR    = "Color";
    WHEELS   = 2;
}

Scooter::Scooter(string color, int wheels)
{
    MAKE     = MAKE_G;
    MODEL    = MODEL_G;
    YEAR     = YEAR_G;
    COLOR    = color;
    WHEELS   = wheels;
}

void Scooter::setMake( ) {MAKE = MAKE_G;}

void Scooter::setModel( ) {MODEL = MODEL_G;}

void Scooter::setYear( ) {YEAR = YEAR_G;}

void Scooter::setColor(string color) {COLOR = color;}

void Scooter::setWheels(int wheels) {WHEELS = wheels;}


string Scooter::getMake() const {return MAKE;}

string Scooter::getModel() const {return MODEL;}

int Scooter::getYear() const {return YEAR;}

string Scooter::getColor() const {return COLOR;}

int Scooter::getWheels() const {return WHEELS;}