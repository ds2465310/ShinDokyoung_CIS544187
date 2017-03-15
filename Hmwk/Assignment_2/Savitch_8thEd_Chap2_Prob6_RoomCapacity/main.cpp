/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 10, 2017, 8:03 PM
  Purpose: Determines Whether a Meeting Room Is in Violation of Fire Law 
 Regulations Regarding the Maximum Room Capacity.
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
    int Number, RoomCapacity;
    char Answer;
    
    do
    {
    //Input values
        cout << "Enter the room capacity: ";
        cin >> RoomCapacity;
        cout <<"Enter the number of people in the meeting: ";
        cin >> Number;
        
    //Process by mapping inputs to outputs
    
    //Output values
        if (Number <= RoomCapacity)
            cout << "You can hold the meeting legally.";
        else if (Number > RoomCapacity)
            cout << "You can't hold the meeting.\n"
                    "If you still want to hold, "
                    "the meeting you have to exclude: "<<(Number-RoomCapacity) <<" guest(s)\n";
        cout << "Do you want to try again? (Y/N)";
        cin >> Answer;
    }while (Answer=='Y');
    
    //Exit stage right!
    return 0;
}