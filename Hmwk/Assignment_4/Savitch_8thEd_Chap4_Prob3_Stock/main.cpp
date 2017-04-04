/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 29, 2017, 5:01 PM
  Purpose: Find Out the Value of the User's Holdings.
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
    double StockCost (int x, int y, int z, int stock);
    int x, y, z, stock;
    double StockVal = 0;
    char Answer;
    do
    {
    //Input values
        cout << "Enter whole part of stock: ";
        cin >> x;
        cout << "Enter Numerator of fractional part: ";
        cin >> y;
        cout << "Enter Denominator of fractional part: ";
        cin >> z;
        cout << "Enter Number of Stocks: ";
        cin >> stock;
    //Process by mapping inputs to outputs
        StockVal = StockCost(x,y,z,stock);
    //Output values      
        cout << "Cost of single stock is " << StockVal<<"."<<endl;
        cout << "\n Do you want to try again? [Y/N]";
        cin >> Answer;
    }while (Answer == 'Y'|| Answer == 'y');


    //Exit stage right!
    return 0;
}
double StockCost (int x, int y, int z, int stock)
{
    double Price;
    Price = static_cast<double>(x * z + y)/(z * stock);
    return Price;
}