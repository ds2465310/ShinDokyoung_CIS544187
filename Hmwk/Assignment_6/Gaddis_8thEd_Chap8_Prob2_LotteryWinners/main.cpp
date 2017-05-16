/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on May 15, 2017, 7:18 PM
  Purpose: Create a program to find out the winning number of lottery.
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
int searchList (int[], int, int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int nums = 10;
    int picks[nums] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422,
    85647, 93121 };
    int winNums;
    int result;
    //Input values
    cout << "Enter this week's winning five-digit number of lottery: ";
    cin >> winNums;

    //Output values
    result = searchList(picks, nums, winNums);
    if (result == -1)
        cout << "Sorry, no winning ticket.";
    else
    {
        cout << "Congratulations!\nYou have the winning five-digit number "
                << picks[result] << endl;
    }
    //Exit stage right!
    return 0;
}
//Search List
int searchList(int picks[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;
    while (index < size && ! found)
    {
        if (picks[index] == value)
        {
            position = index;
            found = true;
        }
        index++;
    }
    return position;
}