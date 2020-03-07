/*Write a C++ program to print all the non-repeated numbers in an array in minimum time complexity. For example,
(user input) Array length: 10
Array input: 2 5 3 2 4 5 3 6 7 3
Output:
Non-repeated numbers are: 7, 6, 4*/


/*Pseudo code
Initilize an array and get elements from user input.
Traverse thru the array to check if the current element is already present in the array.
If it is, keep going to the next element in the array.
If not, print the non repeating element
*/

#include <iostream>
using namespace std;

void NonRepeat(){
    int i,j;
    int input[10] = {}; //initilize array with the size of 10
    int arraySize = sizeof(input)/sizeof(input[0]); //calculate the size of the array above

    cout << "Enter 10 random numbers: " << endl;
    for (int i = 0; i < arraySize; i++) //allows users to input 10 numbers only
    {
        cin >> input[i];
    }
    
    for (i= 0; i < arraySize; i++) //traverse the array to see if the element is there more than once
    {
        for (j = 0; j < arraySize; j++)
        {
            if (input[i] == input[j] && i != j) //if it is presented already, keep going, if not, break out of the second for loop to the next if statment 
            {
                break;
            }
        }
        if (j == arraySize) //after break, jump here, print the non-repeated number 
        {
            cout << "Non-repeating number is: " << input[i]<< endl;
        }

    }
}

//driver code
int main(){

    NonRepeat();
}