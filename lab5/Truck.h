
#ifndef _EQUIPMENT_
#define _EQUIPMENT_

#include <string>
using namespace std;

class Truck{
    private:
        string MAKE, MODEL, PLATE;
        int YEAR;
        bool CLASSIC, HITCH;

    public:

        Truck();
        Truck(string plate, bool classic, bool hitch);
        
        void setMake();
        void setModel();
        void setYear();
        void setPlate(string plate);
        void setHitch(bool hitch);
        void setClassic(bool classic);

        string getMake() const;
        string getModel() const;
        int getYear() const;
        string getPlate() const;
        string getHitch() const;
        string getClassic() const;

};


#endif