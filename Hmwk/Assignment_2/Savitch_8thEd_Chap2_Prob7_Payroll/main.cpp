/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 3, 2017, 8:20 PM
  Purpose: Create the Payroll Program.
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
    double const PayRate = 16.78;
    double const SocialSecurityTax = 0.06;
    double const FederalIncomeTax = 0.14;
    double const StateIncomeTax = 0.05;
    double const UnionDues = 10.0;
    double NetPay, GrossPay, OverTime, StateTaxPay, OverTimePay, SocialTaxPay,
            FederalTaxPay;
    int const ThreeDependents = 35;
    int Hours, Dependents;
    char Answer;
    
    do
    {
    //Input values
        cout << "Enter the number of hours worked in a week: ";
        cin >> Hours;
        cout << "Enter the number of your children: ";
        cin >> Dependents;
        
    //Process by mapping inputs to output
        
    //Output values
        if (Hours >=40){
        if (Dependents >=3)
        {
            OverTime = Hours - 40;
            OverTimePay = OverTime * (PayRate * 1.5);
            GrossPay = Hours * PayRate + OverTimePay;
            cout << "Your gross pay is $" <<GrossPay<<".\n";
            SocialTaxPay = GrossPay * SocialSecurityTax;
            cout << "Your social tax pay is $" <<SocialTaxPay<<".\n";
            FederalTaxPay = GrossPay * FederalIncomeTax;
            cout << "Your federal tax pay is $" <<FederalTaxPay<<".\n";
            StateTaxPay = GrossPay * StateIncomeTax;
            cout << "Your state tax pay is $" <<StateTaxPay<< ".\n";
            NetPay = GrossPay - SocialTaxPay - FederalTaxPay - StateTaxPay;
            cout << "Your net pay is $" <<NetPay<<".\n";
            
        }
        else if (Hours < 40){
            OverTime = Hours - 40;
            OverTimePay = OverTime * (PayRate * 1.5);
            GrossPay = (PayRate * Hours) + OverTimePay;
            cout << "Your gross pay is $" <<GrossPay<<".\n";
            SocialTaxPay = GrossPay * SocialSecurityTax;
            cout << "Your social tax pay is $" <<SocialTaxPay<<".\n";
            FederalTaxPay = GrossPay * FederalIncomeTax;
            cout << "Your federal tax pay is $" <<FederalTaxPay<<".\n";
            StateTaxPay = GrossPay * StateIncomeTax;
            cout << "Your state tax pay is $" <<StateTaxPay<<".\n";
            NetPay = GrossPay - SocialTaxPay - FederalTaxPay - StateTaxPay;
            cout << "Your net pay is $" <<NetPay<<".\n";
        }
        
        }
        
        else if (Dependents >=3)
            
        {
            GrossPay = PayRate * Hours;
            cout << "Your gross pay is $" <<GrossPay<<".\n";
            SocialTaxPay = GrossPay * SocialSecurityTax;
            cout << "Your social tax pay is $" <<SocialTaxPay<<".\n";
            FederalTaxPay = GrossPay * FederalIncomeTax;
            cout << "Your federal tax pay is $" <<FederalTaxPay<<".\n";
            StateTaxPay = GrossPay * StateIncomeTax;
            cout << "Your state tax pay is $" <<StateTaxPay<<".\n";
            NetPay = GrossPay - SocialTaxPay - FederalTaxPay - StateTaxPay - 35;
            cout << "Your net pay is $" <<NetPay<<".\n";
            
        }
            
        else if (Dependents < 3){
            GrossPay = PayRate * Hours;
            cout << "Your gross pay is $" <<GrossPay<<".\n";
            SocialTaxPay = GrossPay * SocialSecurityTax;
            cout << "Your social tax pay is $" <<SocialTaxPay<<".\n";
            FederalTaxPay = GrossPay * FederalIncomeTax;
            cout << "Your federal tax pay is $" <<FederalTaxPay<<".\n";
            StateTaxPay = GrossPay * StateIncomeTax;
            cout << "Your state tax pay is $" <<StateTaxPay<<".\n";
            NetPay = GrossPay - SocialTaxPay - FederalTaxPay - StateTaxPay;
            cout << "Your net pay is $" <<NetPay<<".\n";
            
        }
            
    
        cout << "Do you want to try again? (Y/N)\n";
        cin >> Answer;
        
    }while(Answer == 'Y');
    
    //Exit stage right!
    return 0;
}