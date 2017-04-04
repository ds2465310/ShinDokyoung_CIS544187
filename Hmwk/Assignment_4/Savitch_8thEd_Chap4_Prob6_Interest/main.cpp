/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 3, 2017, 9:36 AM
  Purpose: Calculate the Interest Due on a Credit Account Balance.
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
    double Interest (double Balance, double Rate, int Months);
    double Balance, Rate, Total;
    int Months;
    char Answer;
    do
    {
    //Input values
        cout << "Enter your interest rate: ";
        cin >> Rate;
        cout << "Enter your initial balance: $";
        cin >> Balance;
        cout << "Enter the number of months: ";
        cin >> Months;
    //Process by mapping inputs to outputs
        Total = Interest (Balance, Rate, Months);
    //Output values
        cout << "\nInterest due: "<< Total;
        cout << "\nDo you want to try again? [Y/N]";
        cin >> Answer;
    }while (Answer == 'Y'|| Answer == 'y');
    //Exit stage right!
    return 0;
}
double Interest (double Balance, double Rate, int Months)
{
    double Total = 0;
    for (int i = Months; i > 0; i--)
    {
        Total += ((Balance * Rate)/(100 * 12));
        Balance += ((Balance * (100 + Rate))/(100 * 12));
    }
    return Total;
}
