/*Write a C++ program to implement the Number Guessing Game. In this game the computer chooses a random number between 1 and 100, and the player tries to guess the number in as few attempts as possible. Each time the player enters a guess, the computer tells him whether the guess is too high, too low, or right. Once the player guesses the number, the game is over.*/

#include <iostream>
using namespace std;

int main(){
    int guess;
    int attempt = 3; //allows users to guess 3 times
    string answer;

    //generate a random number between 1 and 100
    int result = rand()%100 + 1;

    while (true){
        //ask for and take in user input to guess the number, allow 3 attempts each game
        cout << "Guess a number between 1 and 100, you have 3 attempts. Enter your guess: " << endl;
        for (int i = 0; i < attempt; i++){
            cin >> guess;
            //if input is less than 20 -> inform player: guess is too low
            if (guess <= result - 20){ 
                cout << "Guess is too low, guess again: " << endl;
            }
            //if input is greater than 20 -> inform player: guess is too highe
            else if (guess >= result + 20){
                cout << "Guess is too high, guess again: " << endl;
            }
            //if input is correct -> inform player: guess is correct, game over
            else if (guess = result){
                cout << "You got it!" << endl;
                break;
            }
        }

        //after 3 attempts -> if user still cant guess the number, prompt to ask if user want to play again, otherwise game is over.
        if (guess != result){
            cout << "Game over! Do you want to try again? [yes/no]: " << endl;
            cin >> answer;
            if (answer == "yes"){
                continue;
            }
            else if (answer == "no"){
                break;
            }   
        }
        else break;

    }

    
    return 0;
}