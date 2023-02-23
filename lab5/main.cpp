/*
BRIANNA CHERRY
CPSC1020 section1
lab 5: parking passes

This file contains the driver code (client program?) that drives the rest of the program. it
takes user input, creates necessary objects, stores the input, and calls other functions to 
calculate the price of the pass and print an invoice to the user.

*/

#include <iostream>
#include <iomanip>
#include <string>

#include "Car.h"
#include "Motorcycle.h"
#include "Scooter.h"
#include "Truck.h"
#include "Student.h"
#include "Employee.h"
#include "Construction.h"
#include "Visitor.h"
#include "Invoice.h"
#include "globals.h"

using namespace std;



int main(){

    int person  = 0, 
        vehicle = 0;
    
    Student myStudent;
    Visitor myVisitor;
    Employee myEmployee;
    Construction myConstruction;
    Car myCar;
    Truck myTruck;
    Scooter myScooter;
    Motorcycle myMotorcycle;

    cout << "What kind of parking pass do you need?" << endl
         << "1 - Student" << endl
         << "2 - Employee" << endl
         << "3 - Construction" << endl
         << "4 - Visitor" << endl
         << "Enter your choice: ";
    cin >> person;

    while (person < 1 || person > 4)
        {cout << "Invalid choice. Please enter 1-4: "; cin >> person;}

    cout << "Please enter the following information: " << endl;
    cout << "Name: "; cin.ignore(); getline(cin, NAME_G);
    cout << "Address: "; getline(cin, ADDRESS_G);
    cout << "Email: "; getline(cin, EMAIL_G);

    if (person == 1) // the user is a student
    {
        string major, state;
        bool if_employee;

        cout << "Major: "; getline(cin, major);
        myStudent.setMajor(major);
        cout << "What state are you from? "; getline(cin, state);
        myStudent.setState(state);
        cout << "Are you employed by the university? (1 for yes, 0 for no): ";
        cin >> if_employee; 
        myStudent.setEmployee(if_employee);

    }

    else if (person == 2) // the user is a employee
    {
        string dept;
        bool if_vet;

        cout << "What department do you work in? "; getline(cin, dept);
        myEmployee.setDept(dept);
        cout << "Are you a veteran? (1 for yes, 0 for no): "; cin >> if_vet;
        myEmployee.setVeteran(if_vet);
        
    }

    else if (person == 3) // the user is a construction worker
    {
        string company;
        bool if_vet;

        cout << "What company do you work for? "; getline(cin, company);
        myConstruction.setCompany(company);
        cout << "Are you a veteran? (1 for yes, 0 for no): "; cin >> if_vet;
        myConstruction.setVeteran(if_vet);
 
    }

    else // the user is a visitor
    {
        bool speaker, hs;

        cout << "Are you here to speak to a class or present research?" << endl 
             << "(1 for yes and 0 for no):  "; cin >> speaker;
        myVisitor.setSpeaker(speaker);

        cout << "Are you a high schooler visitng for a campus tour?" << endl
             << "(1 for yes and 0 for no):  "; cin >> hs;
        myVisitor.setHS(hs);
      
    }


    cout << "What kind of vehicle do you need to park?" << endl
         << "1 - Car" << endl
         << "2 - Motorcycle" << endl
         << "3 - Truck" << endl
         << "4 - Scooter" << endl
         << "Enter your choice: " ;
         cin >> vehicle;

    while (vehicle < 1 || vehicle > 4)
        {cout << "Invalid choice. Please enter 1-4: "; cin >> vehicle;}

    cout << "Please enter the following information about your vehicle:" << endl;
    cout << "Make: "; cin.ignore(); getline(cin, MAKE_G);
    cout << "Model: "; getline(cin, MODEL_G);
    cout << "Year: "; cin >> YEAR_G;

    if (vehicle == 1) // car
    {
        string plate;
        bool if_classic, low_emission;

        cout << "License plate: "; cin >> plate;
        myCar.setPlate(plate);
        cout << "Is it a classic vehicle? (1 for yes, 0 for no): "; cin >> if_classic;
        myCar.setClassic(if_classic);
        cout << "Low emission? (1 for yes and 0 for no):  "; cin >> low_emission;
        myCar.setEmission(low_emission);

    }

    else if (vehicle == 2) // motorcycle
    {
        string color;
        bool if_moped;

        cout << "Color: "; getline(cin, color); cin.ignore();
        myMotorcycle.setColor(color);
        cout << "Moped? (1 for yes, 0 for no): "; cin >> if_moped;
        myMotorcycle.setMoped(if_moped);

    }

    else if (vehicle == 3) // truck
    {
        string plate;
        bool if_classic, if_hitch;

        cout << "License plate: "; cin >> plate;
        myTruck.setPlate(plate);
        cout << "Is it a classic vehicle? (1 for yes, 0 for no): "; cin >> if_classic;
        myTruck.setClassic(if_classic);
        cout << "Does it have a hitch? (1 for yes, 0 for no): "; cin >> if_hitch;
        myTruck.setHitch(if_hitch);

    }

    else // scooter
    {
        string color;
        int wheels;

        cout << "Color: "; cin >> color;
        myScooter.setColor(color);
        cout << "Number of wheels: "; cin >> wheels;
        myScooter.setWheels(wheels);

    }

    Invoice myInvoice(person, vehicle);

    cout << "\n";

    myInvoice.invoicePrinter(myCar, myMotorcycle, myTruck, myScooter, myStudent, 
                            myVisitor, myEmployee, myConstruction);

    cout << "Price of parking pass: $" << fixed << setprecision(2)
    << myInvoice.priceFinder(myCar, myMotorcycle, myTruck, myScooter, myStudent, 
                            myVisitor, myEmployee, myConstruction)
    << endl;


    return 0;
}
