// this program will calculate retirement savings based on some input
// from the user.
// Brianna Cherry

#include <iostream>
#include <iomanip>
#include "compoundCalc.h"

using namespace std;

int main(){

    double P, // principal/ present value
           r, // interest rate
           t, // number of years in account
           savings; // retirement savings after t years

    // statements to get values from user:
    cout << "Enter the principal value: ";
    cin >> P;
    cout << "Enter the interest rate: ";
    cin >> r;
    cout << "Enter the number of years: ";
    cin >> t;

    // calling function to calculate total savings
    savings = compoundCalc(P, r, t);

    cout << "Your retirement savings will be ";
    cout << "$" << fixed << setprecision(2) << savings << endl;

    return 0;
}