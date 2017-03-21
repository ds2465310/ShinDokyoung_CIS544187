/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 19, 2017, 2:54 PM
  Purpose: Computes the Cost of a Long-Distance Call.
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
    int Minutes, StartTime;
    char Answer;
    string Day;
    double Cost, Rate;
    
    do
    {
        
    //Input values
        cout << "Enter start time of the call (For Example, 2:30 = 2330) : ";
        cin >> StartTime;
        while (StartTime < 0 || StartTime >= 2400)
        {
            cout << "\n Invalid time.";
            cout << "Enter start time of the call (For Example, 2:30 = 2330) : ";
            cin >> StartTime;
        }
        cout << "Enter length of the call in minutes: ";
        cin >> Minutes;
        cout << "Enter the day of the week: ";
        cin >> Day;
        
    //Process by mapping inputs to outputs
    
    //Output values
        if (Day == "monday" || Day == "MONDAY" || Day == "tuesday" 
                || Day == "TUESDAY" || Day == "wednesday" || Day == "WEDNESDAY"
                || Day == "thursday" || Day == "THUSDAY" || Day == "friday"
                || Day == "FRIDAY")
        {
            if (StartTime >= 800 && StartTime <= 1800)
                Rate = 0.4;
            else 
                Rate = 0.25;
            Cost = Minutes * Rate;
            cout << "\n Rate for the call was " << "$" << Rate << "a minute"
                    << endl;
            cout << "Your total cost: " << "$" << Cost << endl;
        }
        else if (Day == "saturday" || Day == "SATURDAY" || Day == "sunday"
                || Day == "SUNDAY")
        {
            Rate = 0.15;
            Cost = Minutes * Rate;
            cout << "\n Rate for the call was " << Cost << endl;
        }
        else
            cout << "\n Invalid.";
        cout << "Do you want to try again? [Y/N]";
        cin >> Answer;
        
    }while (Answer == 'Y' || Answer == 'y');
    
    //Exit stage right!
    return 0;
}