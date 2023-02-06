// 
// B------ C-----
// Lab 3: area calculation with classes
// Date: 2/6/2023
// 
// The purpose of this lab is to create a program that will use 
// classes to find the area of four different shapes. It contains a 
// circle, square, trapezoid, and rectangle class. The program
// utilizes data validation to get valid input from the user.
// 
// This file contains the main function, which takes input from the user
// and creates whichever type of object is necessary; then, it 
// calls the calcArea() function for the object to calculate the area for 
// whatever shape the user chose.
// 

#include <iostream>
#include <iomanip>

#include "Circle.h"
#include "Trapezoid.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main(){

    int choice = 0; // initialize choice to something invalid

    // menu of choices for user
    cout << "1 -- circle" << endl << 
            "2 -- square" << endl << 
            "3 -- rectangle" << endl << 
            "4 -- trapezoid" << endl << 
            "5 -- quit" << endl;

    // while loop to check for valid input
    while (choice >= 5 || choice <= 0 )
    {
        cout << "please enter a valid choice: "; 
        cin >> choice;

        if (choice == 5) 
            break; // exit choice terminates program

        else if (choice == 1) // circle
        {
            double radius = 0; // initialize radius to invalid value
            Circle circle;     // create circle object

            // keep asking for input until user gives a valid number
            while (!circle.setRadius(radius))
            { cout << "Radius: "; cin >> radius;}

            cout << "Area: " << fixed << setprecision(1) << circle.calcArea(); 
        }

        else if (choice == 2) // square
        {
            double side = 0; // invalid value to enter while loop below
            Square square;   // create square object

            while (!square.setSide(side))
            { cout << "Side: "; cin >> side;}

            cout << "Area: " << fixed << setprecision(1) << square.calcArea();      
        }

        else if (choice == 3) // rectangle
        {
            double length = 0, // initialize both length and width to invalid 
                    width = 0;

            Rectangle rectangle; // create rectangle object

            // enter while loop, set length inside rectangle object if a valid 
            // number was entered 
            while (!rectangle.setLength(length))
                { cout << "Length: "; cin >> length; }

            // do the same for width
            while (!rectangle.setWidth(width))
                { cout << "Width: "; cin >> width; }

            cout << "Area: " << fixed << setprecision(1) << rectangle.calcArea();    
            
        }

        else if (choice == 4)
        {
            // initialization of variables
            double b1     = 0,
                   b2     = 0,
                   height = 0;
            
            Trapezoid trapezoid; // create trapezoid object

            // because bases and height are initialized to 0, each 
            // while loop will be entered and will set the length until
            // there is a valid number
            while (!trapezoid.setBase1(b1))
                { cout << "Base1: "; cin >> b1; }

            while (!trapezoid.setBase2(b2))
                { cout << "Base2: "; cin >> b2; }

            while (!trapezoid.setHeight(height))
                { cout << "Height: "; cin >> height; }

            cout << "Area: " << fixed << setprecision(1) << trapezoid.calcArea(); 
        }

    }

    cout << endl; // newline for formatting 

}
