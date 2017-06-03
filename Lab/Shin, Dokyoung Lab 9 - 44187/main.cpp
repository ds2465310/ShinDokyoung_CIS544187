/* 
  File:   main.cpp
  Author: Dokyoung Shin
  Created on May 30, 2017, 6:26 PM
  Purpose: 
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void filAray(int *, int);
void prntAry(int *, int, int);
void mrkSort(int *, int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int SIZE = 0;
    cout << "Enter the size of array: ";
    cin >> SIZE;
    int array[SIZE] = {};
    
    //Input values
    filAray(array, SIZE);
    prntAry(array, SIZE, 10);
    
    //Process by mapping inputs to outputs
    mrkSort(array, SIZE);
    
    //Output values
    prntAry(array, SIZE, 10);
    //Exit stage right!
    return 0;
}

void mrkSort(int *a, int n)
{
    for (int pos = 0; pos < n-1; pos++)
    {
        for (int indx = pos + 1; indx < n; indx++)
        {
            if(*(a + pos) > *(a + indx))
            {
                int temp = *(a + pos);
                *(a + pos) = *(a + indx);
                *(a + indx) = temp;
            }
        }
    }
}

void prntAry(int *a, int n, int perLine)
{
    for (int indx = 0; indx < n; indx++)
    {
        cout << *(a + indx) << "";
        if (indx%perLine == (perLine - 1))
        cout << endl;
    }
    cout << endl;
}

void filAray(int *a, int n)
{
    for (int indx = 0; indx < n; indx++)
    {
        *(a+indx) = rand()%90 + 10;
    }
}