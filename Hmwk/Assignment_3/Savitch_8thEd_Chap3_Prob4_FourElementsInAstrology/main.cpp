/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on March 20, 2017, 10:09 PM
  Purpose: Create 4 Elements in Astrology Program.
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
    int Month, Date;
    int StartDate, StartMonth, EndDate, EndMonth;
    char Answer;
    do
    {
    //Input values
        cout << "Enter the day of month for your birthday: ";
        cin >> Date;
        cout << "Enter the month of your birthday: ";
        cin >> Month;
    //Process by mapping inputs to outputs
    
    //Output values  
        if (Month > 12 || Date > 31)
            cout << "Invalid Input";
        else 
        {
            StartDate = 21;
            EndDate = 19;
            StartMonth = 3;
            EndMonth =4;
            if ((Month == StartMonth && Date >= StartDate) ||
                    (Month ==EndMonth && Date <= EndDate))
            {
                cout << "Your sign is Aries. \n";
                if (Date >= EndDate -3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Taurus.\n";
                else if (Date <= StartDate +3)
                    cout << "You are a cusp baby and with adjacent sign is "
                            "Pieces.\n";
                    cout << "Leo and Sagittarius will be compatible for your"
                            "birthday.\n";
            }
            StartDate = 20;
            EndDate = 20;
            StartMonth = 4;
            EndMonth = 5;
            if ((Month == StartMonth && Date == StartDate) ||
                    (Month == EndMonth && Date <= EndDate))
            {
                cout << "Your sign is Taurus. \n";
                if (Date >= EndDate -3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Gemini.\n";
                else if (Date <= StartDate +3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Aries.\n";
                    cout << "Virgo and Capricorn will be compatible for your"
                            "birthday.\n";
            }
            StartDate = 21;
            EndDate = 21;
            StartMonth = 5;
            EndMonth = 6;
            if ((Month == StartMonth && Date >= StartDate) ||
                    (Month == EndMonth && Date <= EndDate))
            {
                cout << "Your sign is Gemini.\n";
                if (Date >= EndDate -3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Cancer.\n";
                else if (Date <= StartDate +3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Taurus.\n";
                    cout << "Libra and Aquarius will be compatible for your"
                            "birthday.\n";
            }
            StartDate = 22;
            EndDate = 22;
            StartMonth = 6;
            EndMonth = 7;
            if ((Month == StartMonth && Date >= StartDate) ||
                    (Month == EndMonth && Date <= EndDate))
            {
                cout << "Your sign is Cancer.\n";
                if (Date >= EndDate -3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Leo.\n";
                else if (Date <= StartDate +3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Gemini.\n";
                    cout << "Scorpio and Pisces will be compatible for your"
                            "birthday.\n";
            }
            StartDate = 23;
            EndDate = 22;
            StartMonth = 7;
            EndMonth = 8;
            if ((Month == StartMonth && Date >= StartDate) ||
                    (Month == EndMonth && Date <= EndDate))
            {
                cout << "Your sign is Leo.\n";
                if (Date >= EndDate -3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Virgo.\n";
                else if (Date <= StartDate +3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Cancer.\n";
                    cout << "Aries and Sagittarius will be compatible for your"
                            "birthday.\n";
            }
            StartDate = 23;
            EndDate = 22;
            StartMonth = 8;
            EndMonth = 9;
            if ((Month == StartMonth && Date >= StartDate) ||
                    (Month == EndMonth && Date <= EndDate))
            {
                cout << "Your sign is Virgo.\n";
                if (Date >= EndDate -3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Libra.\n";
                else if (Date <= StartDate +3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Leo.\n";
                    cout << "Taurus and Capricorn will be compatible for your"
                            "birthday.\n";
            }
            StartDate = 23;
            EndDate = 22;
            StartMonth = 9;
            EndMonth = 10;
            if ((Month == StartMonth && Date >= StartDate) ||
                    (Month == EndMonth && Date <= EndDate))
            {
                cout << "Your sign is Libra.\n";
                if (Date >= EndDate -3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Scorpio.\n";
                else if (Date <= StartDate +3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Virgo.\n";
                    cout << "Gemini and Aquarius will be compatible for your"
                            "birthday.\n";
            }
            StartDate = 23;
            EndDate = 21;
            StartMonth = 10;
            EndMonth = 11;
            if ((Month == StartMonth && Date >= StartDate) ||
                    (Month == EndMonth && Date <= EndDate))
            {
                cout << "Your sign is Scorpio.\n";
                if (Date >= EndDate -3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Sagitarius.\n";
                else if (Date <= StartDate +3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Libra.\n";
                    cout << "Cancer and Pisces will be compatible for your"
                            "birthday.\n";
            }
            StartDate = 22;
            EndDate = 21;
            StartMonth = 11;
            EndMonth = 12;
            if ((Month == StartMonth && Date >= StartDate) ||
                    (Month == EndMonth && Date <= EndDate))
            {
                cout << "Your sign is Sagittarius.\n";
                if (Date >= EndDate -3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Sagittarius.\n";
                else if (Date <= StartDate +3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Libra.\n";
                    cout << "Aries and Leo will be compatible for your"
                            "birthday.\n";
            }
            StartDate = 22;
            EndDate = 19;
            StartMonth = 12;
            EndMonth = 1;
            if ((Month == StartMonth && Date >= StartDate) ||
                    (Month == EndMonth && Date <= EndDate))
            {
                cout << "Your sign is Capricorn.\n";
                if (Date >= EndDate -3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Aquarius.\n";
                else if (Date <= StartDate +3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Sagittarius.\n";
                    cout << "Taurus and Virgo will be compatible for your"
                            "birthday.\n";
            }
            StartDate = 20;
            EndDate = 18;
            StartMonth = 1;
            EndMonth = 2;
            if ((Month == StartMonth && Date >= StartDate) ||
                    (Month == EndMonth && Date <= EndDate))
            {
                cout << "Your sign is Aquarius.\n";
                if (Date >= EndDate -3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Pisces.\n";
                else if (Date <= StartDate +3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Capricorn.\n";
                    cout << "Gemini and Libra will be compatible for your"
                            "birthday.\n";
            }
            StartDate = 19;
            EndDate = 20;
            StartMonth = 2;
            EndMonth = 3;
            if ((Month == StartMonth && Date >= StartDate) ||
                    (Month == EndMonth && Date <= EndDate))
            {
                cout << "Your sign is Pieces.\n";
                if (Date >= EndDate -3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Aries.\n";
                else if (Date <= StartDate +3)
                    cout << "You are a cusp baby and with adjacent sign is"
                            "Aquarius.\n";
                    cout << "Cancer and Scorpio will be compatible for your"
                            "birthday.\n";
            }
        }
        cout << "Do you want to try again? [Y/N]";
        cin >> Answer;
    }while (Answer == 'Y'|| Answer == 'y');


    //Exit stage right!
    return 0;
}