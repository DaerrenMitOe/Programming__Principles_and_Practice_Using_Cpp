#include "../std_lib_facilities.h"

int main()
{
    vector<double> num;
    double val;

    cout << "Enter two numbers or | to exit.\n";

    while (cin >> val)
    {
        num.push_back(val);
        sort(num);
        cout << "The smallest so far " << num[0]
             << "\nThe largest so far " << num[num.size() - 1]
             << "\n\nEnter two numbers or | to exit.\n";
    }

    keep_window_open();

    return 0;
}