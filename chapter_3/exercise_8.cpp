#include "../std_lib_facilities.h"

int main()
{
    cout << "Enter an interger value to check if it's odd or even\n";
    int val;
    cin >> val;

    if (val % 2 == 0)
        cout << "The value of " << val
             << " is an even number";
    else
        cout << "The value of " << val
             << " is an odd number";
}