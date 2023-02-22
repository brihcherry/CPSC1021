
#include "Truck.h"
#include "globals.h"
#include <string>
#include <iostream>
using namespace std;

Truck::Truck()
{
    MAKE     = "Make";
    MODEL    = "Model";
    YEAR     = 2000;
    PLATE    = "Plate";
    HITCH    = true;
    CLASSIC  = false;
}

Truck::Truck(string plate, bool classic, bool hitch)
{
    MAKE     = MAKE_G;
    MODEL    = MODEL_G;
    YEAR     = YEAR_G;
    PLATE    = plate;
    HITCH    = hitch;
    CLASSIC  = classic;
}
        
void Truck::setMake() {MAKE = MAKE_G;}

void Truck::setModel() {MODEL = MODEL_G;}

void Truck::setYear() {YEAR = YEAR_G;}

void Truck::setPlate(string plate) {PLATE = plate;}

void Truck::setHitch(bool hitch) {HITCH = hitch;}

void Truck::setClassic(bool classic) {CLASSIC = classic;}



string Truck::getMake() const {return MAKE;}

string Truck::getModel() const {return MODEL;}

int Truck::getYear() const {return YEAR;}

string Truck::getPlate() const {return PLATE;}

string Truck::getHitch() const
{
    if (HITCH) {return "Yes";}
    else {return "No";}
}

string Truck::getClassic() const
{
    if (CLASSIC) {return "Yes";}
    else {return "No";}
}