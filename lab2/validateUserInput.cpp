// Names: Brianna Cherry, George Dean, Matthew Phillips, Townsend McDonald
// Date: 1/30/23
// Lab: Lab 2
// Description: This file contains the function that makes sure no inputs are invalid or negative
// Time: 1 hour

#include "validateUserInput.h"

bool validateUserInput(double number){
    if (number >= 0){return true;}
    else {return false;}
}