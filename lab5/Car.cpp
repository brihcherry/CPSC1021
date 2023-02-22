//
// contains definitions for the Car class.
//

#include "Car.h"
#include "globals.h"
#include <string>
#include <iostream>
using namespace std;

Car::Car()
{
    MAKE         = "Volkswagen";
    MODEL        = "Passat";
    YEAR         = 2002;
    PLATE        = "LT00000";
    CLASSIC      = false;
    LOW_EMISSION = false; 
}

Car::Car(string plate_no, bool classic, bool low_emission)
{
    setMake();
    setModel();
    setYear();
    setPlate(plate_no);
    setEmission(low_emission); 
}
        
string Car::getMake() const{return MAKE;}

string Car::getModel() const {return MODEL;}

int Car::getYear() const {return YEAR;}

string Car::getPlate() const {return PLATE;}

string Car::getClassic() const 
{
    if (CLASSIC) {return "Yes";}
    else {return "No";}
}

string Car::getEmission() const
{
    if (LOW_EMISSION) {return "Yes";}
    else {return "No";}
}

void Car::setMake() {MAKE = MAKE_G;}
void Car::setModel() {MODEL = MODEL_G;}
void Car::setYear() {YEAR = YEAR_G;}
void Car::setPlate(string plate) {PLATE = plate;}
void Car::setClassic(bool classic) {CLASSIC = classic;}
void Car::setEmission(bool low_emission) {LOW_EMISSION = low_emission;}