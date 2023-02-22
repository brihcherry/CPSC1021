
#ifndef _CONSTRUCTION_
#define _CONSTRUCTION_

#include <string>
using namespace std;

class Construction{
    private:
        string NAME, EMAIL, ADDRESS, COMPANY;
        bool IF_VET; // eg are you a veteran?

    public:

        Construction();
        Construction(string company, bool if_vet);

        void setName();
        void setEmail();
        void setAddress();
        void setCompany(string company);
        void setVeteran(bool if_vet);

        string getName() const;
        string getEmail() const;
        string getAddress() const;
        string getCompany() const;
        string getVeteran() const;

};


#endif