/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on February 27, 2017, 8:30 PM
  Purpose: Calculate the Distance for an Abject in Free Fall
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
    int constant_acceleration, time, distance;
    int acceleration = 32;
    //Input values
    cout << "This program calculates how far an object would drop\n";
    cout << "if it is in free fall for that length of time.\n\n";
    cout << "Enter a time in seconds: ";
    cin >> time;
    
    //Process by mapping inputs to outputs
    distance = (acceleration * time * time)/2;
    
    //Output values
    cout << "Acceleration: " << acceleration;
    cout << " ft/sec^2.\n";
    cout << "Distance: " << distance;
    cout << " ft.\n\n";
    cout << "An object in free fall for " << time;
    cout << " seconds will fall " << distance;
    cout << " ft.\n";
    
    
    //Exit stage right!
    return 0;
}