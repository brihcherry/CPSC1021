//
// contains definitions for the Employee class.
//

#include "Employee.h"
#include "globals.h"
#include <string>
#include <iostream>

using namespace std;

Employee::Employee()
{
    NAME    = "Name";
    EMAIL   = "me@email.com";
    ADDRESS = "address";
    DEPT = "Department";
    IF_VET  = false;
}

Employee::Employee(string dept, bool if_vet)
{
    NAME    = NAME_G;
    EMAIL   = EMAIL_G;
    ADDRESS = ADDRESS_G;
    DEPT    = dept;
    IF_VET  = if_vet;
}

void Employee::setName() {NAME = NAME_G;}

void Employee::setEmail() {EMAIL = EMAIL_G;}

void Employee::setAddress() {ADDRESS = ADDRESS_G;}

void Employee::setDept(string dept) {DEPT = dept;}

void Employee::setVeteran(bool if_vet) {IF_VET = if_vet;}


string Employee::getName() const {return NAME;}

string Employee::getEmail() const {return EMAIL;}

string Employee::getAddress() const {return ADDRESS;}

string Employee::getDept() const {return DEPT;}

string Employee::getVeteran() const 
{
    if (IF_VET) {return "Yes";}
    else {return "No";} 
}