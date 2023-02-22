// 
// contains declarations for the Truck class.
//

#ifndef _EQUIPMENT_
#define _EQUIPMENT_

#include <string>
using namespace std;

class Truck{
    private:
        string MAKE, MODEL, PLATE;
        int YEAR;
        bool CLASSIC, HITCH; // is it a classic vehicle, does it have a hitch

    public:

        Truck();
        Truck(string plate, bool classic, bool hitch);
        
        void setMake();
        void setModel();
        void setYear();
        void setPlate(string plate);
        void setHitch(bool hitch);
        void setClassic(bool classic);

        // getters must be const so that they can be called by the printers
        // in invoice, which take the class objects as constant references
        string getMake() const;
        string getModel() const;
        int getYear() const;
        string getPlate() const;
        string getHitch() const;
        string getClassic() const;

};


#endif