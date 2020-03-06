/*
(1) program which accepts days as integer and display total number of years, months and days in it. For example : If user input as 856 days the output should be 2 years 4 months 6 days. (1 year = 365 days, no leap year are assumed.)
*/

#include <iostream>
using namespace std;

//function definition to calculate and print the numbers of years, months and days in int
void count (){
    int daysEntered; //initialize variable to hold the user input of number of days
    cout << "enter days: " << endl; //ask user to enter the number of days
    cin >> daysEntered; //take in the user input
    int year = daysEntered / 365; //calculate the number of years by deviding the input with 365 days (assuming 1 year always have 365 days)
    int extra = daysEntered % 365; //if the input cant be devided completely to 365, the modulus is held in "extra" variable 
    int month = extra / 30; //number of months calculated by deviding the modulus from calculating number of years to 30 days (assuming one month alwyas have 30 days)
    int day = extra % 30; // the modulus from calculating number of months (modulous days from calculating year / 30 days) is counted as number of days. 


    cout << "year: " << year << " month: " << month << " days: " << day; //display number of years, months and days on screen
}

int main()
{
    count();

    return 0;
}