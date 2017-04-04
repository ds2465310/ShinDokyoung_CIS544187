/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on April 3, 2017, 11:05 AM
  Purpose: Calculate the Annual Tax Cost.
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
    double Interest_Cal (double Rate, double Months, double Balance);
    double Rate, Months, Interest, Balance;
    char Answer;
    do
    {
    //Input values
        cout << "Enter your initial balance: $";
        cin >> Balance;
        cout << "Enter your rate: ";
        cin >> Rate;
        cout << "Enter the number of months: ";
        cin >> Months;
    //Process by mapping inputs to outputs
        Rate = Rate * 0.01/12;
        Interest = Interest_Cal (Rate, Months, Balance);
    //Output values        
        cout << "Your interest owed is "<<Interest <<".\n";
        cout << "Do you want to try again? [Y/N]";
        cin >> Answer;
    }while (Answer == 'Y' || Answer == 'y');
    //Exit stage right!
    return 0;
}
double Interest_Cal(double Rate, double Months, double Balance)
    {
        double Interest, Total_int = 0;
        for (int count = 1; count <= Months; count++)
        {
            Interest = Rate * Balance;
            Balance = Balance + Interest;
            Total_int += Interest;
        }
        return Total_int;
    }