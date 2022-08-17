#include "../std_lib_facilities.h"

int main()
{
    string num;

    cout << "Please enter a spelled-out number to convert to digits:\n";
    cin >> num;

    if (num == "zero")
        cout << "0";
    else if (num == "one")
        cout << "1";
    else if (num == "two")
        cout << "2";
    else if (num == "three")
        cout << "3";
    else if (num == "four")
        cout << "4";
    else
        cout << "Not a number I know...stupid computer!\n";

    keep_window_open();

    return 0;
}