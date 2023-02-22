
#ifndef _STUDENT_
#define _STUDENT_

#include <string>
using namespace std;

class Student{
    private:
        string NAME, EMAIL, ADDRESS, MAJOR, STATE;
        bool EMPLOYEE;
        // eg are you an athlete? are you employed by the university? (ta, fitness instructor, etc)

    public:

        Student();
        Student(string major, string state, bool if_employee);

        void setName();
        void setEmail();
        void setAddress();
        void setMajor(string major);
        void setState(string state);
        void setEmployee(bool if_employee);

        string getName() const;
        string getEmail() const;
        string getAddress() const;
        string getMajor() const;
        string getState() const;
        string getEmployee() const;

};

#endif