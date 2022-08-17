#include "../std_lib_facilities.h"

int main()
{
    vector<int> num(2);

    cout << "Enter two numbers or | to exit.\n";

    while (cin >> num[0] >> num[1])
    {
        cout << "Number 1: " << num[0]
             << "\nNumber 2: " << num[1]
             << "\n\nEnter two numbers or | to exit.\n";
    }
}