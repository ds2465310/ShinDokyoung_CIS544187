/* 
  File:   main.cpp
  Author: Dokyoung Shin
  Created on June 2, 2017, 6:52 PM
  Purpose: Project 2 Black Jack Game.
 */

//System Libraries
#include <iostream> // Needed to use Input and Output library
#include <string> // Needed to use strings
#include <fstream> // Needed to use stream Input and Output files
#include <cstdlib> // Needed to use random function
#include <ctime> // Needed to use time for random and program
#include <iomanip> // Needed to use control the Output format
using namespace std;

//Global Constants

//Function Prototypes
void dealCard(string card[], int& randCard, string suit[], int& randSuit);
void prntCard(string card[], int& randCard, string suit[], int& randSuit);
int calc(int& randCard, int& value);

//Execution Starts Here
int main(int argc, char** argv) {
    //Random Seed
    srand(time(0));    
    //Variable Declaration
    int value, playerTotal, runTotal;
    int dealerTotal, dealrunTotal;
    int randCard, randSuit;
    int choice;
    char answer;
    string suit[4]={"of Hearts","of Diamonds","of Spades","of Clubs"};
    string card[14]={"Ace","2","3","4","5","6","7","8","9","10","Ace","Jack","Queen","King"}; 
    ifstream infile;
    ofstream outfile;
    bool exitMenu = true;
    string welcome;

    do{
        //Introduction Menu
        cout << "\n*************Game Menu*************\n";
        cout << "Enter 1 for Play BlackJack Game.\n";
        cout << "Enter 2 for See the Rule of Game.\n";
        cout << "Enter any key for Close the Game.\n";
        cout << "***********************************\n";
        cout << "\n Enter your choice: ";
        cin >> choice;//Input your choice
        //Solve the problem chosen
        switch(choice){
            case 1:     
    //Initialize Player and Dealer Running Totals
    dealrunTotal = 0;
    runTotal = 0; 
    //Open File input.dat
                        infile.open("input.dat");
                            if(infile.fail())
                             {
                                cout << "Input file failed to open.\n";
                                exit(1);
                            }
                        while (infile >> welcome)
                        {
                            cout << welcome << " ";
                        }
                        infile.close();
                        cout << endl << endl;
    //Function
    dealCard(card,randCard,suit,randSuit);
    prntCard(card,randCard,suit,randSuit);
    calc(randCard, value);
    //Value of Ace
    if(value == 1)
    {
        value = 11;
    }//End of Value of Ace
        playerTotal = runTotal + value;
        runTotal = playerTotal;
    cout << " | ";
    dealCard(card,randCard,suit,randSuit);
    prntCard(card,randCard,suit,randSuit);
    calc(randCard, value);
    
    //Value of Ace for Additional Cards
    if(runTotal>10&&value==11)
    {
        value=1;
    }
    else if(runTotal<=10&&value==1)
    {
        value=11;
    }    //End of Ace Re-Adjustment   
        playerTotal = runTotal + value;
        cout << "\n\nYour score is " << playerTotal << "." << endl;
                       //Player can get additional card if total score is less than 21
                       // First Player's Additional Card
                       if(playerTotal<21)
                       {
                        cout << "Would you like another card? [Y/N]\n";
                        cin >> answer;
                           if (answer =='Y'||answer =='y'){
                               //Players Additional Cards
                               cout << "\n";
                               cout << "You have been dealt a ";
                               dealCard(card,randCard,suit,randSuit);
                               prntCard(card,randCard,suit,randSuit);
                               calc(randCard, value);
                               //Value of Ace for Additional Cards
                                if(playerTotal>10&&value==11){
                                    value=1;
                                }
                                else if(playerTotal<=10&&value==1){
                                    value=11;
                                }//End of Ace Re-Adjustment           
                               playerTotal = playerTotal + value;
                               cout << "\nYour new score is " << playerTotal << "." << endl;
                                    //Second Additional Card
                                    if (playerTotal<21)
                                    {
                                         cout << "Would you like another card? [Y/N]\n";
                                         cin >> answer;
                                         if (answer =='Y'||answer =='y'){
                                              //Players Additional Card
                                               cout << "\nYou have been dealt a ";
                                               dealCard(card,randCard,suit,randSuit);
                                               prntCard(card,randCard,suit,randSuit);
                                               calc(randCard, value);
                                               //Value of Ace for Additional Cards
                                                if(playerTotal>10&&value==11){
                                                    value=1;
                                                }
                                                else if(playerTotal<=10&&value==1){
                                                    value=11;
                                                }//End of Ace Re-Adjustment 
                                               playerTotal = playerTotal + value;
                                   cout << "\nYour new score is " << playerTotal << "." << endl;
                                   //Third Additional Card
                                   if (playerTotal<21)
                                   {
                                     cout << "Would you like another card? [Y/N]\n";
                                     cin >> answer;
                                     if (answer =='Y'||answer =='y'){
                                      //Players Additional Card
                                       cout << "\nYou have been dealt a ";
                                       dealCard(card,randCard,suit,randSuit);
                                       prntCard(card,randCard,suit,randSuit);
                                       calc(randCard, value);
                                       //Value of Ace for Additional Cards
                                        if(playerTotal>10&&value==11){
                                            value=1;
                                        }else if(playerTotal<=10&&value==1)
                                        {
                                            value=11;
                                        }//End of Ace Re-Adjustment       
                                       playerTotal = playerTotal + value;
                                   cout << "\nYour new score is " << playerTotal << "." << endl;
                                   //Fourth Additional Card
                                   if(playerTotal<21){
                                       cout << "Would you like another card? [Y/N]\n";
                                       cin >> answer;
                                     if (answer =='Y'||answer =='y'){
                                      //Players Additional Card
                                       cout<<"\nYou have been dealt a ";
                                       dealCard(card,randCard,suit,randSuit);
                                       prntCard(card,randCard,suit,randSuit);
                                       calc(randCard, value);
                                       //Value of Ace for Additional Cards
                                        if(playerTotal>10&&value==11){
                                            value=1;
                                        }
                                        else if(playerTotal<=10&&value==1){
                                            value=11;
                                        }//End of Ace Re-Adjustment       
                                       playerTotal = playerTotal + value;
                                   cout << "\nYour new score is " << playerTotal << "." << endl;
                                     }
                                   }
                                 }  
                               }
                                 }  
                               }
                            }
                           else;
                       }   
                       //Dealer's Card
                       cout << "\nThe house has been dealt the following cards: ";
                       cout << "\n";
                               dealCard(card,randCard,suit,randSuit);
                               prntCard(card,randCard,suit,randSuit);
                               calc(randCard, value);
                               //Value of Ace for Additional Cards
                                if(dealerTotal>10&&value==11){
                                    value=1;
                                }
                                else if(dealerTotal<=10&&value==1){
                                    value=11;
                                }//End of Ace Re-Adjustment  
                       dealerTotal = dealrunTotal + value;
                       dealrunTotal = dealerTotal;
                       do
                       {
                       cout << " | ";
                               dealCard(card,randCard,suit,randSuit);
                               prntCard(card,randCard,suit,randSuit);
                               calc(randCard, value);
                               //Value of Ace for Additional Cards
                                if(dealerTotal>10&&value==11){
                                    value=1;
                                }
                                else if(dealerTotal<=10&&value==1){
                                    value=11;
                                }//End of Ace Re-Adjustment  
                       dealerTotal = dealerTotal + value;
                       //Dealer can get additional card if total score is less than 16
                       }while(dealerTotal<16);
                       cout << "\nThe Dealer's score is " << dealerTotal << "." << endl;
                       //Outcome - Open File output.dat to write result
                         outfile.open("output.dat", ios::app);
                             if(outfile.fail()){
                                cout << "Input file failed to open.\n";
                                exit(1);
                            }
                       if(playerTotal ==21||(playerTotal>dealerTotal && playerTotal<21)){
                           cout << "\n";
                           cout << "***Congratulations! You are the winner!***";
                           outfile << "Win" << " " << endl;
                           cout << "\n";
                       }
                       else if(dealerTotal>21 && playerTotal<=21) {
                           cout << "\n";
                           cout << "***Congratulations! You are the winner!***";
                           outfile << "Win" << " " << endl;
                           cout << "\n";
                       }
                       else if(playerTotal>21){
                           cout << "\n";
                           cout << "***Bust!***";
                           outfile << "Loss" << " " << endl;
                           cout << "\n"; 
                       }
                       else if(playerTotal<dealerTotal && dealerTotal<=21){
                           cout << "\n";
                           cout << "***Dealer Wins***";
                           outfile << "Loss" << " " << endl;
                           cout << "\n";
                       }else if(playerTotal==dealerTotal){
                           cout << "\n";
                           cout << "***Stand-Off/Draw, Play Again***";
                           outfile << "Tie" << " " <<endl;
                           cout << "\n";
                       }
                         outfile.close();
                        //Exit Stage Right
                                break;
                                case 2:
                                    //Explains the Rule of BlackJack Game
                                cout << "*******************************BlackJack Game Rule**********************************\n";
                                cout << "Rule 1. The goal of Blackjack game is trying to make as close as 21 score."
                                        "Moreover, the way to win the game is to beat the dealer by getting a higher score than "
                                        "the dealer without going over 21 with any additional cards.\n";
                                cout << "Rule 2. All number cards are worth a number of points equal to their numerical value.";
                                cout << "Rule 3. In general, Ace is worth either 1 point or 11 points depends on the player’s "
                                        "decision. However, in this program, if player’s total score is less than 10 points, "
                                        "then program will add 11 points, if not it will add 1 point.\n";
                                cout << "Rule 4. Picture cards are worth 10 points.";
                                cout << "Kings = 10 points,\n Queens = 10 points,\n Jacks = 10 points\n";
                                cout << "**************************************************************************************";
                                cout << endl;
                                ;break;
                                default: exitMenu=false;
                            }
                        }while(exitMenu);
                        //Exit Stage Right
    return 0;
}
void dealCard(string card[], int& randCard, string suit[], int& randSuit){
    //Randomly Selects Card and Suit
    randSuit=rand()%4;
    randCard=rand()%14;
    card[randCard];
    suit[randSuit];
}
//Prints Card
void prntCard(string card[], int& randCard, string suit[], int& randSuit){
    //Outputs One Card
    cout<<right<<setw(2)<<card[randCard];
    cout<<" ";
    cout<<left<<setw(2)<<suit[randSuit];
}
//Function Calculates the Value of each card
int calc(int& randCard, int& value){
    //Assigns Value to Card Dealt
     if(randCard==0){
        value=1;
    }else if(randCard==1){
        value=2;
    }else if(randCard==2){
        value=3;
    }else if(randCard==3){
        value=4;
    }else if(randCard==4){
        value=5;
    }else if(randCard==5){
        value=6;
    }else if(randCard==6){
        value=7;
    }else if(randCard==7){
        value=8;
    }else if(randCard==8){
        value=9;
    }else if(randCard==9){
        value=10;
    }else if(randCard==10){
        value=11;
    }else if(randCard==11){
        value=10;
    }else if(randCard==12){
        value=10;
    }else if(randCard==13){
        value=10;
    }
     return value;
}