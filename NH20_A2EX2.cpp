/*  Grade book #20
    This program gets a dollar amount from the user and calculates
    and displays how to make the change using the smallest number of
    bills and coins possible
*/

#include <iostream>
using namespace std;

int main ()
{
    int Dollars, Change, Quarters, Dimes, Nickels, Pennies;
    float amount;

    cout <<"Enter the amount: ";
    cin >> amount;

    // User enters the amount

    Change = amount * 100;

    Dollars = Change / 100;
    Change = Change % 100;
    Quarters = Change / 25;
    Change = Change % 25;
    Dimes = Change / 10;
    Change = Change % 10;
    Nickels = Change / 5;
    Pennies = Change % 5;

    /* The use of the "modulo" operator calculates the remainders
       so the next calculation can be made
    */

    cout << endl;
    cout << "Change due:" << endl;
    cout << Dollars << " Dollars" << endl;
    cout << Quarters << " Quarters" << endl;
    cout << Dimes << " Dimes" << endl;
    cout << Nickels << " Nickels" << endl;
    cout << Pennies << " Pennies" << endl;

    // The program displays the change due in a list format

    return 0;
}


