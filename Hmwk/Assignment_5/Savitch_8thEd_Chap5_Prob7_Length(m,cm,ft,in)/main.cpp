/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 3, 2017, 12:15 PM
  Purpose: Create a program as Problem_6 converts from meters and centimeters
         into feet and inches.
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
void Input (float &meters, float &cm);
void Calculate (float &feet, float &inches, float meters, float cm);
void Output (float meters, float cm, float feet, float inches);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float feet, inches, meters, cm;
    char choice;
    do
    {
    //Input values
        cout << "Meters and centimeters to feet and inches" << endl;
        Input (meters, cm);
        Calculate (feet, inches, meters, cm);
        Output (meters, cm, feet, inches);
        cout << "Do you want to try again? [Y/N]";
        cin >> choice;
    }while(choice=='Y'||choice=='y');
    return 0;
}

    //Process by mapping inputs to outputs
void Input (float &meters, float &cm)
{
    cout << "Meters: ";
    cin >> meters;
    cout << "Centimeters: ";
    cin >> cm;
}
void Calculate (float &feet, float &inches, float meters, float cm)
{
    float totalcm;
    totalcm = (meters * 100) + cm;
    feet = (totalcm / 30.48);
    inches = feet * 12;
}
    //Output values
void Output (float meters, float cm, float feet, float inches)
{
    cout << "There are " << feet << "feet," << inches << "inches," << meters << 
            "meter(s), and " << cm << "centimeter(s).";
}