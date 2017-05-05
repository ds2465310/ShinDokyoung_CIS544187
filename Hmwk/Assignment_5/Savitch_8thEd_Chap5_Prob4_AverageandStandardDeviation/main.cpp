/* 
  File:   main.cpp
  Author: Dokyoung Shin
  Created on May 5, 2017, 12:25 PM
  Purpose: Create a program to compute the average and standard deviation of
    four scores.
 * 
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
double Average (double s1, double s2, double s3, double s4);
double Standard_Deviation (double s1, double s2, double s3, double s4,
        double average, int n);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    double s1, s2, s3, s4;
    double avg, sdeviation;
    char choice;
    do
    {
    //Input values
        cout << "Enter score 1: ";
        cin >> s1;
        cout << "Enter score 2: ";
        cin >> s2;
        cout << "Enter score 3: ";
        cin >> s3;
        cout << "Enter score 4: ";
        cin >> s4;
    //Process by mapping inputs to outputs
        avg=Average(s1,s2,s3,s4);
        sdeviation = Standard_Deviation(s1,s2,s3,s4,avg,4);
    //Output values        
        cout << "Standard deviation: " << sdeviation << endl;
        cout << "Do you want to try again? [Y/N]";
        cin >> choice;
    }while (choice=='Y'||choice=='y');
}
double Average (double s1, double s2, double s3, double s4)
{
    return (s1+s2+s3+s4)/4;
}
double Standard_Deviation (double s1, double s2, double s3, double s4, 
        double mean, int n)
{
    double sd;
    sd = (pow((s1-mean),2)+pow((s2-mean),2)+pow((s3-mean),2)+pow((s4-mean),2))/n;
    sd = sqrt(sd);

    //Exit stage right!
    return sd;
}