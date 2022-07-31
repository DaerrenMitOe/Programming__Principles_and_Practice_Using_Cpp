#include "../std_lib_facilities.h"

int main()
{
    cout << "Enter three string values to sort"
         << "\nValue 1: ";
    string val1;
    cin >> val1;
    cout << "Value 2: ";
    string val2;
    cin >> val2;
    cout << "Value 3: ";
    string num3;
    cin >> num3;

    string num1;
    string num2;

    if (val1 <= val2)
    {
        num1 = val1;
        num2 = val2;
    }

    else
    {
        num1 = val2;
        num2 = val1;
    }

    // cout << val1 << " " << val2 << " " << num3 << '\n';

    if (num3 < num1)
        cout << num3 << " " << num1 << " " << num2;

    else if (num3 < num2)
        cout << num1 << " " << num3 << " " << num2;

    else
        cout << num1 << " " << num2 << " " << num3;
}