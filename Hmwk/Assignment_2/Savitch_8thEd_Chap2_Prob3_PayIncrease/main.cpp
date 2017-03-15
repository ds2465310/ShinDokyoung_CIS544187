/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 10, 2017, 5:38 PM
  Purpose: Calculate the Salary
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
    double PreSalary, NewSalary;
    
    char Answer;
    
    do
    {
    //Input values
        cout << "Enter your previous annual salary.: $";
        cin >> PreSalary;
        
    //Process by mapping inputs to outputs
        NewSalary = PreSalary * (1 + Increase);
        Monthly = NewSalary / 12;
        RetroactivePay = (NewSalary - PreSalary)/2;
        
    //Output values
        cout << "Your New Annual Salary is $" <<NewSalary<<endl;
        cout << "Your New Monthly Salary is $" <<Monthly<<endl;
        cout << "Your New Retroactive Pay is $" <<RetroactivePay<<endl;
        cout << "Do you want to try again? (Y/N) \n";
        cin >> Answer;
        
    } while (Answer == 'Y');
    
    //Exit stage right!
    return 0;
}