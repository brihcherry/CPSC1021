// Names: B------ C-----
// Date: 1/30/23
// Lab: Lab 2
// Description: This file contains the function that calculates the function that sums up the charge
// Time: 1 hour

#include "calcTotalCharges.h"

double calcTotalCharges(double hospital, double medicine){
    return hospital + medicine;
}

double calcTotalCharges(double days, double dailyRoomRate, double hospital, double medicine){
    double total;
    total = (days * dailyRoomRate) + hospital + medicine;
    return total;
}
