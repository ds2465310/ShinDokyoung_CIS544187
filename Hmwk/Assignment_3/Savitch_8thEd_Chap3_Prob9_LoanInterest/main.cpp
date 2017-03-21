/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 20, 2017, 5:46 PM
  Purpose: Create the Program That Can Determine Simple Annualized Percentage of
    the Original Loan Balance.
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
    double InterestRate, LoanAmount, SimpleInterest, Bal;
    int Month;
    char Answer;
    do
    {
    //Input values
        cout << "Enter total loan: ";
        cin >> LoanAmount;
        cout << "Enter rate of interest: ";
        cin >> InterestRate;
        cout << "Monthly payment = " << (LoanAmount/20) << "\n";
    //Process by mapping inputs to outputs
        SimpleInterest = 0;
        Bal = LoanAmount;
        Month = 0;
    //Output values        
        while (Bal > 0)
        {
            SimpleInterest += ((InterestRate * Bal)/(100*12));
            Month++;
            Bal -= (LoanAmount/20)-((InterestRate * Bal)/(100*12));
            if (Bal < 0)
                Bal = 0;
            cout <<"Balance left: " << Bal << "\n";
        }
        cout << "Simple annualized interest is " << ((SimpleInterest * 100 * 12)
                / (LoanAmount * Month)) << "." << endl;
        cout << "Do you want to try again? [Y/N]";
        cin >> Answer;
    }while (Answer == 'Y' || Answer == 'y');


    //Exit stage right!
    return 0;
}