#include <iostream>
#include <iomanip>

using namespace std;

/**************************************************************
Author: Shasha Wang
This program is the Homework 7 of CIS 22A-13Z.
This program display all numbers divisible by a certain divisor.
**************************************************************/

int main()
{

    int divisor,
        highestNumber;

    cout << "This programs display all numbers divisible by a certain divisor starting from 10."
         << endl
         << endl;

    bool isValidDivisor = false;
    bool isValidHighestNumber = false;

    while(!isValidDivisor )
    {
        cout << "Enter a divisor from 2 to 10: ";
        cin >> divisor;

        if(divisor > 10 || divisor < 2 )
        {
            isValidDivisor  = false;
            cout << "input "
                 << divisor
                 << " is not in the range of 2 to 10."
                 << endl;
        }
        else
        {
            isValidDivisor = true;
        }

    }

    while(!isValidHighestNumber)
    {
        cout << "Enter the largest number to be generated. It must be in the range of 10-400: ";
        cin >> highestNumber;

        if(highestNumber > 400 || highestNumber<10)
        {
            isValidHighestNumber = false;
            cout << "Input "
                 << highestNumber
                 << " is not in the range of 10-400"
                 << endl;
        }
        else
        {
            isValidHighestNumber = true;
        }
    }
    int counter = 0;
    double totalSum = 0;
    double average = 0;
    bool changeLine = false;

    cout << "Generated numbers divisible by "
         << divisor
         << " from 10 to "
         << highestNumber
         << ":"
         << endl;

    for (int i = 10; i<= highestNumber; i++)
    {
        if (i % divisor == 0)
        {
            cout << right
                 << setw(6)
                 << i;

            counter++;
            totalSum += i;

            if(counter % 15 == 0 && counter != 0)
            {
                cout << endl;
            }
        }


    }
    cout << endl
         << endl;

    average = totalSum/counter;

    cout << setw(11)
         << left
         << "Total sum:";
    cout << totalSum
         << endl;
    cout << setw(11)
         <<"Count:";
    cout << counter
          << endl;
    cout  << setw(11)
          <<"Average:";
    cout  << average
          << endl;

    return 0;
}
