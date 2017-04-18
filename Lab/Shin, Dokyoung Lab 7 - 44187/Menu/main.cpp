/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on April 3, 2017, 5:38 PM
  Purpose: Menu To Be Utilized on Hmwk 4.
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
    char Answer;
    do
    {
    //Input values
        cout << "Type 1 for Problem 1" << endl;
        cout << "Type 2 for Problem 2" << endl;
        cout << "Type 3 for Problem 3" << endl;
        cout << "Type 4 for Problem 4" << endl;
        cout << "Type 5 for Problem 5" << endl;
        cout << "Type 6 for Problem 6" << endl;
        cout << "Type 7 for Problem 7" << endl;
        cout << "Type 8 for Problem 8" << endl;
        cout << "Type 9 for Problem 9" << endl;
        cout << "Type 10 for Problem 10" << endl << endl; 
        cout << "Enter the problem number to see solution: ";
        cin >> Answer;
    //Process by mapping inputs to outputs
        switch (Answer){
            case '1':{
                //Declare Variables
                double const LIT = 0.264172;
                double MPG(int miles, int liters);
                double gallons;
                int liters, miles;
                //Input values
                cout << "Enter the number of Liters of gasoline: ";
                cin >> liters;
                cout << "Enter the number of Miles traveled by the car: ";
                cin >> miles;
                //Process by mapping inputs to outputs
                gallons = LIT * liters;
                //Output values 
                cout << "Number of miles per gallon: " << MPG(miles,liters);
                break;
            }
            case '2':{
                //Declare Variables
                double const LITERPERGALLON = 3.785;
                double MPG (double miles, double liters)
                int Fliters, Fmiles, Sliters, Smiles;
                int FMPG, SMPG;
                //Input values
                cout << "Enter miles traveled by first car: ";
                cin >> Fmiles;
                cout << "Enter liters gasoline: ";
                cin >> Fliters;
                cout << "Enter miles traveled by second car: ";
                cin >> Smiles;
                cout << "Enter liters gasoline: ";
                cin >> Sliters;
                //Process by mapping inputs to outputs
                MPG = (miles * LITERPERGALLON/liters);
                //Output values        
                if (Fliters == 0 || Sliters == 0)
                    cout << "\n Invalid Input";
                else
                {
                    FMPG = MPG (Fmiles, Fliters);
                    SMPG = MPG (Smiles, Sliters);
                    cout <<"First car's Miles per Gallon is "<<FMPG<<"."<<endl;
                    cout <<"Second car's Miles Per Gallon is "<<SMPG<<"."<<endl;
                }
                if (FMPG == SMPG)
                {
                    cout << "Both cars are best."<<endl;
                }
                else if (FMPG > SMPG)
                {
                    cout << "First car is best."<<endl;
                }
                else 
                    cout << "Second car is best."<<endl;
                break;
            }    
            case '3':{
                //Declare Variables
                double StockCost (int x, int y, int z, int stock);
                double Price;
                int x, y, z, stock;
                double StockVal = 0;
                //Input values
                cout << "Enter whole part of stock: ";
                cin >> x;
                cout << "Enter Numerator of fractional part: ";
                cin >> y;
                cout << "Enter Denominator of fractional part: ";
                cin >> z;
                cout << "Enter Number of Stocks: ";
                cin >> stock;
                //Process by mapping inputs to outputs
                StockVal = StockCost(x,y,z,stock);
                Price = static_cast<double>(x * z + y)/(z * stock);
                //Output values      
                cout << "Cost of single stock is " << StockVal<<"."<<endl;
                break;
            }
            case '4':{
                //Declare Variables
                double Inflation (double pre_price, double cur_price);
                double pre_price, cur_price, Rate;
                //Input values
                cout << "Enter previous year cost of the item: $";
                cin >> pre_price;
                cout << "Enter present year cost of the item: $";
                cin >> cur_price;
                //Process by mapping inputs to outputs
                Rate = ((cur_price - pre_price)/cur_price);
                //Output values
                cout << "Rate of inflation: " << Rate * 100 << "%" << endl;
                break;
            }
            case '5':{
                //Declare Variables
                double Inflation (double pre_price, double cur_price);
                double Estimated (double cur_price, double rate);
                double pre_price, cur_price, Rate, Total;
                //Input values
                cout << "Enter previous year cost of the item: $";
                cin >> pre_price;
                cout << "Enter present year cost of the item: $";
                cin >> cur_price;   
                //Process by mapping inputs to outputs
                Rate = ((cur_price - pre_price)/cur_price);
                Total = (cur_price * Rate);
                //Output values
                cout << "Rate of inflation: " << Rate * 100 << "%" << endl;
                cout << "Estimated " << Total << ".\n";
                break;
            }
            case '6':{
                //Declare Variables
                double Interest (double Balance, double Rate, int Months);
                double Balance, Rate, Total;
                int Months;
                //Input values
                cout << "Enter your interest rate: ";
                cin >> Rate;
                cout << "Enter your initial balance: $";
                cin >> Balance;
                cout << "Enter the number of months: ";
                cin >> Months;
                //Process by mapping inputs to outputs
                Total = Interest (Balance, Rate, Months);
                for (int i = Months; i > 0; i--)
                {
                    Total += ((Balance * Rate)/(100 * 12));
                    Balance += ((Balance * (100 + Rate))/(100 * 12));
                }
                //Output values
                    cout << "\nInterest due: "<< Total;
                break;
            }
            case '7':{
                //Declare Variables
                double G = 6.673E-8;
                double Gravity (double m1, double m2, double d);
                double m1, m2, d, GravityForce;
                //Input values
                cout << "Enter mass of first body: ";
                cin >> m1;
                cout << "Enter mass of second body: ";
                cin >> m2;
                cout << "Enter distance between two bodies: ";
                cin >> d;
                //Process by mapping inputs to outputs
                GravityForce = (G * m1 * m2)/(d * d);
                //Output values    
                cout << "Gravitational force between two bodies is " 
                        <<GravityForce<<".\n";
                break;
            }
            case '8':{
                //Declare Variables
                double Interest_Cal(double Rate, double Months, double Balance);
                double Rate, Months, Interest, Balance;
                double Total_int = 0;
                //Input values
                cout << "Enter your initial balance: $";
                cin >> Balance;
                cout << "Enter your rate: ";
                cin >> Rate;
                cout << "Enter the number of months: ";
                cin >> Months;
                //Process by mapping inputs to outputs
                Rate = Rate * 0.01/12;
                Interest = Interest_Cal(Rate, Months, Balance);
                //Output values        
                cout << "Your interest owed is "<<Interest <<".\n";
                for (int count = 1; count <= Months; count++)
                    {
                        Interest = Rate * Balance;
                        Balance = Balance + Interest;
                        Total_int += Interest;
                    }
                break;
            }
            case '9':{
                //Declare Variables
                double hat (double height, double weight);
                double jacket (double height, double weight, int age);
                double waist (double height, double weight, int age);
                double height, weight, hatsize;
                int age, j, k;
                double size, size2;
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
                if (age>=30)
                    {
                        if((age%10) !=0)
                            age = age-(age%10);
                        j=(age-30)/10;
                        size = ((height *weight)/288)+((1.0/8)*j);
                    }
                    else
                        size = ((height * weight) / 288);
                
                cout << "Your waist size is " << waist(height, weight, age) << ".\n";
                if (age >= 28)
                    {
                        if((age%2) !=0)
                            age = age - (age%2);
                        k = (age-28)/2;
                        size2 = (weight/(5.7))+((1.0/10)*k);
                    }
                    else
                        size2 = weight / (5.7);
                break;
            }
            case '10':{
                //Declare Variables
                double hat (double height, double weight);
                double jacket (double height, double weight, int age);
                double waist (double height, double weight, int age);
                double height, weight, hatsize, size, size2;
                int age, j, k;
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
                cout << "Your jacket size is " << jacket(height, weight, age)
                        <<".\n";
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
                cout << "Your waist size is " << waist(height, weight, age)
                        << ".\n";
                if (age >= 28)
                    {
                        if((age%2) !=0)
                            age = age - (age%2);
                        k = (age-28)/2;
                        size2 = (weight/(5.7))+((1.0/10)*k);
                    }
                    else
                        size2 = weight / (5.7);
                cout << "Your jacket size after 10 years is "
                        << jacket(height, weight, age + 10) << ".\n";
                cout << "Your waist size after 10 years is "
                        << waist (height, weight, age + 10) << ".\n"; 
                break;
            }  
            default:{
                cout << "Exit the program" <<endl;
            }
        }        
        //Output values        
    }while (Answer >= '1'&& Answer <= '10');

    //Exit stage right!
    return 0;
}