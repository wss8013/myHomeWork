#include <iostream>
#include <fstream>
#include <climits>
#include <iomanip>
using namespace std;

/****************************************************
Author: Shasha Wang
This program is the Homework 9 of CIS 22A-13Z.
This program implements a method that reads numbers
from a file named numbers.txt. The output of the
program are the following: smallest, largest,average,
numbers below and above the average.
*****************************************************/

int main()
{
    ifstream inFile;
    inFile.open("numbers.txt");
    if(!inFile)
    {
        cout << "File open failed" << endl;
        return 0;
    }

    int min = INT_MAX;
    int max = INT_MIN;
    int counter  = 0;
    double avg = 0;
    int lessThanAvg = 0;
    int greaterThanAvg = 0;
    double sum = 0; // in case integer overflow
    int num;
    string str;

    inFile >> str;  // Assumption: the first line of the file is always going to be a string. reading the string to a string variable
    while(inFile >> num)
    {

        sum+=num;  // calculate the sum after reading a new number from the file.
        counter++;
        if(min > num)
        {
            min = num; // if the current number is less than min, update min to the current number
        }
        if(max < num)
        {
            max = num;  // if the current number is greater than max, update max to the current number
        }
    }
    avg = sum/counter;  // calculate average
    cout << endl << setw(25) << right << "Smallest";
    cout << setw(23) << right << min << endl;
    cout << setw(25) << right << "Largest";
    cout << setw(23) << right << max << endl;
    cout << setw(25) << right << "Average";
    cout << setw(23) << right << avg << endl << endl;
    inFile.close();
    inFile.open("numbers.txt"); // opening the file again to get numbers below and above average.

    inFile >> str; // reading the first line to a string.
    while(inFile >> num)
    {

        if(static_cast<double>(num) < avg)
        {
            lessThanAvg++; // update number of numbers below average
        }
        else if (static_cast<double>(num) > avg)
        {
            greaterThanAvg++;  // update number of numbers update average
        }


    }
    inFile.close();

    cout << setw(25) << right << "Numbers below the average";
    cout << setw(23) << right << lessThanAvg << endl;
    cout << setw(25) << right << "Numbers above the average";
    cout << setw(23) << right << greaterThanAvg << endl;


    return 0;
}
