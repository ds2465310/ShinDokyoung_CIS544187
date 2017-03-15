/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 10, 2017, 11:04 PM
  Purpose: Guess the Babylonian Algorithm.
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
    double guess, previousguess, n, r;
    
    //Input values
    cout << "Enter the number to compute the square root of \n";
    cin >> n;
    
    //Process by mapping inputs to outputs
    previousguess = n;
    guess = n/2;
    while (((previousguess - guess) / previousguess) > 0.01)
    {
        previousguess = guess;
        r = n /guess;
        guess = (guess + r) / 2;
    }
    
    //Output values
    cout << "The estimate of the square root of " << n << " is "
            << guess ;
    
    //Exit stage right!
    return 0;
}