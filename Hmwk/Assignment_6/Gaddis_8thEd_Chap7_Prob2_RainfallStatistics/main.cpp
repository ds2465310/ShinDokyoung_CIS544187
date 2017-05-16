/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on May 15, 2017, 4:33 PM
  Purpose: Create a program that find out the total rainfall for each of 12 months.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    double rainfall[12];
    double total = 0;
    double avg = 0;
    double maxRain = 0;
    double minRain = 0;
    double tempRain = 0;
    //Input values
    for (int i=0; i<12; i++)
    {
        cout << "Please enter rainfall for month " << i+1 << ": " << endl;
        cin >> rainfall[i];
        total += rainfall[i];
    }
    //Process by mapping inputs to outputs
    avg = total / 12;
    maxRain = rainfall[0];
    minRain = rainfall[0];

    for (int i=1; i<=12; i++)
    {
        tempRain = rainfall[i];
        if (tempRain < minRain)
            minRain = tempRain;
        if (tempRain > maxRain)
            maxRain = tempRain;
    }
    //Output values 
    cout << "Total rainfall was " << std::setprecision(2) << fixed << showpoint 
            << total << endl;
    cout << "Average rainfall was " << std::setprecision(2) << fixed << showpoint
            << avg << endl;
    cout << "Highest rainfall was " << std::setprecision(2) << fixed << showpoint
            << maxRain << endl;
    cout << "Lowest rainfall was " << std::setprecision(2) << fixed << showpoint
            << minRain << endl;
    //Exit stage right!
    return 0;
}