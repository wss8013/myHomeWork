#include <iostream>
#include <iomanip>  // Required for setw

using namespace std;

int main()
{
    char computerChoice,
         shippingChoice;

    int quantity,
        memorySize;

    double itemPrice,
           saleTax,
           shippingCost,
           PCsubtotal,
           totalBill;

    string itemName;

    cout << "Welcome to the PC store."
         << endl
         << endl;

    cout << "Enter the brand name of the PC (D for Dell, H for HP, L for Lenovo): ";
    cin >> computerChoice;

    //Handing different computer choice
    switch(computerChoice)
    {
    case 'H':
        itemPrice = 899.99;
        itemName = "HP";
        break;


    case 'D':

        itemPrice = 869.99;
        itemName = "Dell";
        break;


    case 'L':

        itemPrice = 809.99;
        itemName = "Lenovo";
        break;

    // If the choice is not on the list, display the error message
    default:
        cout << endl
             <<"Invalid brand code. Choose D, H,or L."
             << endl;
        return 0;
    }
    cout << "Enter the memory size of the PC (8 or 16 gigabytes): ";
    cin >> memorySize;

    // If the memory size is not on the list, display the error message
    if (memorySize != 8 && memorySize != 16)
    {
        cout << endl
             <<"Invalid memory size. Choose 8 or 16. "
             << endl;
        return 0;
    }

    cout << "Enter PC quantity to buy: ";
    cin >> quantity;

    // Negative quantity, display the error message
    if (quantity<0 )
    {
        cout << endl
             << "Invalid quantity."
             << endl;
        return 0;
    }

    // Exceed quantity limits, display error message
    if (quantity > 10)
    {
        cout << endl
             << "Invalid quantity. It cannot exceed 10. "
             << endl;
    }

    PCsubtotal = itemPrice * quantity;
    saleTax = PCsubtotal * 0.0975;

    cout << endl
         << "The item price for ("
         << quantity
         << " x "
         << itemName
         << ") is "
         << setprecision(2)
         << fixed
         << right
         << setw(5)
         << "$"
         << PCsubtotal
         << endl;
    cout << "The sale tax is "
         << right
         << setw(23)
         <<  "$"
         << saleTax
         << endl;

    cout <<"Enter shipping method (S for Standard, E for Express): ";
    cin >> shippingChoice;

    //Display invalid shipping choice
    if (shippingChoice != 'S' && shippingChoice != 'E')
    {
        cout << endl
             <<"Invalid shipping method. Select S or E. "
             << endl;
        return 0;
    }

    if (shippingChoice == 'S')
    {
        shippingCost = 10;
    }
    if (shippingChoice == 'E')
    {
        shippingCost = 20;
    }

    cout << "shipping cost is $"
         << shippingCost
         << endl
         << endl;

    totalBill = PCsubtotal + saleTax + shippingCost;

    cout << "The total bill is $"
         << totalBill
         << endl;

    return 0;
}
