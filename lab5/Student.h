// 
// contains declarations for the Student class.
//

#ifndef _STUDENT_
#define _STUDENT_

#include <string>
using namespace std;

class Student{
    private:
        string NAME, EMAIL, ADDRESS, MAJOR, STATE;
        bool EMPLOYEE;
        // are you employed by the university? (ta, fitness instructor, etc)

    public:

        Student();
        Student(string major, string state, bool if_employee);

        void setName();
        void setEmail();
        void setAddress();
        void setMajor(string major);
        void setState(string state);
        void setEmployee(bool if_employee);

        // getters must be const so that they can be called by the printers
        // in invoice, which take the class objects as constant references
        string getName() const;
        string getEmail() const;
        string getAddress() const;
        string getMajor() const;
        string getState() const;
        string getEmployee() const;

};

#endif