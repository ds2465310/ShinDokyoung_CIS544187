/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 19, 2017, 3:39 PM
  Purpose: Create the Program That Solves Quadratic Equation To Find Its Roots.
 */

//System Libraries
#include <iostream>
#include <valarray>
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
    double a, b, c;
    double d, PositiveRoot, NegativeRoot;
    char Answer;
    
    do
    {
    //Input values
        cout << "Quadratic equation form: ax^2 + bx + c = 0\n";
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
        cout << "Enter the value of c: ";
        cin >> c;
        
    //Process by mapping inputs to outputs
        d = (b*b - 4*a*c);
        PositiveRoot = (((-b) + std::sqrt(d))/(2*a));
        NegativeRoot = (((-b) - std::sqrt(d))/(2*a));
        
    //Output values
        if (d == 0)
        {
            cout << "Root of equation is: " << -b/a << endl;
        }
        else if (d > 0)
        {
            cout << "Root of equation is: " << PositiveRoot;
            cout << " and " << NegativeRoot <<endl;
        }
        else 
        {
            cout << "Complex Roots." << endl;
            cout << "Root of equation is: "<< (-1*b)/(2*a) << " + "
                    << (std::sqrt(-1*d)) << "i" << endl;
        cout << (-1*b)/(2*a) << " - " << (std::sqrt(-1*d)) << "i" << endl; 
        }
        cout << "Do you want to try again? [Y/N]";
        cin >> Answer;
        
    }while (Answer == 'Y' || Answer == 'y');
    
    //Exit stage right!
    return 0;
}