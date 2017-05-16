/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on May 15, 2017, 5:28 PM
  Purpose: Create a program that accepts three arguments: an array, the size of
 *          the array, and a number n.  
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
void printLargerElemenets(int *a, int size, int num);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int a[50];
    int size, num;
    //Input values
    cout << "Please enter the size of the array: ";
    cin >> size;
    cout << "Please enter the elements into the array: ";    
    for (int i=0; i<size; i++)
    {
        cout << "a[" << i+1 << "]: ";
        cin >> a[i];
    }
    //Process by mapping inputs to outputs
    cout << "The elements entered are: " << endl;
    for (int i=0; i<size; i++)
    {
        cout << "[" << a[i] << "]   ";
    }
    //Output values
    cout << "\nTo print the array elements larger than the given number you need" 
            << " to enter a number." << endl;
    cout << "Enter a number: ";
    cin >> num;
    //Exit stage right!
    return 0;
}
void printLargerElements(int *a, int size, int num)
{
    cout << "Elements that are larger than the number ";
    cout << num << " are: " << endl;
    for (int i=0; i<size; i++)
    {
        if (a[i]>num)
            cout <<"[" << a[i] << "] ";
    }
    cout << endl;
}