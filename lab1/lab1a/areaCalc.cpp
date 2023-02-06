// This is a program to calculate the area of some shapes
// B------ C-----

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    const float pi = 3.14159;
    double choice, // will store the user's choice
           area;   // will store the area of whatever shape is chosen

    cout << "Program to calculate areas of objects:" << endl;
    cout << "      " << "1 -- square" << endl;
    cout << "      " << "2 -- circle" << endl;
    cout << "      " << "3 -- right triangle" << endl;
    cout << "      " << "4 -- quit" << endl;

    cout << "Choose one (enter a number): ";
    cin >> choice;

    if (choice == 1){
        double sideL;
        cout << "Side length of the square: ";
        cin >> sideL;

        area = pow(sideL, 2);

        cout << "Area = ";
        cout << fixed << setprecision(2) << area << endl;}

    else if (choice == 2){

        double radius;
        cout << "Radius of the circle: ";
        cin >> radius;
        area = pow(radius, 2) * pi;


        cout << "Area = ";
        cout << fixed << setprecision(2) << area << endl;}

    else if (choice == 3){

        double base, height;
        cout << "Base of the triangle: ";
        cin >> base;
        cout << "Height of the triangle: ";
        cin >> height;
        area = .5 * base * height;

        cout << "Area = ";
        cout << fixed << setprecision(2) << area << endl;
    }
    else if (choice == 4){}

    else {cout << "invalid entry" << endl;}

return 0;}
