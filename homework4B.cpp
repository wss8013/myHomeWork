#include <iostream>
#include <string>
#include <iomanip>     // Required for setw

using namespace std;

/*******************************************************
Author: Shasha Wang
This program is the Homework 4 B of CIS 22A-13Z.
This program displays three rows of numbers.
*******************************************************/
int main()
{

   string col1 = "Column 1",
           col2 = "Column 2",
           col3 = "Column 3";
   double d1 =  1.2,
           d2 = 3454.456,
           d3 = 456.6,
           d4 = 23,
           d5 = 89569.84,
           d6 = 4.454,
           d7 = 676.5,
           d8 = 334.1,
           d9 = 34.4544;
   cout <<right<<setw(15)<<col1<<setw(15)<<col2<<setw(15)<<col3<< endl;
   cout <<right<<setprecision(3) << fixed << setw(15)<<d1<< setw(15)<<d2<< setw(15)<<d3<<endl;   //  Display the first row of numbers
   cout <<right<<setprecision(3) << fixed << setw(15)<<d4<< setw(15)<<d5<< setw(15)<<d6<<endl;   //  Display the second row of numbers
   cout <<right<<setprecision(3) << fixed << setw(15)<<d7<< setw(15)<<d8<< setw(15)<<d9<<endl;   //  Display the third row of numbers

    return 0;
}
