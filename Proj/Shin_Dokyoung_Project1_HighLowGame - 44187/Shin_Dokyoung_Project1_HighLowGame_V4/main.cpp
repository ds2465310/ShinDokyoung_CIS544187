/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on April 16, 2017, 10:15 AM
  Purpose: Simulate a high low game.
 */

//System Libraries
#include <iostream> // Needed to use Input - Output Library 
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime> // Needed to use time for rand
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
    int amount; // player's balance amount
    int bettingAmount; // player's betting amount
    int guess; // player's number guess
    int tries = 0;
    int num; // computer generated number
    char Answer;
   
    //Input values
    srand(time(0)); // Seed the random generator
    cout << "\n\nWELCOME TO THE HIGH-LOW GAME\n\n";
    cout << "Enter your name : ";
    getline(cin, playerName);
    cout << "\nEnter deposit amount to play game: $";
    cin >> amount;
    do
    {
        
    //Process by mapping inputs to outputs
    cout << "\n\t\tRULES OF THE GAME\n";
        cout << "\t1. Guess any number between 1 to 100.\n";
        cout << "\t2. If you win, you will get 10 times of money you bet.\n";
        cout << "\t3. It you bet on wrong number, you will lose your betting"
                " amoount.\n";
        cout << "\tGood Luck! Let's start the game.\n\n";
        cout << "\n\nYour current balance is $" << amount << ".\n"; 
        // Get player's betting amount
        do
        {
            cout << playerName << ", Enter the money to bet: $";
            cin >> bettingAmount;
            if (bettingAmount > amount)
            {
                cout << "Your betting amount is more than your current balance."
                        "\n" << "Try again.\n";
            }
        }while (bettingAmount > amount);
        
    //Get player's numbers
        num = rand()% 100 + 1; //will hold the randomly generated integer between 1 to 100
        do
        {
            cout << "Enter a guess between 1 and 100: ";
            cin >> guess;
            if (guess <= 0 || guess > 100)
            {
                cout << "Please check the number!! It should be between 1 to 100."
                        ".\n" << "Try again.\n";
            }
            
    //Output values   
            tries++;
            if (guess > num)
            {
                cout << "Too high! Bad Luck this time!!\n\n";
                cout << "You lost $" << bettingAmount << ".\n";
                amount = amount - bettingAmount;
            }
            else if (guess < num)
            {
                cout << "Too low! Bad Luck this time!!\n\n";
                cout << "You lost $" << bettingAmount << ".\n";
                amount = amount - bettingAmount;
            }
            else
            {
                cout << "\nCorrect! You got it in " << tries << " guesses!\n";
                cout << "Congratulation! You won $" << bettingAmount * 10 << 
                        ".\n\n";
                amount = amount + bettingAmount * 10;
            }
        }while (guess != num);
        
        //Random number between 1 and 100
        cout << "\nThe winning number was " << num << ".\n";
        cout << "\n" << playerName << ", You have $" << amount << ".\n";
        
        cout << "\n\nDo you want to play again? [Y/N]";
        cin >> Answer;
    }while(Answer == 'Y'|| Answer == 'y');
    
    cout << "\n\nThanks for playing game. Your balance amount is $" << amount <<
            ".\n\n"; 

    //Exit stage right!
    return 0;  
}
    