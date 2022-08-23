#include "../std_lib_facilities.h"

int main()
{
    constexpr double yen_per_dollars = 0.0074;
    constexpr double euros_per_dollars = 1.02;
    constexpr double pounds_per_dollars = 1.21;

    char currency = ' ';
    double money = 0.0;

    cout << "Convert yen (y), euros (e) and pounds (p) into dollars:\n";
    cin >> money >> currency;

    if (currency == 'y')
        cout << money << " yen are " << yen_per_dollars * money << " dollars\n";
    else if (currency == 'e')
        cout << money << " yen are " << euros_per_dollars * money << " dollars\n";
    else if (currency == 'p')
        cout << money << " yen are " << pounds_per_dollars * money << " dollars\n";
    else
        cout << "I don't know this currency\n";
}
