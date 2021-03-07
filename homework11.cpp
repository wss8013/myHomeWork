#include <iostream>
#include<cmath>

using namespace std;

/****************************************************
Author: Shasha Wang
This program is the Homework 11A of CIS 22A-13Z.
This program implements two functions:power(x,y) and
print(text,number).
*****************************************************/

int power(int x, int y = 1); // The function named power takes two integers x and y and returns an integer which is calculated by raising x to power y.
void print(string text, int x); //The function named print takes string text and integer x and returns an string which is print out text and x.

int main()
{
   // Variable declaration
    int x = 3;

    // Driver statements
    x = power(x, 3);
    print("Value of x after step 1 is ", x);
    x = power(x, 2);
    print("Value of x after step 2 is ", x);
    x = power(x);
    print("Value of x after step 3 is ", x);
    x = power(x, 101);
    print("Value of x after step 4 is ", x);
    x = power(3, -5);
    print("Value of x after step 5 is ", x);
    x = 10;
    x = power(x);
    print("Value of x after step 6 is ", x);

    return 0;

}

int power(int x, int y)
{
    if ( y > 100)
    {
        //If the power exceeds 100, the function return -1.
        return -1;
    }
    return pow(x,y);
}
void print(string text, int x)
{
    cout << text
         << x
         << endl;
}
