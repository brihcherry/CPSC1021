// Names: B------ C-----
// Date: 1/30/23
// cpsc1021; Lab 2
// Description: contains the main function for the program. it will take user 
// input about the type of patient (in or out), and then use that input to
// determine what else should be input by the user for the hospital charge
// to be calculated. 

#include "calcTotalCharges.h"
#include "validateUserInput.h"

#include <iostream>

using namespace std;

int main(){

    // create variables to store patient type, days, and various charges
    char patientType;
    double days, dailyRoomRate, hospitalCharges, medCharges, totalCharges; 

    // the variable below will store whether a valid input for patient type 
    // has been entered.
    bool valid = false;

    // get user input for patient type
    cout << "This program will calculate a patient's hospital charges." << endl;
    cout << "Enter I for in-patient or O for out-patient: ";
    cin >> patientType;

    // while loop will run until a valid patient type (I or O) has been entered
    while (valid == false){

        // if inpatient, ask for necessary information. After each input, 
        // call the validateUserInput function to make sure a valid amount
        // has been entered. If one has not been entered, ask the user
        // for a new value until a valid number has been entered. 
        // Finally, change the value of valid to TRUE so that
        // the loop does not repeat.
        if (patientType == 'I'){
            cout << "Number of days spent at the hospital: "; cin >> days;
                while (!validateUserInput(days))
                    {cout << "Enter a valid amount: "; cin >> days;}

            cout << "Daily room rate ($): "; cin >> dailyRoomRate;
                while (!validateUserInput(dailyRoomRate))
                    {cout << "Enter a valid amount: "; cin >> dailyRoomRate;}

            cout << "Lab fees and other service charges ($): "; 
            cin >> hospitalCharges;
                while (!validateUserInput(hospitalCharges)){
                    cout << "Enter a valid amount: "; 
                    cin >> hospitalCharges;}

            cout << "Medication charges ($): "; cin >> medCharges;
                while (!validateUserInput(medCharges))
                    {cout << "Enter a valid amount: "; cin >> medCharges;}

            totalCharges 
                = calcTotalCharges(days, dailyRoomRate, hospitalCharges, medCharges);

            cout << "Your total hospital bills is $" << totalCharges << endl;

            valid = true;    
        }

        // if outpatient, ask for necessary information. After each input, 
        // call the validateUserInput function to make sure a valid amount
        // has been entered. If one has not been entered, ask the user
        // for a new value until a valid number has been entered. 
        // Finally, change the value of valid to TRUE so that
        // the loop does not repeat.
        else if (patientType == 'O'){
            cout << "Lab fees and other service charges ($): "; cin >> hospitalCharges;
                while (!validateUserInput(hospitalCharges))
                    {cout << "Enter a valid amount: "; cin >> hospitalCharges;}
            cout << "Medication charges ($): "; cin >> medCharges;
                while (!validateUserInput(medCharges))
                    {cout << "Enter a valid amount: "; cin >> medCharges;}
            totalCharges = calcTotalCharges(hospitalCharges, medCharges);
            cout << "Your total hospital bills is $" << totalCharges << endl;
            valid = true;
        }

        // if neither I nor O has been entered, prompt the user to re-enter a patient
        // type. value of valid does not change.
        else {
            cout << "Invalid input. Enter I for in-patient or O for out-patient: ";
            cin >> patientType;
        }
    }


    return 0;
}
