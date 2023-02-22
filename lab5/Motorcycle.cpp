
#include "Motorcycle.h"
#include "globals.h"
#include <string>
#include <iostream>
using namespace std;


Motorcycle::Motorcycle()
{
    MAKE     = "Make";
    MODEL    = "Model";
    YEAR     = 2000;
    COLOR    = "Color";
    IF_MOPED = false;
}

Motorcycle::Motorcycle(string color, bool if_moped)
{
    MAKE     = MAKE_G;
    MODEL    = MODEL_G;
    YEAR     = YEAR_G;
    COLOR    = color;
    IF_MOPED = if_moped;
}

void Motorcycle::setMake(){MAKE = MAKE_G;}

void Motorcycle::setModel() {MODEL = MODEL_G;}

void Motorcycle::setYear() {YEAR = YEAR_G;}

void Motorcycle::setColor(string color) {COLOR = color;}

void Motorcycle::setMoped(bool if_moped) {IF_MOPED = if_moped;}


string Motorcycle::getMake() const {return MAKE;}

string Motorcycle::getModel() const {return MODEL;}

int Motorcycle::getYear() const {return YEAR;}

string Motorcycle::getColor() const {return COLOR;}

string Motorcycle::getMoped() const 
{
    if (IF_MOPED) {return "Yes";}
    else {return "No";}
}
