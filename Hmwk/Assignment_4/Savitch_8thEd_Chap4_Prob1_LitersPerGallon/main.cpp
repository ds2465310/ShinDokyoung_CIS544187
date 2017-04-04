/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 29, 2017, 4:07 PM
  Purpose: Define a Function to Compute the Number of Miles Per Gallon.
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
    double const LIT = 0.264172;
    double MPG(int miles, int liters);
    int liters, miles;
    char Answer;
    
    do
    {
    //Input values
        cout << "Enter the number of Liters of gasoline: ";
        cin >> liters;
        cout << "Enter the number of Miles traveled by the car: ";
        cin >> miles;
        
    //Process by mapping inputs to outputs
    
    //Output values 
        cout << "Number of miles per gallon: " << MPG(miles,liters);
        cout << "\nDo you want to try again? [Y/N]";
        cin >> Answer;
    }while (Answer == 'Y'|| Answer == 'y');
    //Exit stage right!
    return 0;
}
double MPG (int miles, int liters)
{
    double gallons;
    double const LIT = 0.264172;
    gallons = LIT * liters;
    return (miles/gallons);
}