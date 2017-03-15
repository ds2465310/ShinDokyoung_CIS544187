/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 10, 2017, 2:14 PM
  Purpose:  Metric - Calculate The Number of Boxes
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
    double const Metric_ton = 35273.92;
    double ounce, boxes, weight, numofboxes;
    
    //Input values
    cout << "Enter the weight of a package of breakfast cereal in ounces:";
    cin >> ounce;
    
    //Process by mapping inputs to outputs
    weight = ounce / Metric_ton;
    cout << "The weight of the cereal: "<<weight<< endl;
    
    //Output values
    numofboxes = Metric_ton/ounce;
    cout <<"The number of boxes of cereal that will hold a ton: "<<numofboxes;
    
    //Exit stage right!
    
    return 0;
}