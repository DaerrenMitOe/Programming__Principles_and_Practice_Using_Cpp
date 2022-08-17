#include "../std_lib_facilities.h"

int main()
{
    int val;

    cout << "Please enter an interger value to check if it's odd or even:\n";
    cin >> val;

    if (val % 2)
        cout << "The value of " << val
             << " is an odd number\n";
    else
        cout << "The value of " << val
             << " is an even number\n";

    keep_window_open();

    return 0;
}