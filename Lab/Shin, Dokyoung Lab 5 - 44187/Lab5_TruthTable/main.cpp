/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 22, 2017, 5:17 PM
  Purpose: Create the Truth Table.
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
    bool x, y;
    
    //Output the Table Header
    cout << "X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !(X||Y) !(X&&Y) !X||!Y"
            << endl;
    
    //Determine First Row in the Table
    x = true; y = true;
    cout << (x?'T':'F') <<" ";
    cout << (y?'T':'F') <<"  ";
    cout << (!x?'T':'F') <<"  ";
    cout << (!y?'T':'F') <<"   ";
    cout << (x||y?'T':'F') <<"    ";
    cout << (x&&y? 'T':'F') <<" ";
    cout << endl;
    
    //Determine Second Row in the Table
    x = true; y = false;
    cout << (x?'T':'F') <<" ";
    cout << (y?'T':'F') <<"  ";
    cout << (!x?'T':'F') <<"  ";
    cout << (!y?'T':'F') <<"   ";
    cout << (x||y?'T':'F') <<"    ";
    cout << (x&&y?'T':'F') <<" ";
    cout << endl;

    //Exit stage right!
    return 0;
}