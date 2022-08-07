#include "../std_lib_facilities.h"

int main()
{
    constexpr double yen_per_dollars = 0.0074;
    constexpr double euros_per_dollars = 1.02;
    constexpr double pounds_per_dollars = 1.21;
    constexpr double yuan_per_dollars = 0.15;
    constexpr double kroner_per_dollars = 0.1;

    char currency = ' ';

    double money = 0.0;

    cout << "Convert yen (y), euros (e), pounds (p), yuan (y) and kroner (k) into dollars:\n";
    cin >> money >> currency;

    switch (currency)
    {
    case 'y':
        cout << money << " yen are " << yen_per_dollars * money << " dollars\n";
        break;
    case 'e':
        cout << money << " euros are " << euros_per_dollars * money << " dollars\n";
        break;
    case 'p':
        cout << money << " pounds are " << pounds_per_dollars * money << " dollars\n";
        break;
    case 'f':
        cout << money << " yuan are " << yuan_per_dollars * money << " dollars\n";
        break;
    case 'k':
        cout << money << " kroner are " << kroner_per_dollars * money << " dollars\n";
        break;
    default:
    cout << "I don't know this currency\n";
        break;
    }
}
