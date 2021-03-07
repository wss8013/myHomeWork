#include <iostream>
#include <string>

using namespace std;

/*************************************************************
Author: Shasha Wang
This program is the second week's homework of CIS 22A-13Z.
This project calculates the area and circumference of a
specific circle with a given radius and prints the results.
**************************************************************/

int main()
{
    double radius;
    double area;
    double circumference;
    radius = 3;
    const double PI = 3.14159;
    const string AREA_STR = "Area of the circle with radius";
    const string CIRCUM_STR = "Circumference of the circle with radius";
    cout << "My name is Shasha Wang." << endl;
    // Calculate the circle area
    area = PI * radius * radius;
    // Calculate the circumference
    circumference = 2 * PI * radius;
    cout << AREA_STR << " " << radius << " is " << area << "." << endl;
    cout << CIRCUM_STR << " " << radius << " is " << circumference << "." << endl;



    return 0;
}
