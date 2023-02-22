
#include "Student.h"
#include "globals.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student()
{
    NAME = "Silly Goose";
    EMAIL = "sillygoose@clemson.edu";
    ADDRESS = "1234 Silly Goose Ln";
    MAJOR = "General silliness studies";
    STATE = "Ohio";
    EMPLOYEE = false;
}

Student::Student(string major, string state, bool if_employee)
{
    NAME = NAME_G;
    EMAIL = EMAIL_G;
    ADDRESS = ADDRESS_G;
    MAJOR = major;
    STATE = state;
    EMPLOYEE = false;
}

void Student::setName() {NAME = NAME_G;}

void Student::setEmail() {EMAIL = EMAIL_G;}

void Student::setAddress() {ADDRESS = ADDRESS_G;}

void Student::setMajor(string major) {MAJOR = major;}

void Student::setState(string state) {STATE = state;}

void Student::setEmployee(bool if_employee) {EMPLOYEE = if_employee;}

string Student::getName() const {return NAME;}

string Student::getEmail() const {return EMAIL;}

string Student::getAddress() const {return ADDRESS;}

string Student::getMajor() const {return MAJOR;}

string Student::getState() const {return STATE;}

string Student::getEmployee()  const
{
    if (EMPLOYEE) {return "Yes";}
    else {return "No";} 
}

