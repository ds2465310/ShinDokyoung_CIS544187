/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on April 3, 2017, 1:09 PM
  Purpose: Calculate Clothing Sizes.
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
    double hat (double height, double weight);
    double jacket (double height, double weight, int age);
    double waist (double height, double weight, int age);
    double height, weight, hatsize;
    int age;
    char Answer;
    do
    {
    //Input values
        cout << "Enter your height in inches: ";
        cin >> height;
        cout << "Enter your weight in pounds: ";
        cin >> weight;
        cout << "Enter your age: ";
        cin >> age;
        
    //Process by mapping inputs to outputs
        hatsize = (weight/height) * 2.9;
    //Output values        
        cout << "Your hat size is " << hatsize << ".\n";
        cout << "Your jacket size is " << jacket(height, weight, age) <<".\n";
        cout << "Your waist size is " << waist(height, weight, age) << ".\n";
        cout << "Do you want to try again? [Y/N]";
        cin >> Answer;
    }while (Answer =='Y' || Answer == 'y');


    //Exit stage right!
    return 0;
}
double jacket (double height, double weight, int age)
{
    double size;
    int j;
    if (age>=30)
    {
        if((age%10) !=0)
            age = age-(age%10);
        j=(age-30)/10;
        size = ((height *weight)/288)+((1.0/8)*j);
    }
    else
        size = ((height * weight) / 288);
    return size;
}
double waist (double height, double weight, int age)
{
    double size2;
    int k;
    if (age >= 28)
    {
        if((age%2) !=0)
            age = age - (age%2);
        k = (age-28)/2;
        size2 = (weight/(5.7))+((1.0/10)*k);
    }
    else
        size2 = weight / (5.7);
    return size2;
}