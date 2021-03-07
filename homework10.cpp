#include <iostream>

/****************************************************
Author: Shasha Wang
This program is the Homework 10 of CIS 22A-13Z.
This program determines if a year is a leap year.
*****************************************************/

using namespace std;
bool isLeap(int year); //Define a function named isLeap that takes an integer year as input and outputs a boolean indicates if the year is leap year

int main()
{
    cout << "This program determines leap year."
         << endl;

    int year = 0;
    while(year != -1 )
    {
        cout << "Enter a year after 1582 or enter -1 to exit:   ";
        cin >> year;
        if(year != -1)
        {
            if(year < 1582)
            {
                cout << "The year "
                     << year
                     << " is not a valid year"
                     << endl
                     << endl;
            }
            else
            {
                string leapYear  = isLeap(year) ? " " : " not ";

                cout << "The year "
                     << year
                     << " is"
                     << leapYear
                     <<"a leap year"
                     << endl
                     << endl
                     << endl;


            }
        }

    }

    return 0;
}

bool isLeap(int year)
{
    //If the year is divisible by 4 but not by 100 or the year is divisible by 4 and 400
    return (year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 == 0 );
}
