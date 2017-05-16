/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on May 15, 2017, 7:54 PM
  Purpose: Modify the selection sort function.
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void selectionSort(string[], int);
void displayArray(string[], int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int size = 20;
    string name[size] = { "Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
	"Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
	"Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
	"Moretti, Bella", "Wu, Hong", "Patel, Renee", "Harrison, Rose",
	"Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"};
    selectionSort(name, size);
    displayArray(name, size);
    return 0;
}
    //Selection Sort
void selectionSort(string array[], int size)
{
    int startScan, minIndex;
    string minValue;
    for (int startScan=0; startScan<(size-1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if(array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}
    //Display Array
void displayArray(string name[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << name[i] << endl;
    }
}

