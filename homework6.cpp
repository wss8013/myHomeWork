#include <iostream>
#include <iomanip>     // Required for setw

using namespace std;

/*******************************************************
Author: Shasha Wang
This program is the Homework 6 of CIS 22A-13Z.
This program is designed to take orders for a restaurant.
********************************************************/

int main()
{
    char choiceLetter;
    int quantity, itemMaxQuantity;
    double itemPrice, totalPrice, tax, gratuity, totalBill;
    string itemName;
    bool isValidChar;

    cout << "Welcome to the CIS22A restaurant. You can choose of the following items :" <<"\n" << "\n"
         << "a- Grilled Salmon, price  $28.99" << "\n"
         << "b- Sirloin Steak, price   $22.99" << "\n"
         << "c- Roast Pork, price      $14.99" << "\n"
         << "d- Barbecue Chicken, price $9.99" << "\n"
         << "e- Soup, price             $7.99" << "\n"
         << "f- Hamburger, price        $4.99" << "\n"
         << "g- Soft Drink, price       $1.29" << "\n"
         << "h- Tea, price              $1.50" << "\n"
         << "i- Apple Juice, price      $2.50" << endl << endl;

    cout << "Select a letter from the menu: ";
    cin >> choiceLetter;

    // Handing different menu items
    switch(choiceLetter)
    {
    case 'a' :
        itemPrice = 28.99;
        itemName = "Grilled Salmon";
        itemMaxQuantity = 20;
        isValidChar = true;
        break;

    case 'b' :
        itemPrice = 22.99;
        itemName = "Sirloin Steak";
        itemMaxQuantity = 30;
        isValidChar = true;
        break;

    case 'c' :
        itemPrice = 14.99;
        itemName = "Roast Pork";
        itemMaxQuantity = 40;
        isValidChar = true;
        break;

    case 'd' :
        itemPrice = 9.99;
        itemName = "Barbecue Chicken";
        itemMaxQuantity = 50;
        isValidChar = true;
        break;

    case 'e' :
        itemPrice = 7.99;
        itemName = "Soup";
        itemMaxQuantity = 80;
        isValidChar = true;
        break;

    case 'f' :
        itemPrice = 4.99;
        itemName = "Hamburger";
        itemMaxQuantity = 80;
        isValidChar = true;
        break;

    case 'g' :
        itemPrice = 1.29;
        itemName = "Soft Drink";
        itemMaxQuantity = 80;
        isValidChar = true;
        break;

    case 'h' :
        itemPrice = 1.50;
        itemName = "Tea";
        itemMaxQuantity = 80;
        isValidChar = true;
        break;

    case 'i' :
        itemPrice = 2.50;
        itemName = "Apple Juice";
        itemMaxQuantity = 80;
        isValidChar = true;
        break;

    default:
        // If no case match the choiceLetter
        isValidChar = false;
    }
   if  ( isValidChar == false )
   {
       cout << "Invalid item"
            << endl;
   }
   else
   {
       // Proceed only when it is a valid choice
       cout << "Enter the quantity: ";
       cin >> quantity;

       if ( quantity < 0  )
        {
            // If the quantity is negative, print out the error message
            cout << "Invalid item quantity. It cannot be negative."
                 << endl;
        }
        else if ( quantity > itemMaxQuantity )
        {
            // If the quantity exceeds the limits, print out the error message
            cout << "Invalid item quantity. It must not exceed "
                 << itemMaxQuantity
                 << "."
                 << endl;
        }
        else
        {
            // Proceed only when the quantity is valid
            totalPrice = itemPrice * quantity;
            tax = totalPrice * 0.0975;
            cout << setprecision(2)
                 << fixed
                 << "The total price for ("
                 << quantity
                 << " x "
                 << itemName
                 << ") is: $"
                 << totalPrice
                 << endl;

            cout << "The sale tax is $"
                 << tax
                 << endl
                 << endl;

            cout << "Enter the gratuity amount: $";
            cin >> gratuity;


           if ( gratuity < 0 )
           {
               // If the gratuity is negative, print out the error message
                cout << "Invalid gratuity amount."
                     << endl;
           }
           else
           {
               // Proceed only when the gratuity is valid
             totalBill = totalPrice + tax + gratuity;
             cout << "Your total bill is $"
                  << totalBill
                  << endl
                  << endl;
             cout << "Thank you for your order"
                   << endl;
           }
        }
     }
    return 0;
}
