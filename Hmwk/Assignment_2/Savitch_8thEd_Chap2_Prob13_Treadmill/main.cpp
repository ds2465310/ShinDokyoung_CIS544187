/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 10, 2017, 10:43 PM
  Purpose: Write a Program That Starts with a Quantity in mph and Converts
 the Quantity into Minutes and Seconds Per Mile.
 */

//System Libraries
#include <iostream>
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
    double MilePerHour, Seconds, HoursPerMile, MinutesPerMile;
    int Minutes;
    //Input values
    cout << "Enter speed in mile per hour: \n";
    cin >> MilePerHour;
    
    //Process by mapping inputs to outputs
    HoursPerMile = 1.0 / MilePerHour;
    MinutesPerMile  = 60 * HoursPerMile;
    Minutes = static_cast<int>(MinutesPerMile);
    Seconds = (MinutesPerMile - Minutes) * 60;
    
    //Output values
    cout << "This pace is "<< Minutes << "minutes and " << Seconds << "seconds";
    
    //Exit stage right!
    return 0;
}