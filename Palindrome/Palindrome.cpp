/*program to check an input string by user is palindrome or not (both odd and even).

*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Palindrome (){
    string inputString; // variable to hold the input string from user

    cout << "Enter a string: " << endl;
    cin >> inputString; //store user input

    //reverse the inputted string and then compare the original one with the reversed one: using built-in rbegin() and rend(): display the elements from end to beginning. "string" to convert the reversing to a string type.
    if (inputString == string(inputString.rbegin(), inputString.rend())){ //if the original and reversed strings are the same -> its a palindrome
        cout << "This string is a Palindrome" << endl; 
    }
    else cout << "This string is NOT a Palindrome" << endl; //if the original and reversed strings are not the same, then -> not a palinedrome    
};

int main(){
    Palindrome();

    return 0;
}

