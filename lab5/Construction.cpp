//
// contains definitions for the Construction class.
//

#include "Construction.h"
#include "globals.h"
#include <string>
#include <iostream>

using namespace std;

Construction::Construction()
{
    NAME    = "Name";
    EMAIL   = "me@email.com";
    ADDRESS = "address";
    COMPANY = "Company";
    IF_VET  = false;
}
Construction::Construction(string company, bool if_vet)
{
    NAME    = NAME_G;
    EMAIL   = EMAIL_G;
    ADDRESS = ADDRESS_G;
    COMPANY = company;
    IF_VET  = if_vet;
}

void Construction::setName() {NAME = NAME_G;}

void Construction::setEmail() {EMAIL = EMAIL_G;}

void Construction::setAddress() {ADDRESS = ADDRESS_G;}

void Construction::setCompany(string company) {COMPANY = company;}

void Construction::setVeteran(bool if_vet) {IF_VET = if_vet;}


string Construction::getName() const {return NAME;}

string Construction::getEmail() const {return EMAIL;}

string Construction::getAddress() const {return ADDRESS;}

string Construction::getCompany() const {return COMPANY;}

string Construction::getVeteran() const 
{
    if (IF_VET) {return "Yes";}
    else {return "No";} 
}