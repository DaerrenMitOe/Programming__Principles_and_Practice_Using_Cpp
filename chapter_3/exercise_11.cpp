#include "../std_lib_facilities.h"

int main()
{
    int penny, nickel, dime, quarter, half_dollar, dollar;
    double sum;

    cout << "How many pennies do you have? ";
    cin >> penny;
    cout << "How many nickels do you have? ";
    cin >> nickel;
    cout << "How many dimes do you have? ";
    cin >> dime;
    cout << "How many quarters do you have? ";
    cin >> quarter;
    cout << "How many half dollars do you have? ";
    cin >> half_dollar;
    cout << "How many dollars do you have? ";
    cin >> dollar;

    if (penny == 1)
        cout << "\nYou have " << penny << " penny";
    else
        cout << "\nYou have " << penny << " pennies";

    if (nickel == 1)
        cout << "\nYou have " << nickel << " nickel";
    else
        cout << "\nYou have " << nickel << " nickels";

    if (dime == 1)
        cout << "\nYou have " << dime << " dime";
    else
        cout << "\nYou have " << dime << " dimes";

    if (quarter == 1)
        cout << "\nYou have " << quarter << " quarter";
    else
        cout << "\nYou have " << quarter << " quarter";

    if (half_dollar == 1)
        cout << "\nYou have " << half_dollar << " half dollar";
    else
        cout << "\nYou have " << half_dollar << " half dollars";

    if (dollar == 1)
        cout << "\nYou have " << dollar << " dollar";
    else
        cout << "\nYou have " << dollar << " dollars";

    sum = dollar + half_dollar * 0.5 + quarter * 0.25 + dime * 0.1 + nickel * 0.05 + penny * 0.01;

    cout << "\nThe value of all your coins is $" << sum << ".\n";

    keep_window_open();

    return 0;
}