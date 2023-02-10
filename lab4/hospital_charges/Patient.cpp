// 
// this file contains the function definitions for the Patient class.
// it contains two different constructors-- a default and one to take input--
// setters for each variable, getters for each variable, a validateInput 
// function for each data type, and the calcTotalCharges funcion that will
// return the total hospital charges.
// 

#include "Patient.h"
#include <iostream>
using namespace std;

// default constructor sets each numerical value to 0 and patientType to I
Patient::Patient()
{
    days = 0;
    rate = services = medication = 0.0;
    patientType = 'I';
}

// user input constructor calls setters to set values. it does not need
// to check the value of the setter because for this program, the setters
// preform internal data validation using the validateInput function AND
// set the value themselves.
Patient::Patient(int d, double r, double s, double m, char pT)
{
    setDays(d);
    setRate(r);
    setServices(s);
    setMedication(m);
    setPatientType(pT);
}


// setters below call the validateInput function; set the value to input if
// it was valid, and sets to default if not.
void Patient::setDays (int d) 
{
    if (validateInput(d)) days = d;
    else days = 0;
}

void Patient::setRate (double r)
{
    if (validateInput(r)) rate = r;
    else rate = 0.0;
}

void Patient::setServices (double s)
{
    if (validateInput(s)) services = s;
    else services = 0.0;
}

void Patient::setMedication (double m)
{
    if (validateInput(m)) medication = m;
    else medication = 0.0;
}

void Patient::setPatientType (char pT)
{
    if (validateInput(pT)) patientType = pT;
    else patientType = 'I';
}

// 
// getters below
//
int Patient::getDays () {return days;}

double Patient::getRate () {return rate;}

double Patient::getServices () {return services;}

double Patient::getMedication () {return medication;}

char Patient::getPatientType () {return patientType;}

// validateInput functions below. this function is overloaded
// to take int, double, and char variable types for each setter.
bool Patient::validateInput(int input)
{
    if (input >= 0) return true;
    else return false;
}

bool Patient::validateInput(double input)
{
    if (input >= 0) return true;
    else return false;
}

bool Patient::validateInput(char input)
{
    if (input == 'I' || input == 'O') return true;
    else return false;
}

// calcTotalCharges returns the total hospital charges using the 
// variable values stored in the class object. We do not need overloaded
// functions to take different inputs for inpatient vs outpatient because
// days and rate will automatically be set to zero if outpatient is chosen.
double Patient::calcTotalCharges() 
    {return ((days * rate) + services + medication);}
