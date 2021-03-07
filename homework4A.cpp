#include <iostream>

using namespace std;

/***************************************************
Author: Shasha Wang
This program is homework 4A of CIS 22A-13Z.
This project asks the user to enter a day, month and
year and displays the date in the format "yyyy-mm-dd".
***************************************************/

int main()
{
    cout << "My name is Shasha Wang" << endl<<endl;
    string day;
    string month;
    string year;
    string dateString;
    cout << "Enter a day number, month number, then year separated by space: ";
    cin >> day >> month >> year;
    dateString = "The formatted date is '" + year +"-" + month + "-" +day + " '.";  // formatting date using "+"
    cout << dateString;
    return 0;
}
