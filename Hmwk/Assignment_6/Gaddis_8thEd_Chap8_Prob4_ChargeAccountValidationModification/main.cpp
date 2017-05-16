/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on May 15, 2017, 7:44 PM
  Purpose: Create a program to enter a charge account number with modification.
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
int binarySearch(int[], int, int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int size = 18;
    int validAccount[size] = { 5658845, 8080152, 1005231, 4520125, 4562555,
    6545231, 7895122, 5552012, 3852085, 8777541, 5050552, 7576651, 8451277,
    7825877, 7881200, 1302850, 1250255, 4581002 };
    int accountNum, result;
    //Input values
    cout << "Enter your charge account number: ";
    cin >> accountNum;
    //Output values
    result = binarySearch(validAccount, size, accountNum);
    if(result == -1)
        cout << "Account number is invalid." << endl;
    else
        cout << "Account number is valid." << endl;
    //Exit stage right!
    return 0;
}
int binarySearch(int validAccount[], int size, int accountNum)
{
    int first = 0;
    int last = size = -1;
    int middle;
    int position = -1;
    bool found = false;
    while (!found && first <= last)
    {
        if (validAccount[middle] == accountNum)
        {
            found = true;
            position = middle;
        }
        else if (validAccount[middle] > accountNum)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}