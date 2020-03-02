/*  program that check whether the year provided by a user is a leap year or not.

A Leap Year is the year can be completely divided by 4;
If the year can be evenly divided by 100, it is NOT a leap year, UNLESS the year is also evenly divisible by 400. Then it is a leap year.

Psuedo code
If year % 4 = 0 then consider: 
    if 
    year % 100 = 0 && year % 400 != 0: this is NOT a leap year;
    else if
    year % 100 = 0 && year % 400 = 0: this is a leap year;
    else, if 
    year % 0 != 0: this is a leap year.
else: this is NOT a leap year;
*/

#include <iostream>
using namespace std;

//define function to check if user input is a leap year or not
void LeapCheck(){
    int year;
    cout << "Enter year: " << endl;
    cin >> year;

    if (year % 4 == 0) //if the inputted year can be completely devided by 4, then get inside the if statemet and check the conditions under it.
    {
        if (year % 100 == 0 && year % 400 == 0) //while year can be completely devided by 4, if year can be completed devided by 100 and can also be completed devided by 400, then it is a leap year
        {
            cout << "This is a leap year" << endl;
        }
        else if (year % 100 == 0 && year % 400 != 0) //while year can be completely devided by 4, if year can be completely devided by 100 but cant be completely devided by 400, then it is not a leap year. 
        {
            cout << "This is NOT a leap year" << endl;
        }
        else cout << "This is a leap year" << endl; //while year can be completely devided by 4, if the year can't be completely devided by 100, then it is a leap year.

    }
    else //in contrast, if the year can't be devided by 4 completely then skip everything inside the first if statement, print it's not a leap year
    {
        cout << "This is NOT a leap year" << endl;
    }
    
}

int main() 
{
    LeapCheck();

    return 0;
}