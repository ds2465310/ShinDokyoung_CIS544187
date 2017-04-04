/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March , 2017, 5:30 PM
  Purpose: Create the Program to Gauge the Rate of Inflation for the Past Year.
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
    double Inflation (double pre_price, double cur_price);
    double pre_price, cur_price, Rate;
    char Answer;
    
    do
    {
    //Input values
        cout << "Enter previous year cost of the item: $";
        cin >> pre_price;
        cout << "Enter present year cost of the item: $";
        cin >> cur_price;
        
    //Process by mapping inputs to outputs
        Rate = Inflation (pre_price, cur_price);
    //Output values
        cout << "Rate of inflation: " << Rate * 100 << "%" << endl;
        cout << "\nDo you want to try again? [Y/N]";
        cin >> Answer;
    }while (Answer == 'Y'|| Answer == 'y');

    //Exit stage right!
    return 0;
}
double Inflation (double pre_price, double cur_price)
{
    return ((cur_price - pre_price)/cur_price);
}