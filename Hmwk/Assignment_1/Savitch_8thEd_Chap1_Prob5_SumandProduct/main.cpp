/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on February 27, 2017, 5:23 PM
  Purpose:  Sum and Product
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
    int first_number, second_number, sum, product;
    
    //Input values
    cout << "Enter the first number: ";
    cin >> first_number;
    cout << "Enter the second number: ";
    cin >> second_number;
    
    //Process by mapping inputs to outputs
    sum = first_number + second_number;
    product = first_number * second_number;
    
    //Output values
    cout << "Sum of two numbers: " << sum;
    cout << "\nProduct of two numbers: " << product;
    
    //Prompt the massage
    cout << "\nThis is the end of the program.\n";
    
    //Exit stage right!
    
    
    return 0;
}