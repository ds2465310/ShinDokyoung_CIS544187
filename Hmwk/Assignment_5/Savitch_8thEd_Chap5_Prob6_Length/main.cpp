/* 
  File:   main.cpp
  Author: Dokyoung Shin
  Created on May 5, 2017, 2:25 PM
  Purpose: Create a program to convert length.
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void Input (float &feet, float &inches);
void Calculate (float feet, float inches, float &meters, float &cm);
void Output (float meters, float cm, float feet, float inches);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float feet, inches, meters, cm;
    char choice;
    do
    {
    //Input values
        cout << "Feet and inches to meters and centimeters." << endl;
            Input(feet, inches);
            Calculate(feet, inches, meters, cm);
            Output(meters, cm, feet, inches);
        cout << "Do you want to try again? [Y/N]";
        cin >> choice;
    }while (choice=='Y'||choice=='y');
return 0;
}
void Input(float &feet, float &inches)
{
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;
}
    //Process by mapping inputs to outputs
void Calculate(float feet, float inches, float &meters, float &cm)
{
    meters = feet * 0.3048 + (inches * 0.0254);
    cm = (feet * 30.48 + inches * 2.54);
}
    //Output values
void Output (float meters, float cm, float feet, float inches)
{
    cout << "There are " << meters << " meters, " << cm << " centimeters in "
            << feet << " feet, " << inches << " inches" << endl;
}