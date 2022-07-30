#include "../std_lib_facilities.h"

int main()
{
    cout << "Enter two number"
         << "\nNumber 1: ";
    int val1;
    cin >> val1;
    cout << "Number 2: ";
    int val2;
    cin >> val2;
    if (val1 < val2)
        cout << "\nNumber 1 is smaller then Number 2"
             << "\nNumber 2 is larger then Number 1";
    if (val2 < val1)
        cout << "\nNumber 2 is smaller then Number 1"
             << "\nNumber 1 is larger then Number 2";

    cout << "\nThe sum of Number 1 and Number 2 is " << val1 + val2
         << "\nThe difference between Number 1 and Number 2 is " << val1 - val2
         << "\nThe difference between Number 2 and Number 1 is " << val2 - val1
         << "\nThe product of Number 1 and Number 2 is " << val1 * val2
         << "\nThe ratio between Number 1 and Number 2 is " << val1 / val2
         << "\nThe ratio between Number 2 and Number 1 is " << val2 / val1;
}