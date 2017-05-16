/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on May 15, 2017, 8:34 PM
  Purpose: Modify the binary search function.
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
int binarySearch(string[], int, string);
void selectionSort(string[], int);
string getValue();
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int size = 20;
    string name[size] = { "Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
	"Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
	"Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
	"Moretti, Bella", "Wu, Hong", "Patel, Renee", "Harrison, Rose",
	"Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"};
    string value;
    int result;
    //Input Value
    selectionSort(name, size);
    //Process by mapping inputs to outputs
    value = getValue();
    result = binarySearch(name, size, value);
    //Output Value
    if(result == -1)
    {
        cout << "Name is not in the list." << endl;
    }
    else
    {
        cout << name[result] << " was found in subscript number " << result
                << endl;
    }
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
    //Get Value
string getValue()
{
    string input;
    cout << "Enter the name you would like to search for: ";
    cin >> input;
    return input;
}
    //Binary Search
int binarySearch(string array[], int size, string value)
{
    int first = 0;
    int last = size - 1;
    int middle;
    int position = - 1;
    bool found = false;
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}
