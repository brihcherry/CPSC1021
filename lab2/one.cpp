/*  Group 23: Brianna Cherry, Matthew Phillips, George Dean, Townsend McDonald
    Lab 2: 

*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool validateUserInput(double);
double calcTotalCharges(double, double);
double calcTotalCharges(double, double, double, double);

bool validateUserInput(double number){
    if (number >= 0){return true;}
    else {return false;}
}

double calcTotalCharges(double hospital, double medicine){
    return hospital + medicine;
}

double calcTotalCharges(double days, double dailyRoomRate, double hospital, double medicine){
    double total;
    total = (days * dailyRoomRate) + hospital + medicine;
    return total;
}


int main(){

    char patientType;
    double days, dailyRoomRate, hospitalCharges, medCharges, totalCharges; 
    bool valid = false;

    cout << "This program will calculate a patient's hospital charges." << endl;
    cout << "Enter I for in-patient or O for out-patient: ";
    cin >> patientType;

    while (valid == false){
        if (patientType == 'I'){
            cout << "Number of days spent at the hospital: "; 
            cin >> days;
                while (!validateUserInput(days))
                    {cout << "Enter a valid amount: "; cin >> days;}
            cout << "Daily room rate ($): "; 
            cin >> dailyRoomRate;
                while (!validateUserInput(dailyRoomRate))
                    {cout << "Enter a valid amount: "; cin >> dailyRoomRate;}
            cout << "Lab fees and other service charges ($): "; cin >> hospitalCharges;
                while (!validateUserInput(hospitalCharges))
                    {cout << "Enter a valid amount: "; cin >> hospitalCharges;}
            cout << "Medication charges ($): "; cin >> medCharges;
                while (!validateUserInput(medCharges))
                    {cout << "Enter a valid amount: "; cin >> medCharges;}
            totalCharges = calcTotalCharges(days, dailyRoomRate, hospitalCharges, medCharges);
            cout << "Your total hospital bills is $" << totalCharges << endl;
            valid = true;    
        }

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

        else {
            cout << "Invalid input. Enter I for in-patient or O for out-patient: ";
            cin >> patientType;
        }
    }


    return 0;
}