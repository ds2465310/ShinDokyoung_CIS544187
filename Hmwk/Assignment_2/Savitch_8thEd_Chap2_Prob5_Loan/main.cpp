/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 10, 2017, 5:58 PM
  Purpose: Calculate Loan
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
    double MoneyNeed, FaceValue, InterestRate, NumofMonths, MonthlyPayment;
    double Time, Interest;
    double const YearofMonth = 12, PercentDecimal = 100;
    char Answer;
do
{    
    //Input values
 cout << "Enter the amount of money you need from a loan.: $";
 cin >> MoneyNeed;
 cout << "Enter the interest rate of the loan in percentage.: ";
 cin >> InterestRate;
 cout << "Enter the duration of the loan in months.: $";
 cin >> NumofMonths;
 
    //Process by mapping inputs to outputs
 Interest = InterestRate / PercentDecimal;
 Time = NumofMonths / YearofMonth;
 FaceValue = (1 + MoneyNeed) / (InterestRate * Time);
 MonthlyPayment = FaceValue / NumofMonths;
 
 cout.setf(ios::fixed);
 cout.setf(ios::showpoint);
 cout.precision(2);
 
    //Output values
 cout << "Your face value is $" <<FaceValue<<endl;
 cout << "Your monthly payment would be $" <<MonthlyPayment<<endl;
 cout << "\n";
 cout << "Do you want to do it again? (Y/N)";
 cin >> Answer;
 
 } while (Answer == 'Y');
 
    //Exit stage right!
    return 0;
}