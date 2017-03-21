/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 20, 2017, 12:43 PM
  Purpose: Create the Program that Scores a Blackjack Hand.
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
    int CardNum, Value, TotalValue = 0;
    char Answer, Card;
    
    do
    {
    //Input values
        cout << "Enter number of cards in your hand: ";
        cin >> CardNum;
        
    //Process by mapping inputs to outputs

    //Output values
        for (int n = 1; n <= CardNum; n++)
        {
            cout << "Enter the value of card " << n << ". For card 2 - 9 enter"
                    "2 - 9 \n" << " and for 10, Jack, Queen, and King enter "
                    "t, j ,q, k \n";
            cin >> Card;
            switch (Card)
            {
                case '2':
                    Value = 2;
                    cout << "The value of card " << n << " is " << Value <<endl;
                    TotalValue = Value + TotalValue;
                    break;
                case '3':
                    Value = 3;
                    cout << "The value of card " << n << " is " << Value <<endl;
                    TotalValue = Value + TotalValue;
                    break;
                case '4':
                    Value = 4;
                    cout << "The value of card " << n << " is "<< Value << endl;
                    TotalValue = Value + TotalValue;
                    break;
                case '5':
                    Value = 5;
                    cout << "The value of card " << n << " is "<< Value << endl;
                    TotalValue = Value + TotalValue;
                    break;
                case '6':
                    Value = 6;
                    cout << "The value of card " << n << " is "<< Value << endl;
                    TotalValue = Value + TotalValue;
                    break;
                case '7':
                    Value = 7;
                    cout << "The value of card " << n << " is "<< Value << endl;
                    TotalValue = Value + TotalValue;
                    break;
                case '8':
                    Value = 8;
                    cout << "The value of card "<< n << " is "<< Value << endl;
                    TotalValue = Value + TotalValue;
                    break;
                case '9':
                    Value = 9;
                    cout << "The value of card "<< n << " is "<< Value << endl;
                    TotalValue = Value + TotalValue;
                    break;
                case 't':
                case 'T':
                    Value = 10;
                    cout << "The value of card "<< n << " is "<< Value << endl;
                    TotalValue = Value + TotalValue;
                    break;
                case 'j':
                case 'J':
                    Value = 10;
                    cout << "The value of card "<< n << " is "<< Value << endl;
                    TotalValue = Value + TotalValue;
                    break;
                case 'q':
                case 'Q':
                    Value = 10;
                    cout << "The value of card "<< n << " is "<< Value << endl;
                    TotalValue = Value + TotalValue;
                    break;
                case 'k':
                case 'K':
                    Value = 10;
                    cout << "The value of card "<< n << " is "<< Value << endl;
                    TotalValue = Value + TotalValue;
                    break;
                case 'a':
                case 'A':
                    if (TotalValue <= 10)
                    {
                        Value = 11;
                    }
                    else 
                    {
                        Value = 1;
                    }
                    cout << "The value of card is "<< Value << endl;
                    TotalValue = TotalValue + Value;
                    n++;
                default:
                    cout << "Error: Not Valid Entry.\n";
            }
            if (TotalValue <= 21)
            {
                cout << "Total Value of cards is "<< TotalValue << "."<< endl;
            }
            else
            {
                cout << "Busted.\n";
            }
        }        
        cout << "Do you want to try again? [Y/N]";
        cin >> Answer;
    }while (Answer == 'Y' || Answer == 'y');

    //Exit stage right!
    return 0;
}