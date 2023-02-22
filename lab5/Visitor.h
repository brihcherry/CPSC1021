// 
// contains declarations for the Visitor class.
//

#ifndef _VISITOR_
#define _VISITOR_

#include <string>
using namespace std;

class Visitor{
    private:
        string NAME, EMAIL, ADDRESS;
        bool SPEAKER; // are you here to speak
        bool HS; // are you taking your high schooler on a tour?

    public:
        Visitor();
        Visitor(bool speaker, bool hs);

        void setName();
        void setEmail();
        void setAddress();
        void setSpeaker(bool speaker);
        void setHS(bool hs);

        // getters must be const so that they can be called by the printers
        // in invoice, which take the class objects as constant references
        string getName() const;
        string getEmail() const;
        string getAddress() const;
        string getSpeaker() const;
        string getHS() const;
};


#endif