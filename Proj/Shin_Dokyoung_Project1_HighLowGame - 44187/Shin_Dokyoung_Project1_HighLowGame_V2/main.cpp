/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on April 13, 2017, 11:15 PM
  Purpose: Simulate a high-low game.
 */

//System Libraries
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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
    string playerName;
    int num;
    int guess;
    int tries = 0;
    char Answer;
    do
    {
    //Input values - random generator
        srand(time(0)); 
        cout << "\n\nWELCOME TO THE HIGH-LOW GAME\n\n";
        cout << "Enter your name : ";
        getline(cin, playerName);
               
    //Process by mapping inputs to outputs
        num = std::rand()%100 + 1;//random number between 1 to 100
               
    //Output values   
        do
        {
            cout << playerName << ", Enter a guess between 1 and 100: ";
            cin >> guess;
            if (guess <= 0 || guess > 100)
            {
                cout << "Please check the number!! It should be between 1 to 100."
                        "\nTry again.\n";
            }
            tries++;        
            if (guess > num)
            {
                cout << "Too high! Bad luck this time!!\n\n";
            }        
            else if (guess < num)
            {
                cout << "Too low! Bad luck this time!!\n\n";
            }
            else
            {
                cout << "\nCorrect! Your got it in " << tries <<
                                " guesses!\n";
            }        
        }while (guess!=num);
        cout << "Do you want to try again? [Y/N]";
        cin >> Answer;
    }while (Answer == 'Y'|| Answer == 'y');

    //Exit stage right!
    return 0;
}