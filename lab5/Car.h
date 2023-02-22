// 
// contains declarations for the Car class.
//

#ifndef _CAR_
#define _CAR_

#include <string>
using namespace std;

class Car{
    
    private:
        string MAKE, MODEL, PLATE;
        int YEAR;
        bool CLASSIC, LOW_EMISSION; // is the car classic? is low-emission?

    public:
        Car();
        Car(string plate_no, bool classic, bool low_emission);
        
        // getters must be const so that they can be called by the printers
        // in invoice, which take the class objects as constant references
        string getMake() const;
        string getModel() const;
        int getYear() const;
        string getPlate() const;
        string getClassic() const;
        string getEmission() const;

        void setMake();
        void setModel();
        void setYear();
        void setPlate(string plate);
        void setClassic(bool classic);
        void setEmission(bool low_emission);

};


#endif