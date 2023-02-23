// 
// contains declarations for the Visitor class.
//

#ifndef _INVOICE_
#define _INVOICE_

#include <string>
using namespace std;

class Invoice
{
    private:
        double PRICE;
        int PERSON_TYPE, VEHICLE_TYPE;
        // not making the class objects attributes because i don't want to have them saved
        // in both Invoice and main. class objects are passed by reference directly into the 
        // functions that need them.
    
        void generalPersonPrinter(); 
        // will print attributes shared by all people; no arguments because it accesses the global vars
    
        void studentPrinter(const Student& student) const; // print attributes unique to students
        void employeePrinter(const Employee& employee) const; // print attributes unique to employees
        void constructionPrinter(const Construction& construction) const; // print attributes unique to construction 
        void visitorPrinter(const Visitor& vistor) const; // print attributes unique to visitors

        void generalVehiclePrinter();  
        // print attributes shared by all vehicles; no arguments because it accesses the global vars
    
        void carPrinter(const Car& car) const; // print attributes unique to cars
        void truckPrinter(const Truck& truck) const; // print attributes unique to trucks
        void scooterPrinter(const Scooter& scooter) const; // print attributes unique to scooters
        void motorcyclePrinter(const Motorcycle& motorcycle) const; // print attributes unique to motorcycles

    public:
        Invoice();
        Invoice(int person, int vehicle);

        void invoicePrinter(const Car& car, const Motorcycle& motorcycle, 
                            const Truck& truck, const Scooter& scooter, 
                            const Student& student, const Visitor& visitor, 
                            const Employee& employee, const Construction& construction);  
        // a "driver" code, in a way, that will call other printers
        // i'm passing class objects into these functions, rather than the constructor, so that
        // i can pass by const reference without having to save the constructors anywhere. 
        // invoicePrinter passes objects into more functions that print information

        double priceFinder(const Car& car, const Motorcycle& motorcycle, 
                           const Truck& truck, const Scooter& scooter, 
                           const Student& student, const Visitor& visitor, 
                           const Employee& employee, const Construction& construction);
        // will call necessary getters from necessary classes to determine final price
        // of the parking permit


};

#endif
