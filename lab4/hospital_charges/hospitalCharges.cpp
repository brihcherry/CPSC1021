// 
// Name: B------ C-----
// Date: 2/10/23
// cpsc1021; Lab 4
// 
// Description: contains the main function for the program. it will take user 
// input about the type of patient (in or out), and then use that input to
// determine what else should be input by the user for the hospital charge
// to be calculated. it utilizes the Patient class to store information, perform
// data validation, and call the calcTotalCharges function.
//

#include "Patient.h"

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    // create variables to store patient type, days, and various charges
    char pT;
    double totalCharges;
    
    // get user input for patient type
    cout << "This program will calculate a patient's hospital charges." << endl;
    cout << "Enter I for in-patient or O for out-patient: ";
    cin >> pT;

    // if inpatient, ask for necessary information. 
    if (pT == 'I'){
        int days;
        double rate, services, medication; 
        
        cout << "Number of days spent at the hospital: "; cin >> days;

        cout << "Daily room rate ($): "; cin >> rate;

        cout << "Lab fees and other service charges ($): "; 
        cin >> services;

        cout << "Medication charges ($): "; cin >> medication;
        
        Patient patient(days, rate, services, medication, pT);
    }

    // if outpatient, ask for necessary information. 
    else if (pT == 'O'){
        double services, medication;
        
        cout << "Lab fees and other service charges ($): "; cin >> services;
        
        cout << "Medication charges ($): "; cin >> medication;

        Patient patient(pT, services, medication);
    }

    // display total charges to the console.
    cout << "Your total hospital bill is $" << fixed << setprecision(2) 
            << patient.calcTotalCharges()
            << endl;


    return 0;
}
