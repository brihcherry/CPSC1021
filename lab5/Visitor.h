
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

        string getName() const;
        string getEmail() const;
        string getAddress() const;
        string getSpeaker() const;
        string getHS() const;
};


#endif