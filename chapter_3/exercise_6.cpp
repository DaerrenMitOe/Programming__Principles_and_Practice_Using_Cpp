#include "../std_lib_facilities.h"

int main()
{
    int val1, val2;
    int num1, num2, num3;

    cout << "Please enter three integer values to sort"
         << "\nValue 1: ";
    cin >> val1;
    cout << "Value 2: ";
    cin >> val2;
    cout << "Value 3: ";
    cin >> num3;

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

    if (num3 < num1)
        cout << num3 << " " << num1 << " " << num2 << '\n';

    else if (num3 < num2)
        cout << num1 << " " << num3 << " " << num2 << '\n';

    else
        cout << num1 << " " << num2 << " " << num3 << '\n';

    keep_window_open();

    return 0;
}