
#include "Visitor.h"
#include "globals.h"

#include <string>
using namespace std;

Visitor::Visitor()
{
    NAME    = "Name";
    EMAIL   = "me@email.com";
    ADDRESS = "address";
    SPEAKER = true;
    HS  = false;
}

Visitor::Visitor(bool speaker, bool hs)
{
    NAME    = NAME_G;
    EMAIL   = EMAIL_G;
    ADDRESS = ADDRESS_G;
    SPEAKER = true;
    HS      = false;
}

void Visitor::setName() {NAME = NAME_G;}

void Visitor::setEmail() {EMAIL = EMAIL_G;}

void Visitor::setAddress() {ADDRESS = ADDRESS_G;}

void Visitor::setSpeaker(bool speaker) {SPEAKER = speaker;}

void Visitor::setHS(bool hs) {HS = hs;}


string Visitor::getName() const {return NAME;}

string Visitor::getEmail() const {return EMAIL;}

string Visitor::getAddress() const {return ADDRESS;}

string Visitor::getSpeaker() const 
{
    if (SPEAKER) {return "Yes";}
    else {return "No";} 
}

string Visitor::getHS() const
{
    if (HS) {return "Yes";}
    else {return "No";} 
}