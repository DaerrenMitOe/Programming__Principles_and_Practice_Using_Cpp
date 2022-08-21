#include "../std_lib_facilities.h"

int main()
{
    vector<double> num(2);

    cout << "Enter two numbers or | to exit.\n";

    while (cin >> num[0] >> num[1])
    {
        if (num[0] == num[1])
        {
            cout << "the numbers are are equal"
                 << "\n\nEnter two numbers or | to exit.\n";
        }
        else
        {
            sort(num);

            if (num[1] - num[0] < 1.0 / 100.0)
                cout << "the numbers are almost equal"
                     << "\n\nEnter two numbers or | to exit.\n";
            else
                cout << "the smaller value is: " << num[0]
                     << "\nthe larger value is: " << num[1]
                     << "\n\nEnter two numbers or | to exit.\n";
        }
    }

    keep_window_open();

    return 0;
}