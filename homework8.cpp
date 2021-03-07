#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

/************************************************
Author: Shasha Wang
This program is the Homework 8 of CIS 22A-13Z.
This program implements a simple number guessing
game with multiple questions/answers.
************************************************/

int main()
{
    int totalGame = 0;
    int totalWin = 0;
    int totalLost = 0;
    int guess = -1;

    cout << "Welcome to the number guessing game!"
         << endl
         << "For each game,you have at most 3 chances to guess a secret number from 1 to 10."
         << endl
         << endl;

    srand (time(0));

    while(guess != 0)
    {
        int answer = rand() % 10 + 1;    // Generate random number
        int i = 0;

        //cout << "(Secret " << answer << ")" << endl << endl;

        while (i < 3 )
        {
            if(i == 0)
            {
                cout << "Enter a number from 1 to 10. Enter 0 to exit: ";
                cin >> guess;
            }
            else
            {
                cout << "Not correct, try again: ";
                cin >> guess;
            }
            i++;

            if(guess == 0)
            {
                i = 3;    // If user input 0, modify i value to jump out of the loop
            }
            else
            {
                if(guess == answer)
                {
                    cout << "Congratulation, correct! Let's start a new game."<< endl << endl;  // If user has the correct guess, print out the message
                    totalGame++;   // Increment the total game count by 1
                    totalWin++;    // Increment the total win count by 1
                    i = 3;
                }
                else if(i == 3 )
                {
                    // User has guessed 3 times and didn't get the correct answer, print out the message
                    cout << endl << "Not correct. You have reached your 3 trials. The correct number is  "<< answer << "." << endl;
                    cout << "Let's start a new game."<< endl << endl;
                    totalGame++;   // Increment the total game count by 1
                    totalLost++;   // Increment the total lost count by 1
                }
            }


        }
    }

    cout << endl << "Exiting game. Here is your game summary:"<< endl << endl;
    cout << setw(16) << left << "Total games: " << totalGame << endl;
    cout << setw(16) << left << "Total wins: " << totalWin << endl;
    cout << setw(16) << left << "Total losses: " << totalLost << endl;

    return 0;
}
