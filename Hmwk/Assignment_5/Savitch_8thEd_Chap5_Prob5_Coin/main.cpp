/* 
  File:   main.cpp
  Author: Dokyoung Shin
  Created on May 5, 2017, 1:26 PM
  Purpose: Create a program to tell coin amount. 
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
void computeCoin (int coin_value, int &number, int &amount);
void inputData (int &amount);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int amount,number;
    char choice;
    do
    {
    //Input values
        inputData(amount);
        cout << amount << " cents can be given as" << endl;
        computeCoin(25, number, amount);
        cout << number << " quarter(s)";
        computeCoin(10, number, amount);
        cout << number << " dime(s)";
        cout << amount << " penny(pennies)" << endl;
        cout << "Do you want to try again? [Y/N]";
        cin >> choice;
    }while(choice=='Y'||choice=='y');
    return 0;
    
    //Process by mapping inputs to outputs
}
void computeCoin(int coin_value, int &number, int &amount)
{
    number = amount / coin_value;
    amount = amount - number * coin_value;
}
    //Output values 
void inputData(int &amount)
{
    cout << "Enter the amount of change in cents: ";
    cin >> amount;
    while(amount < 1 || amount > 99)
    {
        cout << "Amount between 1 and 99 (inclusive): ";
        cin >> amount;
    }
    cout << endl;
}