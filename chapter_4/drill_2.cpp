#include "../std_lib_facilities.h"

int main()
{
    vector<int> num(2);

    cout << "Enter two numbers or | to exit.\n";

    while (cin >> num[0] >> num[1])
    {
        sort(num);

        cout << "The smaller value is: " << num.begin()
             << "\nThe larger value is: " << num.end()
             << "\n\nEnter two numbers or | to exit.\n";
    }

    keep_window_open();

    return 0;
}