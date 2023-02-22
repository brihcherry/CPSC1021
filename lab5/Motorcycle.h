
#ifndef _MOTORCYCLE_
#define _MOTORCYCLE_

#include <string>
using namespace std;

class Motorcycle{
    private:
        string MAKE, MODEL, COLOR;
        int YEAR;
        bool IF_MOPED; // is it a moped or a full bike

    public:
        Motorcycle();
        Motorcycle(string color, bool if_moped);

        void setMake();
        void setModel();
        void setYear();
        void setColor(string color);
        void setMoped(bool if_moped);

        string getMake() const;
        string getModel() const;
        int getYear() const;
        string getColor() const;
        string getMoped() const;

};


#endif