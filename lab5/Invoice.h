
#ifndef _INVOICE_
#define _INVOICE_

#include <string>
using namespace std;

class Invoice
{
    private:
        double PRICE;
        int PERSON_TYPE, VEHICLE_TYPE;

        void generalPersonPrinter(const Student& student, const Visitor& visitor, 
                    const Employee& employee, const Construction& construction); // will print name, email, address, state-- 
                                                                                   // things that apply to everyone
        void studentPrinter(const Student& student) const; // print attributes unique to students
        void employeePrinter(const Employee& employee) const; // print attributes unique to employees
        void constructionPrinter(const Construction& construction) const; // print attributes unique to construction workers
        void visitorPrinter(const Visitor& vistor) const; // print attributes unique to visitors

        void generalVehiclePrinter(const Car& car, const Motorcycle& motorcycle, 
                            const Truck& truck, const Scooter& scooter);  // print attributes shared by all vehicles

        void carPrinter(const Car& car) const; // print attributes unique to cars
        void truckPrinter(const Truck& truck) const; // print attributes unique to trucks
        void scooterPrinter(const Scooter& scooter) const; // print attributes unique to scooters
        void motorcyclePrinter(const Motorcycle& motorcycle) const; // print attributes unique to motorcycles

    public:
        Invoice();
        Invoice(int person, int vehicle);

        void invoicePrinter(const Car& car, const Motorcycle& motorcycle, 
                            const Truck& truck, const Scooter& scooter, const Student& student, 
                            const Visitor& visitor, const Employee& employee, const Construction& construction);  
        // a "driver" code, in a way, that will call other printers

        double priceFinder(const Car& car, const Motorcycle& motorcycle, 
                            const Truck& truck, const Scooter& scooter, const Student& student, 
                            const Visitor& visitor, const Employee& employee, const Construction& construction);
        // will call necessary getters from necessary classes to determine final price
        // of the parking permit


};

#endif
