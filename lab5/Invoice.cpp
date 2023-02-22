
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

#include <iostream>
#include <string>

using namespace std;


Invoice::Invoice(int person, int vehicle)
{
    PRICE = 25;
    PERSON_TYPE = person;
    VEHICLE_TYPE = vehicle;
}

Invoice::Invoice()
{
    PRICE = 25;
    PERSON_TYPE = 1;
    VEHICLE_TYPE = 1;
}

void Invoice::generalPersonPrinter(const Student& student, const Visitor& visitor, 
                    const Employee& employee, const Construction& construction) // will print name, email, address, state--things that apply to everyone
{
    cout << "Name: " << NAME_G << endl;
    cout << "Email: " << EMAIL_G << endl;
    cout << "Address: " << ADDRESS_G << endl;
} 

void Invoice::studentPrinter(const Student& student) const // print attributes unique to students
{
    cout << "Major: " << student.getMajor() << endl;
    cout << "Home state: " << student.getState() << endl;
    cout << "Employed by university: " << student.getEmployee() << endl;
}

void Invoice::employeePrinter(const Employee& employee) const // print attributes unique to employees
{
    cout << "Department: " << employee.getDept() << endl;
    cout << "Veteran: " << employee.getVeteran() << endl;
}

void Invoice::constructionPrinter(const Construction& construction) const // print attributes unique to construction workers
{
    cout << "Company: " << construction.getCompany() << endl;
    cout << "Veteran: " << construction.getVeteran() << endl;
}

void Invoice::visitorPrinter(const Visitor& visitor) const // print attributes unique to visitors
{
    cout << "Speaker: " << visitor.getSpeaker() << endl;
    cout << "High Schooler: " << visitor.getHS() << endl;
}

void Invoice::generalVehiclePrinter(const Car& car, const Motorcycle& motorcycle, 
                            const Truck& truck, const Scooter& scooter)  // print attributes shared by all vehicles
{
    cout << "Make: " << MAKE_G << endl;
    cout << "Model: " << MODEL_G << endl;
    cout << "Year: " << YEAR_G << endl;
}

void Invoice::carPrinter(const Car& car) const // print attributes unique to cars
{
    cout << "License Plate: " << car.getPlate() << endl;
    cout << "Classic: " << car.getClassic() << endl;
    cout << "Low Emission: " << car.getEmission() << endl;
}

void Invoice::truckPrinter(const Truck& truck) const // print attributes unique to trucks
{
    cout << "License Plate: " << truck.getPlate() << endl;
    cout << "Classic: " << truck.getClassic() << endl;
    cout << "Hitch: " << truck.getHitch() << endl;
}

void Invoice::scooterPrinter(const Scooter& scooter) const // print attributes unique to scooters
{
    cout << "Color: " << scooter.getColor() << endl;
    cout << "Number of wheels: " << scooter.getWheels() << endl;
}

void Invoice::motorcyclePrinter(const Motorcycle& motorcycle) const // print attributes unique to motorcycles
{
    cout << "Color: " << motorcycle.getColor() << endl;
    cout << "Moped: " << motorcycle.getMoped() << endl;
}

void Invoice::invoicePrinter(const Car& car, const Motorcycle& motorcycle, 
                            const Truck& truck, const Scooter& scooter, const Student& student, 
                            const Visitor& visitor, const Employee& employee, const Construction& construction)  // a "driver" code, in a way, that will call other printers
{
    generalPersonPrinter(student, visitor, employee, construction);
    if (PERSON_TYPE == 1) {studentPrinter(student);}
    if (PERSON_TYPE == 2) {employeePrinter(employee);}
    if (PERSON_TYPE == 3) {constructionPrinter(construction);}
    if (PERSON_TYPE == 4) {visitorPrinter(visitor);}

    generalVehiclePrinter(car, motorcycle, truck, scooter);
    if (VEHICLE_TYPE == 1) {carPrinter(car);}
    if (VEHICLE_TYPE == 2) {motorcyclePrinter(motorcycle);}
    if (VEHICLE_TYPE == 3) {truckPrinter(truck);}
    if (VEHICLE_TYPE == 4) {scooterPrinter(scooter);}

}


double Invoice::priceFinder(const Car& car, const Motorcycle& motorcycle, 
                            const Truck& truck, const Scooter& scooter, const Student& student, 
                            const Visitor& visitor, const Employee& employee, const Construction& construction)
// will call necessary getters from necessary classes to determine final price of the parking permit
{

    if (PERSON_TYPE == 1) //student
        {
            PRICE = 50;
            if (student.getState() == "Nevada" || student.getState() == "nevada" 
                || student.getState() == "NV")
                {PRICE -= 15;}
            if (student.getMajor() == "Physics" || student.getState() == "physics" 
                || student.getState() == "PHYS")
                {PRICE -= 15;}
        }
    if (PERSON_TYPE == 2) //employee
        {
            PRICE = 50;
            if (employee.getVeteran() == "Yes") {PRICE -= 30;}
        }
    if (PERSON_TYPE == 3) // construction
        {
            PRICE = 0.0;
        }
    if (PERSON_TYPE == 4)   // visitor
        {
            PRICE = 15;
            if (visitor.getSpeaker() == "Yes") {PRICE = 0;}
        }

    if (VEHICLE_TYPE == 1) // car
        {}
    if (VEHICLE_TYPE == 2) //motorcycle
        {}
    if (VEHICLE_TYPE == 3) //truck
        {}
    if (VEHICLE_TYPE == 4)// scooter
        {
            PRICE += 10000; // charge for having a scooter
        }

    if (PRICE < 0) {PRICE = 0;}

    return PRICE;
}