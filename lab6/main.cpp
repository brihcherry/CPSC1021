// 
// BRIANNA CHERRY
// cpsc1021 section 2
// feb 23, 2023
// Lab 6: static member variables and functions
// 
// this file contains main, which will take an input file name
// and output file name as command line arguments:
// ./main.out dates.txt outputFile.txt
// main will then open the input file, read each line of date information, 
// store the information in the vector of date objects, and close the input file
// then main will sort the date objects in the vector from earliest to 
// most recent, and will use the Date::print() function to print each date in the 
// sorted vector to the output file entered on the command line.
// 

#include "Date.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]){

    string inFileName = argv[1];

    ifstream inputFile;
    inputFile.open(inFileName);

    if (!inputFile)
       cout << "Error opening data file\n";
    else
    {
        int d, m, y, num_dates;
        inputFile >> num_dates;

        vector<Date> dates(num_dates);

        for (int i = 0; i < num_dates; i++)
        {
            inputFile >> m;
            inputFile >> d;
            inputFile >> y;
            Date newDate(m, d, y);
            dates[i] = newDate;
        }
        inputFile.close();

        sort(dates.begin(), dates.end(), Date::compare);

        string outFileName = argv[2];

        ofstream outputFile;
        outputFile.open(outFileName);
        for (int i = 0; i < num_dates; i++)
        {
            outputFile << dates[i].print() << endl;
        }
        outputFile.close();

    }



    return 0;
}