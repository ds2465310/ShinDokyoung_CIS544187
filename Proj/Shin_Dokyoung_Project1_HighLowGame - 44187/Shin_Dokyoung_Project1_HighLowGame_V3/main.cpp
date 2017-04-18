/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on April 13, 2017, 2:34 PM
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
    int num; // computer generated number
    int guess; // player's number guess
    int tries = 10; // Player has 10 chances to try
    
    //Input values - random generator
        srand(time(0));
        cout << "\n\n\tWELCOME TO THE HIGH-LOW GAME\n\n";
        cout << "\n\t\tRULES OF THE GAME\n";
        cout << "\t1. Guess any number between 1 to 100.\n";
        cout << "\t2. You have 10 chances to try.\n";
        cout << "\t3. If you run out of chances, you will lose.\n";
        cout << "\tGood Luck! Let's start the game.\n\n";
        cout << "Enter your name : ";
        getline(cin,playerName);
        
    //Process by mapping inputs to outputs
        num = rand()%100 + 1; // random number between 1 and 100
    
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
          tries--;
          if (guess > num)
          {
              cout << "Too high! Bad luck this time!!\n\n";
              cout << "You left " << tries << " chances.\n";
              if (tries == 0)
              {
                  cout << "You have run out of chances!" <<endl;
              }
          }
          else if (guess < num)
          {
              cout << "Too low! Bad luck this time!!\n\n";
              cout << "You left " << tries << " chances.\n";
              if (tries == 0)
              {
                  cout << "You have run out of chances!" <<endl;
              }
          }
          else
          {
              cout << "\nCorrect! You got it!\n";
          }
          
        }while(guess != num);
    
    //Exit stage right!
    return 0;
}