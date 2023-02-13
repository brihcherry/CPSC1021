//
// this file contains the class declaration for the Patient class
// all definitions are in the .cpp file 
// 

#ifndef _PATIENT_
#define _PATIENT_

class Patient{

    private:

        int days;
        double rate, services, medication;
        char patientType;

        bool validateInput(int input);
        bool validateInput(double input);
        bool validateInput(char input);


    public:
        Patient();
        Patient(char pT, double s, double m);
        Patient(int d, double r, double s, double m, char pT);

        void setDays(int d);
        void setRate(double r);
        void setServices(double s);
        void setMedication(double m);
        void setPatientType(char pT);

        int getDays();
        double getRate();
        double getServices();
        double getMedication();
        char getPatientType();

        double calcTotalCharges();

};

#endif
