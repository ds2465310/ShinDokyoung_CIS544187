/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 10, 2017, 6:57 PM
  Purpose: Calculate the Retroactive Salary for A Number of Months
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
    double const Increase = 0.076;
    double Monthly, RetroactivePay;
    double PreSalary, NewSalary, PreMonthly, NumofMonths;
    char Answer;
    
    do
    {
    //Input values
        cout << "Enter your previous annual salary and a number of months: \n";
        cin >> PreSalary;
        cin >> NumofMonths;
       
    //Process by mapping inputs to outputs
        NewSalary = PreSalary * (1 + Increase);
        PreMonthly = PreSalary / 12;
        Monthly = NewSalary / 12;
        RetroactivePay = (Monthly - PreMonthly) * NumofMonths;
        
    //Output values
        cout << "Your New Annual Salary is " <<NewSalary<<endl;
        cout << "Your New Monthly Salary is " <<Monthly<<endl;
        cout << "Retroactive Salary due: " <<RetroactivePay<<endl;
        cout << "Do you want to try again? (Y/N)";
        
    } while (Answer == 'Y');
    
    //Exit stage right!
    return 0;
}