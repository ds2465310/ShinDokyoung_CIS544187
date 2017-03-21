/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 19, 2017, 9:00 AM
  Purpose: Create a Program to Score a Rock-Scissor-Paper Game.
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
    char Player1, Player2, Answer;
    
    do
    { 
        cout << "This program helps you to score a rock-scissor-paper.\n";
        cout << "Player 1, Enter your choice [R/S/P] : ";
        cin >> Player1;
        cout << "Player 2, Enter your choice [R/S/P] : ";
        cin >> Player2;
        
    //Input values    
        Player1 = toupper(Player1);
        Player2 = toupper(Player2);
        
    //Process by mapping inputs to outputs
    
    //Output values    
        if (Player1 == Player2)
            cout << "Draw! Nobody wins." << endl;
        else
        {
            if (Player1 == 'P'|| Player1 == 'p')
            {
                if (Player2 == 'S'||Player2=='s')
                    cout << "Scissors cut Paper! Player 2 wins." << endl;
                else
                    cout << "Paper covers Rock! Player 1 wins." << endl;
            }
            if (Player1 == 'R'||Player1 == 'r')
            {
                if (Player2 == 'S'|| Player2 == 's')
                    cout << "Rock breaks Scissors! Player 1 wins." << endl;
                else
                    cout << "Paper covers Rock! Player 2 wins." << endl;
            }
            if (Player1 == 'S'|| Player1 == 's')
            {
                if (Player2 == 'P'||Player2 == 'p')
                    cout << "Scissors cut Paper! Player 1 wins." << endl;
                else 
                    cout << "Rock breaks Scissors! Player 2 wins." << endl; 
            }
        }
        cout << "Do you want to try again? [Y/N]" << endl;
        cin >> Answer;
    }while (Answer == 'Y' || Answer == 'y');
  
    //Exit stage right!
    return 0;
}