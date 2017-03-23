/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 22, 2017, 4:54 PM
  Purpose: Create the Paycheck Program.
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
    float PayCheck, Hours, PayRate, OverTime, OverTimePay;
 
    //Input values
    cout << "Enter the number of hours worked in a week: ";
    cin >> Hours;
    cout << "Enter your pay rate: $";
    cin >> PayRate;
    
    //Process by mapping inputs to outputs
    if (Hours >= 40)
    {
        OverTime = Hours - 40;
        OverTimePay = OverTime * (PayRate *2);
        PayCheck = (40 * PayRate) + OverTimePay;
    }
    else if (Hours < 40)
    {
        PayCheck = Hours * PayRate;
    }
    
    //Output values
    cout << "\n Your gross pay is $"<<PayCheck<<"."<<endl;
     
    //Exit stage right!
    return 0;
}