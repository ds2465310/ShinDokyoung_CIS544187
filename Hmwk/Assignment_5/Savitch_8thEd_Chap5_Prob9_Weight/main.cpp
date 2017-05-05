/* 
  File:   main.cpp
  Author: Dokyoung Shin
  Created on May 5, 2017, 3:29 PM
  Purpose: Create a program convert the weight unit.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const double KILOGRAMS_PER_POUND = 2.2046;
const double GRAMS_PER_KILOGRAMS = 1000;
const double OUNCES_PER_POUND = 16;
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void Input (double &pounds, double &ounces);
void Calculate (double pounds, double ounces, double &kg, double &g);
void Output (double pounds, double ounces, double kg, double g);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    double pounds, ounces, kg, g;
    char choice;
    do
    {
        Input (pounds, ounces);
        Calculate (pounds, ounces, kg, g);
        cout << "Do you want to try again? [Y/N]";
        cin >> choice;
    }while (choice == 'Y'|| choice =='y');
    return 0;
}
    //Input values
void Input (double &pounds, double &ounces)
{
    cout << "Enter the weight in pounds: ";
    cin >> pounds;
    while(pounds < 0)
    {
        cout << "Enter the valid number of pounds: ";
        cin >> pounds;
    }
    cout << "Enter the weight in ounces: ";
    cin >> ounces;
    while (ounces < 0)
    {
        cout << "Enter the valid number of ounces: ";
        cin >> ounces;
    }
}
    //Process by mapping inputs to outputs
void Calculate (double pounds, double ounces, double kg, double g)
{
    double totalPounds;
    totalPounds = pounds + ounces / OUNCES_PER_POUND;
    kg = totalPounds / KILOGRAMS_PER_POUND;
    g = kg * GRAMS_PER_KILOGRAMS;
    g = (g - kg * GRAMS_PER_KILOGRAMS + 0.5);
}
    //Output values
void Output (double pounds, double ounces, double kg, double g)
{
    cout << pounds << " pounds and " << ounces << " ounces are equal to" << kg
            << " kilograms and " << g << " grams approximately." << endl;
    //Exit stage right!
}