/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on May 15, 2017, 4:58 PM
  Purpose: Create a program to track of sales for five different types of salsa.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
int getTotal(int [], int);
int posOfSmallest(int [], int);
int posOfLargest(int [], int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int NUM_TYPES = 5;
    int sales[NUM_TYPES];
    string name[NUM_TYPES] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int totalJarsSold, hiSalesProduct, loSalesProduct;
    //Input values
    for (int type=0; type<NUM_TYPES; type++)
    {
        cout << "Please enter number of jars sold last month of " << name[type] << ": ";
        cin >> sales[type];
        while(sales[type]<0)
        {
            cout << "Jars sold must be 0 or more. Please re-enter.";
            cin >> sales[type];
        }
    }
    //Process by mapping inputs to outputs
    totalJarsSold = getTotal(sales, NUM_TYPES);
    loSalesProduct = posOfSmallest(sales, NUM_TYPES);
    hiSalesProduct = posOfLargest(sales, NUM_TYPES);
    //Output values
    cout << "Salsa Sales Report\n\n";
    cout << "Name         Jars sold\n";
    cout <<"_______________________\n";
    cout << name[0] << "           " << sales[0] << "\n";
    cout << name[1] << "         " << sales[1] << "\n";
    cout << name[2] << "          " << sales[2] << "\n";
    cout << name[3] << "            " << sales[3] << "\n";
    cout << name[4] << "          " << sales[4] << "\n";
    cout << "\n Total Sales: " << std::setw(15) << totalJarsSold << endl;
    cout << "Highest Seller: " << name[hiSalesProduct] << endl;
    cout << "Lowest Seller: " << name[loSalesProduct] << endl;
    //Exit stage right!
    return 0;
}
int getTotal(int array[], int numElts)
{
    int total = 0;
    for (int type=0; type < numElts; type++)
        total += array[type];
    return total;
}
int posOfLargest(int array[], int numElts)
{
    int indexOfLargest = 0;
    for (int pos=1; pos<numElts; pos++)
    {
        if (array[pos]>array[indexOfLargest])
            indexOfLargest = pos;
    }
    return indexOfLargest;
}
int posOfSmallest(int array[], int numElts)
{
    int indexOfSmallest = 0;
    for (int pos = 1; pos<numElts; pos++)
    {
        if (array[pos]<array[indexOfSmallest])
            indexOfSmallest = pos;
    }
    return indexOfSmallest;
}