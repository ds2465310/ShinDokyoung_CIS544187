/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 20, 2017, 7:42 PM
  Purpose: Calculate Function of Exp.
 */

#include <cmath>


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
    double x, Add, Fact;
    char Answer;
    do
    {
    //Input values
        cout << "Enter value of x: ";
        cin >> x;
        cout << "\n The value of exp(" << x << "): "<< exp(x) <<endl;
        cout << "The value of e^x for n = 1 to 100 using the equation: "<< endl;
        Add = 1;
    //Process by mapping inputs to outputs
    
    //Output values
    for (int n = 1; n <= 100; n++)
    {
        Fact = 1;
        for (int m = n; m > 0; m--)
            Fact = Fact * m;
        Add = Add + std::pow(x,n)/Fact;
        if (n % 10 == 1)
            cout << Add << endl;
    }
    cout << "Do you want to try again? [Y/N]";
    cin >> Answer;
    
    }while (Answer == 'Y'||Answer =='y');

    //Exit stage right!
    return 0;
}