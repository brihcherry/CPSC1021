//
// contains definitions of the global variables, which are shared
// by all users regardless of their input, and which must be accessible
// by every single class.
//
// It was easier and cleaner to use globals like this than it was to 
// create super long constructors with 5, 6, 7, etc arguments
//

#include "globals.h"

#include <string>
using namespace std;


string MAKE_G    = "Make";
string MODEL_G   = "Model";
string NAME_G    = "Name";
string EMAIL_G   = "email@gmail.com";
string ADDRESS_G = "1234 Address blvd"; 
int    YEAR_G    = 2021;

