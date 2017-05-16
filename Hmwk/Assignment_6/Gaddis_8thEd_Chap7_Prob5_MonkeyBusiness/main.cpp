/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on May 15, 2017, 5:55 PM
  Purpose: Create a program that tracking how many pounds of food each of three
         monkeys eats each day during a typical week.
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    const int monkeys = 3;
    const int days = 5;
    int dayTotal = 0;
    float pounds[days][monkeys];
    float poundTotal = 0;
    float avg;
    float lowest = 100000;
    float highest = 0;
    //Input values
    for (int i=0; i<days; i++)
    {
        for (int j=0; j<monkeys; j++)
        {
            cout << "Please enter the amount of food for monkey " << j+1
                    << " for day " << i+1 << ": ";
            cin >> pounds[i][j];
            if (pounds[i][j]<0)
            {
                cout << "Not a valid amount. Please re-enter.";
                cin >> pounds[i][j];
            }
        }
    }
    //Process by mapping inputs to outputs
    for (int i=0; i<days; i++)
    {
        for (int j=0; j<monkeys; j++)
        {
            poundTotal += pounds[i][j];
            dayTotal++;
            if (pounds[i][j]<lowest)
                lowest = pounds[i][j];
            if (pounds[i][j]>highest)
                highest = pounds[i][j];
        }
    }
    avg = poundTotal / dayTotal;        
    //Output values
    cout << "The average food eaten this week is " << avg << " pounds." << endl;
    cout << "The lowest amount of food eaten this week is " << lowest 
            << " pounds." << endl;
    cout << "The highest amount of food eaten this week is " << highest 
            << " pounds." << endl;
    //Exit stage right!
    return 0;
}