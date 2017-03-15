/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 10, 2017, 4:19 PM
  Purpose: Calculate How Many Cans of Soda Will Kill 
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
    int DietSodaPopCans;
    double const Percent = 0.001;
    double Sweetener, MouseWeight, DieterWeight, SweetenerDieter;
    char Answer;
    
    do
    {
    //Input values
    cout << "Enter the amount of artifical sweetener to kill a mouse: ";
    cin >> Sweetener;
    cout << "What is the weight of the mouse in grams?: ";
    cin >> MouseWeight;
    cout << "What is the weight of the dieter in grams?: ";
    cin >> DieterWeight;
    
    //Process by mapping inputs to outputs
    SweetenerDieter = (Sweetener/MouseWeight) * DieterWeight;
    DietSodaPopCans = (SweetenerDieter/Percent);
    
    //Output values
    cout << "The amount of Diet Soda Pop Cans that would kill the dieter is: "<<DietSodaPopCans<<endl;
    cout << "Continue (Y/N)? ";
    cin >> Answer;
} while (Answer=='Y');
    
    //Exit stage right!
    return 0;
}