/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on April 3, 2017, 8:15 PM
  Purpose: Calculate the Gravitational Force.
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
double G = 6.673E-8;
double Gravity (double m1, double m2, double d);
double m1, m2, d, GravityForce;
char Answer;
do
{
    //Input values
    cout << "Enter mass of first body: ";
    cin >> m1;
    cout << "Enter mass of second body: ";
    cin >> m2;
    cout << "Enter distance between two bodies: ";
    cin >> d;
    //Process by mapping inputs to outputs
    GravityForce = (G * m1 * m2)/(d * d);
    //Output values    
    cout << "Gravitational force between two bodies is " <<GravityForce<<".\n";
    cout << "Do you want to try again? [Y/N]";
    cin >> Answer;
}while (Answer == 'Y'|| Answer == 'y');
    //Exit stage right!
    return 0;
}