// This program will calculate the number of points earned based
// on the number of bike rides, entered by the user
// Brianna Cherry

#include <iostream>
using namespace std;

int main(){

    int numberRides; // number of bike rides, to be entered by user
    // getting input from user
    cout << "Enter the number of bike rides to campus: ";
    cin >> numberRides;
    bool valid = 0;

    // using input to determine points
    while (valid == 0){
        if (numberRides == 0){
            cout << "You earned 0 points this semester." << endl;
            valid = 1;}
        else if (numberRides == 1){
            cout << "You earned 3 points this semester." << endl;
            valid = 1;}
        else if (numberRides == 2){
            cout << "You earned 10 points this semester." << endl;    
            valid = 1;}
        else if (numberRides == 3){
            cout << "You earned 15 points this semester." << endl;
            valid = 1;}
        else if (numberRides == 4){
            cout << "You earned 30 points this semester." << endl;
            valid = 1;}
        else if (numberRides >= 5){
            cout << "You earned 50 points this semester." << endl;
            valid = 1;}
        else {
            cout << "Error: enter a new number: ";
            cin >> numberRides;}
        }



return 0; 
}