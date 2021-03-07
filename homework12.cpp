#include <iostream>
#include <iomanip>

using namespace std;

/****************************************************
Author: Shasha Wang
This program is the Homework 12 of CIS 22A-13Z.
This program determines the number of vowels in a
phrase that user inputs. The program quite up on user
inputs an empty string
*****************************************************/


const char  VOEWLS[] = "AEIOUaeiou"; // constant that contains all vowels upper case and lower case.
// function determines if a input char c is a vowel, returns 0 - 4 represents a e i o u or A E I O U respectively.
// return  -1 if char c is not a vowel.
int isVowel(char c);
int main()
{
    cout << "This program counts the vowel occurrences in input phrase" << endl;
    cout << "Enter a phrase and hit Enter (maximum length 299): ";
    char phrase[300];
    cin.getline(phrase, 300);
    while (phrase[0] != '\0' )
    {
        int vowelCount[] = {0,0,0,0,0};
        int i = 0;
        int maxIndex = -1;
        int total = 0;
        while (phrase[i] != '\0')
        {
            int valIndex = isVowel(phrase[i]);
            if(valIndex != -1)
            {
                vowelCount[valIndex]++;
                if(maxIndex == -1 ||vowelCount[maxIndex] < vowelCount[valIndex] )
                {
                    maxIndex = valIndex;
                }
                total++;
            }
            i++;

        }
        cout << endl;
        cout << setw(10) << left <<"Vowel";
        cout << setw(5) << left <<"Count" << endl << endl;
        cout << setw(10) << left <<"a - A";
        cout << setw(4) << right << vowelCount[0] << endl;
        cout << setw(10) << left <<"e - E";
        cout << setw(4) << right << vowelCount[1] << endl;
        cout << setw(10) << left <<"i - I";
        cout << setw(4) << right << vowelCount[2] << endl;
        cout << setw(10) << left <<"o - O";
        cout << setw(4) << right << vowelCount[3] << endl;
        cout << setw(10) << left <<"u - U";
        cout << setw(4) << right << vowelCount[4] << endl << endl;
        cout << "Total of vowels is " << total << endl;
        if (maxIndex >= 0 )
        {
            cout << "Vowel with highest occurrences is " << VOEWLS[maxIndex] << endl << endl;

        }
        cout << "Enter a phrase and hit Enter (maximum length 299): ";
        cin.getline(phrase, 300);

    }
    return 0;
}

int isVowel(char c)
{
    for(int i = 0; i < 10 ; i++)
    {
        if(c == VOEWLS[i])
        {
            return i%5;
        }
    }
    return -1;
}
