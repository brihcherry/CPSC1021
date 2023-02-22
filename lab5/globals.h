// 
// contains declarations for the global variables
// easier to make the common variables global than it is
// to keep passing them into class constructers, setters, etc 
// over and over again. These need to be accessible by every single file in the program
//

#ifndef _GLOBALS_
#define _GLOBALS_

#include <string>
using namespace std;

extern string MAKE_G, MODEL_G, NAME_G, EMAIL_G, ADDRESS_G; 
extern int YEAR_G;

#endif