/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 10, 2017, 10:19 PM
  Purpose:  Play the Game of Mad Lib.
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
    string InstructorName, YourName, Food, Adjective, Color, Animal;
    int Number;
    
    //Input values
    cout << "Enter your instructor name: \n";
    cin >> InstructorName;
    cout << "Enter your name: \n";
    cin >> YourName;
    cout << "Enter a food: \n";
    cin >> Food;
    cout << "Enter a number between 100 and 120: \n";
    cin >> Number;
    cout << "Enter an adjective: \n";
    cin >> Adjective;
    cout << "Enter a color: \n";
    cin >> Color;
    cout << "Enter an animal: \n";
    cin >> Animal;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "\n";
    cout << "Dear Instructor " <<InstructorName<<",\n\n";
    cout << "I am sorry that I am unable to turn in my homework at this time.\n";
    cout << "First, I ate a rotten " <<Food<< ", which made me turn " <<Color<< 
            "and extremely ill.\n";
    cout << "I came down with a fever of " <<Number<< ".\n";
    cout << "Next, my "<<Adjective<< " pet " <<Animal<< 
            " must have smelled the remains of the " <<Food<<
            " on my homework, because he ate it.\n";
    cout << "I am currently rewriting my homework and hope you will accept it late.\n\n";
    cout << "Sincerely,\n";
    cout << YourName;
    
    //Exit stage right!
    return 0;
}