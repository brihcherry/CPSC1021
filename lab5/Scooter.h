// 
// contains declarations for the Scooter class.
//

#ifndef _SCOOTER_
#define _SCOOTER_

#include <string>
using namespace std;

class Scooter{
    private:
        string MAKE, MODEL, COLOR;
        int YEAR;
        int WHEELS; // how many wheels does it have

    public:
        Scooter();
        Scooter(string color, int wheels);

        void setMake( );
        void setModel( );
        void setYear( );
        void setColor(string color);
        void setWheels(int wheels);

        // getters must be const so that they can be called by the printers
        // in invoice, which take the class objects as constant references
        string getMake() const;
        string getModel() const;
        int getYear() const;
        string getColor() const;
        int getWheels() const;

};


#endif