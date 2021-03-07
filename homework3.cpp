#include <iostream>
#include <cmath>
using namespace std;

/**********************************************************************
Author: Shasha Wang
This program is the third week's homework of CIS 22A-13Z.
This program calculates the focus,area and circumferences of an ellipse.
**********************************************************************/


int main()
{
    double majorRadius;     // holds major radius of an ellipse
    double minorRadius;     // holds minor radius of an ellipse
    double focus;           // holds focus of an ellipse
    double area;            // holds area of an ellipse
    double circumference;   // holds circumference of an ellipse


    cout << "This program calculates the focus, area, and circumferences of an ellipse." << endl << endl;
    cout << "Enter the semi-major axis value: ";
    cin  >>  majorRadius;
    cout << "Enter the semi-minor axis value: ";
    cin  >>  minorRadius;
    focus = sqrt((pow(majorRadius,2)) - pow(minorRadius,2));    //calculates the focus of an ellipse
    cout <<endl << "The ellipse focus is: " << focus << endl;
    area = M_PI * majorRadius * minorRadius;                    //calculates the area of an ellipse
    cout << "The ellipse area is: " << area << endl;
    circumference = M_PI * ( 3 *(majorRadius + minorRadius ) - sqrt( 10 * majorRadius *minorRadius + 3 * (pow(majorRadius,2) +pow(minorRadius,2) )));  //calculates the circumference of an ellipse
    cout <<"The ellipse circumference is: " << circumference << endl;


    return 0;
}
