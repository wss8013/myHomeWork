#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>
using namespace std;

/*******************************************************
Author: Shasha Wang
This program is the final exam part B of CIS 22A-13Z.
This program takes 9-digits isbn from user input and
calculates the checksum of the isbn.
*******************************************************/


// validate if an input isbn is valid.
bool validateInput(char isbn[]);
// calculate checksum for given isbn
char getCheckSum(char isbn[]);
// format input isbn and checksum with '-'.
string formatWithHyphen(string isbnStr, char checkSum);

int main()
{
    const int SIZE = 30;
    char isbn[SIZE];
    vector<string> validIsbn;
    vector<char> checkSums;
    cout <<
         "This program calculates the checksum of a 9-digit ISBN code and displays the 10-digit ISBN." << endl;
    cout << "Enter the 9 digits for the ISBN code: ";
    cin.getline(isbn, SIZE);
    while(isbn[0] != '\0')
    {
        bool isValid = validateInput(isbn);
        if (!isValid)
        {
            cout << "\nThe input ISBN code is not valid.\n"<<endl;
        }
        else
        {
            char checksum = getCheckSum(isbn);
            string isbn9Str(isbn); // convert char array to string
            validIsbn.push_back(isbn9Str);
            checkSums.push_back(checksum);
            cout << "\nThe 10-digit ISBN code is " << isbn9Str << checksum << endl;
            cout << "The hyphenated ISBN code is " << formatWithHyphen(isbn9Str, checksum) << endl<<endl;;
        }
        cout << "Enter the 9 digits for the ISBN code: ";
        cin.getline(isbn, SIZE);

    }

    cout << "\n\nSummary Report" << endl;
    cout << setw(16) << left << "ISBN";
    cout << setw(8) << left << "Checksum" << endl << endl;
    for(int i =0; i<validIsbn.size(); i++)
    {
        cout << setw(16) << left << validIsbn[i];
        cout << setw(8) << left << checkSums[i] << endl;

    }


    return 0;
}

bool validateInput(char isbn[])
{
    if(strlen(isbn) != 9)
    {
        return false;
    }
    for(int i = 0; i < strlen(isbn); i++)
    {
        if(isbn[i] < '0' || isbn[i] > '9')
        {
            return false;
        }
    }
    return true;
}

char getCheckSum(char isbn[])
{
    int checkSumNum = 0;
    for(int i = 0; i < 9; i++)
    {
        checkSumNum += ((i+1)*(isbn[i] - '0'));

    }
    cout<< checkSumNum << endl;
    checkSumNum = checkSumNum % 11;
    return checkSumNum == 10 ? 'x' : '0'+ checkSumNum;
}

string formatWithHyphen(string isbnStr, char checkSum)
{
    isbnStr.insert(9,"-");
    isbnStr.insert(4,"-");
    isbnStr.insert(1,"-");
    return isbnStr+checkSum;
}

