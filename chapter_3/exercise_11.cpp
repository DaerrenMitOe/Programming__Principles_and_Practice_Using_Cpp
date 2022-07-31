#include "../std_lib_facilities.h"

int main()
{
    cout << "How many pennies do you have? ";
    int penny;
    cin >> penny;

    cout << "How many nickels do you have? ";
    int nickel;
    cin >> nickel;

    cout << "How many dimes do you have? ";
    int dime;
    cin >> dime;

    cout << "How many quarters do you have? ";
    int quarter;
    cin >> quarter;

    cout << "How many half dollars do you have? ";
    int half_dollar;
    cin >> half_dollar;

    cout << "How many dollars do you have? ";
    int dollar;
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


    double money = dollar + half_dollar * 0.5 + quarter * 0.25 + dime * 0.1 + nickel * 0.05 + penny * 0.01;
    cout << "\nThe value of all your coins is $" << money << ".\n";
}