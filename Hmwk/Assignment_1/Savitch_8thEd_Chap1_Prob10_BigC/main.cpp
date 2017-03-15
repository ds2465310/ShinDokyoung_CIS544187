/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on February 27, 2017, 11:13 PM
  Purpose: Making a large C
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
    char X;
    
    //Input values
    cout << "This program makes a large C";
    cout << "with a letter what you choose. \n";
    cout << "Enter the letter: ";
    cin >> X;
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "\n\n";
    cout << "A Large C with the letter " <<X;
    cout << "\n\n";
    cout << "    "<<X<<" "<<X<<" "<<X<<endl;
    cout << "  "<<X<<"       "<<X<<endl;
    cout << " "<<X<<endl;
    cout << " "<<X<<endl;
    cout << " "<<X<<endl;
    cout << " "<<X<<endl;
    cout << "  "<<X<<"       "<<X<<endl;
    cout << "    "<<X<<" "<<X<<" "<<X<<endl;
    
    //Exit stage right!
    return 0;
}