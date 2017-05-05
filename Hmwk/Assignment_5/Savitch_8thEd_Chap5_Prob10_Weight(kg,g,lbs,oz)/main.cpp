/* 
  File:   main.cpp
  Author: Dokyoung Shin
  Created on May 5, 2017, 4:02 PM
  Purpose: Create a program as problem_10 converts from kg and g into lbs and oz.
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void Input (float &pounds, float &ounce);
void Calculate (float &pounds, float &ounce, float kg, float g);
void Output (float pounds, float ounce, float kg, float g);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float pounds, ounce, kg, g;
    char choice;
    do
    {
    //Input values
        cout << "Converting Grams and Kilograms to Pounds and Ounce" << endl;
        Input (kg, g);
        Calculate (pounds, ounce, kg, g);
        Output (pounds, ounce, kg, g);
        cout << "Do you want to try again? [Y/N]";
        cin >> choice;
    }while (choice=='Y'||choice=='y');
    return 0;
}
void Input (float &kg, float &g)
{
    cout << "Kilograms: ";
    cin >> kg;
    cout << "Grams: ";
    cin >> g;
}
    //Process by mapping inputs to outputs
void Calculate (float &pounds, float &ounce, float kg, float g)
{
    pounds = (kg * 2.2046) + ((g/16)*2.2046);
    ounce = 16 * pounds;
}
    //Output values  
void Output (float pounds, float ounce, float kg, float g)
{
    cout << "There are " << pounds << " Pounds and " << ounce << "Ounces in" <<
            kg << "Kilograms, " << g << "Grams." << endl;
    //Exit stage right!
}