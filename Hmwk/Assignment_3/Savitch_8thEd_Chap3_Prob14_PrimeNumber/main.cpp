/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 20, 2017, 10:27 PM
  Purpose: Create a Program That Finds and Prints All of the Prime Numbers 
        Between 3 and 100.
 */

//System Libraries
#include <iostream>
#include <math.h>
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
    const unsigned int Limit = 100;
    unsigned int PrimeCount = 0;
    //Input values
    cout << "Prime number up to " << Limit << ":\n";
    
    //Process by mapping inputs to outputs
    
    //Output values
    for (int n = 2; n <= Limit; n++)
    {
        bool isPrime = true;
        for (int m = 2; m <= sqrt(n); m++)
        {
            if (n % m == 0)
            {
                isPrime = false;
                break;    
            }
        }
        if (isPrime)
        {
            PrimeCount++;
            cout << n << " ";   
        }
    }
    cout << "\n\n Primes found: "<< PrimeCount << endl;
    //Exit stage right!
    return 0;
}