/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on May 5, 2017, 12:00 PM
  Purpose: Create a program current time with 12-hour notation.
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
    int currHours, currMins, hoursWait, minutesWait;
    int hrs, min;
    char choice;
    do
    {
    //Input values
        cout << "Enter present hours: ";
        cin >> currHours;
        cout << "Enter present minutes: ";
        cin >> currMins;
        cout << "Enter the number of hours to wait: ";
        cin >> hoursWait;
        cout << "Enter the number of minutes to wait: ";
        cin >> minutesWait;
    //Process by mapping inputs to outputs
        hrs = currHours + hoursWait;
        min = currMins + minutesWait;
    //Output values        
        if (min >= 60)
        {
            hrs++;
            min = min - 60;
        }
        if (hrs > 12)
        {
            hrs = hrs%12;
            cout << "Time: " << hrs << ":" << min << "PM" << endl;
        }
        else
        {
            cout << "Time: " << hrs << ":" << min << "AM" << endl;
        }      
        cout << "Do you want to try again? [Y/N]";
        cin >> choice;
    }while(choice=='Y'||choice=='y');
    //Exit stage right!
    return 0;
}