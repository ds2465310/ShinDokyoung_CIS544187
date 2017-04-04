/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 29, 2017, 4:32 PM
  Purpose: Define a Function to Compute the Number of Miles Per Gallon 
 *      on Two Car
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
#define LITERPERGALLON (3.785)
double MPG (double miles, double liters)
{
    return (miles * LITERPERGALLON/liters);
}
int main(int argc, char** argv) {
    //Declare Variables
    double Fliters, Fmiles, Sliters, Smiles, FMPG, SMPG;
    char Answer;
    do
    {
    //Input values
        cout << "Enter miles traveled by first car: ";
        cin >> Fmiles;
        cout << "Enter liters gasoline: ";
        cin >> Fliters;
        cout << "Enter miles traveled by second car: ";
        cin >> Smiles;
        cout << "Enter liters gasoline: ";
        cin >> Sliters;
    //Process by mapping inputs to outputs
    
    //Output values        
        if (Fliters == 0 || Sliters == 0)
            cout << "\n Invalid Input";
        else
        {
            FMPG = MPG (Fmiles, Fliters);
            SMPG = MPG (Smiles, Sliters);
            cout << "First car's Miles per Gallon is " << FMPG << "."<<endl;
            cout << "Second car's Miles Per Gallon is " << SMPG << "."<<endl;
        }
        if (FMPG == SMPG)
        {
            cout << "Both cars are best."<<endl;
        }
        else if (FMPG > SMPG)
        {
            cout << "First car is best."<<endl;
        }
        else 
            cout << "Second car is best."<<endl;
        
        cout << "Do you want to try again? [Y/N]";
        cin >> Answer;
    }while (Answer == 'Y'|| Answer == 'y');


    //Exit stage right!
    return 0;
}