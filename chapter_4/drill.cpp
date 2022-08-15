#include "../std_lib_facilities.h"

int main()
{
    int num1, num2;

    cout << "Enter two numbers and enter | to exit.\n";

    while (cin >> num1 >> num2)
    {
        cout << num1 << " " << num2 << '\n';
        cout << "Enter two numbers and enter | to exit.\n";
    }
}