/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on May 5, 2017, 10:50 AM
  Purpose: Create the program to converts 24-hour to 12-notation
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
void overviewDate();
void inputData (int &hr, int &min);
void convert12Format (int &hr, char &type);
void displayData (int hr, int min, char type);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int hours, min;
    char type, answer;
    overviewDate( );
    do
        {
        inputData(hours,min);
        convert12Format(hours,type);
        displayData(hours,min,type);
        cout << "Do you want to try again? [Y/N]";
        cin >> answer;
    }while(answer=='Y'||answer=='y');
}
void overviewDate( )
{
    cout << "Converts 24-hour to 12-notation.\n";
}
//Read hours and minutes from the key board
void inputData(int &hr, int &min)
{
    using namespace std;
    cout << "Enter hours: ";
    cin >> hr;
    cout << "Enter minutes: ";
    cin >> min;
}
//Convert 24 hours format to 12 hours format
void convert12Format(int &hrs, char &type)
{
    if(hrs>12)
    {
        hrs=hrs%12;
        type='P';
    }
    else
        type='A';
}   
//Output values
void displayData(int hrs, int min, char t)
{
cout << "12-hour notation: " << endl;
cout << hrs << ":" << min << t << "M" << endl;
    //Exit stage right!
}