/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 20, 2017, 10:41 PM
  Purpose: Find Out the Sphere Will Sink Or Float in Water.
 */

//System Libraries
#include <iostream>
#include <cmath>
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
    const double PI = 3.141592653589793;
    float y = 62.4;
    float Weight, R;
    double Volume, BuoyantForce;
    char Answer;
    do
    {
    //Input values
        cout << "Enter weight of the object in pounds: ";
        cin >> Weight;
        cout << "Enter radius of the object in feet: ";
        cin >> R;
    //Process by mapping inputs to outputs
        Volume = (4/3) *(PI)*(std::pow(R,3));
        BuoyantForce = (Volume) * (y);
    //Output values        
        if (BuoyantForce >= Weight)
        {
            cout << "This Sphere will float!"<< endl;
        }
        else 
        {
            cout << "This Sphere will sink!" << endl;
        }
        cout << "Do you want to try again? [Y/N]";
        cin >> Answer;
    }while (Answer == 'Y'|| Answer == 'y');
    
    //Exit stage right!
    return 0;
}