// 
// contains declarations for the Employee class.
// 

#ifndef _EMPLOYEE_
#define _EMPLOYEE_

#include <string>
using namespace std;

class Employee{
    private:
        string NAME, EMAIL, ADDRESS, DEPT;
        int IF_VET; // eg are you a veteran?

    public:

        Employee();
        Employee(string dept, bool if_vet);

        void setName();
        void setEmail();
        void setAddress();
        void setDept(string dept);
        void setVeteran(bool if_vet);

        // getters must be const so that they can be called by the printers
        // in invoice, which take the class objects as constant references
        string getName() const;
        string getEmail() const;
        string getAddress() const;
        string getDept() const;
        string getVeteran() const;
};


#endif