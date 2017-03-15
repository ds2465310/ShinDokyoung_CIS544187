/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on February 27, 2017, 8:14 PM
  Purpose: 
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
    int number_of_quarters, number_of_dimes, number_of_nickels, total;
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    
    //Input values
   cout << "Enter the number of quarters: ";
   cin >> number_of_quarters;
   cout << "Enter the number of dimes: ";
   cin >> number_of_dimes;
   cout << "Enter the number of nickels: ";
   cin >> number_of_nickels;
   
    //Process by mapping inputs to outputs
   total = (quarters * number_of_quarters)+(dimes * number_of_dimes)+(nickels * number_of_nickels);
   
    //Output values
   cout << "Monetary value is " << total;
   cout << " cents.\n";
   
    //Exit stage right!
   
   
    return 0;
}