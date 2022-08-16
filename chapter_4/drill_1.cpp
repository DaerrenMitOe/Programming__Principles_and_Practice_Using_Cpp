#include "../std_lib_facilities.h"

int main()
{
    int num1, num2;

    cout << "Enter two numbers or | to exit.\n";

    while (cin >> num1 >> num2)
    {
        cout << num1 << " " << num2
             << "\nEnter two numbers or | to exit.\n\n";
    }
}