#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/**********************************************
Author: Shasha Wang
This program is the Homework 5 of CIS 22A-13Z.
This program plays a simple random number game.
**********************************************/


int main()
{
    char char1, char2, char3, char4, char5;

    cout << "This program plays a simple random number game." << endl;
    cout << "Enter 5 vowel characters (A,E,I,O,U) separated by spaces: ";
    cin  >> char1 >> char2 >> char3 >> char4 >> char5;


    srand(time(0));

    cout << "The random numbers are ";

    // handling first input.
    if ( char1 == 'A')
    {
        cout << rand() % 30 + 1 << " ";
    }
    else if ( char1 == 'E')
    {
        cout << rand() % 30 + 31 << " ";
    }
    else if ( char1 == 'I')
    {
        cout << rand() % 30 + 61 << " ";
    }
    else if ( char1 == 'O')
    {
        cout << rand() % 30 + 91 << " ";
    }
    else if ( char1 == 'U')
    {
        cout << rand() % 30 + 121 << " ";
    }
    else
    {
        cout << "X ";
    }

    // handling second input.
    if ( char2 == 'A')
    {
        cout << rand() % 30 + 1 << " ";
    }
    else if ( char2 == 'E')
    {
        cout << rand() % 30 + 31 << " ";
    }
    else if ( char2 == 'I')
    {
        cout << rand() % 30 + 61 << " ";
    }
    else if ( char2 == 'O')
    {
        cout << rand() % 30 + 91 << " ";
    }
    else if ( char2 == 'U')
    {
        cout << rand() % 30 + 121 << " ";
    }
    else
    {
        cout << "X ";
    }

    // handling third input.
    if ( char3 == 'A')
    {
        cout << rand() % 30 + 1 << " ";
    }
    else if ( char3 == 'E')
    {
        cout << rand() % 30 + 31 << " ";
    }
    else if ( char3 == 'I')
    {
        cout << rand() % 60 + 61 << " ";
    }
    else if ( char3 == 'O')
    {
        cout << rand() % 90 + 91 << " ";
    }
    else if ( char3 == 'U')
    {
        cout << rand() % 120 + 121 << " ";
    }
     else
    {
        cout << "X ";
    }

    // handling fourth input.
    if ( char4 == 'A')
    {
        cout << rand() % 30 + 1 << " ";
    }
    else if ( char4 == 'E')
    {
        cout << rand() % 30 + 31 << " ";
    }
    else if ( char4 == 'I')
    {
        cout << rand() % 30 + 61 << " ";
    }
    else if ( char4 == 'O')
    {
        cout << rand() % 30 + 91 << " ";
    }
    else if ( char4 == 'U')
    {
        cout << rand() % 30 + 121 << " ";
    }
    else
    {
        cout << "X ";
    }

    // handling fifth input.
    if ( char5 == 'A')
    {
        cout << rand() % 30 + 1 << " ";
    }
    else if ( char5 == 'E')
    {
        cout << rand() % 30 + 31 << " ";
    }
    else if ( char5 == 'I')
    {
        cout << rand() % 30 + 61 << " ";
    }
    else if ( char5 == 'O')
    {
        cout << rand() % 30 + 91 << " ";
    }
    else if ( char5 == 'U')
    {
        cout << rand() % 30 + 121 << " ";
    }
    else
    {
        cout << "X ";
    }

    cout << endl;

    return 0;
}
