/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on April 12, 2017, 1:55 PM
  Purpose: Simulate a high-low game.
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
    //Initialize random seed
    srand(time(NULL));
    
    //Declare Variables
    int num;
    int guess;
    num = std::rand()% 100 + 1;
    
    //Input values
    cout << "\n\nWELCOME TO THE HIGH-LOW GAME\n\n";
    do
    {
    cout << "Enter a guess between 1 and 100: ";
    cin >> guess;
    
    //Output values
    if (guess > num)
    {
        cout << "Too high!\n";
    }
    else if (guess < num)
    {
        cout << "Too low!\n";
    }
    else
    {
        cout << "Correct!\n";
    }        
    }while (guess != num);

    //Exit stage right!
    return 0;
}