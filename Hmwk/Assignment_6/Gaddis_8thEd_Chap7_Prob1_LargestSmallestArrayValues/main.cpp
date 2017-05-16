/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on May 15, 2017, 4:05 PM
  Purpose: Create a program that lets show the largest and smallest values.
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
    int numbers[10];
    int smallest = 0;
    int largest = 0;
    int temp = 0;

    //Input values
    for (int i=0; i<10; i++)
    {
        cout << "Please enter number " << i+1 << ": " <<endl;
        cin >> numbers[i];
    }
    //Process by mapping inputs to outputs
    smallest = numbers[0];
    largest = numbers[0];
    for (int i=1; i<10; i++)
    {
        temp = numbers[i];
        if (temp <smallest)
            smallest = temp;
        if (temp > largest)
            largest = temp;
    }
    //Output values
    cout << "The smallest value is " << smallest << endl;
    cout << "The largest value is " << largest << endl;
    //Exit stage right!
    return 0;
}